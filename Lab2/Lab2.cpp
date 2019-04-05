// Lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Time.h"

using namespace std;

int main()
{
	Time t1(24, 0, 0), t2;

	t2.setHours(4);
	t2.setMins(4);
	t2.setSecs(20);

	cout << "t1: ";
	t1.print();
	cout << endl;
	cout << "t2: ";
	t2.print();
	cout << endl;

	if (t1 > t2) {
		cout << "t1 is greater than t2" << endl;
	}
	else if (t2 > t1) {
		cout << "t2 is greater than t1" << endl;
	}
	else if (t2 == t1) {
		cout << "t1 and t2 are equal" << endl;
	}

	cout << "t1 - t2: ";
	(t1 - t2).print(); cout << endl;
	cout << "t1 + t2: ";
	(t1 + t2).print(); cout << endl;

	Time t3;
	t3 = t1 + t2;
	t3.print();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
