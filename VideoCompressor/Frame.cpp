#include "Frame.h"



Frame::Frame(const int &height, const int &width) : mHeight(height), mWidth(width) {
	mPixels = new Pixel**[mHeight];
	for (int i = 0; i < mHeight; ++i) {
		mPixels[i] = new Pixel*[mWidth];
		for (int j = 0; j < mWidth; ++j) {
			mPixels[i][j] = new Pixel();
		}
	}
}

Pixel& Frame::operator() (int row, int col) const {
	return *mPixels[row][col];
}

Frame::~Frame()
{
	for (int i = 0; i < mHeight; ++i) {
		for (int j = 0; j < mWidth; ++j) {
			delete mPixels[i][j];
		}
		delete[] mPixels[i];
	}
	delete[] mPixels;
}
