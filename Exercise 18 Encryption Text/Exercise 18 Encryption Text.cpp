// Exercise 18 Encryption Text.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

string ReadString(){
    string text;
    cout << "Plase enter The Text" << endl;
    getline(cin, text);
    return text;
}
string EncryptionText(string text , short EncryptionKey){

    for (int i = 0; i < text.length(); i++)
    {
        text[i] = char((int)text[i] + EncryptionKey);
    }
    return text;

}
string DecryptionText(string text, short EncryptionKey) {

    for (int i = 0; i < text.length(); i++)
    {
        text[i] = char((int)text[i] - EncryptionKey);
    }
    return text;

}


int main()
{
    const char EncKey=2;
    string text = ReadString();
    cout<<"The Text Before Encryption is :" << text <<endl;
    cout << "The Text After Encryption is :" << EncryptionText(text, EncKey) << endl;
    cout << "The Text After Decryption is :" << DecryptionText(EncryptionText(text, EncKey), EncKey) << endl;


    


}
