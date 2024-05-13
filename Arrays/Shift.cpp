

//сдвигает массив на заданное число элементов влево
void shiftLeft(double arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}void shiftLeft(char arr[], const int n, int number_of_shifts)
{

	for (int i = 0; i < number_of_shifts; i++)
	{
		char buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
}void shiftLeft(int arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
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

