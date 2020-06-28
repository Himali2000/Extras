int mini(int m, int a[m])
{
     int i,j,c;
     for(i=0;i<m;i++)
     {
         for(j=0;j<m-i-1;j++)
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
}
