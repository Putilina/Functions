#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void FillRand(int arr[], const int n);      //������� ����������� ������ ���������� �������(random)
void Print(const int arr[], const int n);   //������� ��������� ������� �� �����
void Sort(int arr[], const int n);          //�������,������� ��������� ������(sorting)
int Sum(int arr[], const int n);          //���������� ����� ��������� ������� (summa)
double Avg(int arr[], const int n);   //���������� ������-�������������� ��������� �������
int minValueIn(int arr[], const int n);    //���������� ����������� �������� � �������
int maxValueIn(int arr[], const int n);  //���������� ������������ �������� � �������
void shiftLeft(int arr[], const int n);  //�������� ������ �� �������� ����� ��������� �����
void shiftRight(int arr[],const int n);  //�������� ������ �� �������� ���������� ��������� ������

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
	cout << "����� ��������� �������:" << Sum(arr,n)<<endl;
	cout << "C�����-�������������� ��������� �������:" << Avg(arr,n)<< endl;
	cout << "����������� �������� ��������� �������:" << minValueIn(arr,n)<<endl;
	cout << "������������ �������� ��������� �������:" << maxValueIn(arr,n)<< endl;

	

}
//������� ����������� ������ ���������� �������(random)
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
//������� ��������� ������� �� �����
void Print(const int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
//�������,������� ��������� ������(sorting)
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
//���������� ����� ��������� ������� (summa)
int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
	
}



//���������� ������-�������������� ��������� �������
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
//���������� ����������� �������� � �������
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
//���������� ������������ �������� � �������
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
//�������� ������ �� �������� ����� ��������� �����
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
	cout << "���-�� �������� ��������� ������� �����:" << endl; 
}
//�������� ������ �� �������� ���������� ��������� ������
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
	cout << "���-�� �������� ��������� ������� ������:" << endl;
}
