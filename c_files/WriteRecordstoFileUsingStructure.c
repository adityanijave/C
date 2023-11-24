#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    FILE *fp;
    char ch;

    struct emp
    {
        char name[10];
        int roll_no;
        float sal;
    };

    struct emp e;

    fp = fopen("required_txt_folder\\WriteRecordstoFileUsingStructure.txt", "w");
    if (fp == NULL)
    {
        puts("unable to open WriteRecordstoFileUsingStructure.txt file");
        exit(1);
    }
    else if (fp != NULL)
    {
        int emp_no = 1;
        do
        {
            printf("\nenter data for employee no %d : name, roll no, and salary of employee: ", emp_no);
            emp_no++;
            fflush(stdin);
            scanf("%s %d %f", &e.name, &e.roll_no, &e.sal);
            fprintf(fp, "%s %d %f", e.name, e.roll_no, e.sal);
            fputs("\n", fp);

            puts("do you want do continue <y/n>: ");
            // fflush(stdin);
            // scanf(" %c", &ch);
            ch = getche();
        } while (ch == 'y' || ch == 'Y');
        

        puts("\n\n\nDone");
    }
    
    
}