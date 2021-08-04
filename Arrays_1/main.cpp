#include"stdafx.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"

#define home_work
#define integer
#define short_2D
#define float_2D
#define double_2D
#define char_2D

void main()
{
	setlocale(LC_ALL, "");
#ifdef home_work
	cout << "\n-------------------------INT-------------------\n" << endl;
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
	cout << "\n--------------SHORT--------------------/n" << endl;
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
	cout << "\n-------------------FLOAT--------------------\n" << endl;
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
	cout << "\n----------------DOUBLE--------------\n" << endl;
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
	cout << "\n-------------------------CHAR----------------------\n" << endl;
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
#ifdef integer
	cout << "\n-----------------2D_int--------------------\n";
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	Sort(i_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифчитическое массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимально значение в массиве: " << minValuenIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимально значение в массиве: " << maxValuenIn(i_arr_2, ROWS, COLS) << endl;
#endif // integer
#ifdef short_2D
	cout << "\n-----------------short-----------------\n";
	short s_arr_2[ROWS][COLS];
	FillRand(s_arr_2, ROWS, COLS);
	Print(s_arr_2, ROWS, COLS);
	Sort(s_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Print(s_arr_2, ROWS, COLS);
	cout << "Сумма массива: " << Sum(s_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифчитическое массива: " << Avg(s_arr_2, ROWS, COLS) << endl;
	cout << "Минимально значение в массиве: " << minValuenIn(s_arr_2, ROWS, COLS) << endl;
	cout << "Максимально значение в массиве: " << maxValuenIn(s_arr_2, ROWS, COLS) << endl;
#endif // short_2D
#ifdef float_2D
	cout << "\n---------------------float--------------------\n";
	float f_arr_2[ROWS][COLS];
	FillRand(f_arr_2, ROWS, COLS);
	Print(f_arr_2, ROWS, COLS);
	Sort(f_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Print(f_arr_2, ROWS, COLS);
	cout << "Сумма массива: " << Sum(f_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифчитическое массива: " << Avg(f_arr_2, ROWS, COLS) << endl;
	cout << "Минимально значение в массиве: " << minValuenIn(f_arr_2, ROWS, COLS) << endl;
	cout << "Максимально значение в массиве: " << maxValuenIn(f_arr_2, ROWS, COLS) << endl;
#endif // float_2D
#ifdef double_2D
	cout << "\n---------------------double----------------------\n";
	double d_arr_2[ROWS][COLS];
	FillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);
	Sort(d_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Print(d_arr_2, ROWS, COLS);
	cout << "Сумма массива: " << Sum(d_arr_2, ROWS, COLS) << endl;
	cout << "Среднее арифчитическое массива: " << Avg(d_arr_2, ROWS, COLS) << endl;
	cout << "Минимально значение в массиве: " << minValuenIn(d_arr_2, ROWS, COLS) << endl;
	cout << "Максимально значение в массиве: " << maxValuenIn(d_arr_2, ROWS, COLS) << endl;
#endif // double_2D
#ifdef char_2D
	cout << "\n----------------------char-----------------\n";
	char c_arr_2[ROWS][COLS];
	FillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);
	Sort(c_arr_2, ROWS, COLS);
	cout << "Отсортированный массив: " << endl;
	Print(c_arr_2, ROWS, COLS);
#endif // char_2D


}


















