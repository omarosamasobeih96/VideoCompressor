#include "Pixel.h"

Pixel::Pixel() {

}

Pixel::Pixel(const int &value) {
	setValue(value);
}


void Pixel::setValue(const int &value) {
	mValue = value;
}

Pixel::~Pixel() {
}
