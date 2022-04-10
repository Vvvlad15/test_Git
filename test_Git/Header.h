#include <iostream>
using namespace std;

void mission()
{
	const int size = 10;
	int arr[size]{}, min, max, ch_min, ch_max;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	cout << "Числа: ";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	min = max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			ch_max = i;
		}
		if (min > arr[i])
		{
			min = arr[i];
			ch_min = i;
		}
	}
	cout << endl;
	cout << "max = " << max << "   ch_max = " << ch_max << endl;
	cout << "min = " << min << "   ch_min = " << ch_min << endl;
}

void mission1()
{
	const int size = 10;
	int arr[size]{1,2,3,4,5,6,7,8,9,10};
	for (int i = size; i > 0; i--)
	{
		cout << arr[i - 1] << " ";
	}
}

void mission2()
{
	const int size = 10;
	int arr[size]{};
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}