// Cource 5 Project Stone_Paper_Scissor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string> 
#include<cstdlib>
using namespace std;

enum enWinner { Player1 = 1 ,Computer = 2  ,Draw = 3};
enum enGameChoice { Stone = 1 , Paper = 2 , Scissors = 3};

short ReadHowManyRounds()
{
    short GameRounds = 1;
    do {
        cout << "How Many Rounds Do you Want Play 1 To 10 : " << endl;
        cin >> GameRounds;
    } while (GameRounds < 1 || GameRounds > 10);

    return GameRounds;
}

int RandomNumbers(int From, int To) {
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}


struct stGameResult {
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short Computer2WinTimes = 0;
    short DrawTimes = 0;

    enWinner GameWinner;
    string WinnerName = "";


};

struct stRoundInfo {
    short RoundNumber;
    enGameChoice Player1Choise;
    enGameChoice ComputerChoise;
    enWinner Winner;
    string WinnerName;
};

string WinnerName(enWinner Winner) {

    string arrWinnerName[3] = { "Player1 ", "Cpmputer" ,"No Winner"};
    return arrWinnerName[Winner - 1];
    
}

string ChoiseName(enGameChoice GameChoice) {
    string arrGameChoice[3] = {"Stone" ,"Paper" ,"Scissors"};
    return arrGameChoice[GameChoice - 1];
}

enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes) {
    if (Player1WinTimes > ComputerWinTimes)
        return enWinner::Player1;
    else if (Player1WinTimes > ComputerWinTimes)
        return enWinner::Computer;
    else
        return enWinner::Draw;
}

void PrintRoundResult(stRoundInfo RoundInfo) {
    cout << "\n----------Round [" << RoundInfo.RoundNumber << "] ----------\n\n";
    cout << "Player Choise :" << ChoiseName(RoundInfo.Player1Choise)<<endl;
    cout << "Computer Choise :" << ChoiseName(RoundInfo.ComputerChoise) << endl;
    cout << "Round Winner : [" << RoundInfo.WinnerName << "]" << endl;
    cout << "------------------------------------\n";



}

enGameChoice ReadPlayer1Choise() {
    short Choise = 1;

    do
    {
        cout << "Pleace Choise [1]Stone ,[2]Paper ,[3]Scissors:\n";
        cin >> Choise;

    } while (Choise < 1 || Choise >3);
    return (enGameChoice)Choise;
}

enGameChoice GetComputerChois()
{
    short RandomNum = RandomNumbers(1, 3);
    return (enGameChoice)RandomNum;
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo) {

    if (RoundInfo.Player1Choise == RoundInfo.ComputerChoise)
    {
        return enWinner::Draw;
    }
    switch (RoundInfo.Player1Choise)
    {
    case enGameChoice::Stone:
        if (RoundInfo.ComputerChoise == enGameChoice::Paper)
        {
            return enWinner::Computer;
        }
        break;
    case enGameChoice::Paper:
        if (RoundInfo.ComputerChoise == enGameChoice::Scissors)
        {
            return enWinner::Computer;
        }
        break;

    case enGameChoice::Scissors:
        if (RoundInfo.ComputerChoise == enGameChoice::Stone)
        {
            return enWinner::Computer;
        }
        break;
    }

    return enWinner::Player1;



}


stGameResult FillGameResult(short GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes) {

    stGameResult GameResults;

    GameResults.GameRounds = GameRounds;
    GameResults.Player1WinTimes = Player1WinTimes;
    GameResults.Computer2WinTimes = ComputerWinTimes;
    GameResults.DrawTimes = DrawTimes;
    GameResults.GameWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes);
    GameResults.WinnerName = WinnerName(GameResults.GameWinner);

}

stGameResult PlayGame(short HowManyRounds) {

    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
    {
        cout << "\nRound [" << GameRound << "] begines: " << endl;
        RoundInfo.Player1Choise = ReadPlayer1Choise();
        RoundInfo.ComputerChoise = GetComputerChois();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Player1)
            Player1WinTimes++;
        else if (RoundInfo.Winner == enWinner::Computer)
            ComputerWinTimes++;
        else
            DrawTimes++;

        PrintRoundResult(RoundInfo);

    }
    return FillGameResult(HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes);
}

string Tabs(short NumberOfTabs) {
    string t = "";
    for (size_t i = 0; i < NumberOfTabs; i++)
    {
        t = t + "\t";
    }
    return t;
}

void SetWinnerScreenColor(enWinner Winner) {
    switch (Winner)
    {
    case Player1:
        system("Color 2F"); //Trun screen to green
        break;
    case Computer:
        system("Color 4F");
        cout << "\a";
        break;
    case Draw:
        system("Color 6F");
        break;
    }

}

void ShowGameOverScreen() {

    cout <<Tabs(2)<< "----------------------------------------------------------------------\n\n";
    cout << Tabs(2) << "                    +++G a m e  O v e r ++++\n";
    cout << Tabs(2) << "--------------------------------------------------------------------\n\n";
}

void ResetScreen() {
    system("cls");
    system("color 0F");
}

void ShowFinalGameResults(stGameResult GameResult) {

    cout << Tabs(2) << "--------------------------Game Result--------------------------\n\n";
    cout << Tabs(2) << "Game Rounds                : " << GameResult.GameRounds << endl;
    cout << Tabs(2) << "Player Won Times           : " << GameResult.Player1WinTimes << endl;
    cout << Tabs(2) << "Computer Won Times         : " << GameResult.Computer2WinTimes << endl;
    cout << Tabs(2) << "Draw Times                 : " << GameResult.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner               : " << GameResult.WinnerName << endl;
    cout << Tabs(2) << "--------------------------------------------------------------------\n\n";
    SetWinnerScreenColor(GameResult.GameWinner);
}

void StartGame() {
    char PlayAgine = 'Y';
    do
    {
        ResetScreen();
        stGameResult GameResult = PlayGame(ReadHowManyRounds());
        ShowGameOverScreen();
        ShowFinalGameResults(GameResult);

        cout <<endl <<Tabs(3) << "Do You Want Play Again Y/N ? ";
        cin >> PlayAgine;


    } while (PlayAgine == 'y' || PlayAgine == 'Y');
}

int main() {
    srand((unsigned)time(NULL));
    StartGame();

}