#include <locale.h>
#include <stdio.h>

static int task1()
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c %d %f %le\n", c, i, f, d);

	puts("Введите символ:");
	scanf("%c", &c);
	puts("Введите целое число:");
	scanf("%d", &i);
	puts("Введите дробное число (float):");
	scanf("%f", &f);
	printf("Введите дробное число (double):");
	scanf("%lg", &d);
	printf("%c, %i, %f, %ld", c, i, f, d);
	return 0;
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	//task1();
	//task2();
	//task2_6();
	//task1_a();
	//task1_b();
	//task1_c();
	//task3();
	//homework();
}

int task2_6()
{
	int a = 11;
	int b = 3;
	//int x;
	//float y;
	//double z;

	printf("x=%d y=%f z=%lf", (int)a/b,(float)a/b,(long double)a/b);
}
int task2()
{
		int a = 11;
		int b = 3;
		int x;
		float y;
		double z;
		x = a / b;
		y = a / b;
		z = a / b;
		printf("x=%d y=%f z=%lf");
}

int task1_a()
{
	int a;
	int b;
	
	puts("Введите a:");
	scanf("%d", &a);
	puts("Введите b:");
	scanf("%d", &b);
	
	printf("%d, %lf целая часть = %d, дробная = %lf", (int)a/b, (long float)a/b, (int)a/b, ((long float)a/b)-((int)a/b));
}
int task1_b()
{
	char a;
	puts("Введите символ:");
	scanf("%c", &a);
	printf("Введен символ = %c\nДесятичный код=%d\nШестнацатеричный код= 0x%X",a,a,a);

}

int task1_c()
{
	int i;
	puts("Введите число:");
	scanf("%d", &i);
	printf("Введен число = %d\n1/i = %lf", i,(long double)1/i);

}

int task3()
{
	int a;
	int first;
	int last;
	int sum;

	printf("Введите трехзначное число:\n");
	scanf("%d", &a);
	printf("Введено число:%d\n",a);

	first = a / 100;
	last = a % 10;
	sum = first + (a / 10 % 10) + last;
	printf("Первое число равно: %d\nПоследнее число равно:%d\nСумма чисел равна:%d", first, last, sum);
}

int homework()
{
	int A;
	int B;
	int C;
	int triple_strike;
	printf("Введите 3 значения силы героев:\n");
	scanf("%d %d %d", &A, &B, &C);
	triple_strike = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));
	printf("Тройной удар активирован (1 - да, 0 - нет): %d\n", triple_strike);
}
