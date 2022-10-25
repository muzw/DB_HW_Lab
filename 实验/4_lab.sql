
SELECT * FROM TPB20051061;
SELECT * FROM SPB20051061;


-- (1)在 T** 表中插入一元组: Digital Image Processing, S7028, 36.00
INSERT INTO tpb20051061(书名,书号,价格) 
VALUES('Digital Image Processing', 'S7028', 36.00);

-- (2)删除书名为“Fortran 程序设计”的那个元组
DELETE FROM tpb20051061 WHERE 书名 = 'Fortran 程序设计';

-- (3)删除书号以 H 开头的元组
DELETE FROM tpb20051061 WHERE 书号 LIKE 'H%';

-- (4)把书价调整到原来价格的 90 %
UPDATE tpb20051061 SET 价格 = 价格*0.9;

-- (5)把书号以 D 开头的那些书的书价减掉 2.00 元
UPDATE tpb20051061 SET 价格 = 价格-2.00 WHERE 书号 LIKE 'D%';

-- (6)将“计算机原理”的书号改为 S1135
UPDATE tpb20051061 SET 书号 = 'S1135' WHERE 书名 = '计算机原理';

-- (7)对所建的表，进行其他插入、删除、更新操作各一个
-- 在 T** 表中插入一元组: 计算机系统基础,袁春风, S1145, 50.21,机械工业,2014
INSERT INTO tpb20051061 VALUES('计算机系统基础','袁春风', 'S1145', 50.21,'机械工业',2014);

-- 删除tpb20051061表中所有仓库号为2的书籍
DELETE FROM tpb20051061 WHERE 
2 = (SELECT 仓库号 FROM spb20051061 WHERE 书号=tpb20051061.书号); -- 相关子查询

DELETE FROM tpb20051061 WHERE 书号 IN 
(select 书号 FROM spb20051061 WHERE 仓库号 = 2);-- 不相关子查询

-- 将价格在20以上的书籍的仓库号该为4
UPDATE spb20051061 SET 仓库号=4 WHERE
(SELECT 价格 FROM tpb20051061 WHERE 书号=spb20051061.书号) > 20; -- 相关子查询

UPDATE spb20051061 SET 仓库号=4 WHERE
书号 IN (SELECT 书号 FROM tpb20051061 WHERE 价格 > 20); -- 相关子查询

-- (8)已知下面百分制成绩和 GPA 绩点、等级成绩之间的关系，建立名为 
--    PB** (即以 PB开头，后面是建过程人的学号)的函数/过程，用于实现对
--    给定的百分制成绩，输出其 GPA 绩点和等级成绩。输入参数为百分制成绩，
--    返回参数为绩点、等级成绩。如输出成绩不在 0~100 直接，存储过程返回
--    -1，否则返回 0
CREATE OR REPLACE PROCEDURE PB20051061()
--(IN grade FLOAT,OUT gpa FLOAT ,OUT degree VARCHAR(2))
LANGUAGE plpgsql
AS $$
BEGIN
  raise 'Hello';
END;
$$;

DROP PROCEDURE PB20051061();
CALL PB20051061();


