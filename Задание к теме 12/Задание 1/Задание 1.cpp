#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main()
{

	int day = 0, mont = 0;
	setlocale(LC_ALL, "Russian");
	printf("Месяц:");
	scanf_s("%d", &mont);
	printf("День:");
	scanf_s("%d", &day);

	if (day == 1) {
		printf_s("1");
	}
	else  if (day == 2) {
		printf_s("2");
	}
	if (day == 3) {
		printf_s("3");
	}
	else  if (day == 4) {
		printf_s("4");
	}
	if (day == 5) {
		printf_s("5");
	}
	else  if (day == 6) {
		printf_s("6");
	}
	if (day == 7) {
		printf_s("7");
	}
	else  if (day == 8) {
		printf_s("8");
	}
	if (day == 9) {
		printf_s("9");
	}
	else  if (day == 10) {
		printf_s("10");
	}
	if (day == 11) {
		printf_s("11");
	}
	else  if (day == 12) {
		printf_s("12");
	}
	if (day == 13) {
		printf_s("13");
	}
	else  if (day == 14) {
		printf_s("14");
	}
	if (day == 15) {
		printf_s("15");
	}
	else  if (day == 16) {
		printf_s("16");
	}
	if (day == 17) {
		printf_s("17");
	}
	else  if (day == 18) {
		printf_s("18");
	}
	if (day == 19) {
		printf_s("19");
	}
	else  if (day == 20) {
		printf_s("20");
	}
	if (day == 21) {
		printf_s("21");
	}
	else  if (day == 22) {
		printf_s("22");
	}
	if (day == 23) {
		printf_s("23");
	}
	else  if (day == 24) {
		printf_s("24");
	}
	if (day == 25) {
		printf_s("25");
	}
	else  if (day == 26) {
		printf_s("26");
	}
	if (day == 27) {
		printf_s("27");
	}
	else  if (day == 28) {
		printf_s("28");
	}
	if (day == 29) {
		printf_s("29");
	}
	else  if (day == 30) {
		printf_s("30");
	}
	if (day == 31) {
		printf_s("31");
	}
	if (mont == 1) {
		printf_s("января");
	}
	if (mont == 2) {
		printf_s("февраля");
	}
	if (mont == 3) {
		printf_s("марта");
	}
	if (mont == 4) {
		printf_s("апреля");
	}
	if (mont == 5) {
		printf_s("мая");
	}
	if (mont == 6) {
		printf_s("июня");
	}
	if (mont == 7) {
		printf_s("июля");
	}
	if (mont == 8) {
		printf_s("августа");
	}
	if (mont == 9) {
		printf_s("сентября");
	}
	if (mont == 10) {
		printf_s("октября");
	}
	if (mont == 11) {
		printf_s("ноября");
	}
	if (mont == 12) {
		printf_s("декабря");
	}
	system("pause");
	return 0;
	

}
