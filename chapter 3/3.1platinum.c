/* platinum.c --your weight in platinum */

#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("Are you worth you weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter you weight in pounds: ");

    /* 获取用户输入 */
    scanf("%f", &weight);
    getchar();
    getchar();
    /* 假设白金的价格是每盎司￥1700 */
    /* 14.5833用于把英镑常衡盎司转换为金衡盎司 */
    value = 1700.0 * weight * 14.85833;
    printf("Your weight in platinum is worth %.2f.\n", value);
    printf("You are easily worth that! If plantinum price drop,\n");
    printf("eat more to maintain your value.\n");
    return 0;
}