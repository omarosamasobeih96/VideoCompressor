#pragma once
#include "Pixel.h"


#include < opencv2/opencv.hpp>
#include < opencv2/core/core.hpp>
#include < opencv2/highgui/highgui.hpp>
#include < opencv2/video/background_segm.hpp>
using namespace cv;

class Pixel;

class Frame
{
	Pixel ***mPixels;
	const int mLength;
	const int mHeight;
public:
	Frame(const int &height, const int &length);
	~Frame();
};

