#pragma once
#include "Video.h"
#include <string>
using namespace std;
class VideoManager
{
	static void readVideo();
	static void decompressVideo();
	static void writeCompressedVideo();
	static void readCompressedVideo();
public:
	VideoManager();
	static Video getVideo(const string name, const int strtFrame, const int endFrame);
	static void compressVideo(const string name);
	~VideoManager();
};

