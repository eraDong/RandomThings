<!--
 * @Author: eraDong 115410761+eraDong@users.noreply.github.com
 * @Date: 2023-09-09 21:10:25
 * @LastEditors: eraDong 115410761+eraDong@users.noreply.github.com
 * @LastEditTime: 2023-09-18 18:58:28
 * @FilePath: \SUST\RandomThings\Postgraduation\APS\C++ programme\taking.md
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
-->
# 专业课学习的内容
Object Oriented Programming(面向对象编程)，We can abbreviate it as OOP.In this lesson we mainly study Java to learn about the thoughts of OOP.

Contents:

1. Java introduction:

Teaching us how to install JDK and set its path,how to create the first program and print a "hello world" string.

2. Java base

Syntax like create variables,comments,constants.Learning about keywords,how to use operators.

Then we learn code structure.If else,While,for...

34. Java oop (main)

class,constructor,member.

extend,interface,exception.

5. Java API
   
introduce some API that we will use in our programs frequently LIKE : String/StringBuffer, System/Runtime, Math/random.

6. Collection (main)
   
List(arraylist,linkedlist,iterator)

set(hashset),map(hashmap)

7. IO

bytestream , stream(字符流) File

8. Java gui

9. JDBC




# 学习重点是什么

Before this I have some program basic knowledge that learned from C++/C. So lets ignore the basic part of it.The most important part of this lesson is OOP.

OOP:

    class:
       1.What is class:
        Compared to the Procedual programming,Class helps us to solve problems in a new way.We can consider the problems that we need to solve as a object.And we can add some attributes and function to solve a series of problems in this model.

        2.How to define class:
        In java: class [name] { ... }.
        Then we can lead out the constructor.How to define a class begin with some attributes - use constructors and their reload.

        3.class member
        To ensure the safety of code(memory leak,pointer,...).We use public,private,protected.There is a keyword "this",it's point to the object in the Class Methods.

    inheritance:
        1.What is inheritance
        Use a example to make clear.Shape is father,triangle,rectangle is its son.So we can use extends to solve a bunch of real life problems.

        2.How to define inheritance
        In java:class [name] extends [name] {}
        In the son class we can rewrite methods from his father which makes the program simple and easy to be read.
        keyword "super" that we can use it to recall the methods from his father.

        3.abstract and interface
        Abstract class is a class that have no specific difinition methods and attributes.It's more like a template that can be used in the extends.
        Interface is like-class stuff that can be used to implement the methods from it.
        We can use the two to realize Polymorphism(多态)








