#include "cworker.h"


int main()
{
	//construct a worker object 
	//with a real name and a real worker number

	string name;
	int workerNum;

	cout << "Enter the name of the worker" << endl;
	cin >> name;

	cout << "Enter the worker number" << endl;
	cin >> workerNum;

	//call the matching constructor function to create the worker object

	CWorker worker(name, workerNum);

	//display the contents of the worker object
	
	worker.Display();

}

