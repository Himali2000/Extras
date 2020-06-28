int maximum(int m,int a[m])
{
     int i,j,ch;
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

