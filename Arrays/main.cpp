#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"
#define delimiter "\n----------------------------------------\n"


const int ROWS = 10;
const int COLS = 10;

void FillRand(int arr[], const int n);      //функция заполняющая массив случайными числами(random)
void FillRand(double arr[], const int n);      //функция заполняющая массив случайными числами(random)
void FillRand(char arr[], const int n); //функция заполняющая массив случайными числами(random)
void FillRand(int arr[ROWS][COLS], const int ROWS,const int COLS); //функция заполняющая массив случайными числами(random)


void Print(int arr[], const int n);   //функция выводящия массивы на экран
void Print(double arr[], const int n);   //функция выводящия массивы на экран
void Print(char arr[], const int n);   //функция выводящия массивы на экран
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);

void Sort(int arr[], const int n);          //функция,которая сортирует массив(sorting)
void Sort(double arr[], const int n);          //функция,которая сортирует массив(sorting)
void Sort(char arr[], const int n);          //функция,которая сортирует массив(sorting)
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);

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

void shiftLeft(int arr[], const int n,int number_of_shifts);  //сдвигает массив на заданное число элементов влево
void shiftLeft(double arr[], const int n,int number_of_shifts);  //сдвигает массив на заданное число элементов влево
void shiftLeft(char arr[], const int n,int number_of_shifts);  //сдвигает массив на заданное число элементов влево

void shiftRight(int arr[],const int n,int number_of_shifts);  //сдвигает массив на заданное количество элементов вправо
void shiftRight(double arr[],const int n,int number_of_shifts);  //сдвигает массив на заданное количество элементов вправо
void shiftRight(char arr[],const int n,int number_of_shifts);  //сдвигает массив на заданное количество элементов вправо


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
		arr[i] = rand();
	}
}


void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}

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
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << tab;
		}
		cout << endl;
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
				double buffer = arr[i];
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
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					//arr[i][j]-выбранный элемент
					//arr[k][l]<arr[i][j]
					iterations++;
					if(arr[k][l]<arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "Массив отсортирован за " << iterations << " итераций\n";
	cout << "Обмен элементов:<< exchanges" << endl;

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
	
}int Sum(char arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	
}
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}



//возвращает средне-арифметическое элементов массива
double Avg(int arr[], const int n)
{
	return Sum(arr, n) /(double) n;
}

double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;

}
double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / ROWS / COLS;
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
int minValueIn(int arr[ROWS][COLS], const int ROWS, int COLS)
{
	int min = arr[0][0];

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
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

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int maxVal = arr[0][0];
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (arr[i][j] > maxVal)
			{
				maxVal = arr[i][j];
			}
		}
	}
	return maxVal;
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
		
	


