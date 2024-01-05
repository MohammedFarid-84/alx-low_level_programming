#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year, taking
 * leap years into account
 * Return: 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	printf("%s\n", "please insert a month number between 1 to 12: ");
	scanf("%d", &month);

	printf("%s\n", "please insert a day of month between 1 to 31: ");
	scanf("%d", &day);

	printf("%s\n", "please insert a year number: ");
	scanf("%d", &year);

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);
	printf("the day after convert is: %d\n", day);

	print_remaining_days(month, day, year);

	return (0);
}
