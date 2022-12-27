#include <iostream>

using namespace std;

void reverseArray()
{
	const int size = 5;//constant variable to use for size of array
	int numArray[size];

	cout << "Enter 5 numbers to put into an array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> numArray[i]; //allows input for a list up to 5 integers
	}
	cout << "List: ";
	for (int i = 0; i < size; i++)
	{
		cout << numArray[i] << " "; //prints list normally
	}
	cout << endl << "Reverse: ";
	for (int i = (size - 1); i >= 0; i--)
	{
		cout << numArray[i] << " "; //prints reversed list
	}
}

int main()
{
	reverseArray();
	return 0;
}
