#include<stdio.h>   
void main()
{
  int n,i,j,k=1,l,d;
  scanf("%d",&n);
  l=n*n+1;
  d=n*2-2;
  for(i=1;i<=n;i++)
   {
   for(j=1;j<i;j++)
    {
     printf("   ");
    }
   for(j=n;j>=i;j--)
    {
     printf("%d  ",k);
     k++;
    }
   
   for(j=n;j>=i;j--)
    {
     printf("%d  ",l);
     l++;
    }
   l=l-1-d;
   d-=2;
   printf("\n");
  }
}

