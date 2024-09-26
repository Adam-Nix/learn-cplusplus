#include "CWorker.h"


//constructor function definitions

CWorker::CWorker(void)
{
	m_name = "";
	m_worker = 0;
	m_hourlyRate = 0.0;
	m_hoursWorked = 0;
}

//
CWorker::CWorker(string name, int workNo)
{
	m_name = name;
	m_worker = workNo;
	m_hourlyRate = 0.0;
	m_hoursWorked = 0;
}

//regular function definitions
double CWorker::SetHouralyRate(double rate)
{
    m_hourlyRate = rate;

    return 0.0;
}


void CWorker::AddHours(int hours)
{
    m_hoursWorked = hours;
}


double CWorker::GetWages(void)
{
    double wage;

    wage = m_hourlyRate * m_hoursWorked;

    return wage;
}


void CWorker::Display(void)
{
    //output the name of the worker object 

    cout << "Worker Name: " << m_name << endl;
    cout << "worker Number: " << m_name << endl;
    cout << "Hourly Rate: " << m_hourlyRate << endl;
    cout << "Hours Worked " << m_hoursWorked << endl;

}
