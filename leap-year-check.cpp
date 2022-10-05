#include<iostream>
#include<conio.h>

using namespace std;



int main()
{

int year;
cout << "Leap Year Find Out Program" << endl;
cout << "Enter Year";
cin >> year;



if(year%4 == 0 && year%100 != 0){
    cout << "Leap Year";
}else if(year%400 == 0){
    cout << "Leap Year";
}else {
    cout << "Not Leap Year";
}


    getch();
}
