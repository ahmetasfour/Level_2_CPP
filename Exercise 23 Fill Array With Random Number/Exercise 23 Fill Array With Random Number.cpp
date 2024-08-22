// Exercise 23 Fill Array With Random Number.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int RandomNumbers(int From, int To) {
	int RandNumber = rand() % (To - From + 1) + From;
	return RandNumber;
}

void ReadArray(int Array[100], int& ArrayLength) {
	int i;
	cout << "Array Size: " << endl;
	cin >> ArrayLength;
	;
	for (i = 0; i < ArrayLength; i++)
	{
		Array[i] = RandomNumbers(1 ,100);
	
	}
    
}

void display_array(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	cout << "\Random File Array : \n";
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << "[" << i+1 << "]" << Array[i] << "\n";
	}
	cout << endl;
}

int main()
{
	int ArrayLength;
	int Array[100];
	srand((unsigned)time(NULL));
	ReadArray(Array , ArrayLength);
	display_array(Array, ArrayLength);
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
