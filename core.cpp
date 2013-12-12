// Zywxn's Hexadecimal Converter v0.1 alpha
// Programmer: Ryan Fung aka "Zywxn"
// Date: 2011-06-13
#include <iostream>
#include <string>
using namespace std;
int main() { // preamble
	cout << "Zywxn's Hexadecimal Converter v0.1 alpha" << endl;
	bool loop = true; // check if program loop should continue
	char input;
	string hex = "";
	int dec = 0, temp = 0;
	while (loop) {
		cout << endl << "Choose an option:" << endl << "1: Convert Hexadecimal to Decimal" << endl << "2: Convert Decimal to Hexadecimal" << endl << "3: Exit" << endl;
		cin >> input;
		if (input=='1') { // Hex to Dec
			// prepare for processing text
			bool MoreLinesToProcess = true;
			while (MoreLinesToProcess) {
				// process next line
				bool MoreCharactersOnCurrentLine = true;
				cout << "--------------------------------------------------" << endl << "Input hexadecimal number: ";
				while (MoreCharactersOnCurrentLine) {
					// prepare to process next character
					char CurrentCharacter;
					if (cin.get(CurrentCharacter)) {
						// process CurrentCharacter on current line
						if (CurrentCharacter == '\n') {
							// current line has no more characters
							MoreCharactersOnCurrentLine = false;
						}
						else if (
							((CurrentCharacter >= '0') && (CurrentCharacter <= '9')) || // Check if its 0-9
							((CurrentCharacter >= 'A') && (CurrentCharacter <= 'F')) ) { // Check if its A-F
								if ((CurrentCharacter >= '0') && (CurrentCharacter <= '9')) {dec = (dec * 16) + CurrentCharacter - 48;}
								if ((CurrentCharacter >= 'A') && (CurrentCharacter <= 'F')) {
									if(CurrentCharacter == 'A') {temp = 10;}
									if(CurrentCharacter == 'B') {temp = 11;}
									if(CurrentCharacter == 'C') {temp = 12;}
									if(CurrentCharacter == 'D') {temp = 13;}
									if(CurrentCharacter == 'E') {temp = 14;}
									if(CurrentCharacter == 'F') {temp = 15;}
									dec = (dec * 16) + temp;
								}
						}
						cout << endl << "Decimal Equivalent: " << dec << endl;
					}
					else { //no more characters
						MoreCharactersOnCurrentLine = false;
						MoreLinesToProcess = false;
					}
				}
				//finish processing of current line
				dec = 0;
			}
			// finish overall processing
		}
		if (input=='2') { // Dec to Hex
			cout << "This function is not available yet." << endl;
		}
		if (input=='3') {loop = false;} // Exit
	}
	return 0;
}