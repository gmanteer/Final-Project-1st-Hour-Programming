#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

class ElementList{
public:
	string info;
	int element;
	int atomicNum;
};

int main(){
	cout << "Grant Polmanteer 1st Hour" << endl;

	int selection = 0;
	cout << "Enter an element's number to get info about that element: ";
	cin >> selection;

	for (int i = 0; i < 118; i++){
		if (selection >= 0 && selection <= 119){
			selection--;
			if (selection == 118){
				continue;
			}
			else{
				cout << "Invalid Selection" << endl;
			}
		}
	}

		switch (selection){
		case 0:
			cout << "" << endl;
			break;
		case 1:
			cout << "Hydrogen (H) - 1.008" << endl;
			break;
		case 2:
			cout << "Helium (He) - 4.0026" << endl;
			break;
		case 3:
			cout << "Gatorade" << endl;
			break;
		case 4:
			cout << "Milky Way" << endl;
			break;
		default:
			cout << "The selection does not exist" << endl;
			break;
		}

		system("pause");
		return 0;
	}