[Cours Web](https://www.computervision.zone/)
[Video Web](https://www.youtube.com/watch?v=2FYm3GOonhk&t=10s)



在cpp中参数大多时候要有destination



GaussianBlur()函数

```cpp
GaussianBlur(img, imgBlur, Size(3, 3), 3, 0);
```





dilate()函数

膨胀操作是一种常见的图像处理技术，可以通过增强图像中的亮度、加粗边缘和填充空洞来改变图像的外观。在OpenCV中，dilate函数可以根据指定的内核（kernel）大小和形状，将图像中的亮点进行扩展。

实际上，dilate函数的原理非常简单。它的操作是将内核与图像中的每个像素进行比较，并将内核的像素值与周围像素的最大值进行比较。然后，将该最大值赋值给原始像素。通过这种方式，图像中的亮点像是被放大了一样，从而膨胀了。

```cpp
Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
//注意只能使用奇数
dilate(imgCanny, imgDil, kernel);//increasing thickness
```





```cpp
Rect roi(200, 100, 300, 300);
// x,y right down
```

```cpp
rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
// 左上角的点 - 右下角的点
```





Scalar数据类型理解

```cpp
typedef struct Scalar{
    double val[4];
}Scalar;
```

它将各个通道的值构成一个整体，对应BGR的叠放，通常第四个通道的值都默认为0

```cpp
Mat blue_m(256,256,CV_8UC3,Scalar(255,0,0));
Mat green_m(256,256,CV_8UC3,Scalar(0,255,0));
Mat red_m(256,256,CV_8UC3,Scalar(0,0,255));
```





putText()函数的用法

```cpp
cv2.putText(image, text, (5, 50), cv2.FONT_HERSHEY_SIMPLEX, 0.75, (0, 0, 255), 2)
```

- 图片
- 要添加的文字
- 文字添加到图片上的位置，Point类型
- 字体的类型
- 字体大小
- 字体颜色
- 字体粗细





approxPolyDP()函数
以指定的精度近似多边形曲线。此函数利用一个顶点更少的多边形或者曲线去近似另一条曲线或另一个多边形。

`approxPolyDP(curve, approxCurve, epsilon, closed = true)`

参数

1. curve:array,输入二维点集的数组，对应contours
2. approxCurve:array,近似的结果。该数组的类型应该与输入的数组匹配。
3. epsilon:double,指定近似结果的精度。这是原曲线和其近似曲线之间的最大距离。epsilon越小，近似结果的折线形状越“接近”曲线。
4. closed:bool
   - true:近似曲线是闭合的（第一个顶点与最后一个顶点相互连接）。
   - false:近似曲线是不闭合的。



