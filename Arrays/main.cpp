#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);      //функция заполняющая массив случайными числами(random)
void Print(const int arr[], const int n);   //функция выводящия массивы на экран
void Sort(int arr[], const int n);          //функция,которая сортирует массив(sorting)
int Sum(int arr[], const int n);          //возвращает сумму элементов массива (summa)
double Avg(int arr[], const int n);   //возвращает средне-арифметическое элементов массива
int minValueIn(int arr[], const int n);    //возвращает минимальное значение в массиве
int maxValueIn(int arr[], const int n);  //возвращает максимальное значение в массиве
void shiftLeft(int arr[], const int n);  //сдвигает массив на заданное число элементов влево
void shiftRight(int arr[],const int n);  //сдвигает массив на заданное количество элементов вправо

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	maxValueIn(arr, n);
	shiftLeft(arr, n);
	shiftRight(arr, n);
	cout << "Сумма элементов массива:" << Sum(arr,n)<<endl;
	cout << "Cредне-арифметическое элементов массива:" << Avg(arr,n)<< endl;
	cout << "Минимальное значение элементов массива:" << minValueIn(arr,n)<<endl;
	cout << "Максимальное значение элементов массива:" << maxValueIn(arr,n)<< endl;

	

}
//функция заполняющая массив случайными числами(random)
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
//функция выводящия массивы на экран
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
//функция,которая сортирует массив(sorting)
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
//возвращает сумму элементов массива (summa)
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	
}



//возвращает средне-арифметическое элементов массива
double Avg(int arr[], const int n)
{
	int sum = 0;
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	avg = (double)sum / n;
	return avg;
}
//возвращает минимальное значение в массиве
int minValueIn(int arr[],const int n)
{
	int i = 0;
	int min = arr[0];
	for (int i = 0; i < n; i++);
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
//возвращает максимальное значение в массиве
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}
//сдвигает массив на заданное число элементов влево
void shiftLeft(int arr[], const int n)
{
	int shift = 0;
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	cout << "Кол-во смещений элементов массива влево:" << endl; 
}
//сдвигает массив на заданное количество элементов вправо
void shiftRight(int arr[], const int n)
{
	int shift = 0;
	for (int i = 0; i < shift; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;

	}
	cout << "Кол-во смещений элементов массива вправо:" << endl;
}
