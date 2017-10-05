/*
Daniel Honrales, Michael Rice
Three Digit Ascend Descend Solution
Takes in a three digit number and determines if the digits are ascending or descending
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}



void main() {
	int x, a, b, c;
	cout << "Please enter a three digit number: " << endl;
	cin >> x;

	c = x % 100 % 10;
	x = x / 10;
	b = x % 10;
	a = x / 10;
	
	if (a < b && b < c) {
		cout << "The digits are ascending!" << endl;
	} else if (a > b && b > c) {
		cout << "The digits are descending!" << endl;
	} else {
		cout << "The digits are neither ascending nor descending!" << endl;
	}
	
	pause();

}