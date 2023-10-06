<!--
 * @Author: eraDong 115410761+eraDong@users.noreply.github.com
 * @Date: 2023-10-05 18:49:56
 * @LastEditors: eraDong 115410761+eraDong@users.noreply.github.com
 * @LastEditTime: 2023-10-05 20:04:24
 * @FilePath: \RandomThings\Postgraduation\APS\数据库\talking.md
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
-->
## 学习的内容
This lesson is called Introduction to the database.Thereforce we have to learn some simple theories and applications about database.

Learning about What is database（绪论）,Relational database（关系数据库）,SQL（浅度）,Database Security（数据库安全性）,Database Integrity（数据库完整性）,Relational Theory（关系数据理论），Database Design（数据库设计），Database SQL（更深一步），query processing（查询处理） and query optimization（查询优化），database recovery（数据库恢复）

## 学习的重点
1. what is database

    In computing, a database is an organized collection of data (also known as a data store) stored and accessed electronically through the use of a database management system.（wiki）

    There are some database that we often use them in our development or production environment.

    MySQL, PostagreSQL（苹果公司替代mysql）, influxDB(开源的时间序列数据库), Redis，MongoDB（文档数据库）......

2. Relational database
    
    Relational databse is the database that based on relational model.We can operate these databases through mathmatics.

    There is a relational model

    R（U, D, Dom, F）

    R - name

    U - the attributes of a object

    D - the range of the attributes

    Dom - the length of the attributes

    F - dependencies

3. SQL math
   
   We can use math to decribe the database.

   As we did to sets intersect,union......and we add more operators like selection（选择σ）,Projection（投影Π），join（连接）.

   selection is to select the data that we need.Then we can use projection to project our data.

   join is to connect two forms.there is a new concept called primary key and foreign key.Foreign key from one form is the same as the primary key from the other one.and we can join the two forms.

4. security and integrity
   
   There is a criteria named TCSES/TDI （1991年4月）that divid secuity into four groups ABCD and seven levels:D、C（C1，C2）、B（B1，B2，B3）、A（A1）

   security is that we can grant or revoke the authorization of users.

   integirity is that users can custom some rules to define his data.

5. SQL

    Intoduce how to use sql in SQL sever and we have some experiments.

    A. select (distinct) column from table_name (where) (and or) (order by)

    B. insert into table_name values(...)

    C. update table_name set column1 = value1 where condition

    D. delete from table_name where conditon

    simple as that.


6. Recovery

    When we lose data or suffer accidental damage.We could use the backup data to reduce the damage.




7. E-R

    Entity Relationship Diagram.

    It is a concept between database and reality that helps us to understand its structure clearly.