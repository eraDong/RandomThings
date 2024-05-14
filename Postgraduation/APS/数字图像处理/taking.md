# Digital image process

## 我学了什么

​	Its a lesson we learned at the third year, nowadays, we can enjoy films, movies on our personal computers and it rely on the digital image process.

​	Its main work is to convert images into digits and store them in the computer then we can process them by our programs with operations. In this way, normally images are three dimension matrix we call them RGB matrix. RGB matrix contains many attributes of images and we can enlarge rotate them by mathematical operations.

​	In this lesson, we have a specifical field to study - medical field. There are many digital images shot in the hospital like X-rays, CT so we need to process them in the computer. There are some operations like

segmentation: we can simply understand it as divide a image into several parts by different color. With AI, we can train a model to divide CT into parts.

augmentation: CT or x-ray is to shoot the pictures of inside of the bodies and we need clear photos to judge the illness so we need the technique of augmentation. Augmentation is to remove some attributes in the matrix and set a different contrast that suitable for human eyes.

## 重点是什么

1. Convolution

   Convolution is the basis of computer vision.

   ![../_images/correlation.svg](https://zh.d2l.ai/_images/correlation.svg)

   we can use kernel function to get the main attributes of the input images then we get the smaller output with what we want. There is a direct example that we can use kernel function to detect if there is white block in black images.

   And if we dont want a smaller output we should padding the input into a larger one.

2. RGB

   RGB is also used to define color in the computer so we can simply understand it as three layer of a photo. Red Green and Blue and we stack these three layers together to get our photos.

