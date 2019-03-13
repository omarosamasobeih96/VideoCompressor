#include "Frame.h"



Frame::Frame(const int &height, const int &length) : mHeight(height), mLength(length) {
	mPixels = new Pixel**[mHeight];
	for (int i = 0; i < mHeight; ++i) {
		mPixels[i] = new Pixel*[mLength];
		for (int j = 0; j < mLength; ++j) {
			mPixels[i][j] = new Pixel(this, i, j);
		}
	}
}

Frame::~Frame()
{
	for (int i = 0; i < mHeight; ++i) {
		for (int j = 0; j < mLength; ++j) {
			delete mPixels[i][j];
		}
		delete[] mPixels[i];
	}
	delete[] mPixels;
}
