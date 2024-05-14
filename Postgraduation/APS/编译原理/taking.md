# compile principle

## 我学了什么

​	Before we can start using the programs/apps, we need to compile our code into exe.

​	It contains six steps to convert the code into apps. As a computer science engineer, we need to learn about how our code become into the final apps and it helps us to write better code for the entire system. 

1. lexical analysis 词法分析
2. syntactic analysis 语法分析
3. Semantic analysis 语义分析
4. intermediate representation 中间代码生成
5. code optimization 代码优化
6. object code generation 目标代码生成

## 重点是什么

​	And the three important parts are 

1. grammer and language 文法与语言

   This part is to describe the structure of languages such as C++/C,java and it has same rules to define every sentences of one programme language.s

   终结符(Terminals)：即语言中的基本符号，如变量、关键字、操作符等。它们是语言中的最基本的构建块。

   ​	It's the basic symbols in language such as variable, keywords and operations which are the basic parts.

   非终结符（Non-terminals）：用来表示语言中的各种结构，如语句、表达式等。非终结符可以通过一系列产生式（productions）来定义。

   ​	It is used to express structures like sentences and expressions such as E -> aS

   语法树（Syntax tree）：根据文法生成的树形结构，用于表示代码的语法结构，有助于理解代码的层次结构和语法关系。

   ​	Basic on these rules and symbols we can build our trees to display the structure of the sentences of the programme language.

   ![Go的AST(抽象语法树) - 知乎](https://pic2.zhimg.com/80/v2-cfb50c599bb5d57e12efd10b9640a119_1440w.webp)

2. lexical analysis 词法分析

   It played an important role in compling. It convert source code into token sequences and as the input of syntactic analysis. By scanning code from left to right and recognize every symbol then ouput them into a form of tuple <\category, value>.

   such as sum=3+2; which is a sentence in C programme. And the first step we need to tokenize this code, sum is identifier, 3 and 2 are constant, = and + are operations and semicolon is end of the sentence.

   After that, we scan the code it will output the result such as 

   </sum,1>

   </=,2>

   </3,3>

   and we put these result into syntactic analysis.

3. syntactic analysis 语法分析

   This step is to combine the identified words into phrases（短语）.

   It is divided into two parts, one is from root to the leaves and another is from leaves to the root to build the grammatical trees.

   

   ![img](https://s2.loli.net/2022/04/02/o6ruZiwTOEKm12W.png)