#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    FILE *fp;
    char another;

    struct student
    {
        char name[10];
        int roll_no;
        float percentage;
    }s;

    fp = fopen("required_txt_folder//WritingRecordsUsingfwrite.txt", "w");
    if (fp == NULL)
    {
        printf("\nunable to open WritingRecordsUsingfwrite.txt file");
        exit(1);
    }
    else if (fp != NULL)
    {
        int i = 1;
        do
        {
            printf("\nenter name, roll no, and percentage for student no %d", i);
            i++;
            scanf("%s %d %f", &s.name, &s.roll_no, &s.percentage);
            fwrite(&s, sizeof(s), 1, fp);
            fputs("\n", fp);


            printf("\ndo you want to enter data for another student");
            another = getche();
        } while (another == 'y' || another == 'Y');
        puts("\n\nDone");

        fclose(fp);
    }
}