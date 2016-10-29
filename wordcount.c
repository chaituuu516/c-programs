#include<stdio.h>
#include<string.h>
 void main()
  {
   int x,n,i,c=0;
    char a[100];
   gets(a);
   n=strlen(a);
   for(i=0;i<n;i++)
   {
    x=a[i];
    if(x==32)
     c++;
    }
  printf("%d\n",c+1);
 }

