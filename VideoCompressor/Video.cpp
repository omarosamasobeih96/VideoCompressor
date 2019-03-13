#include "Video.h"



Video::Video(int length, int height, int width) : mLength(length), mHeight(height), mWidth(width) {
	mFrames = new Frame*[length];
	for (int i = 0; i < length; ++i)
		mFrames[i] = new Frame(height, width);

}


Pixel& Video::operator() (int id, int row, int col) const {
	return (*mFrames[id])(row, col);
}

Video::~Video()
{
	for (int i = 0; i < mLength; ++i)
		delete mFrames[i];
	delete[] mFrames;
}
