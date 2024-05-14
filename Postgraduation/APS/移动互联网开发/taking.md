# 移动互联网开发 mobile app development

## what is it

​	It is a lesson that we learned at the third year of college. It mainly talked about how to develop a app which depends on wechat, namely wechat mini program. It is similar as web development but tencent engineers publish some new frameworks such as wxss to replace css (control style), wxml to replace html(hypertext makeup language). we learn how to create a program, how to develop in a systematic way and how to publish the program to the Internet.

## what do I learn

​	We can divide wechat program development into several parts:

1. logic layer

   ​	We are taught to use javascript to develop the logic layer. Javascript is a scripting language for web pages and wechat programs also rely on the attributes of web pages because they both written by javascript.

   ​	The main function that we need to learn about javascript is that we can use it to deal with HTTP request. As is known to all engineers, web pages and mini programs are Client/Server structure so users send requests to the server and the server will return a result to them.

   ​	wx.request is the method that we use it to complete this structure. there are many methods of requests and we use post and get mostly.

   ​	GET is to send a request to get the specify resources and server will return the result. For example, we can see many shopping website they use GET to get the images from server and display to users.

   ​	POST is to send some data to the resources, for example, same in the shopping website, if we need to login or register, we need to fill the username and password, and this time server will obtain the url and its username and password and save them to the database.

2. view layer

   ​	view layer is written by wxss and wxml. wxss is to control the style and wxml is to display the context. They are two basic languages in computer science. We can give some simple examples. we can use wxml to write some words but this time the style of the words is default the font size is small and color is black and we can use wxss to change its color and font size/weight.

   ​	the knowledge we should know is that the selector.

   ​	id selector,class selector,html selector

   ​	in order to divide them in order so they design these selectors, # is id selector, . is class selector and html selector is the name of element in html.





