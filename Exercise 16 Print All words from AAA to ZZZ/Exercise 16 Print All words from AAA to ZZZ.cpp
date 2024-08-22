// Exercise 16 Print All words from AAA to ZZZ.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
using namespace std;

void PrintAllWordsFrom_AAA_To_ZZZ() {
    string word = "";
    int counterolasilik = 0;

    for (int i = 65; i <= 90; i++)//
    {
        for (int j = 65; j <= 90; j++)//
        {
            for (int k = 65; k <= 90; k++)//
            {
                word += char(i);
                word += char(j);
                word += char(k);                
                cout << word<<endl;
                counterolasilik++;
                word = "";
            }
            
        }
        
        

    }
    cout << "===============================================" << counterolasilik << "===============================================\n";
}

int main()
{
    PrintAllWordsFrom_AAA_To_ZZZ();
}
