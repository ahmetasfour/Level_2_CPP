// Exercise 17  GuessPassword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*Guss 3 latters password enter 3 latters
AFA
Trail [1]AAA
Trail [2]AAB
Trail [3]AAC
Trail [4]AAD
Trail [5]AAE
Trail [6]AAF
Trail [7]AAG
Trail [8]AAH
Trail [9]AAI
Trail [10]AAJ
Trail [11]AAK
Trail [12]AAL
Trail [13]AAM
Trail [14]AAN
Trail [15]AAO
Trail [16]AAP
Trail [17]AAQ
Trail [18]AAR
Trail [19]AAS
Trail [20]AAT
Trail [21]AAU
Trail [22]AAV
Trail [23]AAW
Trail [24]AAX
Trail [25]AAY
Trail [26]AAZ
Trail [27]ABA
Trail [28]ABB
Trail [29]ABC
Trail [30]ABD
Trail [31]ABE
Trail [32]ABF
Trail [33]ABG
Trail [34]ABH
Trail [35]ABI
Trail [36]ABJ
Trail [37]ABK
Trail [38]ABL
Trail [39]ABM
Trail [40]ABN
Trail [41]ABO
Trail [42]ABP
Trail [43]ABQ
Trail [44]ABR
Trail [45]ABS
Trail [46]ABT
Trail [47]ABU
Trail [48]ABV
Trail [49]ABW
Trail [50]ABX
Trail [51]ABY
Trail [52]ABZ
Trail [53]ACA
Trail [54]ACB
Trail [55]ACC
Trail [56]ACD
Trail [57]ACE
Trail [58]ACF
Trail [59]ACG
Trail [60]ACH
Trail [61]ACI
Trail [62]ACJ
Trail [63]ACK
Trail [64]ACL
Trail [65]ACM
Trail [66]ACN
Trail [67]ACO
Trail [68]ACP
Trail [69]ACQ
Trail [70]ACR
Trail [71]ACS
Trail [72]ACT
Trail [73]ACU
Trail [74]ACV
Trail [75]ACW
Trail [76]ACX
Trail [77]ACY
Trail [78]ACZ
Trail [79]ADA
Trail [80]ADB
Trail [81]ADC
Trail [82]ADD
Trail [83]ADE
Trail [84]ADF
Trail [85]ADG
Trail [86]ADH
Trail [87]ADI
Trail [88]ADJ
Trail [89]ADK
Trail [90]ADL
Trail [91]ADM
Trail [92]ADN
Trail [93]ADO
Trail [94]ADP
Trail [95]ADQ
Trail [96]ADR
Trail [97]ADS
Trail [98]ADT
Trail [99]ADU
Trail [100]ADV
Trail [101]ADW
Trail [102]ADX
Trail [103]ADY
Trail [104]ADZ
Trail [105]AEA
Trail [106]AEB
Trail [107]AEC
Trail [108]AED
Trail [109]AEE
Trail [110]AEF
Trail [111]AEG
Trail [112]AEH
Trail [113]AEI
Trail [114]AEJ
Trail [115]AEK
Trail [116]AEL
Trail [117]AEM
Trail [118]AEN
Trail [119]AEO
Trail [120]AEP
Trail [121]AEQ
Trail [122]AER
Trail [123]AES
Trail [124]AET
Trail [125]AEU
Trail [126]AEV
Trail [127]AEW
Trail [128]AEX
Trail [129]AEY
Trail [130]AEZ
Trail [131]AFA

 The password is : AFA
 Found After : [131] Trail*/

#include <iostream>
using namespace std;

string Read3LettersString(string Message)
{
    string Word = "";
    do {
        cout << Message << endl;
        cin >> Word;
    } while (Word.length() != 3);

    return Word;
}


bool GuessPassword(string inputWord) {
    cout << "\033[32mBu kırmızı metindir";
    string word = "";
    int counterolasilik = 0;

    for (int i = 65; i <= 90; i++)//
    {
        for (int j = 65; j <= 90; j++)//
        {
            for (int k = 65; k <= 90; k++)//
            {
                
                    counterolasilik++;
                    word += char(i);
                    word += char(j);
                    word += char(k);
                    cout << "Trail [" << counterolasilik << "]" << word << endl;


                    if (inputWord == word ){
                        cout << "\n The password is : " << word << endl;
                        cout << " Found After : [" << counterolasilik<<"] Trail" << endl;

                        return true;
                    }

                    word = "";


            }

        }



    }
    return false;
}

int main()
{
    GuessPassword(Read3LettersString("Guss 3 latters password enter 3 latters"));
    
}
