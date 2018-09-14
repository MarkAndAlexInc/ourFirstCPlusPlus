//============================================================================
// Name        : main.cpp
// Author      : Alex J & Mark W
// Version     :
// Copyright   : Your copyright notice
// Description : Todo-app in CPP
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;

string sayMyName(string name) {
	cout << "Hello " << name << endl;
	return name;
}

int main() {
	string name;
	cout << "Enter your name: ";
	cin >> name;
	sayMyName(name);
	return 0;
}
