#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;

    struct student
    {
        char name[10];
        int roll_no;
        float percentage;
    };
    
    struct student s;

    fp = fopen("required_txt_folder\\ReadRecordsFromFileUsingStructure.txt", "r");
    
    if (fp == NULL)
    {
        printf("unable to find ReadRecordsFromFileUsingStructure.txt file");
        exit(1);
    }
    else if (fp != NULL)
    {
        
        while (fscanf(fp, "%s %d %f", &s.name, &s.roll_no, &s.percentage) != EOF)
        {
            
            printf("%s %3d %3.2f\n", s.name, s.roll_no, s.percentage);
        }
        puts("\n\ndone!!!");
    }
    
    
}