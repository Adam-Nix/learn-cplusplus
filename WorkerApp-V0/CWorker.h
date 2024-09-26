#pragma once
using namespace std;
#include <string>
#include <iostream>
#include <iomanip>

class CWorker
{

private:
	string m_name;
	int m_WorkNo;
	double m_hourlyRate;
	int m_hoursWorked;


public:

	//constructor function prototypes
	
	//standard constructor function
	CWorker(void);

	//non standard constructor function 

CWorker(string name, int workkNo);


	//regular function prototypes
	double SetHouralyRate(double rate);
	void AddHours(int hours);
	double GetWages(void);
	void Display(void);
};

