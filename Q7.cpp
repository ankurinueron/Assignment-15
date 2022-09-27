#include<stdio.h>       //duplicate values in array using function
int duplicate(int a[])
{
    int i,j,count=0;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
            if(a[i]==a[j])
            count++;
    }
    return count;
}
int main()
{
    int i,k,a[10];
    printf("Enter ten numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    k=duplicate(a);
    printf("%d time duplicate values is there",k);
    return 0;
}
