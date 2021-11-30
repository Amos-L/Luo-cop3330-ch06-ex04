/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Amos Luo
 */

#include "std_lib_facilities.h"

class Name_value {
public:
	string name;
	int value;
};

int main() {
	
	string name;
	int value;
	vector<Name_value> inputs;
	int x = 1;

	do{
		cout << "Enter name and value seperated by a space: ";
		cin >> name >> value;

		Name_value input;
		input.name = name;
		input.value = value;

		//Constantly checking for duplicate
		for (int i = 0; i < inputs.size(); i++) {
			if (inputs.at(i).name == input.name) {
				cout << "Name has already been entered.\n";
				inputs.clear();
			}
		}
		inputs.push_back(input);

		//Getting rid of "NoName" input from vector
		if (name == "NoName" && value == 0) {
			inputs.pop_back();
		}

	} while (name != "NoName" && value != 0);

	//Printing everything inputted
	for (int i = 0; i < inputs.size(); i++) {
		cout << inputs.at(i).name << " " << inputs.at(i).value << "\n";
		}
	}
