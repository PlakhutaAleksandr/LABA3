
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Russian");

    int a=0;
    int b=0;
    int c = 0;
    
    printf("Введите значения трех сторон прямоугольного треугольника:\n");
    scanf("%d %d %d", &a, &b, &c);

    int S = a * b * 0.5;
    int P = a + b + c;

    printf("\n--- Результаты ---\n");
    printf("Площадь прямоугльного треугольника: %d\n", S);
    printf("Периметр прямоугольного треугольника: %d\n", P);

    return 0;
}