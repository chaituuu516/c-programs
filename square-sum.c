#include<stdio.h>
void main()
{
 int i,x,j,k,n;
  scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
    for(j=i+1;j<=n;j++)
     {
      for(k=j+1;k<=n;k++)
      {
       if(k*k==i*i+j*j)
         printf("%d %d %d\n",i,j,k);
      }
   }
  }
 }
 
