// book.c--一本书的图书目录

#include <stdio.h>
#include <string.h>

char *s_get(char *st, int n);
#define MAXMTITL 41 /* 书名的最大长度＋１ */
#define MAXAUTL 31  /* 作者姓名的最大长度＋１ */

struct book /* 结构体模板：标记是book。表示定义了一个新的数据类型，这个数据类型的名称就叫做struct book*/
{
    char title[MAXMTITL];
    char author[MAXAUTL];
    float value;
}; /* 结构体的定义结束 */

int main(void)
{
    struct book library; /* 声明一个新的变量，这个变量的类型为struct book，名称叫做library */
    printf("Please enter the book title\n");
    s_get(library.title, MAXMTITL); /* 通过“.”运算符来访问结构体变量里面的成员 */
    printf("Now enther the author.\n");
    s_get(library.author, MAXAUTL);
    printf("Now enter the value.\n");
    scanf("%f", &library.value);
    printf("%sby%s:$%2.f\n", library.title, library.author, library.value);
    printf("Done\n");
    return 0;
}

char *s_get(char *st, int n)
{
    char *ret_val;
    char *find;
    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n'); /* 查找换行符 */
        if (find)                /* 如果地址不为NULL*/
            *find = '\0';        /* 在此处放置一个空字符，表示字符变量的结尾 */
        else
            while (getchar() != '\n')
                continue; /*继续处理输入行中剩余的字符*/
    }
    return ret_val;
}