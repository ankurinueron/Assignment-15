#include<stdio.h>       //unique values in array using function
void unique(int a[])
{
    int i,j;
    for(i=0;i<10;i++)
    {
        for(j=1;j<10;j++)
        {
            if(a[i]==a[j] && i!=j)
                break;
        }
        if(j==10)
        printf("%d ",a[i]);
    }
}
int main()
{
    int i,a[10];
    printf("Enter ten numbers : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    unique(a);
    return 0;
}
