#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

///////////			Basic Fuction			///////////

void main() {

	string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgGray, imgBlur, imgCanny, imgDil, imgErode;

	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	//��cpp�в������ʱ��Ҫ��destination
	GaussianBlur(img, imgBlur, Size(3, 3), 3, 0);
	//ֻ��ʹ������
	Canny(imgBlur, imgCanny, 25, 75);

	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	//ֻ��ʹ������
	dilate(imgCanny, imgDil, kernel);//increasing thickness
	erode(imgDil, imgErode, kernel);//decreasing thickness


	imshow("Image", img);
	//imshow("Image Gray", imgGray);
	imshow("Image Blur", imgBlur);
	imshow("Image Canny", imgCanny);
	imshow("Image Dilation", imgDil);
	imshow("Image Erode", imgErode);
	waitKey(0);

}

