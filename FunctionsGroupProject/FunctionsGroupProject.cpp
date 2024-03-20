#include <iostream>
using namespace std;

void MenuChoices(int array[], int size);
void populateArray(int array[], int size);
void UserChoiceInput(int array[], int size);
void Display(int array[], int size);
void GetTotal(int array[], int size);
void GetAverage(int array[], int size);
void GetLargest(int array[], int size);
void GetSmallest(int array[], int size);
void GetNumOccurences(int array[], int size);
void ScaleUp(int array[], int size);
void Reverce(int array[], int size);
void ZeroBase(int array[], int size);
void RemoveNumber(int array[], int& size);
void Sort(int array[], int size);

void MenuChoices(int array[], int size)
{
	cout << "--------------------------------------------------" << endl;
	cout << "select 1 to Display the Numbers in the array      |" << endl;
	cout << "select 2 to get total of the array                |" << endl;
	cout << "select 3 to Get the Average of the array          |" << endl;
	cout << "select 4 to Get the Largest number in the array   |" << endl;
	cout << "select 5 to Get the Smallest number in the array  |" << endl;
	cout << "select 6 to Get the number of occurrences         |" << endl;
	cout << "select 7 to Scale up by one                       |" << endl;
	cout << "select 8 to reverse the array                     |" << endl;
	cout << "select 9 to Zero Base                             |" << endl;
	cout << "select 10 to remove a number form the array       |" << endl;
	cout << "select 11 to sort the array form ascending order  |" << endl;
	cout << "select 12 to Exit                                 |" << endl;
	cout << "--------------------------------------------------" << endl;
}

void populateArray(int array[], int size)
{
	cout << "Enter 5 numbers to populate the array: " << endl;
	for (int i = 0; i < size; i++)
	{
		cin >> array[i];
	}
}

void UserChoiceInput(int array[], int size)
{
	int Menu;
	cout << "Enter your choice: ";
	cin >> Menu;

	while (Menu != 12)
	{
		switch (Menu)
		{
		case 1:
			Display(array, size);
			break;

		case 2:
			GetTotal(array, size);
			break;

		case 3:
			GetAverage(array, size);
			break;

		case 4:
			GetLargest(array, size);
			break;

		case 5:
			GetSmallest(array, size);
			break;

		case 6:
			GetNumOccurences(array, size);
			break;

		case 7:
			ScaleUp(array, size);
			break;

		case 8:
			Reverce(array, size);
			break;

		case 9:
			ZeroBase(array, size);
			break;

		case 10:
			RemoveNumber(array, size);
			break;

		case 11:
			Sort(array, size);
			break;

		default:
			cout << "Invalid choice" << endl;
			break;
		}

		cout << endl;
		MenuChoices(array, size);
		cout << "Enter your choice: ";
		cin >> Menu;
	}
}

void Display(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << " ";
	}
	cout << endl;
}

void GetTotal(int array[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += array[i];
	}
	cout << "The total of the array is: " << total << endl;
}

void GetAverage(int array[], int size)
{
	int total = 0;
	for (int i = 0; i < size; i++)
	{
		total += array[i];
	}
	cout << "The average of the array is: " << total / size << endl;
}

void GetLargest(int array[], int size)
{
	int largestValue = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] > largestValue)
		{
			largestValue = array[i];
		}
	}
	cout << "The largest number in the array is: " << largestValue << endl;
}

void GetSmallest(int array[], int size)
{
	int smallestValue = array[0];
	for (int i = 1; i < size; i++)
	{
		if (array[i] < smallestValue)
		{
			smallestValue = array[i];
		}
	}
	cout << "The smallest number in the array is: " << smallestValue << endl;
}

void GetNumOccurences(int array[], int size)
{
	int num;
	cout << "Enter the number you want to find: ";
	cin >> num;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] == num)
		{
			count++;
		}
	}
	cout << "The number " << num << " occurs " << count << " times in the array" << endl;
}

void ScaleUp(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] += 1;
	}
	cout << "The array has been scaled up by 1" << endl;
}

void Reverce(int array[], int size)
{
	int temp;
	for (int i = 0; i < size / 2; i++)
	{
		temp = array[i];
		array[i] = array[size - 1 - i];
		array[size - 1 - i] = temp;
	}
	cout << "The array has been reversed" << endl;
}

void ZeroBase(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = 0;
	}
	cout << "The array has been zero based" << endl;
}

void RemoveNumber(int array[], int& size)
{
	int num;
	cout << "Enter the element number you want to remove: ";
	cin >> num;

	if (num < 1 || num > size)
	{
		cout << "Invalid element number" << endl;
		return;
	}

	for (int i = num - 1; i < size - 1; i++)
	{
		array[i] = array[i + 1];
	}
	size--;

	cout << "The element at position " << num << " has been removed from the array" << endl;
}

void Sort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout << "The array has been sorted in ascending order" << endl;
}

int main()
{
	int array[5];
	int size = 5;

	populateArray(array, size);
	MenuChoices(array, size);
	UserChoiceInput(array, size);

	return 0;
}