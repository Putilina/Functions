//Statistics.h
#pragma once

#include"Constants.h"


int Sum(int arr[], const int n);         //возвращает сумму элементов массива (summa)
double Sum(double arr[], const int n);          //возвращает сумму элементов массива (summa)
int Sum(char arr[], const int n);          //возвращает сумму элементов массива (summa)
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);


double Avg(int arr[], const int n);   //возвращает средне-арифметическое элементов массива
double Avg(double arr[], const int n);   //возвращает средне-арифметическое элементов массива
double Avg(char arr[], const int n);   //возвращает средне-арифметическое элементов массива
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);    //возвращает минимальное значение в массиве
double minValueIn(double arr[], const int n);    //возвращает минимальное значение в массиве
char minValueIn(char arr[], const int n);    //возвращает минимальное значение в массиве
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);  //возвращает максимальное значение в массиве
double maxValueIn(double arr[], const int n);  //возвращает максимальное значение в массиве
char maxValueIn(char arr[], const int n);  //возвращает максимальное значение в массиве
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);


