#include<iostream>
using namespace std;

//#define Shift

void FillRand(int arr[], const int n);
void FillRand(short arr[], const int n);
void FillRand(float arr[], const int n);
void FillRand(double arr[], const int n);
void FillRand(char arr[], const int n);

template<typename T>
void Print(T arr[], const int n);

template<typename T>
void Sort(T arr[], const int n);

template<typename T>
T Sum(T arr[], const int n);

template<typename T>
double Avg(T arr[], const int n);


template<typename T>
T minValueIn(T arr[], const int n);

template<typename T>
T maxValueIn(T arr[], const int n);


//void ShiftLeft(int arr[], const int n);
//void ShiftLeft(short arr[], const int n);
//void ShiftLeft(float arr[], const int n);
//void ShiftLeft(double arr[], const int n);
//void ShiftLeft(char arr[], const int n);
//
//void ShiftRight(int arr[], const int n);
//void ShiftRight(short arr[], const int n);
//void ShiftRight(float arr[], const int n);
//void ShiftRight(double arr[], const int n);
//void ShiftRight(char arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	cout << "-------------------------INT-------------------" << endl;
	const int n = 5;
	int arr[n];
	int c = 0;
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее арифмитическое массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимально значение в массиве: " << maxValueIn(arr, n) << endl;
	/*ShiftLeft(arr, n);
	Print(arr, n);
	ShiftRight(arr, n);
	Print(arr, n);*/
	cout << "--------------SHORT--------------------" << endl;
	const int s = 10;
	short sh_ar[s];
	FillRand(sh_ar, s);
	Print(sh_ar, s);
	Sort(sh_ar, s);
	Print(sh_ar, s);
	cout << "Сумма элементов массива: " << Sum(sh_ar, s) << endl;
	cout << "Среднее арифмитическое массива: " << Avg(sh_ar, s) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(sh_ar, s) << endl;
	cout << "Максимально значение в массиве: " << maxValueIn(sh_ar, s) << endl;
	/*ShiftLeft(sh_ar, s);
	Print(sh_ar, s);
	ShiftRight(sh_ar, s);
	Print(sh_ar, s);*/
	cout << "-------------------FLOAT--------------------" << endl;
	const int f = 9;
	float fss[f];
	FillRand(fss, f);
	Print(fss, f);
	Sort(fss, f);
	Print(fss, f);
	cout << "Сумма элементов массива: " << Sum(fss, f) << endl;
	cout << "Среднее арифмитическое массива: " << Avg(fss, f) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(fss, f) << endl;
	cout << "Максимально значение в массиве: " << maxValueIn(fss, f) << endl;
	/*ShiftLeft(fss, f);
	Print(fss, f);
	ShiftRight(fss, f);
	Print(fss, f);*/
	cout << "----------------DOUBLE--------------" << endl;
	const int B_SIZE = 8;
	double brr[B_SIZE];
	FillRand(brr, B_SIZE);
	Print(brr, B_SIZE);
	Sort(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, B_SIZE) << endl;
	cout << "Среднее арифмитическое массива: " << Avg(brr, B_SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, B_SIZE) << endl;
	cout << "Максимально значение в массиве: " << maxValueIn(brr, B_SIZE) << endl;
	/*ShiftLeft(brr, B_SIZE);
	Print(brr, B_SIZE);
	ShiftRight(brr, B_SIZE);
	Print(brr, B_SIZE);*/
	cout << "-------------------------CHAR----------------------" << endl;
	const int g = 7;
	char srr[g];
	FillRand(srr, g);
	Print(srr, g);
	Sort(srr, g);
	Print(srr, g);
	/*ShiftLeft(srr, g);
	Print(srr, g);
	ShiftRight(srr, g);
	Print(srr, g);*/
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;

	}
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = double(rand() % 10000) / 100;

	}
}
void FillRand(short arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;

	}
}
void FillRand(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = float(rand() % 10000) / 100;

	}
}
void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 256;

	}
}
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	return sum;
}
template<typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
template<typename T>
T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
template<typename T>
T maxValueIn(T arr[], const int n)
{
	T max = arr[n];
	for (int i = n - 1; i > 0; i--)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	return max;
}

#ifdef Shift
void ShiftLeft(int arr[], const int n)
{
	int number_of_shifts;
	cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
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
	cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
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
	cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
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
	cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
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
	cout << "Введите на сколько сдвинуть массив влево: "; cin >> number_of_shifts;
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
void ShiftRight(int arr[], const int n)
{
	int number_of_shifts;
	cout << "Введите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
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
	cout << "Введите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
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
	cout << "Введите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
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
	cout << "Введите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
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
	cout << "Введите на сколько сдвинуть массив вправо: "; cin >> number_of_shifts;
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
#endif // Shift
