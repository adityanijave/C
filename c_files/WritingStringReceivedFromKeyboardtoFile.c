#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    FILE *fp;
    char str[80];
    fp = fopen("required_txt_folder//WritingStringReceivedFromKeyboardtoFile.txt", "w");
    if (fp == NULL)
    {
        printf("unable to open file");
        exit(1);
    }
    
    puts("enter some lines: ");

    while (strlen(gets(str))> 0)
    {
        fputs(str, fp);
        fputs("\n", fp);
    }
    
    fclose(fp);
    printf("\n\ndata written sucessfully");
    
    // getch();
}