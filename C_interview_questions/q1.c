#include<stdio.h>

void reverse_ele_of_arr(int arr[], int size_of_arr);
int maximum_possible_number(int number);
void split_each_ele_of_arr(int arr[], int size_of_arr);

void main()
{
    int size_of_arr = 5;
    int arr[5] = {3560, 105, 694, 23, 690};

    
    printf("\n\ninput: [ ");
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");


    reverse_ele_of_arr(arr, size_of_arr);


    printf("\n\nStep 1: [ ");
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");


    for (int i = 0; i < size_of_arr; i++)
    {
        arr[i] = maximum_possible_number(arr[i]);
    }
    

    printf("\n\nStep 2: [ ");
    for (int i = 0; i < size_of_arr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]");


    split_each_ele_of_arr(arr, size_of_arr);
}

void reverse_ele_of_arr(int arr[], int size_of_arr)
{
    for (int i = 0; i < size_of_arr; i++)
    {
        int arr_num  = arr[i];
        int rev_arr_num = 0;
        while (arr_num != 0)
        {
            int rem = arr_num % 10;
            rev_arr_num = rev_arr_num * 10 + rem;
            arr_num /= 10;
        }

        arr[i] = rev_arr_num;
    }
}


int maximum_possible_number(int number)
{
    int len = 0;
    int copy = number;
    int max_possible_number = 0;
    

    while (copy != 0)
    {
        len++;
        copy /= 10;
    }

    // printf("len of n %d\n", len);
    int arr[len];

    for (int i = 0; i < len; i++)
    {
        arr[i] = number % 10;
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
    
    // printf("mn: %d\n", max_possible_number);
    return max_possible_number;
}


void split_each_ele_of_arr(int arr[], int size_of_arr)
{
    int len = 0;

    for (int i = 0; i < size_of_arr; i++)
    {
        int copy = arr[i];
        while (copy != 0)
        {
            len++;
            copy /= 10;
        }
    }
    
    // printf("max len is %d\n", len);

    int new_arr[len];

    for (int i = 0; i < size_of_arr; i++)
    {
        int arr_ele = arr[i];
        while (arr_ele != 0)
        {
            new_arr[i] =  arr_ele
        }
        
    }
    

    


    
}