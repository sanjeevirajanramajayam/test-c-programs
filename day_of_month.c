#include <stdio.h>
static int day_tab[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30 ,31}
    };

int main()
{
    int year=1999;
    int month = 3;
    int day = 0;

    int yearday = 31;
    int montha = 0;
    int daya = 0;

    day = day_of_year(year, month, day);
    printf("%d\n", day);
    month_day(year, yearday, &montha, &daya);
    printf("%d %d", montha, daya);
}

day_of_year(year, month, day)
int year, month, day;
{
    int i, leap;
    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    for (i=1; i < month; i++)
    {
        day += day_tab[leap][i];
    }
    return (day);
}

month_day(year, yearday, pmonth, pday)
int year, yearday, *pmonth, *pday;
{
    int i, leap;
    leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
    for (i=0; yearday > day_tab[leap][i] ;i++)
        yearday -= day_tab[leap][i];
    *pmonth = i;
    *pday = yearday;
}
