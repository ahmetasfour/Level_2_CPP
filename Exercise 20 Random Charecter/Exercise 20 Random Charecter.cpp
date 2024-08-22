// Exercise 20 Random Charecter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//#include <iostream>
/*#include<iostream>
#include<cstdlib>
using namespace std;

int RandomNumbers(int From, int To) {
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;


}
char RandomChars(int i) {

    return char(i);
}

int main()
{
    srand((unsigned)time(NULL));
    cout << "small latters : " << RandomChars(RandomNumbers(96, 120)) << endl;
    cout << "capital latters : " << RandomChars(RandomNumbers(65, 90)) << endl;
    cout << "special character : " << RandomChars(RandomNumbers(1, 60)) << endl;



}*/

#include<iostream>
#include<cstdlib>
using namespace std;
enum enCharType
{SmallLetter=1 , CapitalLetter=2 ,SpecialCharacter=3 ,DigitOrder=4};
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


int main()
{
    int tims=0;
    srand((unsigned)time(NULL));
    while (tims <100)
    {
        tims++;
        cout << "capital latters : " << GetRandoCharcter(enCharType::CapitalLetter) << endl;
        cout << "small latters : " << GetRandoCharcter(enCharType::SmallLetter) << endl;
        cout << "Special charcter : " << GetRandoCharcter(enCharType::SpecialCharacter) << endl;
        cout << "Digit Order latters : " << GetRandoCharcter(enCharType::DigitOrder) << endl;
        cout << "==================================================================== : " <<tims<< "==================================================================== : " << endl;

    }







}