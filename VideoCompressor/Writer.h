#pragma once
#include <fstream>
#include <time.h>

class Writer
{
	std::ofstream mFile;
	std::string mFileName;
	time_t mCurrentTime;

public:
	Writer(int x, int y);
	void write(int value);
	void write(char value);
	void write(std::pair<int, int> value);
	std::string generateFileName(int x, int y);

	~Writer();
};

