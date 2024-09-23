// astrics.cpp : This file contains the 'main' function. Program execution begins and ends there.
// printing astrics in rows and columns

#include <iostream>
using namespace std;
int main()
{
	int row;
	cout << "Enter the number of rows: ";
	cin >> row;
	for (int i = 0; i <= row; i++) {
	
		for (int j = 0; j < i; j++) {
			cout << "*";
	
		}
		cout << endl;
	}
	return 0;
}

