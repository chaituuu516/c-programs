#include<stdio.h>
#include<string.h>
void main()
{
 int m,i,n,c=0;
 char a[1000];
 gets(a);
 n=strlen(a);
 m=n/2;
 for(i=0;i<m;i++)
  {
   if(a[i]!=a[n-i-1])
    {
    c++;
    }
  }
printf("%d\n",c);
}
