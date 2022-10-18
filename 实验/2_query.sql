-- 1. 无条件查询
-- 查找 authors 表的全部信息
SELECT * FROM authors;

-- 查找其他样例表中全部信息:sales,titles,employee,publishers
SELECT * FROM sales;
SELECT * FROM titles;
SELECT * FROM employee;
SELECT * FROM publishers;

-- 2. 简单条件查询
-- 查找 titles 表中全部书号及书名
SELECT title_id,title FROM titles;

-- 查找 titles 表中价格在 $10～15 元之间的书的书名。
SELECT title FROM titles WHERE price >= 10 AND price <= 15;

-- 查找 titles 表中书名以 T 开头的书号, 书名
SELECT title_id,title FROM titles WHERE titles.title LIKE 'T%';

-- 对 authors 样例表构造一个简单查询条件，进行查询
-- 查询authors表中state为CA或UT的作者的id
SELECT au_id FROM authors WHERE state IN ('CA','UT');

-- 3. 多条件查询
-- 查找书名起始字符为 T，价格小于 $16 元的书名及价格
SELECT title,price FROM titles WHERE title LIKE 'T%' AND price < 16;

-- 查找书名起始字符不为 T 的, 价格大于 $16 元的书号, 书名及价格
SELECT title,price FROM titles WHERE title NOT LIKE 'T%' AND price < 16;

-- 列出已出售书的书号和数量
SELECT title_id,qty FROM sales;

-- 对 publishers 样例表构造一个多条件查询，进行查询
-- 查询publishers表中在国家在USA城市在Boston的发行商名称
SELECT pub_name FROM publishers WHERE country = 'USA' AND city = 'Boston';

-- 4．使用函数进行查找
-- 列出有多少种类型的书
SELECT COUNT(DISTINCT type) FROM titles;

-- 列出书的定价有多少种
SELECT COUNT(DISTINCT price) FROM titles;

-- 查出书价最高的书价
SELECT MAX(price) FROM titles;

-- 列出当年销量的总和
SELECT SUM(ytd_sales) FROM titles;

-- 计算这些书籍的最高书价、最低书价及平均书价
SELECT MAX(price),MIN(price),AVG(price) FROM titles;

-- 按出版社号分组，列出各个出版社当年销量(ytd_sales)的总合
SELECT pub_id,SUM(ytd_sales) FROM titles GROUP BY pub_id;

-- 计算不同的书名共有多少种
SELECT COUNT(DISTINCT title) FROM titles;

-- 对样例表 sales 构造一个统计查询，给出查询结果
-- 查找订单中各个支付方式的总销量
SELECT payterms,COUNT(qty) FROM sales GROUP BY payterms;

-- 5．得到排序的查询结果

