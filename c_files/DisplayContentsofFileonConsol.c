#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("required_txt_folder//DisplayContentsofFileonConsol.txt", "r");
    if (fp == NULL)
    {
        printf("unable to find file");
        exit(0);
    }

    while (1)
    {
        ch = fgetc(fp);
        if (ch == EOF)
        {
            break;
        }
        putchar(ch);
    }
    printf("\n\ndone with reading!!");
    fclose(fp);
}