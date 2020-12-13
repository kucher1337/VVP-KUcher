#include <stdio.h>
#include <locale.h>


int main()
{

    int A;
    char B;
    setlocale(LC_ALL, "Rus");
    printf("Направление:");
    scanf_s("%c", &B);
    printf("Команда:");
    scanf_s("%d", &A);

    switch (B) {
    case 'S':
        switch (A) {
        case 1:
            B = 'Z';
            break;
        case 0:
            B = 'S';
            break;
        case -1:
            B = 'V';
            break;
        }
        break;
    case 'V':
        switch (A) {
        case 1:
            B = 'S';
            break;
        case 0:
            B = 'V';
            break;
        case -1:
            B = 'U';
            break;
        }
    case 'U':
        switch (A) {
        case 1:
            B = 'V';
            break;
        case 0:
            B = 'U';
            break;
        case -1:
            B = 'Z';
            break;
        }
        break;
    case 'Z':
        switch (A) {
        case 1:
            B = 'U';
            break;
        case 0:
            B = 'Z';
            break;
        case -1:
            B = 'S';
            break;
        }
    }

    printf("%c", A);


    return 0;
}
