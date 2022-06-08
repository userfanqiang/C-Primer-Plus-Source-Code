/* summing.c--根据用户键入的整数求和 */

#include <stdio.h>

int main(void)
{
    long num;
    long sum = 0l;
    int status;
    printf("Please enter an integer to bu summed ");
    printf("(q to quit):");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum += sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    return 0;
}