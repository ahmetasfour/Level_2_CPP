// Execise 21 Generate Keys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*#include <iostream>
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
int RandomNumbers(int From, int To) {
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}
string GenareteKeys() {
    char KeyPart1=char(RandomNumbers(65, 90));
    char KeyPart2=char(RandomNumbers(65, 90));
    char KeyPart3=char(RandomNumbers(65, 90));
    char KeyPart4=char(RandomNumbers(65, 90));
    string Key;
    Key += KeyPart1;
    Key += KeyPart2;
    Key += KeyPart3;
    Key += KeyPart4;
    return Key;
}
void PrintGenaretedKeys(string Key , int Number) {
    for (int i = 0; i < Number; i++)
    {
        cout << "\033[32m";

        cout << "Key[" << i +1 << "] : " << GenareteKeys() <<"_" << GenareteKeys() << "_" << GenareteKeys() << "_" << GenareteKeys() << endl;

    }

}
int main()
{
    srand((unsigned)time(NULL));
    PrintGenaretedKeys(GenareteKeys(), ReadNumberOfKeys("Enter How Many Do you Want Genarete: "));
}
*/

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
    
      key =key + GenerateWord(enCharType::CapitalLetter, 4)+"_";
      key = key + GenerateWord(enCharType::CapitalLetter, 4) + "_";
      key = key + GenerateWord(enCharType::CapitalLetter, 4) + "_";
      key = key + GenerateWord(enCharType::CapitalLetter, 4);

    
    return key;
}

void GenerateKeys(int Number) {

    for (int i = 0; i < Number; i++)
    {

        cout << "\033[32m";

        cout << "Key[" << i + 1 << "] : " << GenerateKey() << endl;
    }

}


int main()
{
    srand((unsigned)time(NULL));
    
    GenerateKeys(ReadNumberOfKeys("Enter How Many Do you Want Genarete: "));
}
