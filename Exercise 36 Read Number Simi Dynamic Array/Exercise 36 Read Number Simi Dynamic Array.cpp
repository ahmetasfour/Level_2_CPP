// Exercise 36 Read Number Simi Dynamic Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}
int Readbool()
{
	bool YorN = 0;
	cout << "Do You Want Add Number input : Yes(1) Or No(0) :" << endl;
	cin >> YorN;

	return YorN;
}
void ReadArray(int Array[100], int& ArrayLength) {
	bool yesOrNo;
	for (int i = 0; i < ArrayLength; i++)
	{
		Array[i] = ReadNumber("plase enter the element : ");
		cout << "do you want add number To array: ";
		if (Readbool()==true)
		{
			ArrayLength++;
		}
	}

}

void display_array(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << "[" << i + 1 << "]" << Array[i] << "\n";
	}
	cout << endl;
}

int main()
{
	int ArrayLength = 1;
	int Array[100];
	ReadArray(Array, ArrayLength);
	bool yorno = Readbool();
	display_array(Array, ArrayLength);
}
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int ReadNumber(string Message)
{
	int Number = 0;
	do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

void AddArrayElement(int Number, int Array[100], int& ArrayLength) {

	ArrayLength++;
	
	Array[ArrayLength-1] = Number;

}

void InputUserNumberInArray(int Array[100] ,int& ArrayLength)
{
	bool AddMore = true;
	do
	{
		AddArrayElement(ReadNumber("plase enter the element : "), Array, ArrayLength);
	    cout << "Do You Want Add Number input : Yes(1) Or No(0) :" << endl;
		cin >> AddMore;
		
	} while (AddMore);
}

void display_array(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout  << Array[i] << "  ";
	}
	cout << endl;
}


int main()
{
	int ArrayLength = 0;
	int Array[100];
	InputUserNumberInArray(Array, ArrayLength);
	display_array(Array, ArrayLength);
	
}
