// FindAvarage.cpp : This file contains the 'main' function. Program execution begins and ends there.
    double average;
//
#include <iomanip>
#include <iostream>
using namespace std;

Double listAverage(int list[], int size);

int main()
{
	int numbers[5];
	double average;

	cout << "Enter 5 int numbers: ";

	for (int i = 0; i < 5; i++)
	{
		cin >> numbers[i];
	}

	for (int i = 0; i < 5; i++)
	{
		cout << numbers[i] << " ";
	}
	
	average = listAverage(numbers, 5);
	cout << "The average of the numbers is: " << fixed << setprecision(2) << average << endl;
}

Double listAverage(int list[], int size)
{
	double average;
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += list[i];
	}
	return total /=5;
}


