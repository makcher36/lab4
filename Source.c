#include <locale.h>
#include <stdio.h>

static int task1()
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c %d %f %le\n", c, i, f, d);

	puts("������� ������:");
	scanf("%c", &c);
	puts("������� ����� �����:");
	scanf("%d", &i);
	puts("������� ������� ����� (float):");
	scanf("%f", &f);
	printf("������� ������� ����� (double):");
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
	
	puts("������� a:");
	scanf("%d", &a);
	puts("������� b:");
	scanf("%d", &b);
	
	printf("%d, %lf ����� ����� = %d, ������� = %lf", (int)a/b, (long float)a/b, (int)a/b, ((long float)a/b)-((int)a/b));
}
int task1_b()
{
	char a;
	puts("������� ������:");
	scanf("%c", &a);
	printf("������ ������ = %c\n���������� ���=%d\n���������������� ���= 0x%X",a,a,a);

}

int task1_c()
{
	int i;
	puts("������� �����:");
	scanf("%d", &i);
	printf("������ ����� = %d\n1/i = %lf", i,(long double)1/i);

}

int task3()
{
	int a;
	int first;
	int last;
	int sum;

	printf("������� ����������� �����:\n");
	scanf("%d", &a);
	printf("������� �����:%d\n",a);

	first = a / 100;
	last = a % 10;
	sum = first + (a / 10 % 10) + last;
	printf("������ ����� �����: %d\n��������� ����� �����:%d\n����� ����� �����:%d", first, last, sum);
}

int homework()
{
	int A;
	int B;
	int C;
	int triple_strike;
	printf("������� 3 �������� ���� ������:\n");
	scanf("%d %d %d", &A, &B, &C);
	triple_strike = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));
	printf("������� ���� ����������� (1 - ��, 0 - ���): %d\n", triple_strike);
}
