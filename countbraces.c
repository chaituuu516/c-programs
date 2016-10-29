#include<stdio.h>
#include<string.h>
void main()
{
 int n,i,c=0,d=0;
 char a[100];
 scanf("%s",a);
 n=strlen(a);
 for(i=0;i<n;i++)
  {
   if(a[i]=='(')
    c++;
   else if(a[i]==')')
    d++;
   }
  if(c==d){}
  
  else
   printf("-1\n");
 }

