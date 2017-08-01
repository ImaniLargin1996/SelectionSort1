/*
Imani Largin
April 25 2016
Data Structures Spring 2016
This code sorts data using Selection Sort algorithm
*/

#include <iostream>
using namespace std;


int main()
{
	//receiving data from user
	int index[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Please enter a number: ";
		cin >> index[i];
	}

	//display of numbers before sorting
	cout << "This is the data set before sorting: " << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << index[i] << " ";
	}

	//Selection Sort
	int temp, min;
	for (int i = 0; i <= 4; i++)
	{
		min = i;
		for (int m = i + 1; m < 4; i++)
		{
			if (index[m] > index[min])
				min = m;

		}
		if (min != i)
		{
			temp = index[i];
			index[i] = index[min];
			index[min] = temp;
		}
	}
	cout << "The data set after sorting is: " << endl;
	for (int y = 0; y < 5; y++)
		cout << index[y] << " ";
	return 0;
}