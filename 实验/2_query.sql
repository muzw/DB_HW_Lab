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
-- 查找作者的姓、名、电话号码，并按作者姓、名排列
SELECT au_lname,au_fname,phone FROM authors ORDER BY au_lname,au_fname;
 
-- 查找书名和书的价格，按书价由大到小的次序排列
SELECT title,price FROM titles ORDER BY price DESC;

-- 列出烹调书（类别名含有 cook）的种类和该类的平均价格
SELECT type,AVG(price) FROM titles WHERE type LIKE '%cook%' GROUP BY type;

-- 对其他样例表构造查询条件、排序要求，给出查询结果
-- 以递增的方式列出sales表中各个支付方式的总销量
SELECT payterms,SUM(qty) 销量总合 FROM sales GROUP BY payterms ORDER BY SUM(qty);

-- 6. 用嵌套或连接进行查询
-- 使用样例表 titles, publishers 进行查询: 查找出版社的名称以及所出的书名
SELECT pub_name,title FROM titles NATURAL JOIN publishers;

-- 使用样例表 authors, titleauthor, titles 进行查询: 查找作者的姓、名和所写的书名
SELECT au_lname,au_fname,title FROM titles NATURAL JOIN authors NATURAL JOIN titleauthor;

-- 从 titles,sales 中找出定单量(qty)最大的那一行定单的书的书名、价格、定单量
SELECT title,price,qty FROM titles NATURAL JOIN sales ORDER BY qty DESC LIMIT 1;
SELECT title,price,qty FROM titles NATURAL JOIN sales WHERE qty = (SELECT MAX(qty) FROM sales);

-- 构造其他条件，在 sales 和 stores 样例表中进行连接或嵌套查询
-- 查询Bookbeat商店卖出的书的书号和销量
SELECT title_id,qty FROM sales WHERE stor_id IN (SELECT stor_id FROM stores WHERE stor_name = 'Bookbeat');
SELECT title_id,qty FROM sales NATURAL JOIN stores WHERE stor_name = 'Bookbeat';
