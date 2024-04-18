#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);      //функция заполняющая массив случайными числами(random)
void FillRand(double arr[], const int n);      //функция заполняющая массив случайными числами(random)
void FillRand(char arr[], const int n);      //функция заполняющая массив случайными числами(random)

void Print(int arr[], const int n);   //функция выводящия массивы на экран
void Print(double arr[], const int n);   //функция выводящия массивы на экран
void Print(char arr[], const int n);   //функция выводящия массивы на экран


void Sort(int arr[], const int n);          //функция,которая сортирует массив(sorting)
void Sort(double arr[], const int n);          //функция,которая сортирует массив(sorting)
void Sort(char arr[], const int n);          //функция,которая сортирует массив(sorting)

int Sum(int arr[], const int n);          //возвращает сумму элементов массива (summa)
double Sum(double arr[], const int n);          //возвращает сумму элементов массива (summa)
char Sum(char arr[], const int n);          //возвращает сумму элементов массива (summa)

double Avg(int arr[], const int n);   //возвращает средне-арифметическое элементов массива
double Avg(double arr[], const int n);   //возвращает средне-арифметическое элементов массива
char Avg(char arr[], const int n);   //возвращает средне-арифметическое элементов массива

int minValueIn(int arr[], const int n);    //возвращает минимальное значение в массиве
double minValueIn(double arr[], const int n);    //возвращает минимальное значение в массиве
char minValueIn(char arr[], const int n);    //возвращает минимальное значение в массиве

int maxValueIn(int arr[], const int n);  //возвращает максимальное значение в массиве
double maxValueIn(double arr[], const int n);  //возвращает максимальное значение в массиве
char maxValueIn(char arr[], const int n);  //возвращает максимальное значение в массиве

void shiftLeft(int arr[], const int n,int number_of_shifts);  //сдвигает массив на заданное число элементов влево
void shiftLeft(double arr[], const int n,int number_of_shifts);  //сдвигает массив на заданное число элементов влево
void shiftLeft(char arr[], const int n,int number_of_shifts);  //сдвигает массив на заданное число элементов влево

void shiftRight(int arr[],const int n,int number_of_shifts);  //сдвигает массив на заданное количество элементов вправо
void shiftRight(double arr[],const int n,int number_of_shifts);  //сдвигает массив на заданное количество элементов вправо
void shiftRight(char arr[],const int n,int number_of_shifts);  //сдвигает массив на заданное количество элементов вправо

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
	cout << "Сумма элементов массива:" << Sum(arr,n)<<endl;
	cout << "Cредне-арифметическое элементов массива:" << Avg(arr,n)<< endl;
	cout << "Минимальное значение элементов массива:" << minValueIn(arr,n)<<endl;
	cout << "Максимальное значение элементов массива:" << maxValueIn(arr,n)<< endl;
	int number_of_shifts=0;
	//cout << "Введите количество сдвигов влево:";cin >> number_of_shifts;
	//shiftLeft(arr,n,number_of_shifts);
	//Print(arr, n);         //Функция для вывода массива на экран
	//cout << "Введите количество сдвигов вправо:"; cin >> number_of_shifts;
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);

	
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);
	cout << "Сумма элементов массива:" << Sum(brr, SIZE) << endl;
	cout << "Средне-арифметическое элементов массива:" << Avg(brr,SIZE) << endl;
	cout << "Минимальное значение элементов массива:" << minValueIn(brr,SIZE) << endl;
	cout << "Максимальное значение элементов массива:" << maxValueIn(brr,SIZE) << endl;
}
//функция заполняющая массив случайными числами(random)
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
//функция выводящия массивы на экран
void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}void Print(char arr[], const int n)
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
}void Sort(double arr[], const int n)
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
}void Sort(char arr[], const int n)
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
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	
}char Sum(char arr[], const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	
}



//возвращает средне-арифметическое элементов массива
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;


}char Avg(char arr[], const int n)
{
	return (char)Sum(arr, n) / n;
}
//возвращает минимальное значение в массиве
int minValueIn(int arr[],const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;

}double minValueIn(double arr[],const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;


}char minValueIn(char arr[],const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
//возвращает максимальное значение в массиве
int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;


}double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;


}char maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
//сдвигает массив на заданное число элементов влево
void shiftLeft(double arr[], const int n,int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i-1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}void shiftLeft(char arr[], const int n,int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i-1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}void shiftLeft(int arr[], const int n,int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i-1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
//сдвигает массив на заданное количество элементов вправо
void shiftRight(int arr[], const int n, int number_of_shifts)

{
	shiftLeft(arr, n, n - number_of_shifts);
}

void shiftRight(double arr[], const int n, int number_of_shifts)

{
	shiftLeft(arr, n, n - number_of_shifts);
}

void shiftRight(char arr[], const int n, int number_of_shifts)

{
	shiftLeft(arr, n, n - number_of_shifts);
}
		
	


