#include<stdio.h>
  void main()
   {
    int j,i,s,r,n,c=0;
    char x;
    scanf("%d",&n);
    for(s=n;s>0;s--)
     {
      x=65;
      for(r=1;r<=s;r++)
       {
        printf("%c",x);
        x++;
       }
     c++;
      for(j=1;j<c;j++)
       {
        printf("  ");
       }
      for(i=1;i<=s;i++)
       {
        x--;
        printf("%c",x);
       }
      printf("\n");
     }
    }
