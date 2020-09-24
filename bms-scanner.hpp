#ifndef BMSSCANNER
#define BMSSCANNER

#include <string>

class bmsScanner {
private:
	string *filename;

public:
	bmsScanner(string *filename) {
	this->filename = filename;
	}

	~bmsScanner() {
		delete
	}
};

#endif
