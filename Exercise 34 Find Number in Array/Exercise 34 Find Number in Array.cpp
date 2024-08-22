// Exercise 34 Find Number in Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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

int RandomNumbers(int From, int To) {
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}

void ReadArray(int Array[1000], int ArrayLength) {
	int i;
	for (i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumbers(1, 100);

	}

}

void display_array(int Array[1000], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	cout << "\Random File Array : \n";
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << "[" << i + 1 << "]" << Array[i] << "\n";
	}
	cout << endl;
}

int FindNumberinArray(int Array[1000], int ArrayLength, int arrFindNumber) {

	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		if (Array[i] == arrFindNumber)
		{
			return i;
		}
	}
	return -1;

}

int main()
{
	int ArrayLength = ReadNumber("Enter The size Of Array: ");
	int SearchNumber = ReadNumber("Enter Number For Search ");
	int Array[1000];

	srand((unsigned)time(NULL));
	ReadArray(Array, ArrayLength);
	display_array(Array, ArrayLength);
	int Result = FindNumberinArray(Array, ArrayLength, SearchNumber);

	if (Result!=-1)
	{
		cout <<"The Number Found at posion : " << Result <<endl;
		cout << "The Number Found at order : " << Result +1 << endl;

	}
	else
	{
		cout << "The Number Not Found in Array :( " << endl;

	}


}

