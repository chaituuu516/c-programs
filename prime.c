#include<stdio.h>
void prime(int);
void prime(int x)
 {
  int f=0,i;
   for(i=2;i<x;i++)
    {
     if(x%i==0)
      {
       f=1;
      }
    }
     if(f==0)
      {
       printf("%d ",x);
      }
 }
 void main()
  {
   int j,n;
    scanf("%d",&n);
    for(j=2;j<=n;j++)
     prime(j);
  }
