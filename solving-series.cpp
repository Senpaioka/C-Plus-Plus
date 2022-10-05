#include<iostream>
#include<conio.h>
#include<cmath>

using namespace std;



// 1 + 2 + 3 + 4 + ..... + n;

int main()
{


int sum = 0, n;

cout << "Series Sum" << endl;
cout << "Enter the last Number: ";
cin >> n;

for(int i = 1; i <= n; i++){
    sum = sum + i;
}

cout << "Total Sum : " << sum;


getch();
}




// 1 + 2 + 3 + 4 + ..... + n;


int main()

{

int sum = 0, n;

cout << "Sum of Even" << endl;
cout << "Enter the last Number: ";
cin >> n;

for(int i = 2; i <= n; i = i+2){
    sum = sum + i;
}

cout << "Total Sum : " << sum;


getch();
}


// 1 + 3 + 5 + 7 + ..... + n;


int main()
{


int sum = 0, n;

cout << "Sum of Odd Numbers" << endl;
cout << "Enter the last Number: ";
cin >> n;

for(int i = 1; i <= n; i=i+2){
    sum = sum + i;
}

cout << "Total Sum : " << sum;


getch();
}



// 1^2 + 2^2 + 3^2 + 4^2 + ..... + n;


int main()
{


int sum = 0, n;

cout << "Sum of square Numbers" << endl;
cout << "Enter the last Number: ";
cin >> n;

for(int i = 1; i <= n; i=i+1){
    sum = sum + i*i;
}

cout << "Total Sum : " << sum;


getch();
}



// 1^5 + 2^5 + 3^5 + 4^5 + ..... + n;


int main()
{


int sum = 0, n;

cout << "Sum of square Numbers" << endl;
cout << "Enter the last Number: ";
cin >> n;

for(int i = 1; i <= n; i=i+1){
    sum = sum + pow(i, 5);
}

cout << "Total Sum : " << sum;


getch();
}
