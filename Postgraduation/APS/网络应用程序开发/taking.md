# Javaweb

## 学习的内容

​	We learn this lesson in the third year of college. and it's based on Java language which is often used to develop the server of web apps. Why we use Java to develop server ? at first I want to claim that we can use many languages to develop web apps such as python, golang but java was developed and its system is so mature that we can develop in a simple way. Also java is the most popular language used in software development.

## 学习的重点

​	Its structure is B/S namely browse and server. And we need to familiar with servlet, jsp, javabean and jdbc.

1. JSP

   JSP is java server pages, we insert Java code into HTML to obtain JSP pages. Technically JSP execute the servlet from server and return a HTML page to users.

   JSP scripts divide into three parts:

   ​	<%%> we use this to insert normal java sentence such as out.println("hello world")

   ​	<%!%> we use this to define method, class and variable such as int i = 10

   ​	<%=%> we use this to define such a + b + 10

   ​	<%--%> we use this to write comments

   ​	and there is a special one <%@> we can tell jsp engine how to deal with this page such as we can see languages are encode in computer so if we want to display Chinese we need to change the encoding format of the engine.

2. JDBC

   JDBS is java database connectivity and it is API in java and it can execute SQL in java.

   the basic procedure is to import API, load the driver, connect to the database and execute SQL.

   select from, update, delete, insert into

3. JavaBean

   javabean is a component we can use it for several times. we can define entity in javabean and import this entity in jsp pages such as we can define a student javabean and define some methods like gettter and setter, which are the most basic ones.

   ``` java
   package bean; 
   public class PersonBean implements java.io.Serializable{ 
     private String name = null; 
     private boolean single= false; 
     
     public PersonBean(){ 
     } 
     
     public String getName(){ 
       return name; 
     } 
     
     public void setName(final String value){ 
       name = value; 
     } 
     
     public boolean isSingle(){ 
       return single; 
     } 
     
     public void setSingle(final boolean value){ 
       single= value; 
     } 
   }
   
   ```

   

4. servlet

   we use servlet to deal with get/post and some HTTP requests

   ```java
   // 导入必需的 java 库
   import java.io.*;
   import javax.servlet.*;
   import javax.servlet.http.*;
   
   // 扩展 HttpServlet 类
   public class HelloWorld extends HttpServlet {
    
     private String message;
   
     public void init() throws ServletException
     {
         // 执行必需的初始化
         message = "Hello World";
     }
   
     public void doGet(HttpServletRequest request,
                       HttpServletResponse response)
               throws ServletException, IOException
     {
         // 设置响应内容类型
         response.setContentType("text/html");
   
         // 实际的逻辑是在这里
         PrintWriter out = response.getWriter();
         out.println("<h1>" + message + "</h1>");
     }
     
     public void destroy()
     {
         // 什么也不做
     }
   }
   
   ```

   

