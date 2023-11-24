#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fs, *ft;
    char ch;
    fs = fopen("required_txt_folder//WritingFromOneFiletoAnother_main.txt", "r");
    if (fs == NULL)
    {
        printf("WritingFromOneFiletoAnother_main.txt not found");
        exit(1);
    }

    ft = fopen("required_txt_folder//WritingFromOneFiletoAnother_copyied.txt", "w");
    if (ft == NULL)
    {
        printf("WritingFromOneFiletoAnother_copyied.txt not found");
        fclose(fs);
        exit(2);
    }

    
    while (1)
    {
        ch = fgetc(fs);
        if (ch == EOF)
        {
            break;
        }
        fputc(ch, ft);
        
    }
    
    fclose(fs);
    fclose(ft);
    printf("Done with task");

}