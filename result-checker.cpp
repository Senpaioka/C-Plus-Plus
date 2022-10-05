#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

int mark;
cout << "Grade Checker !" << endl;
cout << "Enter Your Marks : ";
cin >> mark;



if(mark > 100 || mark < 0){
    cout << "Invalid Mark ! ";
}else if(mark >= 80){
    cout << "You Got A+ ";
}else if(mark >= 70){
    cout << "You Got A ";
}else if(mark >= 60){
    cout << "You Got A- ";
}else if(mark >= 50){
    cout << "You Got B ";
}else if(mark >= 40){
    cout << "You Got C ";
}else if(mark >= 33){
    cout << "You Got D ";
}else if(mark <= 32){
    cout << "You Failed ";
}
    getch();
}
