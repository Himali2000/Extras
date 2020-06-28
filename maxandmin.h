#include<stdio.h>
//#define n 6
//int mini(int a[10]);
//int maximum(int a[10]);
/*
int main()
{
    int b,a[10],i,d;
    printf("n = ");
    scanf("%d",&n);
    printf("Enter numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nMaximum = %d",maximum(a));
    printf("\nMinimum = %d",mini(a));
    printf("\nlist of array after functions\n");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}
*/
int maximum(int m,int a[m])
{
     int i,j,ch;
    // scanf("%d",&n);
    /* for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }
     */
     for(i=0;i<m;i++)
     {
         for(j=0;j<m-i-1;j++)
         {
             if(a[j]<=a[j+1])
             {
                 ch=a[j];
                 a[j]=a[j+1];
                 a[j+1]=ch;
             }
         }
     }
     return a[0];
}
/*
int mini(int a[10])
{
     int i,j,c;
    // scanf("%d",&n);
    /* for(i=0;i<n;i++)
     {
         scanf("%d",&a[i]);
     }

     for(i=0;i<n;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if(a[j]>=a[j+1])
             {
                 c=a[j];
                 a[j]=a[j+1];
                 a[j+1]=c;
             }
         }
     }
     return a[0];
}*/

