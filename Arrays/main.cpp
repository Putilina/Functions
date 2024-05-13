﻿#include"stdafx.h"
#include"Constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"
#include"Shift.h"




void main()
{
	setlocale(LC_ALL, "");
	const int I_SIZE = 5;
	int i_arr[I_SIZE];
	FillRand(i_arr, I_SIZE);
	Print(i_arr, I_SIZE);
	Sort(i_arr, I_SIZE);
	Sum(i_arr, I_SIZE);
	Avg(i_arr, I_SIZE);
	minValueIn(i_arr, I_SIZE);
	maxValueIn(i_arr, I_SIZE);
	cout << "Сумма элементов массива:" << Sum(i_arr,I_SIZE)<<endl;
	cout << "Cредне-арифметическое элементов массива:" << Avg(i_arr,I_SIZE)<< endl;
	cout << "Минимальное значение элементов массива:" << minValueIn(i_arr,I_SIZE)<<endl;
	cout << "Максимальное значение элементов массива:" << maxValueIn(i_arr,I_SIZE)<< endl;
	int number_of_shifts=0;
	//cout << "Введите количество сдвигов влево:";cin >> number_of_shifts;
	//shiftLeft(arr,n,number_of_shifts);
	//Print(arr, n);         //Функция для вывода массива на экран
	//cout << "Введите количество сдвигов вправо:"; cin >> number_of_shifts;
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);

	cout << delimiter << endl;

	
	const int D_SIZE = 8;
	int d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива:" << Sum(d_arr, D_SIZE) << endl;
	cout << "Средне-арифметическое элементов массива:" << Avg(d_arr,D_SIZE) << endl;
	cout << "Минимальное значение элементов массива:" << minValueIn(d_arr,D_SIZE) << endl;
	cout << "Максимальное значение элементов массива:" << maxValueIn(d_arr,D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);

	cout << delimiter << endl;

	const int C_SIZE = 11;
	char c_arr[C_SIZE];
	FillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива:" << Sum(c_arr, D_SIZE) << endl;
	cout << "Средне-арифметическое элементов массива:" << Avg(c_arr, C_SIZE) << endl;

	cout << delimiter << endl;

	
	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
	cout << "Сумма элементов массива:"<<Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Средне-арифметическое элементов массива:" << Avg(i_arr_2,ROWS,COLS) << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);


}


//функция выводящия массивы на экран




