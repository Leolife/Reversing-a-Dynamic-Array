#include <iostream>

using namespace std;

void reverseArray()
{
	int size;//size of array
	cout << "How many numbers will bein the array? ";
	cin >> size;
	int *numArray = new int[size];

	//allows input for a list up to the inputted size
	cout << "Enter " << size << " numbers to put into an array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> numArray[i]; 
	}

	//prints list normally
	cout << "List: ";
	for (int i = 0; i < size; i++)
	{
		cout << numArray[i] << " ";
	}

	//prints reversed list
	cout << endl << "Reverse: ";
	for (int i = (size - 1); i >= 0; i--)
	{
		cout << numArray[i] << " ";
	}
	
	//destructor
	delete[] numArray;
}

int main()
{
	reverseArray();
	return 0;
}
