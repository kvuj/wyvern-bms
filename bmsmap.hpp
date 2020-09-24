#ifndef BMSMAP
#define BMSMAP

#include <string>
#include <filesystem>

class bmsMap {
private:
	string *filename;

public:
	bmsMap(string *filename) {

	}

	~bmsMap() {
	    delete filename;
	}

	void loadNewMap() {
        if(std::filesystem::exists(*filename) {

        }
	}
};

#endif
