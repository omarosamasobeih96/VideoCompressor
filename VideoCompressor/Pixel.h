#pragma once
#include <bits\stdc++.h>

#include "Frame.h"
#include "Writer.h"

class Frame;

class Pixel
{
	int mValue;
public:
	Pixel();
	Pixel(const int &value);
	void setValue(const int &value);
	~Pixel();
};

