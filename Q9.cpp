#include<stdio.h>           //merging of two arrays into one in descending order
void merge(int a[],int b[]);
int main()
{
    int a[10],b[10],i,j;
    printf("Enter ten numbers for the first array : ");
   for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("Enter ten numbers for the second array : ");
    for(j=0;j<10;j++)
    scanf("%d",&b[j]);
    merge(a,b);
    return 0;
}
void merge(int a[], int b[])
{
    int c[25],k=0,i=0,j=0;
    for(k=0;k<20;k++)
    {
        if(i>=10)
            {
        while(k<20)
            {
                c[k]=b[j];
                j++;
                k++;
                if(k==20)
                {
                    break;
                }
        }
        }
       else if(j>=10)
        {
            while(k<20)
            {
                c[k]=a[i];
                i++;
                k++;
                if(k==20)
                {
                    break;
                }
            }
        }
        else if(a[i]<b[j])
            {
            c[k]=b[j];
            i++;
            }
            else
            {
                c[k]=a[i];
                j++;
            }

    }
    for(k=0;k<20;k++)
        printf("%d ",c[k]);
}
