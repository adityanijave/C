// Accept data of multiple students and print the same using array of structures.


#include<stdio.h>

void 
main()
{
    typedef struct personalInfo
    {
        char name[100];

         
    }PSI;

    typedef struct student
    {
        int maths_marks, scienece_marks, english_marks, total_marks;
        float percentage;

        PSI P1;

    } STD;


    STD porga;
    STD porgi;

    puts("enter name of porga: ");
    gets(porga.P1.name);
    puts("enter name of porgi");
    gets(porgi.P1.name);

    printf("now we'll collect %s's subjects marks like", porga.P1.name);
    puts("enter marks of subject maths, science and english: ");    
    scanf("%d %d %d", &porga.maths_marks, &porga.scienece_marks, &porga.english_marks);

    printf("now we'll collect %s's subjects marks like", porgi.P1.name);
    puts("enter marks of subject maths, science and english: ");    
    scanf("%d %d %d", &porgi.maths_marks, &porgi.scienece_marks, &porgi.english_marks);

    porga.total_marks = porga.maths_marks + porga.english_marks + porga.scienece_marks;
    porga.percentage = (((float)porga.total_marks) /400)*100;

    porgi.total_marks = porgi.maths_marks + porgi.english_marks + porgi.scienece_marks;
    porgi.percentage = (((float)porgi.total_marks) /400)*100;


    printf("\n%s have %3.2f%c in final exam", porga.P1.name, porga.percentage, 37);
    printf("\n%s have %3.2f%c in final exam", porgi.P1.name, porgi.percentage, 37);
    
}