#include <stdio.h>
#include <string.h>

int cal_len(int number);

int find_gn(int number, int len);

void main()
{
    int number = 9928;

    int len_number = cal_len(number);

    printf("\npossible gretest number is %d", find_gn(number, len_number));


    printf("\n\n program is exe.");
}


int cal_len(int number)
{
    int len = 0;
    while (number != 0)
    {
        len++;
        number /= 10;
    }
    
    return len;
}


int find_gn(int number, int len)
{
    int arr[len];
    int i = 0;
    int max_possible_number = 0;
    while(number != 0)
    {
        arr[i] = number % 10;
        i++;
        number /= 10;
    }


    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i]= arr[j];
                arr[j] = temp;
            }
        }
    }
    
    //generate max number
    for (int i = 0; i < len; i++)
    {
        max_possible_number = max_possible_number * 10 + arr[i];
    }
    
    
    return max_possible_number;
}