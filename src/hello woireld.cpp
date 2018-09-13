//============================================================================
// Name        : hello.cpp
// Author      : Al
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
using namespace std;





string sayMyName() {
	string myName = "Mark";
	return myName;
}


int main() {
	string myName = sayMyName();

	cout << "The number is " << myName << endl; // prints !!!Hello World!!!
	return 0;
}
