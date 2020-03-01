//Mbaliyethemba Shangase
//2 March 2020
//VolImage class for Assignment 2

#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include "VolImage.h"

using namespace std;

int main(int argc, char** argv){
	if(argc < 2){
		cout<<"Enter at least 2 parameters"<<endl;
		return 0;
	}
	
	SHNMBA004::VolImage * vol = new SHNMBA004::VolImage();
	string basename(argv[1]);
	if(vol->readImages(basename)){
		cout<<"Number of images: "<<vol->volSize()<<endl;
		cout<<"Number of bytes required: "<<vol->volImageSize()<<endl;
	}
	else{
		cout << "File load failed" <<endl;
	}

	
	if(argc > 5){
		if(string(argv[2]).compare("-d") == 0){
			vol-> diffmap(stoi(string(argv[3])), stoi(string(argv[4])), string(argv[5]));
			cout << "Performed a difference map of images" << endl;
	}
		else{
			cout << "Incorrect argument. Re enter arguments"<<endl;
		}
	}
	
	else if(argc == 5){
		if(string(argv[2]).compare("-x") == 0){
			vol->extract(stoi(string(argv[3])), string(argv[4]));
			cout << "Performed extraction of slice"<<endl;
		}
		else if(string(argv[2]).compare("-g")==0){
			vol->extractRow(stoi(string(argv[3])), string(argv[4]));
			cout << "Performed extraction of row"<<endl;
		}
		else{
			cout << "Incorrect argument. Re enter arguments"<<endl;
		}
	}
	
	else if(argc != 2){
		cout<<"Enter correct format of commands"<<endl;
	}
	return 0;
}
