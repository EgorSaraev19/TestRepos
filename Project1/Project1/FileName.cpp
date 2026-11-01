#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <windows.h>


int main()  
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);


    int n = 0, i = 0;
    double min = 0.0, max = 0.0;
    double a[1000];
    int flag[1000] = { 0 };
    double sum = 0.0;


    scanf("%d", &n);
    scanf("%lf %lf", &min, &max);
    srand((unsigned)time(NULL));


    // Генерация n случайных чисел
    for (i = 0; i < n; i++) {
        a[i] = (((double)rand()) / (RAND_MAX)) * (max - min) + min;
        a[i] = round(a[i] * 1000.0) / 1000.0;
        printf("a[%d]\t=\t%.3lf\n", i, a[i]);
    }


    // Отмечаем номера, совпавшие с дробной частью
    for (i = 0; i < n; i++) {
        long long frac = llround(fabs(a[i]) * 1000.0) % 1000;
        if (frac < n) {
            flag[frac] = 1;
        }
    }


    // Вычисление суммы с проверкой на совпадение 
    for (i = 0; i < n; i++) {
        if (flag[i]) {
            sum -= a[i];
        }
        else {
            sum += a[i];
        }
    }


    printf("Сумма = %.3lf\n", sum);
    return 0;
} 