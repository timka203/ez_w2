#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#define PI 3.14159265 


using namespace std;

void func(int a[])
{

	int *p;
	for (p=a; p < a+20; p=p+1)
	{
	*p = -15 + rand() % 90;
		cout << *p<< endl;
	}
	

}
double summa(double a, double b)
{
	return a + b;
}
double summa1(double a, double b)
{
	return a - b;
}
double summa2(double a, double b)
{
	return a * b;
}
double summa3(double a, double b)
{
	return a / b;
}
double summa4(double a)
{
	return pow(a,3);
}
double summa5(double a)
{
	return sqrt(a);
}
double summa6(double a)
{
	return sin(a * PI / 180);
}
template<typename t>

bool asc(t a, t b)
{
	return a > b;
}
template<typename t>
bool desc(t a, t b)
{
	return a < b;
}
template<typename t>
void sort(t *a, t n, bool(*func)(t, t))
{
	for (size_t i = 0; i < n-1; i++)
	{
		for (size_t i = 0; i < n-1; i++)
		{
			if (func(a[i], a[i + 1]) == 1)
				swap(a[i], a[i + 1]);
		}
	}


}
template<typename t>
void mmain(t *a)
{
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = 1 + rand() % 100;
	}

		for (size_t i = 0; i < 10; i++)
		{
			a[i] = 1 + rand() % 100;
		}
		
	
}
template<typename t>
void mmain2(t *a)
{
	for (size_t i = 0; i < 10; i++)
	{
		cout << a[i] << endl;
	}
}

void task21()
{
	int a[10];
	int n = 10;
	mmain(a);
	sort(a, n, asc);
	mmain2(a);
}
void task20()
{
	double(*ukaz1[4])(double) = { summa4,summa5,summa6 };
	int ch = 0;
	double a;
	int t;
	do
	{
		printf("Which task: pow(0),sqrt(1),sin(2)");
		cin >> ch;
		while (ch <= 3) {

			cin >> a;
			cout << ukaz1[ch](a) << endl;
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &t);
	} while (t == 1);



}
void task19()
{

	double(*ukaz[4])(double, double) = { summa,summa1,summa2,summa3 };
	int ch=0;
	double a, b;
	int t;
	do
	{
		printf("Which task: +(0),-(1),*(2),/(3)");
		cin >> ch;
		while (ch <= 4) {
			
			cin >> a >> b;
			cout << ukaz[ch](a, b) << endl;
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &t);
	} while (t== 1);

}
void task18()
{
	int a[100];
	int *p;
	int n;
	cin >> n;
	double o[4] = { 0 };
	for (p = a; p < a + n; p = p + 1)
	{
		*p = 1 + rand() % 12;
		cout << *p << endl;
		if (*p <= 3)
		{
			o[0]=o[0]+1;
		}
		if (*p <= 6 && *p > 3)
		{
			o[1]++;
		}
		if (*p <= 9 && *p > 6)
		{
			o[2]++;
		}
		if (*p <= 12 && *p > 9)
		{
			o[3]++;
		}

	}
	for (size_t i = 0; i < 4; i++)
	{
		o[i] = double(o[i]) / n * 100;
		cout << fixed << setprecision(2) << o[i] << endl;
	}


}



void task17()
{
	int a[20];
	int *p;
	double o[4]={0};
	for (p = a; p < a + 10; p = p + 1)
	{
		*p =1 + rand() % 11;
		cout << *p << endl;
		if (*p <= 3)
		{
			o[0]+=10;
		}
		if (*p <= 6&&*p>3)
		{
			o[1]=+10;
		}
		if (*p <= 9 && *p > 6)
		{
			o[2]+=10;
		}
		if (*p <= 12 && *p > 9)
		{
			o[3]+=10;
		}

	}
	for (size_t i = 0; i < 4; i++)
	{
		o[i] = fmod(o[i],200);
		cout << fixed << setprecision(2) << o[i] << endl;
	}


}
void task16()
{
	int a[10];
	int *p;
	p = a;
	int s = 0;
	func(a);
	for (p = a + 7; p < a + 10; p = p + 7)
	{

		s = s + *p;
	}
	cout << s << endl;


}
void task15()
{
	int a[10];
	int *p;
	p = a;
	int s = 0;
	func(a);
	for (p = a+3 ; p < a + 10; p = p + 3)
	{
	
		s = s + *p;
	}
	cout << s << endl;


}
void task14()
{
	int a[10];
	int *p;
	p = a;
	int s = 0;
	func(a);
	for (p = a+1; p < a + 10; p = p + 2)
	{
		s = s + *p;
	}
	cout << s << endl;
}


void task13()
{
	int a[10];
	int *p;
	p = a;
	int s = 0;
	func(a);
	for (p = a; p < a + 10; p = p + 2)
	{
		s = s + *p;
	}
	cout << s << endl;
}
void task12()
{
	int a[10];
	int *p;
	double s = 0;
	double m = 0;;
	p = a;
	func(a);
	for (p = a; p < a + 10; p = p + 1)
	{
		if (*p < 0)
		{
			s++;
		}
		else
		{
			m++;

		}
	}
	m =  fmod(m, 100) ;
	s = fmod(s,100);
	cout << fixed<<setprecision(2)<<m <<endl<< s << endl;
}

void task11()
{
	int a[10];
	int *p;
	float s = 0;
	
	p = a;
	func(a);
	for (p = a; p < a + 10; p = p + 1)
	{
		s = s+*p;
	}
	float mid = float(s / 10.0);
	cout << mid <<endl<<s<< endl;


}
void task10()
{
	int a[10];
	int *p;
	int s=0;
	p = a;
	for (p = a; p < a + 10; p = p + 1)
	{
		*p = -25 + rand() % 50;
		cout <<*p << endl;
	}
	for (p = a; p < a + 10; p = p + 1)
	{
		s = *p + s;
	}
	cout << s << endl;

}
void task9()
	{
	int a[10];
	int *p;
	p = a;
	func(a);
	}

void task8()
{
	int a[20];
	int *p;
	p = a;
	int h;
	for (p; p < a + 20; p++)
	{
		*p = -10 + rand() % 100;
	}
	p = a;
	for (p; p < a + 20; p++)
	{
		cout << *p <<' ';
	}
	printf("_________________________\n");
	p = a;
	for (size_t i = 0; i <18; i+=2)
	{
		for (size_t j = 0; j < 18; j+=2)
		{
			if (a[i] > p[i + 2])
			{
				h = a[i];
				a[i] = p[i + 2];
				p[i + 2] = h;
				
			}

		}
	}
	for (p; p < a + 20; p++)
	{
		cout << *p <<' ';
	}
}
void task7()
{
	int min=100000;
	int a[16];
	int *p;
	
	int e = 9;
	p = a;
	for (p; p < a + 10; p++)
	{
		*p = 1 + rand() % 100;
	}
	p = a;
	for (p; p < a + 10; p++)
	{
		cout << *p << endl;
	}
	for (size_t i = 0; i < 9; i++)
	{  
		if (a[i] * p[e] < min)
		{
			min = i;
		}
		e++;
	}
	cout << min << endl;
}

void task6()
{
	int a[10];
	int *p;
	int *t=NULL;
	int y;
	p = a;
	for (p; p < a + 10; p++)
	{
		*p = -10 + rand() % 100;
		y = *p % 2;
		if (y != 0 && *p <0)
		{
			t = p;
		}
	}
	p = a;
	for (p; p < a + 10; p++)
	{
		cout << *p << endl;
		
	}
	cout << t << ' ' << *t << endl;

}
void task5()
{
	int a[10];
	int *p;
	p = a;
	for (p;  p< a+10; p++)
	{
		*p = 1 + rand() % 100;
	}
	p = a;
	for (p; p < a + 10; p++)
	{
		cout << *p << endl;
	}


}
void task4()
{
	{
		const int SIZE = 10;
		int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
		int *p = A;
		for (int i = 0; i < SIZE; i++) //выполнить вывод массива используя указатели
			cout << *p++;
	}



}
void task3()
{
	double a = 2.5, b = 5.2, res;
	double *p1 = &a, *p2 = &b;
	res = *p1 - *p2;
	cout << res;
}

void task2()
{
	{
		int a = 2, b = 5;
		int *p1, *p2 = &b;
		p1 = &a;
		cout << *p1 - *p2;
	}
}
void task1()
{
	int a = 43;
   int b = 43;
	int*c = &a;
	int *y = &b;
	int sum = *c + *y;
	int *u = &sum;
	cout << u << endl;
	cout << *u << endl;

}
int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;
		case 2: task2(); break;
		case 3: task3(); break;
		case 4: task4(); break;
		case 5: task5(); break;
		case 6: task6(); break;
		case 7: task7(); break;
		case 8: task8(); break;
		case 9: task9(); break;
		case 10: task10(); break;
		case 11: task11(); break;
		case 12: task12(); break;
		case 13: task13(); break;
		case 14: task14(); break;
		case 15: task15(); break;
		case 16: task16(); break;
		case 17: task17(); break;
		case 18: task18(); break;
		case 19: task19(); break;
		case 20: task20(); break;
		case 21: task21(); break;
		
		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}