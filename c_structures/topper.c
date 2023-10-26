#include<stdio.h>

typedef struct topper
{
    char name[10];
    int m1,m2, total;
    float percentage;
}TPR;

void display(struct topper[], int);

void main()
{
    TPR students[100];
    puts("enter no of students: ");
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("enter details for student %d", i+1);
        printf("\nenter name of student: ");
        fflush(stdin);
        gets(students[i].name);
        fflush(stdin);
        printf("enter marks of %s in m1 and m2: ", students[i].name);
        scanf("%d %d", &students[i].m1, &students[i].m2);
    }

    display(students, size);
}



void display(struct topper student[], int size)
{
    float max_percentage = student[0].percentage;
    int location = 0;
    for (int i = 0; i < size; i++)
    {

        student[i].total = student[i].m1 + student[i].m2;
        student[i].percentage = ((float)student[i].total / 200) * 100;

        
        if (max_percentage < student[i].percentage)
        {
            max_percentage = student[i].percentage;
            location = i;
        }
        
    }

    printf("the name of topper student is %s having %3.2f%c", student[location].name, student[location].percentage,37);
}