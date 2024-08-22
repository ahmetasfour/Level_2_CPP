// C++ Game Project Stone Paper Scissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

short ReadHowManyRounds() {
    short GameRounds = 1;
    do {
        cout << "How Many Rounds Do you Want to Play (1 To 10): ";
        cin >> GameRounds;
    } while (GameRounds < 1 || GameRounds > 10);

    return GameRounds;
}

enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };
enum enGameChoice { Stone = 1, Paper = 2, Scissors = 3 };

int RandomNumbers(int From, int To) {
    return rand() % (To - From + 1) + From;
}

enGameChoice ReadPlayer1Choice() {
    short Choice = 1;

    do {
        cout << "Please Choose [1]Stone, [2]Paper, [3]Scissors: ";
        cin >> Choice;
    } while (Choice < 1 || Choice > 3);

    return static_cast<enGameChoice>(Choice);
}

enGameChoice GetComputerChoice() {
    short RandomNum = RandomNumbers(1, 3);
    return static_cast<enGameChoice>(RandomNum);
}

struct stGameResult {
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short ComputerWinTimes = 0;
    short DrawTimes = 0;

    enWinner GameWinner;
    string WinnerName = "";
};

struct stRoundInfo {
    short RoundNumber;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
};

enWinner WhoWonTheRound(const stRoundInfo& RoundInfo) {
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice) {
        return enWinner::Draw;
    }
    switch (RoundInfo.Player1Choice) {
    case enGameChoice::Stone:
        return (RoundInfo.ComputerChoice == enGameChoice::Paper) ? enWinner::Computer : enWinner::Player1;
    case enGameChoice::Paper:
        return (RoundInfo.ComputerChoice == enGameChoice::Scissors) ? enWinner::Computer : enWinner::Player1;
    case enGameChoice::Scissors:
        return (RoundInfo.ComputerChoice == enGameChoice::Stone) ? enWinner::Computer : enWinner::Player1;
    }
    return enWinner::Draw;  // Should never reach here
}

string WinnerName(enWinner Winner) {
    string arrWinnerName[3] = { "Player1", "Computer", "Draw" };
    return arrWinnerName[Winner - 1];
}

string ChoiceName(enGameChoice GameChoice) {
    string arrGameChoice[3] = { "Stone", "Paper", "Scissors" };
    return arrGameChoice[GameChoice - 1];
}

enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes) {
    if (Player1WinTimes > ComputerWinTimes) {
        return enWinner::Player1;
    }
    else if (ComputerWinTimes > Player1WinTimes) {
        return enWinner::Computer;
    }
    else {
        return enWinner::Draw;
    }
}

void PrintRoundResult(const stRoundInfo& RoundInfo) {
    cout << "\n----------Round [" << RoundInfo.RoundNumber << "] ----------\n\n";
    cout << "Player Choice   : " << ChoiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice : " << ChoiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner    : [" << RoundInfo.WinnerName << "]" << endl;
    cout << "------------------------------------\n";
}

stGameResult FillGameResult(short GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes) {
    stGameResult GameResults;

    GameResults.GameRounds = GameRounds;
    GameResults.Player1WinTimes = Player1WinTimes;
    GameResults.ComputerWinTimes = ComputerWinTimes;
    GameResults.DrawTimes = DrawTimes;
    GameResults.GameWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes);
    GameResults.WinnerName = WinnerName(GameResults.GameWinner);

    return GameResults;
}

stGameResult PlayGame(short HowManyRounds) {
    stRoundInfo RoundInfo;
    short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

    for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++) {
        cout << "\nRound [" << GameRound << "] begins: " << endl;
        RoundInfo.Player1Choice = ReadPlayer1Choice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Player1) {
            system("Color 2F"); // Turn screen to green
            Player1WinTimes++;
        }
        else if (RoundInfo.Winner == enWinner::Computer) {
            system("Color 4F");
            cout << "\a";
            ComputerWinTimes++;
        }
        else {
            system("Color 6F");
            DrawTimes++;
        }

        PrintRoundResult(RoundInfo);
    }
    return FillGameResult(HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes);
}

string Tabs(short NumberOfTabs) {
    return string(NumberOfTabs, '\t');
}

void SetWinnerScreenColor(enWinner Winner) {
    switch (Winner) {
    case Player1:
        system("Color 2F"); // Turn screen to green
        break;
    case Computer:
        system("Color 4F");
        cout << "\a"; // Beep sound
        break;
    case Draw:
        system("Color 6F");
        break;
    }
}

void ShowGameOverScreen() {
    cout << Tabs(2) << "----------------------------------------------------------------------\n\n";
    cout << Tabs(2) << "                    +++ Game Over +++\n";
    cout << Tabs(2) << "--------------------------------------------------------------------\n\n";
}

void ResetScreen() {
    system("cls");
    system("color 0F");
}

void ShowFinalGameResults(const stGameResult& GameResult) {
    cout << Tabs(2) << "-------------------------- Game Result --------------------------\n\n";
    cout << Tabs(2) << "Game Rounds                : " << GameResult.GameRounds << endl;
    cout << Tabs(2) << "Player Won Times           : " << GameResult.Player1WinTimes << endl;
    cout << Tabs(2) << "Computer Won Times         : " << GameResult.ComputerWinTimes << endl;
    cout << Tabs(2) << "Draw Times                 : " << GameResult.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner               : " << GameResult.WinnerName << endl;
    cout << Tabs(2) << "--------------------------------------------------------------------\n\n";
    SetWinnerScreenColor(GameResult.GameWinner);
}

void StartGame() {
    char PlayAgain = 'Y';
    do {
        ResetScreen();
        stGameResult GameResult = PlayGame(ReadHowManyRounds());
        ShowGameOverScreen();
        ShowFinalGameResults(GameResult);

        cout << endl << Tabs(3) << "Do You Want to Play Again (Y/N)? ";
        cin >> PlayAgain;

    } while (PlayAgain == 'y' || PlayAgain == 'Y');
}

int main() {
    srand(static_cast<unsigned>(time(NULL)));
    StartGame();
}
