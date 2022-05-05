#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

void main() {
	// Blank Image 
	Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));

	rectangle(img, Point(100, 200), Point(410, 310), Scalar(0, 0, 255), FILLED);

	rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
	
	line(img, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 2);
	line(img, Point(130, 216), Point(382, 216), Scalar(255, 255, 255), 2);
	
	line(img, Point(120, 296), Point(120, 216), Scalar(255, 255, 255), 2);
	line(img, Point(392, 296), Point(392, 216), Scalar(255, 255, 255), 2);

	putText(img, "Redouan's image!!", Point(137, 262), FONT_HERSHEY_DUPLEX, 0.75, Scalar(255, 0, 0), 2);

	imshow("Image", img);
	waitKey(0);
}