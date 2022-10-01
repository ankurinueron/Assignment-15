#include<stdio.h>           //frequency of an element
int main()
{
    int i,freq[1000]={0},a[10];
    printf("Enter ten numbers (<1000) : ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(i=0;i<10;i++)
    {
            freq[a[i]]++;
    }
    printf("The frequency of numbers entered by the users are : ");
    for(i=0;i<10;i++)
        printf("\n%d is %d times",a[i],freq[a[i]]);
    return 0;
}
