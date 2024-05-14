# AI introduction

## 我学了什么

​	Artificial Intelligence introduction is mainly taking about the intelligence of machines. With the fast development of AI, it developed several types such as NLP, CV. NLP is also known as Natural Language Process that it is mainly used in the popular Large language models like ChatGPT. CV is also very popular in our life. For example, the parking lot recognize the number plate of cars depends on the technique of Computer vision which insert into the cameras.

## 重点内容

1. Knowledge representation

   It is similar as the data structure that we use to represent a knowledge in daily life such as this sentence :"Mike is a smart student".

   And there are many methods we can represent this knowledge.

   I can introduce three main methods that I learn in the class.

   ​	First is logical representation, P:Mike, Q:smart student P->Q

   ​	Second is IF-THEN representation, but it is more suitable to represent those sentences has reasons and causes

   ​	Third is Frame representation, usually we can represent a news in the form of frame.

   ![在这里插入图片描述](https://img-blog.csdnimg.cn/97e8df7f8ddd43ffb56377a831692832.png?x-oss-process=image/watermark,type_d3F5LXplbmhlaQ,shadow_50,text_Q1NETiBA5bCP5q615a2m6ZW_,size_20,color_FFFFFF,t_70,g_se,x_16)

2. Machine learning

   Machine learning is old-fashion type, so we only taught about supervised learning and unsuperviesd learning. supervised learning is that we have x and y of a data file. we train a function from these data and predict y in a new x.

   unsupervised learning only has x no y it mainly used in divide group.

   **Linear Regression**

   there is a typical example of linear regression, that is the price of houses. we give the city and area of several houses and we define our function as f = ax1+bx2+c and we do forward propagation and backward propagation to find the minimum loss then we get the best solution to predict the price of an unknown house.

   **Logistic Regression**

   it is similar as linear regression, in the final step,we use a sigmoid function or softmax function to map the output into 0-1 or -1 to 1 and in this way we can use these output to judge correct or fault, for example we give an input which is a picture of a dog and define output > 0.8 is a dog and less than 0.8 this picture represent other things.  

3. Expert system

   An expert system include three parts.

   Knowledge base, Inference engine and user interface. 

   ​	Knowledge base is to store the knowledge of the field that you want to be expert such as economy, medical. we use the knowledge representation to store these knowledges.

   ​	Inference engine is the brain of an expert system, the brain obtains the results by using logical methods.

   ​	User interface is to let users' input into the expert system and display the output on the screen and even it can communicate with users to get more informations.

   ​	With the development of AI, actually there are 8 expert systems insert into chatGPT 4. but they are more different, chatGPT is trained based on billions of data for generating sentences of questions. so its system depends on its prompt engineer such as we can input "You are a expert of buying clothes in a cheaper way and you can give customers helpful advices" to let it become an expert.