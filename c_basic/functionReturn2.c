#include<stdio.h>

int calSum(int, int);
int calSub(int, int);
int calMul(int, int);
float calDiv(float, float);

void main()
{
    int n,m;
    float mm = (float) m, nn = (float) n;
    printf("enter number:");
    scanf("%d",&m);
    printf("enter another number: ");
    scanf("%d", &n);


    printf("%d + %d = %d\n", m, n, calSum(m,n)); 
    printf("%d - %d = %d\n", m, n, calSub(m,n));
    printf("%d * %d = %d\n", m, n, calMul(m,n));
    printf("%d / %d = %.2f\n", m, n, calDiv(mm,nn));
}


int calSum(int var1, int var2)
{
    return var1 + var2;
}
int calSub(int var1, int var2)
{
    return var1 - var2;
}
int calMul(int var1, int var2)
{
    return var1 * var2;
}
float calDiv(float var1, float var2)
{
    return var1 / var2;
}