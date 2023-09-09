<!--
 * @Author: eraDong 115410761+eraDong@users.noreply.github.com
 * @Date: 2023-09-09 21:10:25
 * @LastEditors: eraDong 115410761+eraDong@users.noreply.github.com
 * @LastEditTime: 2023-09-09 22:22:39
 * @FilePath: \SUST\RandomThings\Postgraduation\APS\C++ programme\taking.md
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
-->
# 专业课学习的内容
OK lets start with the history about Cpp and c. Cpp was invented by Bjarne Stroustrup.The man that time was using Simula to programme.But then he started using "C with class" in his work because Simula is considered a inefficent programme.

Until now,Cpp has developed a lot.C progremme is Procedural programming which is suitable for embedded system software development and csapp and Cpp is Object-oriented language which has class and object and is suitable for desktop software development.

So the important things that we need to learn is the properties of class and object.the attributes and usage of them.


# 学习重点是什么
So the first thing is that how we create a class.


1. 类与对象

class plus className . this is our first class that we can use it to solve a bunch of questions.Then we can add some functions,attributes,variable in the class.That comes to the keywords:private,public,protected.private is the default keyword means we can only use the member in this class.public means we can use the member without restrain.protected means we can use the member in this class and the classes extend it.

Next lets talk about constructor. Constructor is so important in class when we creat a object.If we dont have one,we can only create a object with null attribute.We can define different construcotrs to init the object to suitable for every situations that we met in our work.Like no-arg constructor(无参构造函数),Constructor Overloading(重载构造函数).

There is a partner with constructor.Its name is Destructor.How it works.When we need to delete some objects.Destructor helps us to complete some cleanup.The important work is to release RAM. Cpp is not a language like java that can cleanup automatically so that we need to programme a destructor to release the RAM.For example,if we use malloc to require some RAM,we need delete to release it.

2. 继承与多态

Lets go deeper.talk about how Inheritance(继承) and Polymorphism(多态) work in Cpp.First pure virtual function is the basement that lift Polymorphism.pure vitural funciton is the same thing as interface.For example,if we have some classes like cat,dog,fish...   we need to category them so that we need pure virtual function named animal.and cat,dog,fish can realize the function in it.

And inheritance is the big thing too.We use extend to extend a class.Then we call the extended class - son.For example, we have a pure vitural function named player , it realize two class named CounterTerrorist and Terrorist. Go deeper we can extend the two classes named Terroist A with a C4 bomb.

3. The rest

Cpp also has some convinent settings like STL,template.

STL realize a lot Data stuctures that we can use 'em very convinently which demonstrated Encapsulation(封装) in Cpp.

template is a Code reuse mechanism(机制).We can use template as an arg.It  is not a specified data type(指定的数据类型).So it highly Improved code resuability
.





