#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    char string[100];

    fp = fopen("required_txt_folder\\ReadingStringFromFileandPrintingonConsole.txt", "r");

    if (fp == NULL)
    {
        printf("unable to read the *ReadingStringFromFileandPrintingonConsole.txt* file");
        
        exit(1);
    }

    while (fgets(string, 100, fp) != NULL)
    {
        printf("%s", string);
    }
    


    puts("\n\n\nDone with task!!!");
    
    fclose(fp);
}