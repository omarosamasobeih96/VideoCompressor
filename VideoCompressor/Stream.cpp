#include <bits/stdc++.h>
using namespace std;

//opencv
#include < opencv2/opencv.hpp>
#include < opencv2/core/core.hpp>
#include < opencv2/highgui/highgui.hpp>
#include < opencv2/video/background_segm.hpp>
using namespace cv;

// main
int Stream() {
	VideoCapture cap("http://192.168.1.100:4747/video");
	if (!cap.isOpened()) return -1;
	while (1) {
		Mat frame;
		cap.read(frame);
		imshow("video", frame);
		waitKey(30);
	}
	return 0;
}
