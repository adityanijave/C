#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int *, int);
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    //puts("enter  value of n: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        // printf("enter element for arr[%d]:  ", i);
        scanf("%d", &*(arr + i));
    }

    
    
    
    
    printf("%d", sum(arr, n));
    return 0;
}


int sum( int *array, int size)
{
    int total = 0; 
    for (int i = 0; i < size; i++) 
    {
        total += *(array + i);
    }
    return total;
}
