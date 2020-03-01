//Mbaliyethemba Shangase
//2 March 2019
//VolImage class for Assignment 2

#ifndef _VOLIMAGE_H
#define _VOLIMAGE_H

#include <vector>
#include <string>
#include <cstring>
#include <fstream>

namespace SHNMBA004{
	class VolImage{
	//private members
	private:
		//width and height of image stack
		int width, height, num;
		std::vector<unsigned char**> slices; // data for each slice, in order
		
	public: // public members
		VolImage(); // default constructor - define in .cpp
		~VolImage(); // destructor - define in .cpp file
		
	// populate the object with images in stack and
	//set member variables define in .cpp
	bool readImages(std::string baseName);
	
	// compute difference map and write out; define in .cpp
   void diffmap(int sliceI, int sliceJ, std::string output_prefix);
   
	// extract slice sliceId and write to output - define in .cpp
   void extract(int sliceId, std::string output_prefix);
   
	// number of bytes uses to store image data bytes
	//and pointers (ignore vector<> container, dims etc)
   int volImageSize(void); // define in .cpp
   
   int volSize(void);
   void extractRow(int rowId, std::string output_prefix);
};
}
#endif
