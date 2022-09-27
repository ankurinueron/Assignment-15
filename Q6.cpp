#include<stdio.h>            //reverse of an array using funtion
void reverse(int a[])
{
    int i;
    for(i=9;i>=0;i--)
        printf("%d ",a[i]);

}
int main()
{
    int a[10],i;

printf("Enter ten numbers : ");
for(i=0;i<10;i++)
    scanf("%d",&a[i]);
reverse(a);
return 0;

}

