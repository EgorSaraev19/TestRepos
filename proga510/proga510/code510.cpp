#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


double calculate_series_sum(int k)
{
	double sum = 0.0;

	for (int i = 1; i <= k; i++)
	{
		double term = 1.0 + (1.0 / ((double)i * i));
		sum += term;
	}

	return sum;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	//int a = 0;
	//int* pa = &a;
	//char c = 'a';
	//char* pc = &c;
	//short s = 47;
	//short* ps = &s;

	//int ia = (int)pa - (int)&ps;
	//int ipa = (int)&pa - (int)&ps;
	//int ic = (int)pc - (int)&ps;
	//int ipc = (int)&pc - (int)&ps;
	//int is = (int)ps - (int)&ps;
	//int ips = (int)&ps - (int)&ps;


	//scanf("%d", pa);

	//printf("&a\t=\t%x\n&pa\t=\t%x\n&c\t=\t%x\n&pc\t=\t%x\n&s\t=\t%x\n&ps\t=\t%x\n", &a, &pa, &c, &pc, &s, &ps);

	//printf("a = %d, pa = %x\n", *pa, pa);

	//int n = 0, i = 0;
	//double min = 0.0, max = 0.0;

	//printf("Vvedite n\n");
	//scanf("%d", &n);

	//printf("Vvedite max\n");
	//scanf("%lf", &max);

	//printf("Vvedite min\n");
	//scanf("%lf", &min);

	//for (i = 0; i < n; i++)
	//{
	//	double a = (((double)rand()) / (RAND_MAX)) * (max - min) + min;
	//	printf("a[%d]\t=\t%.3lf\n", i, a);
	//}

	//int n = 3, i = 0;
	//int min = 0, max = 6;


	//for (i = 0; i < n; i++)
	//{
	//	int a = (((int)rand()) / (RAND_MAX)) * (max - min) + min;
	//	printf("a[%d]\t=\t%d\n", i, a);
	//	int b = (((int)rand()) / (RAND_MAX)) * (max - min) + min;
	//	printf("b[%d]\t=\t%d\n", i, b);
	//}

	//






	//int k;
	//printf("Vvedite celoe polozhitelnoe chislo k (k >= 1): ");
	//if (scanf("%d", &k) != 1) {
	//	printf("Oshibka vvoda! vvedite chislo.\n");
	//	return 1;
	//}
	//if (k < 1) {
	//	printf("Oshibka: chislo dolzhno bit bolshe ili ravno 1.\n");
	//	return 1;
	//}
	//printf("Deliteli chisla %d: ", k);
	//for (int i = 1; i <= k; i++)
	//{
	//	if (k % i == 0)
	//	{
	//		printf("%d", i);
	//		if (i != k) {
	//			printf(", ");
	//		}
	//	}
	//}
	//
	//printf("\n");

	//int x;
	//double S = 0.0;
	//double power_of_2 = 1.0;
	//
	//printf("Vvedite celoe chislo x: ");
	//if (scanf("%d", &x) != 1) {
	//	printf("Oshibka vvoda! vvedite chislo.\n");
	//	return 1;
	//}
	//for (int i = 1; i <= 100; i++)
	//{
	//	power_of_2 *= 2.0; 
	//	S += (double)x / power_of_2; 
	//}
	//printf("Summa S = %.10f\n", S);
	//return 0;

	//int m, k;
	//long long result = 1; 
	//printf("Vvedite celoe chislo m : ");
	//if (scanf("%d", &m) != 1) {
	//	printf("Oshibka vvoda!\n");
	//	return 1;
	//}
	//printf("Vvedite celoe chislo k (stepen, k >= 0): ");
	//if (scanf("%d", &k) != 1) {
	//	printf("Oshibka vvoda!\n");
	//	return 1;
	//}
	//if (k < 0) {
	//	printf("Oshibka: stepen k dolzhna bit >= 0.\n");
	//	return 1;
	//}
	//for (int i = 0; i < k; i++)
	//{
	//	result *= m;
	//}
	//printf("\nResultat: %d^%d = %lld\n", m, k, result);
	//return 0;

	//int m;
	//unsigned long long result = 1;
	//printf("Vvedite celoe chetnoe chislo m (m > 0): ");
	//if (scanf("%d", &m) != 1) {
	//	printf("Oshibka vvoda!\n");
	//	return 1;
	//}
	//
	//if (m <= 0) {
	//	printf("Oshibka: chislo m dolzhno bit polozhitelnim.\n");
	//	return 1;
	//}
	//if (m % 2 != 0) {
	//	printf("Oshibka: chislo m dolzhno bit chetnim.\n");
	//	return 1;
	//}
	//for (int i = 2; i <= m; i += 2)
	//{
	//	result *= i;
	//}
	//printf("\nResultat: %d!! = %llu\n", m, result);
	//return 0;

	//int m;
	//int count = 0;
	//printf("Vvedite celoe chislo m: ");
	//if (scanf("%d", &m) != 1) {
	//	printf("Oshibka vvoda!\n");
	//	return 1;
	//}
	//if (m == 0) {
	//	count = 1;
	//}
	//else {
	//	long long temp = m;
	//	if (temp < 0) {
	//		temp = -temp;
	//	}
	//	while (temp > 0)
	//	{
	//		temp = temp / 10;
	//		count++;
	//	}
	//}
	//printf("\nKolichestvo desyatichnih cifr v chisle %d: %d\n", m, count);
	//return 0;

	//int n;
	//unsigned long long power_of_2 = 1;
	//printf("Vvedite celoe polozhitelnoe chislo n (n > 1): ");
	//if (scanf("%d", &n) != 1) {
	//	printf("Oshibka vvoda!\n");
	//	return 1;
	//}
	//if (n <= 1) {
	//	printf("Oshibka: chislo n dolzhno bit bolshe 1.\n");
	//	return 1;
	//}
	//while (power_of_2 <= n)
	//{
	//	power_of_2 *= 2;
	//}
	//printf("\nNaimenshee chislo vida 2^k, prevoshodyashee %d, ravno: %llu\n", n, power_of_2);
	//return 0;

	/*
	int a, b;
	int found = 0;

	printf("Vvedite chislo a: ");
	if (scanf("%d", &a) != 1) {
		printf("Oshibka vvoda!\n");
		return 1;
	}

	printf("Vvedite chislo b: ");
	if (scanf("%d", &b) != 1) {
		printf("Oshibka vvoda!\n");
		return 1;
	}

	if (a > b) {
		printf("Oshibka: dolzhno vipolnyatsya uslovie a <= b.\n");
		return 1;
	}

	printf("\nChetnie chisla na otrezke [%d, %d]:\n", a, b);

	for (int i = a; i <= b; i++)
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
			found = 1;
		}
	}

	if (!found) {
		printf("(takih chisel net)");
	}

	printf("\n");

	return 0;
	*/


	//int m;
	//double R[m];
	//int is_sorted = 1;
	//printf("Vvedite razmer massiva m: ");
	//if (scanf("%d", &m) != 1 || m <= 0) {
	//	printf("oshibka vvoda! Razmer massiva dolzhen bit polozhitelnim celim chislom.\n");
	//	return 1;
	//}
	//printf("Vvedite %d veshestvennih chisel cherez probel (ili kazhdoe s novoi stroki):\n", m);
	//for (int i = 0; i < m; i++)
	//{
	//	if (scanf("%lf", &R[i]) != 1) {
	//		printf("Oshibka pri chtenii elementa %d!\n", i + 1);
	//		return 1;
	//	}
	//}
	//for (int i = 1; i < m; i++)
	//{
	//
	//	if (R[i] < R[i - 1])
	//	{
	//		is_sorted = 0; 
	//		break;     
	//	}
	//}
	//if (is_sorted) {
	//	printf("\nMassiv uporyadochen po vozrostaniyu.\n");
	//}
	//else {
	//	printf("\nMassiv NE uporyadochen po vozrostaniyu.\n");
	//}
	//return 0;

	/*
	int n;

	int is_sorted = 1;

	printf("Vvedite razmer massiva n: ");
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("Oshibka vvoda! Razmer massiva dolzhen bit` polozhitelnim celim chislom.\n");
		return 1;
	}

	double* Q = (double*)malloc(n * sizeof(double));

	if (Q == NULL) {
		printf("Oshibka videleniya pamyati!\n");
		return 1;
	}
	printf("Vvedite %d veshestvennih chisel cherez probel (ili kazhdoe s novoi stroki):\n", n);
	for (int i = 0; i < n; i++)
	{
		if (scanf("%lf", &Q[i]) != 1) {
			printf("Oshibka pri chtenii elementa %d!\n", i + 1);
			return 1;
		}
	}
	for (int i = 1; i < n; i++)
	{

		if (Q[i] > Q[i - 1])
		{
			is_sorted = 0;
			break;
		}
	}
	if (is_sorted) {
		printf("\nMassiv uporyadochen po ubivaniyu.\n");
	}
	else {
		printf("\nMassiv NE uporyadochen po ubivaniyu.\n");
	}

	return 0;
	*/

	/*
	int m;
	printf("Vvedite razmer massiva m: ");
	if (scanf("%d", &m) != 1 || m <= 0) {
		printf("Oshibka vvoda! Razmer dolzhen bit` polozhitelnim.\n");
		return 1;
	}

	char* G = (char*)malloc(m * sizeof(char));
	if (G == NULL) {
		printf("Oshibka videleniya pamyati!\n");
		return 1;
	}

	printf("Vvedite %d simvolov (probeli i Enter ignoriruyutsya):\n", m);

	while (getchar() != '\n');

	int count = 0;
	int filled = 0;

	while (filled < m)
	{
		char c = getchar();

		if (c == ' ' || c == '\n' || c == '\t' || c == EOF) {
			continue;
		}

		G[filled] = c;

		if (c >= '0' && c <= '9') {
			count++;
		}

		filled++;
	}

	printf("\nKolichestvo simvolov-cifr v massive: %d\n", count);

	free(G);
	return 0;
	*/

	/*
	int m;
	long long S = 0;
	int found = 0;

	printf("Vvedite razmer massiva m: ");
	if (scanf("%d", &m) != 1 || m <= 0) {
		printf("Oshibka vvoda! Razmer dolzhen bit` polozhitelnim.\n");
		return 1;
	}

	int* P = (int*)malloc(m * sizeof(int));
	if (P == NULL) {
		printf("Oshibka videleniya pamyati!\n");
		return 1;
	}

	printf("Vvedite %d neotricatelnih celih chisel:\n", m);
	for (int i = 0; i < m; i++)
	{
		if (scanf("%d", &P[i]) != 1 || P[i] < 0) {
			printf("Oshibka: vvedite neotricatelnoe celoe chislo!\n");
			free(P);
			return 1;
		}
	}

	

	for (int i = 0; i < m; i++)
	{
		if (P[i] == i)
		{
			S += P[i];
			found = 1;
			printf("Naideno sovpadenie: P[%d] = %d\n", i, P[i]);
		}
	}

	if (found) {
		printf("\nSumma elementov, sovpadayushih s indeksom: %lld\n", S);
	}
	else {
		printf("\nNet elementov, znachenie kotorich sovpadaet s ih indeksom.\n");
	}

	free(P);
	return 0;
	*/

	int k;
	printf("Vvedite kolichestvo chlenov ryada k (k > 0): ");
	if (scanf("%d", &k) != 1 || k <= 0) {
		printf("Oshibka vvoda! k dolzhnobit` bol`she nulya.\n");
		return 1;
	}

	double result = calculate_series_sum(k);

	printf("\nSumma pervih %d chlenov ryada: %.10f\n", k, result);

	return 0;

}

	

