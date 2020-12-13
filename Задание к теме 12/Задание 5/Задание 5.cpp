#include <stdio.h>
#include <locale.h>


int main()
{

    int x;
    setlocale(LC_ALL, "Rus");
    printf("Введите год:");
    scanf_s("%d", &x);

    switch ((x) % 10) {
    case 0:
    case 1:
        printf("бело");
        break;
    case 2:
    case 3:
        printf("черно");
        break;
    case 4:
    case 5:
        printf("зелёно");
        break;
    case 6:
    case 7:
        printf("красно");
        break;
    case 8:
    case 9:
        printf("жёлто");
        break;
    }
    switch (x % 12) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 9:
    case 10:
    case 11:
        printf("й ");
        break;
    case 6:
    case 7:
    case 8:
        printf("го ");
        break;
    }

    switch ((x + 8) % 12) {
    case 0:
        printf("Крысы");
        break;
    case 1:
        printf("Коровы");
        break;
    case 2:
        printf("Тигра");
        break;
    case 3:
        printf("Зайца");
        break;
    case 4:
        printf("Дракона");
        break;
    case 5:
        printf("Змеи");
        break;
    case 6:
        printf("Лошади");
        break;
    case 7:
        printf("Овцы");
        break;
    case 8:
        printf("Обезьяны");
        break;
    case 9:
        printf("Курицы");
        break;
    case 10:
        printf("Собаки");
        break;
    case 11:
        printf("Cвиньи");
        break;
    }


    return 0;
}
