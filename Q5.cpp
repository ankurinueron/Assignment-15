#include<stdio.h>       //finding and returning a adjacent duplicate array by funvtion
int duplicate(int a[])
{
    int i;
    for(i=0;i<=9;i++)
    if(a[i]==a[i+1])
    return a[i];
}
int  main()
{
    int a[10],i,k;
    printf("Enter ten numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    k=duplicate(a);
    printf("The duplicate value is : %d ",k);
    return 0;
}
