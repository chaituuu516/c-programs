#include<stdio.h>
void main()
 {
  int i,j,k=1;
  int n;
  scanf("%d",&n);
   for(i=0;i<n;i++)
    {
     for(j=0;j<=i;j++)
      {
       printf("%d ",k);
       k++;
      }
     printf("\n");
    }
 }
