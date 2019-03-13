#include "Writer.h"

#include <exception>

Writer::Writer(int x, int y) {
	mFileName = generateFileName(x, y);
	mFile.open(mFileName.c_str());
	if (!mFile.is_open()) exit(-1);
}


std::string Writer::generateFileName(int x, int y) {
	std::string str = "d/", tmp = "";
	if (!x) tmp = "0";
	while (x) tmp += char('0' + x % 10), x /= 10;
	reverse(tmp.begin(), tmp.end());
	str += tmp;
	str += 'X';
	tmp = "";
	if (!y) tmp = "0";
	while (y) tmp += char('0' + y % 10), y /= 10;
	reverse(tmp.begin(), tmp.end());
	str += tmp;
	str += ".txt";
	return str;
}

void Writer::write(std::pair<int, int> value) {
	mFile << value.first << " " << value.second << std::endl;
}


Writer::~Writer() {
	mFile.close();
}
