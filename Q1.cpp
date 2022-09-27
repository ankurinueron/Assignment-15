#include<stdio.h>               //Greatest using array function TSRS
int greater(int a[])
{
    int i;
    for(i=1;i<=9;i++)
        if(a[0]<a[i])
        a[0]=a[i];
    return a[0];
}
int main()
{
    int i,a[10],k;
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    k=greater(a);
    printf("Greatest number is : %d",k);
    return 0;
}
