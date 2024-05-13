#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n); 
void FillRand(double arr[], const int n); 


template<typename T>
//template-создает шаблон
//typename-создает шаблонный тип
// T-имя шаблонного типа

//функция заполняющая массив случайными числами(random)
void Print(T arr[], const int n);   //функция выводящия массивы на экран

template<typename T>
void Sort(T arr[], const int n);          //функция,которая сортирует массив(sorting)

template<typename T>
T Sum(T arr[], const int n);          //возвращает сумму элементов массива (summa)

template<typename T>
double Avg(T arr[], const int n);   //возвращает средне-арифметическое элементов массива

template<typename T>
T minValueIn(T arr[], const int n);    //возвращает минимальное значение в массиве

template<typename T>
T maxValueIn(T arr[], const int n);  //возвращает максимальное значение в массиве

template<typename T>
void shiftLeft(T arr[], const int n,int number_of_shifts);  //сдвигает массив на заданное число элементов влево

template<typename T>
void shiftRight(T arr[],const int n,int number_of_shifts);  //сдвигает массив на заданное количество элементов вправо

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
//	Print(arr, n);         //Функция для вывода массива на экран
	//cout << "Введите количество сдвигов вправо:"; cin >> number_of_shifts;
	//shiftRight(arr, n, number_of_shifts);
	//Print(arr, n);
	const int D_SIZE = 5;
	double d_arr[D_SIZE];
	FillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout<<"Сумма элементов массива : " << Sum(d_arr,D_SIZE)<<endl;
	cout << "Cредне-арифметическое элементов массива:" << Avg(d_arr,D_SIZE) << endl;
	cout << "Минимальное значение элементов массива:" << minValueIn(d_arr,D_SIZE) << endl;
	cout << "Максимальное значение элементов массива:" << maxValueIn(d_arr,D_SIZE) << endl;
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	
	
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
}
void FillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}
template<typename T>
//функция выводящия массивы на экран
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
//функция,которая сортирует массив(sorting)
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
//возвращает сумму элементов массива (summa)
template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	
}



//возвращает средне-арифметическое элементов массива
template<typename T>
double Avg(T arr[], const int n)
{
	return Sum(arr, n) / (double)n;
}
//возвращает минимальное значение в массиве
template<typename T>
T minValueIn(T arr[],const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
//возвращает максимальное значение в массиве
template<typename T>
T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}
//сдвигает массив на заданное число элементов влево
template<typename T>
void shiftLeft(T arr[], const int n,int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i-1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}
//сдвигает массив на заданное количество элементов вправо
template<typename T>
void shiftRight(T arr[], const int n,int number_of_shifts)
	{                                                // for(int i-0;i<number_of_shifts;i++)
													 //  {
		shiftLeft(arr,n,n - number_of_shifts);											   //   int buffer = arr[n - 1];
													  //     for (int i = n - 1; i >= 0; i--)
	}	                                                 //      {
		                                                      //	arr[i] = arr[i - 1];
		                                                       // }
		                                                           //   arr[0] = buffer;
		
		
	


