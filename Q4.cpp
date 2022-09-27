#include<stdio.h>       //taking d as direction and shifting it by N position in array
void shift(int a[])
{
    int temp,i,j,n,d;
    printf("\nEnter the required position you wanna shift the array : ");
    scanf("%d",&n);
    printf("\nEnter 1 for left shifting and 2 for right shifting : ");
    scanf("%d",&d);
    if(d==1){
    for(i=0;i<n;i++)
    {
        temp=a[0];
        for(j=0;j<9;j++){
            a[j]=a[j+1];
        }
    a[9]=temp;
    }
    for(j=0;j<10;j++)
    printf("%d ",a[j]);
    }
    else if(d==2)
    {
        for(i=0;i<n;i++)
    {
        temp=a[9];
        for(j=9;j>0;j--){
            a[j]=a[j-1];
        }
    a[0]=temp;
    }
    for(j=0;j<10;j++)
    printf("%d ",a[j]);
    }
}
int main()
{
    int a[10],i;
    printf("Enter ten numbers : ");
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    shift(a);
    return 0;

}
