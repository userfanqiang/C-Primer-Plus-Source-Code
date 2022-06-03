/* praise2.c */
// 如果编译器不识别%zd，尝试换成%u或者%lu

#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary beding"

int main(void)
{
    char name[40];
    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s.%s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof(name));
    printf("and occupies %zd memory cells.\n", sizeof(PRAISE));
    return 0;
}