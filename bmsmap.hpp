#ifndef BMSMAP
#define BMSMAP

#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

class bmsMap {
private:
    // FILEPATH    -> Folder name + bms file name.
    // CURRENTLINE -> Current line scanned by the program.
	std::string *folderName;
	std::string *currentLine;

public:
	bmsMap(std::string passedLocation) {
	    // Removes the dot from ./<pathname>/name.bms

	    if(passedLocation.at(0) == '.')
            *folderName = "/bms" + passedLocation.substr(1, passedLocation.size());
        else
            *folderName = "/bms" + passedLocation;
	}

	~bmsMap() {
        delete folderName, currentLine;
	
	}

	void loadNewMap() {
	    // This checks for the bms file.
	    // TODO Implement how to handle mutliple bms files in a dir.
        if(std::filesystem::exists(*folderName)) {
            std::ofstream myFile(*folderName);

            while(!myFile.eof()) {


            }
        }
        else {
            std::cout << "Wrong folder you gave!";
        }
	}
};

#endif
