//Functions               1.В проекте 'Functions' написать функцию ??? Factorial(???), которая	
                        //принимает число, и возвращает факториал этого числа;
                        //2. В проекте 'Functions' написать функцию ? ? ? Power(? ? ? ), которая возводит число в степень;

#include<iostream>
using namespace std;

int Sum(int a, int b=0);		//Прототип функции (Объявление функции - Function declaration)
int Diff(int a, int b);
int Prod(int a, int b);
double Quot(int a, int b=0);

double Factorial(int n);
double Power(double a, int n);
// #define CLASSWORK
//#define FACTORIAL
void main()
{
	setlocale(LC_ALL, "");

#ifdef CLASSWORK

	cout << "Hello Functions" << endl;
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;

	int c = Sum(a, b);		//Вызов или использование функции - Function call.
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Diff(a, b) << endl;
	cout << a << " * " << b << " = " << Prod(a, b) << endl;
	cout << a << " / " << b << " = " << Quot(a, b) << endl;

#endif // CLASSWORK
#ifdef FACTORIAL

	int n;
	cout << "Введите число:"; cin >> n;
	cout << n << "! = " << Factorial(n) << endl;
#endif // FACTORIAL
	
	int a;    //основание степени
	int n;    //покозатель степени
	cout << "Введите основание степени:"; cin >> a;
	cout << "Введите показатель степени:"; cin >> n;
	cout << a << " ^ " << n << " = " << Power(a, n) << endl;
}

	int Sum(int a, int b)	//Реализация функции (Определение функции - Function definition)
	{
		int c = a + b;
		return c;
	}
	int Diff(int a, int b)
	{
		//Difference - разность
		return a - b;
	}
	int Prod(int a, int b)
	{
		//Product - произведение
		return a * b;
	}
	double Quot(int a, int b)
	{
		//Quotient - частное
		return (double)a / b;
	}
	double Factorial(int n)
	{
		double f = 1;
		for (int i = 1; i <= n; i++)
		{
			f *= i;
		}
		return f;
	}
	double Power(double a, int n)
	{
		double N = 1;
		if (n < 0)
		{
			a = 1 / a;
			n = -n;
		}
		for (int i = 0; i < n; i++)
		{
			N *= a;
		}
		return N;

	}


	
