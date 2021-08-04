#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"

#define home_work

void main()
{
	setlocale(LC_ALL, "");
#ifdef home_work
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
	ShiftLeft(arr, n);
	Print(arr, n);
	ShiftRight(arr, n);
	Print(arr, n);
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
	ShiftLeft(sh_ar, s);
	Print(sh_ar, s);
	ShiftRight(sh_ar, s);
	Print(sh_ar, s);
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
	ShiftLeft(fss, f);
	Print(fss, f);
	ShiftRight(fss, f);
	Print(fss, f);
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
	ShiftLeft(brr, B_SIZE);
	Print(brr, B_SIZE);
	ShiftRight(brr, B_SIZE);
	Print(brr, B_SIZE);
	cout << "-------------------------CHAR----------------------" << endl;
	const int g = 7;
	char srr[g];
	FillRand(srr, g);
	Print(srr, g);
	Sort(srr, g);
	Print(srr, g);
	ShiftLeft(srr, g);
	Print(srr, g);
	ShiftRight(srr, g);
	Print(srr, g);
#endif // home_work

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}






