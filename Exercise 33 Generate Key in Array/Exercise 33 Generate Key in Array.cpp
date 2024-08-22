// Exercise 33 Generate Key in Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int ReadNumberOfKeys(string Message)
{
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

enum enCharType
{
    SmallLetter = 1, CapitalLetter = 2, SpecialCharacter = 3, DigitOrder = 4
};

int RandomNumbers(int From, int To) {
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}

char GetRandoCharcter(enCharType CharType) {
    switch (CharType)
    {
    case SmallLetter:
        return char(RandomNumbers(97, 122));

        break;
    case CapitalLetter:
        return char(RandomNumbers(65, 90));
        break;
    case SpecialCharacter:
        return char(RandomNumbers(33, 47));
        break;
    case DigitOrder:
        return char(RandomNumbers(48, 57));
        break;
    default:
        break;
    }
}

string GenerateWord(enCharType CharType, short Length) {

    string Word = "";
    for (int i = 0; i < Length; i++)
    {
        Word += GetRandoCharcter(CharType);
        //GenerateWord(enCharType::CapitalLetter ,4)
    }
    return Word;
}

string GenerateKey() {
    string key = "";

    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "_";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "_";
    key = key + GenerateWord(enCharType::CapitalLetter, 4) + "_";
    key = key + GenerateWord(enCharType::CapitalLetter, 4);


    return key;
}

void FillTheKeyinArray(string Array[1000], int& ArrayLength) {

    for (int i = 0; i < ArrayLength; i++)
    {
        Array[i] = GenerateKey();

    }
    

}

void PrintArray(string Array[1000], int ArrayLength) {//display_array (int Array[100] , int ArrayLength)
    // Optionally, display the array elements

    cout << "The Array Of Keys : \n";
    for (int i = 0; i < ArrayLength; i++) {//i<ArrayLength;
        cout << "Keys [" << i + 1 << "] :" << Array[i] << "\n";
    }
    cout << endl;
}


int main()
{
    cout << "\033[32m";
    int ArrayLength= ReadNumberOfKeys("How Many Key Do you Want Generate: ");
    string Array[1000];
    
    FillTheKeyinArray(Array, ArrayLength);
    PrintArray(Array, ArrayLength);
    return 0;
    

}
