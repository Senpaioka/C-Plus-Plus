#include<iostream>
#include<conio.h>

using namespace std;


int main()
{

double base, height, area;

cout << "Enter Base : ";
cin >> base;

cout << "Enter Height : ";
cin >> height;

area = (double)1/2 * base * height;
//area = 1.0/2 * base * height; [ALT]
//area = 0.5 * base * height; [ALT]
cout << "The Area of Triangle is : " << area;