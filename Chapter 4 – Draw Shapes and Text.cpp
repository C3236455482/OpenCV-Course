#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

///////////			Draw Shapes and Text			///////////

void main() {

	//Blank Image
	//Mat img(512, 512, CV_8UC3, Scalar(255, 0, 0));	//Blue
	//Mat img(512, 512, CV_8UC3, Scalar(255, 0, 255));	//Purple
	//Mat img(512, 512, CV_8UC3, Scalar(0, 0, 0));	//Black
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));	//White

	//circle(img, Point(256, 256), 155, Scalar(0, 69, 255));
	//circle(img, Point(256, 256), 155, Scalar(0, 69, 255), 10);//more thick
	circle(img, Point(256, 256), 155, Scalar(0, 69, 255), FILLED);//FILLED

	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
	// 左上角的点 - 右下角的点

	line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2);
	// begin - end

	putText(img, "Murtaza's Workshop", Point(137, 262), FONT_HERSHEY_DUPLEX, 0.75, Scalar(0, 69, 255), 2);

	imshow("Image", img);

	waitKey(0);

}

