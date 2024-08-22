// Exercise 40 Print Dictinct Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void FillArray(int Array[100], int& ArrayLength) {

	Array[0] = 10;
	Array[1] = 10;
	Array[2] = 10;
	Array[3] = 50;
	Array[4] = 50;
	Array[5] = 70;
	Array[6] = 70;
	Array[7] = 70;
	Array[8] = 70;
	Array[9] = 90;
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength) {

	for (int i = 0; i < arrLength; i++) {
		if (arr[i] == Number)
			return i;
		//return the index    //if you reached here, this means the number is not found
	}
	return -1;

}

bool IsNumberInArray(int Number, int arr[100], int arrLength) {

	return FindNumberPositionInArray(Number, arr,arrLength) != -1;
}


void AddArrayElement(int Number, int Array[100], int& ArrayLength) {

	ArrayLength++;

	Array[ArrayLength - 1] = Number;

}

void CopyDistinctNumbersToArray(int Array[100], int ArrayDistanaion[100], int ArrayLength , int& arrDestinationLength) {

	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		if (!IsNumberInArray(Array[i], ArrayDistanaion, arrDestinationLength))
		{
			
			AddArrayElement(Array[i], ArrayDistanaion, arrDestinationLength);
		}
	}
}

void PrintArray(int Array[100], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
	// Optionally, display the array elements
	
	for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
		cout << "[" << i + 1 << "]" << Array[i] << "\n";
	}
	cout << endl;
}


int main(){
	int ArrayLength = 10, ArrayLength2 = 0;
	int Array2[100];
	int Array[100];
	FillArray(Array, ArrayLength);
	cout << "\nArray 1 elements:\n";
	PrintArray(Array, ArrayLength);
	CopyDistinctNumbersToArray(Array, Array2, ArrayLength, ArrayLength2);
	cout << "\nArray 2 distinct elements:\n";     
	PrintArray(Array2, ArrayLength2);



}




