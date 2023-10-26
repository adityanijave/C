#include <stdio.h>
#include <string.h>

void main()
{
    char string[100];
    printf("enter string: ");
    scanf("%s", string);
    
    char sub_string[100];
    printf("enter sub string: ");
    scanf("%s", sub_string);
    
    int lensub_string = 0;
    for(int i = 0; sub_string[i] != '\0'; i++)
    {
        lensub_string++;
    }
    
    int counter = 0;
    for(int i = 0; string[i] != '\0'; i++)
    {
        for(int j = 0; string[i] == sub_string[j]; j++)
        {
            counter++;
            i++;
            
        }
    }
    
    if(counter == lensub_string)
    {
        printf("this is a substring");
    }
    else if(counter != lensub_string)
    {
        printf("this is not a substring");
    }
}