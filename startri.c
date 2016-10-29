#include<stdio.h>
void main()
{
  int j,i,s,r,n,c=0;
  scanf("%d",&n);
   for(s=n;s>=1;s--)
    {
     for(r=1;r<=s;r++)
      {
       printf(" ");
      }
     c=c+1;
     for(j=1;j<=c;j++)
      {
      printf("*");
       printf(" ");
     }
     for(i=1;i<=s;i++)
      {
       printf(" ");
      }
     printf("\n");
}
}
