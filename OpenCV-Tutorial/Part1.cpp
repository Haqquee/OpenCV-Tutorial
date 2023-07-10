#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
int main() {

	std::string path = "assets/testimg.png";
	Mat img = imread(path);
	imshow("Image1", img);
	waitKey(0);

	return (0);

}