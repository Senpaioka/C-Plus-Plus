#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

char ch;
cout << "Vowel & Consonant Checker With switch" << endl;
cout << "Enter a Letter ...";
cin >> ch;
ch = tolower(ch);


switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    cout << "This is a Vowel";
    break;

default :
    cout << "This is a Consonant";

}
    getch();
}
