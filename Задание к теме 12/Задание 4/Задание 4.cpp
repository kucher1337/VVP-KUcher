#include <stdio.h>
#include <locale.h>


int main()
{

    int x;
    setlocale(LC_ALL, "Rus");
    printf("Число:");
    scanf_s("%d", &x);

    switch (x / 100) {
    case 1:
        printf("Сто");
        break;
    case 2:
        printf("Двести");
        break;
    case 3:
        printf("Триста");
        break;
    case 4:
        printf("Четыресто");
        break;
    case 5:
        printf("Пятьсот");
        break;
    case 6:
        printf("Шестьсот");
        break;
    case 7:
        printf("Семьсот");
        break;
    case 8:
        printf("Восемьсот");
        break;
    case 9:
        printf("Девятьсот");
        break;
    }
    if ((x % 100) / 10 == 1) {
        switch (x % 100) {
        case 10:
            printf("Десять");
            break;
        case 11:
            printf("Одинадцать");
            break;
        case 12:
            printf("Двенадцать");
            break;
        case 13:
            printf("Тринадцать");
            break;
        case 14:
            printf("Четырнадцать");
            break;
        case 15:
            printf("Пятнадцать");
            break;
        case 16:
            printf("Шестнадцать");
            break;
        case 17:
            printf("Семнадцать");
            break;
        case 18:
            printf("Восемнадцать");
            break;
        case 19:
            printf("Девятнадцать");
            break;
        }
    }
    else {
        switch ((x % 100) / 10) {
        case 2:
            printf("20");
            break;
        case 3:
            printf("30");
            break;
        case 4:
            printf("40");
            break;
        case 5:
            printf("50");
            break;
        case 6:
            printf("60");
            break;
        case 7:
            printf("70");
            break;
        case 8:
            printf("80");
            break;
        case 9:
            printf("90");
            break;
        }
        switch (x % 10) {
        case 1:
            printf("Один");
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
    }


    return 0;
}
