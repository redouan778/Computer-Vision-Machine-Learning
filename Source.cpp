#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


/////////////////  Images  //////////////////////

void main() {
    printf("miauwww");

    string path = "Resources/bert ernie.jpg";
	Mat img = imread(path);
	Mat imgResize, imgCrop;

	resize(img, imgResize, Size(), 0.5, 0.5);

	Rect roi(40, 100, 100, 30);
	imgCrop = img(roi);

	imshow("Image", img);
	imshow("Image Resize", imgResize);
	imshow("Image Crop", imgCrop);
	waitKey(0);
}