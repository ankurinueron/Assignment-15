#include<stdio.h>           //sorting of an array using function
void sort(int a[])
{
    int i,j,temp;
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=10;j++)
            {
            if(a[i]>a[j])
            {
            temp=a[i];
        a[i]=a[j];
        a[j]=temp;
            }
        }
        printf("%d ",a[i]);
    }
}
int main()
{
    int a[10],i;
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    sort(a);
    return 0;
}
