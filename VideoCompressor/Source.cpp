#include <bits/stdc++.h>
using namespace std;

//opencv
#include < opencv2/opencv.hpp>
#include < opencv2/core/core.hpp>
#include < opencv2/highgui/highgui.hpp>
#include < opencv2/video/background_segm.hpp>
using namespace cv;

#include "Frame.h"

int main() {
	VideoCapture cap(0); // open the default camera
	if (!cap.isOpened())  // check if we succeeded
		return -1;
	Mat nframe;
	for (;;)
	{
		Mat frame;
		cap >> frame; // get a new frame from camera
		//cvtColor(frame, nframe, COLOR_BGR2GRAY);
		imshow("video", frame);
		waitKey(30);
	}
	// the camera will be deinitialized automatically in VideoCapture destructor
	return 0;
}
