-- (1)
-- 创建T**表，只包含前5个属性
CREATE TABLE TPB20051061(
  书名 VARCHAR,
  作者 VARCHAR,
  书号 VARCHAR,
  价格 FLOAT,
  出版社 VARCHAR,
  PRIMARY KEY (书号)
);

-- 为T**表添加出版时间属性
ALTER TABLE tpb20051061 ADD 出版时间 INTEGER;

-- 删除T**表
DROP TABLE TPB20051061;

-- 查找T**表全部信息
SELECT * FROM tpb20051061;

-- 为T**表插入内容
INSERT INTO tpb20051061 VALUES
('计算机原理','张一平','S3092',20.80,'中国科技大学',1986),
('C语言程序设计','李华','H1298',15.30,'电子工业',1993),
('数据库原理','王家树','D1007',22.70,'高等教育',1987),
('计算机网络','高明','S5690',18.90,'高等教育',1993),
('Artificial intelligence','P.Winston','D2008',20.50,'电子工业',1989),
('Expert systems','R.Ullman','H3067',17.00,'清华大学',1994),
('软件工程','鲁廷璋','S2005',35.00,'中国科技大学',1995),
('Fortran 程序设计','顾学峰','S5006',18.00,'高等教育',1995);

-- 创建S**表
CREATE TABLE SPB20051061(
  书号 VARCHAR,
  页数 INTEGER,
  库存量 INTEGER,
  仓库号 INTEGER,
  PRIMARY KEY (书号)
);

-- 查找S**表全部信息
SELECT * FROM spb20051061;

-- 删除S**表
DROP TABLE SPB20051061;

-- 为S**表插入内容
INSERT INTO spb20051061 VALUES('S3092',304,300,1),
                              ('D1007',280,200,3),
                              ('S5006',315,240,2),
                              ('S5690',300,300,2),
                              ('H1298',210,470,5),
                              ('D2008',358,342,2),
                              ('S2005',298,200,2),
                              ('H3067',307,510,1);
-- (2)用子查询方式建新表
-- 使用子查询方式建立ST**表
CREATE TABLE STPB20051061 AS SELECT 书名,价格 FROM SPB20051061;

SELECT * FROM STPB20051061; 

-- (3)按“书号”建索引，索引名为 IT** (**表示建表人的学号，下同)

CREATE UNIQUE INDEX ITPB20051061 ON SPB20051061(书号);
 
-- (4)用子查询方式建视图，视图名为 VT** , 并在视图上查找所需信息
-- 建立各个出版社书籍库存量的视图
CREATE VIEW VTPB20051061 AS SELECT 出版社, SUM(库存量) 总库存量 FROM tpb20051061 NATURAL JOIN spb20051061 GROUP BY 出版社;
-- 查询中国科技大学出版社出版书籍的库存量
SELECT 总库存量 FROM VTPB20051061 WHERE 出版社 = '中国科技大学';

-- (5)删除以 ST** 命名的表
DROP TABLE STPB20051061;

-- (6)删除以 VT** 命名的视图
DROP VIEW VTPB20051061;

-- (7)删除以 IT** 命名的索引
DROP INDEX ITPB20051061;

-- (8)对表 T** 和 S** 进行其他操作
-- 检索高等教育出版社出版的书籍中的库存量比中国科技大学出版社出版的书籍的库存量都小的书籍
SELECT 书名 FROM tpb20051061 NATURAL JOIN spb20051061 WHERE 库存量 < ANY(
  SELECT 库存量 FROM tpb20051061 NATURAL JOIN spb20051061 WHERE 出版社 = '中国科技大学'
) AND 出版社 = '高等教育';

-- 检索与数据库原理属于同一出版社的书籍
SELECT 书名 FROM tpb20051061 WHERE 出版社 = (select 出版社 from tpb20051061 WHERE 书名 = '数据库原理');

-- 检索所有仓库号为2的书籍的名称
SELECT 书名 FROM tpb20051061 WHERE EXISTS 
(select 仓库号 FROM spb20051061 WHERE 书号=tpb20051061.书号 and 仓库号 = 2);

