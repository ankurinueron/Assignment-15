#include<stdio.h>               //smallest using array function TSRS
int smaller(int a[])
{
    int i;
    for(i=1;i<=9;i++)
        if(a[0]>a[i])
        a[0]=a[i];
    return a[0];
}
int main()
{
    int i,a[10],k;
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    k=smaller(a);
    printf("Smallest number is : %d",k);
    return 0;
}
