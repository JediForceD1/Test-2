/*
Assignment1ACM.cpp
Aaron McCormick
Calculating taxes for a given number
*/
#include "pch.h"
#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
#include <stdio.h> 
#include <math.h>
#include <cstdlib>
#include <ctime>
using namespace std;

void print_numbers(int intnum_1, int intnum_2, int intnum_3);
float get_average_value(int intnum_1, int intnum_2, int intnum_3);

int main()
{
	srand(time(NULL));
	int intnum_1, intnum_2, intnum_3, dump;
	float avg_value;

	//Write code to place number as per specifications into intnum_1
	do {
		

		cout << "Please entere a number that is a multiple of 5 and between 1 - 30" << endl;
		cin >> intnum_1;

		cin.clear();
		cin.ignore(100, '\n');
		
		dump = intnum_1 % 5;

	} while (intnum_1 < 1 || intnum_1 > 30 || cin.fail() || dump > 0);

	intnum_2 = rand() % 21;
	intnum_3 = rand() % 21;

	print_numbers(intnum_1, intnum_2, intnum_3);
	avg_value = get_average_value(intnum_1, intnum_2, intnum_3);

	cout << fixed << setprecision(1);
	cout << "Average value = " << avg_value << endl;
	return 0;
}

void print_numbers(int intnum_1, int intnum_2, int intnum_3) {

	cout << "The first number is " << intnum_1 << " Your second number is " << intnum_2 << " Your third number is " << intnum_3 << "." << endl;

}

float get_average_value(int intnum_1, int intnum_2, int intnum_3) {

	float average;

	average = (intnum_1 + intnum_2 + intnum_3) / 3;

	return average;

}