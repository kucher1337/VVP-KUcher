#include <stdio.h>
#include <locale.h>


int main()
{

    int x;
    setlocale(LC_ALL, "Rus");
    printf(" Количество учебных заведений:");
    scanf_s("%d", &x);

    if (x / 10 == 1) {
        switch (x) {
        case 10:
            printf("Десять учебных заданий ");
            break;
        case 11:
            printf("Одинадцать учебных заданий");
            break;
        case 12:
            printf("Двенадцать учебных заданий");
            break;
        case 13:
            printf("Тринадцать учебных заданий");
            break;
        case 14:
            printf("Четырнадцать учебных заданий");
            break;
        case 15:
            printf("Пятнадцать учебных заданий");
            break;
        case 16:
            printf("Шестнадцать учебных заданий");
            break;
        case 17:
            printf("Семнадцать учебных заданий");
            break;
        case 18:
            printf("Восемнадцать учебных заданий");
            break;
        case 19:
            printf("Девятнадцать учебных заданий");
            break;
        }
    }
    else {
        switch (x / 10) {
        case 2:
            printf("Двадцать ");
            break;
        case 3:
            printf("Тридцать ");
            break;
        case 4:
            printf("Сорок ");
            break;
        }
        switch (x % 10) {
        case 1:
            printf("Одно");
            break;
        case 2:
            printf("Два");
            break;
        case 3:
            printf("Три");
            break;
        case 4:
            printf("Четыре");
            break;
        case 5:
            printf("Пять");
            break;
        case 6:
            printf("Шесть");
            break;
        case 7:
            printf("Семь");
            break;
        case 8:
            printf("Восемь");
            break;
        case 9:
            printf("Девять");
            break;
        }
        switch (x % 10) {
        case 0:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("Учебных заданий");
            break;
        case 1:
            printf("Учебное задание");
            break;
        case 2:
        case 3:
        case 4:
            printf("Учебных задания");
            break;
        }
    }


    return 0;
}