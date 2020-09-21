#include <iostream>

using namespace std;

int main(int argc, char** args) {
	
	string inputVideo = "";
	int pixelSize = 1;
	string outputFileName = "";

	for (int i = 1; i < argc; i++) {
		string arg = args[i];
		if (arg == "-v") {
			//Set video input file
			inputVideo = args[++i];
		}
		else if (arg == "-o") {
			outputFileName = args[++i];
		}
	}

	return 0;
}