// Exercise 21 Repeated Elements Count in Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <-1);

    return Number;
}

int Read_array(int array[], int size) { //Void ReadArray(int Array[100] , int& ArrayLength)
    int i;
    for (i = 0; i < size; i++) {//i<ArrayLength;
        cout << "Enter[" << i + 1 << "]: Array Size ";
        cin >> array[i];
    }
    return array[i];

}

void display_array(int array[], int size) {//display_array (int Array[100] , int ArrayLength)
    // Optionally, display the array elements
    cout << "\nOrginal Array : ";
    for (int i = 0; i < size; i++) {//i<ArrayLength;
        cout << array[i] << "  ";
    }
    cout << endl;
}

void RepeatedElements(int array[], int size, int Repeated) { //RepeatedElements(int Array[100] , int ArrayLength)
    int count = 0;
        for (int i = 0; i < size; i++) {//i<ArrayLength
            if (array[i]==Repeated)
            {
                count++;

            }
        }

        cout << "Number :"<<Repeated<<" is Repeated "<< count <<": Times";
    }
int main()
{
    int size;
    cout << "Array Size: "<<endl;
    cin >> size;
    // Dynamic memory allocation for array
    int* array = new int[size];                                              //int arr[100], arrLength, NumberToCheck;  
                                                                              // ReadArray(arr, arrLength);
    // Reading array elements
    Read_array(array, size);
    // writing array elements
    display_array(array, size);
    int RepeatN = ReadPositiveNumber(" Enter The Number You Want To Chack\n");

    // avrage array elements
    RepeatedElements(array, size,RepeatN);
    // Free the allocated memory
    delete[] array;

    return 0;
}

