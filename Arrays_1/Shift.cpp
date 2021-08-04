#include"Shift.h"
void ShiftRight(int arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(short arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		short buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(float arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(double arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(char arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftLeft(int arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftLeft(short arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		short buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftLeft(float arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		float buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftLeft(double arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftLeft(char arr[], const int n)
{
	int number_of_shifts;
	cout << "¬ведите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}