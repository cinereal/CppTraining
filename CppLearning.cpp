// CppLearning.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

void modifyPerson(Person *person) {
	person->SetName("NewName");
}

void passByValue(int num) {
	cout << "function PassByValue()" << endl;
	num += 1;
	cout << "num is now: " << num << endl;
}

void passByRef(int &num) {
	cout << "function PassByRef()" << endl;
	num = 50;
	cout << "num is now: " << num << endl;
}

int main()
{
    //std::cout << "Hello World!\n";
	//std::cout << "Hello World" << std::endl;
	// to wait for user input
	//std::cin.get();

	// Intrinsic and Reference

	int num1 = 3;
	int num = 1;
	int *pNum = &num;

	cout << "num1 is: " << num1 << endl;
	cout << "num is: " << num << endl;
	cout << "pNum is: " << *pNum << endl;

	*pNum = 5;

	cout << "num is now: " << num << endl;

	passByValue(num1);

	cout << "num1 is now: " << num1 << endl;

	passByRef(*pNum);

	cout << "pNum is now: " << *pNum << endl;

	passByValue(*pNum);

	cout << "pNum is now: " << *pNum << endl;

	// Pointer

	// Memory allocation
	double *pDouble = new double;
	*pDouble = 5.0;
	cout << "pDouble is: " << *pDouble << endl;

	double *x = new double;
	*x = 10.0;
	cout << "x is: " << x << endl;

	// Dereference
	*pDouble = *x;

	cout << "pDouble is now: " << *pDouble << endl;

	// Deallocate
	//delete pDouble;

	//cout << "pDouble is now: " << *pDouble << endl;

	double *pDouble1 = new double;
	*pDouble1 = 7.0;
	delete pDouble1;

	//cout << "x is now: " << x << endl;

	Person *person = new Person("BlaBla", 29, 1.80, 85);
	cout << "Person name is: " << person->GetName() << endl;
	modifyPerson(person);
	cout << "Person name is now: " << person->GetName() << endl;
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
