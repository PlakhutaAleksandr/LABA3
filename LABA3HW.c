
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");

    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double area = 0.0;
    double perimeter = 0.0;

    printf("Введите два катета a и b через пробел: ");
    scanf("%lf %lf", &a, &b);

    c = sqrt(a * a + b * b);
    area = 0.5 * a * b;
    perimeter = a + b + c;

    printf("\n--- Результаты ---\n");
    printf("Гипотенуза c = %.2lf\n", c);
    printf("Площадь = %.2lf\n", area);
    printf("Периметр = %.2lf\n", perimeter);


    return 0;
}
