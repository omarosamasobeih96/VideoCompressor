#pragma once
#include "Frame.h"
class Video
{
	const int length;
	Frame ** mFrames;
public:
	Video(int length,  Frame** frames);
	~Video();
};

