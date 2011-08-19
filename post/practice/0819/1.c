#include <stdio.h>

int day_per_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_leap(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) 
        return 1;
    else
        return 0;
}

int total_month(int month)
{
    int i, count = 0;
    for (i = 0; i < month; i++) 
        count += day_per_month[i];
    return count;
}

int calc(int year, int month, int day)
{
    int count = 0;
    count = total_month(month) + day;
    if (is_leap(year) && month > 2) 
        count++;
    return count;
}

int main(int argc, const char *argv[])
{
    int year, month, day;
    printf("Please enter date like this xxxx:xx:xx: ");
    scanf("%4d:%2d:%2d", &year, &month, &day);
    printf("Total %d days\n", calc(year, month, day));
    return 0;
}
