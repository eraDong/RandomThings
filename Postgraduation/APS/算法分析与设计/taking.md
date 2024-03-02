# 算法分析与综合设计 Design and analysis of algorithms
## What is it

It is a lesson about the assessment of the algorithms.As we all know,there is limited space in the computer.And a optimum algorithm may helps us to solve a difficult problem in a fast speed by using limited space.



Another explanation about the lesson is that algorithm design is to turn a problem into the form of algorithm to solve it.The aim of algorithm design is to find the optimum solution of the problem,it is necessary for us to find a accurate,readable,maintainable algorithm.So writing a algorithm is similar to make a toolkit which can help us to fix a problem by using a few tools.

## How do I learn

I can describe some major algorithms which is popular both in industry and researching.

### 1.searching algorithm 搜索算法

It is the simplest algorithm.However it is hard to build a optimum one while in the complex situation.If we want to deal with some small-scale problem.We can just use the syntax "for" - just like the counting as we human would do.We often call it brutal one.In advance,scientist introduced a structure named tree.The structure has only one root and many "leaves".In this structure,there are two important algorithms being used to search.One is depth first search,another is breadth first search.the key of depth first search is that we need to go deep down to the leaf and then go up.The BFS suggested us search floor by floor.

### 2.dynamic process 动态规划

DP is the method that we used a lot.Given a overview to it - Divide the problem into many simple sub-problems then we find all the solutions of the sub-problems.Finally we merge them in the way we want it to be step by step and get the anwser.A typical DP problem is backpack problem.The description is we have a backpack.The backpack have limited space and there are many fruits have weight and value.We should find the maximum value when the backpack is filled with fruits.

![image-20240302221413395](C:\Users\Era\AppData\Roaming\Typora\typora-user-images\image-20240302221413395.png)

In computer,it is quite simple that we can describe the sub-problem as a array and write it down.every sub-solution represents a states.

### 3. greedy 贪心算法

Greedy is more like a way that we think about the questions.For an example,If we want to buy three biggest cow in a farm.We would like to arange from largest to smallest（this is more easier for computers while they could not see the scale of a cow）.After that we just pick the one to three.This is the greedy solution.
