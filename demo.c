#include <stdio.h>

#define INPUT_LINE_LENGTH 40

int main(void)
{
    FILE *outputFile = NULL;
    int quitChar;
    char inputText[INPUT_LINE_LENGTH];

    outputFile = fopen("outfile.txt", "w");

    if (outputFile)
    {
        for (quitChar = 'N'; (quitChar != 'y' && quitChar != 'Y');)
        {
            printf("Enter a string of no more than 40 characters\n");
            printf(">>>");
            gets(inputText);
            fputs(inputText, outputFile);
            fputc('\n', outputFile);

            printf("\nQuit?(Y/N): ");
            quitChar = getchar(); //本例的while(getchar() != '\n');就属于可以消除非法输入的类型

            while (getchar() != '\n')
                ;

            putchar('\n');
            putchar('\n');
        }
        fclose(outputFile);
    }
    return 0;
}