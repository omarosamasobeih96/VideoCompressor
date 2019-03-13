#pragma once
#include "Frame.h"
#include "Pixel.h"
class Video
{
	const int mLength, mHeight, mWidth;
	Frame ** mFrames;
public:
	Video(int length, int height, int width);
	Pixel& operator() (int id, int row, int col) const;
	~Video();
};
