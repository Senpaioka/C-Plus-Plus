#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;


int main()
{
while(1)
{
    int guessNumber, randomNumber;
    cout << "Enter your guess number between 1 to 5" << endl;
    cin >> guessNumber;

    randomNumber = rand()%5+1;

    if(guessNumber == randomNumber){
    cout << "Your Guess is Correct" << endl;
    }else{
    cout << "Your Guess is Incorrect" << endl;
    cout << "Random Number was : " << randomNumber << endl;
    }
}

    getch();
}

