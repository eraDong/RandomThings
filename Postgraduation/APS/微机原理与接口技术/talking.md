# 微机原理与接口技术 Microcomputer system and Interface Laboratory
## What is it

It is a lesson mainly made for introducing the microprocessor - 8086/8088.So what is microprocessor,If we use it to process the general information,it is called Central Processing Unit.If we use it to process the graphic informations,it is called Graphics Processing Unit that we used in the GPU.In the Computer Organization and Architecture,we have skimed how they work.Now we need to learn about its composition and details.

## How to learn it

1. 8086/8088

   The difference between 8086 and 8088 is that 8088 only have 8 **Address Bus**

   This is the processer that published by intel in about 1970s.It is a 16bits microprocess which means it internal registers,internal and external data buses are 16bits wide.What is 16bits,we can simply understand that it is the ability that the microprocess gain.The bigger one is the better one.

   8086/8088 have same 16 registers which is used to store,operate and transport the datas : A B C D each of them have H and L represent high bits and low bits.

   Index registers are SI DI BP SP mainly used to store the offset of the storage units.Just the same as the pointer in C.We can use it to index the location of the data.

   CS DS ES SS

   

2. **assembly language** 汇编

   Assembly language is a type of low-level programming language that is intended to communicate directly with a computer's hardware.Therefore the embeded system engineer need to familiar with the language.While using the knowledge of the 8086/8088.We can programme a software.

   ```
   DATA SEGMENT  
       BUF DB 'HELLO WORLD!  THIS IS MY FIRST ASM FILE! $'  
   DATA ENDS  
   
   CODE SEGMENT  
       ASSUME  CS:CODE,DS:DATA  
   START:  
       MOV AX,DATA  
       MOV DS,AX  
   
       LEA DX,BUF  
   
       MOV AH,09H
       INT 21H  
   
       MOV AH,4CH  
       INT 21H  
   
   CODE ENDS  
   END START  
   
   ```

   Give a explain : we need to define some segments because assembly language functions depend on the segments.The data segments is the variable like in C.The code segments is the code.

   There are some operations : MOV "=" LEA access the first index of a register.

