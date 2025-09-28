#include <locale.h>
#include <stdio.h>

static int task1()
{
	char c = '!';
	int i = 2;
	float f = 3.14f;
	double d = 5e-12;
	printf("%c %d %f %le\n", c, i, f, d);

	puts("Ââåäèòå ñèìâîë:");
	scanf("%c", &c);
	puts("Ââåäèòå öåëîå ÷èñëî:");
	scanf("%d", &i);
	puts("Ââåäèòå äðîáíîå ÷èñëî (float):");
	scanf("%f", &f);
	printf("Ââåäèòå äðîáíîå ÷èñëî (double):");
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
	
	puts("Ââåäèòå a:");
	scanf("%d", &a);
	puts("Ââåäèòå b:");
	scanf("%d", &b);
	
	printf("%d, %lf öåëàÿ ÷àñòü = %d, äðîáíàÿ = %lf", (int)a/b, (long float)a/b, (int)a/b, ((long float)a/b)-((int)a/b));
}
int task1_b()
{
	char a;
	puts("Ââåäèòå ñèìâîë:");
	scanf("%c", &a);
	printf("Ââåäåí ñèìâîë = %c\nÄåñÿòè÷íûé êîä=%d\nØåñòíàöàòåðè÷íûé êîä= 0x%X",a,a,a);

}

int task1_c()
{
	int i;
	puts("Ââåäèòå ÷èñëî:");
	scanf("%d", &i);
	printf("Ââåäåí ÷èñëî = %d\n1/i = %lf", i,(long double)1/i);

}

int task3()
{
	int N;
	int first;
	int last;
	int sum;

	printf("Ââåäèòå òðåõçíà÷íîå ÷èñëî:\n");
	scanf("%d", &N);
	printf("Ââåäåíî ÷èñëî:%d\n",N);

	first = N / 100;
	last = N % 10;
	sum = first + (N / 10 % 10) + last;
	printf("Ïåðâîå ÷èñëî ðàâíî: %d\nÏîñëåäíåå ÷èñëî ðàâíî:%d\nÑóììà ÷èñåë ðàâíà:%d", first, last, sum);
}

int homework()
{
	int A;
	int B;
	int C;
	int triple_strike;
	printf("Ââåäèòå 3 çíà÷åíèÿ ñèëû ãåðîåâ:\n");
	scanf("%d %d %d", &A, &B, &C);
	triple_strike = ((A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0));
	printf("Òðîéíîé óäàð àêòèâèðîâàí (1 - äà, 0 - íåò): %d\n", triple_strike);
}

