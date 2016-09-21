#include "opencv2\opencv.hpp"
#include "opencv2\opencv_modules.hpp"
#include <iostream>

void opencv_test(){
	cv::Mat redImg(cv::Size(200, 200), CV_8UC3, cv::Scalar(11, 45, 14));
	cv::namedWindow("OpenCVTest", cv::WINDOW_AUTOSIZE);
	cv::imshow("OpenCVTest", redImg);
	cv::waitKey();
	cv::destroyWindow("OpenCVTest");
}