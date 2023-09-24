#include <stdio.h>
#include <math.h>
int calculateDay(int year, int month, int day, int n);
int main(void)
{
    int day, month, year, n;

    while (1)
    {
        printf("Please, enter the day of month: ");
        scanf("%d", &day);
        printf("Please, enter the ordinal number of month: ");
        scanf("%d", &month);
        printf("Please, enter the year: ");
        scanf("%d", &year);
        printf("\n");

        if (day > 31)
        {
            printf("The day of month can not be greater than 31. Please, try again.\n");
            printf("\n");
        }
        else if (month > 12)
        {
            printf("Month can not be greater than 12. Please, try again.\n ");
            printf("\n");
        }

        else if ((day <= 0) || (month <= 0) || (year <= 0))
        {
            printf("Date can not be less than or equal to 0. Please, try again.\n");
            printf("\n");
        }

        else if (day > 0 && month > 0 && day < 31 && month < 12)
        {
            if (day > 31 && month == 1)
            {
                printf("January can not have more than 31 days.  Please, try again.\n");
                printf("\n");
            }
            else if (((!(year % 100 == 0) && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)) && day > 29 && month == 2)
            {
                printf("February has 29 days in leap year.  Please, try again.\n");
                printf("\n");
            }

            else if ((!((!(year % 100 == 0) && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0)) && day > 28 && month == 2))
            {
                printf("February has 28 days in common year.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 31 && month == 3)
            {
                printf("March can not have more than 31 days.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 30 && month == 4)
            {
                printf("April can not have more than 30 days.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 31 && month == 5)
            {
                printf("May can not have more than 31 days.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 30 && month == 6)
            {
                printf("June can not have more than 30 days.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 31 && month == 7)
            {
                printf("July can not have more than 31 days.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 31 && month == 8)
            {
                printf("August can not have more than 31 days.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 30 && month == 9)
            {
                printf("September can not have more than 30 days.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 31 && month == 10)
            {
                printf("October can not have more than 31 days.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 30 && month == 11)
            {
                printf("November can not have more than 30 days.  Please, try again.\n");
                printf("\n");
            }
            else if (day > 31 && month == 12)
            {
                printf("December can not have more than 31 days.  Please, try again.\n");
                printf("\n");
            }
            else
            {
                break;
            }
        }

        else
        {
            break;
        }
    }

    if (month > 2)
    {
        n = 0;
    }

    else
    {
        if ((!(year % 100 == 0) && year % 4 == 0) || (year % 100 == 0 && year % 400 == 0))
        {
            n = 1;
        }
        else
        {
            n = 2;
        }
    }

    calculateDay(year, month, day, n);

    return 0;
}

int calculateDay(int year, int month, int day, int n)
{
    int dayOfWeek;
    dayOfWeek = ((int)(365.25 * year) + (int)(30.56 * month) + day + n) % 7;

    switch (dayOfWeek)
    {
    case 0:
        printf("\t%02d.%02d.%04d - Monday\n", day, month, year);

        break;
    case 1:
        printf("\t%02d.%02d.%04d - Tuesday\n", day, month, year);
        break;
    case 2:
        printf("\t%02d.%02d.%04d - Wednesday\n", day, month, year);
        break;
    case 3:
        printf("\t%02d.%02d.%04d - Thursday\n", day, month, year);
        break;
    case 4:
        printf("\t%02d.%02d.%04d - Friday\n", day, month, year);
        break;
    case 5:
        printf("\t%02d.%02d.%04d - Saturday\n", day, month, year);
        break;
    case 6:
        printf("\t%02d.%02d.%04d - Sunday\n", day, month, year);
        break;
    default:
        break;
    }
    return dayOfWeek;
}
