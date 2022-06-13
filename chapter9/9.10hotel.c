/* hotel.c--酒店管理函数 */

#include <stdio.h>
#include "9.11hotel.h"

int menu(void)
{
    int code, status;
    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1)   Fairfield Arms      2)Hotel Oplmic\n");
    printf("3)   Chertworthy Plaza   4)The Stockton\n");
    printf("5) quit\n");
    printf("%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
        {
            scanf("%*s");
        }
        printf("Enterr an integer from 1 to 5, please.\n");
    }
    return code;
}

int getnights(void)
{
    int nights;
    printf("How many nights are needs?");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s");
        printf("Please enter an integerr, such as 2.\n");
    }
    return 0;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;
    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
    {
        total += rate * factor;
    }
    printf("The total cost will be $%0.2f.\n", total);
}