#include<stdio.h>
#include<string.h>
void main()
{
  int j=0,n,i;
  char a[200],b[200];
  char key;
  gets(a);
  n=strlen(a);
  scanf("%c",&key);
   for(i=0;i<=n;i++)
    {
     if(a[i]==key)
      {}
     else
      {
       b[j]=a[i];
       j++;
      }
    }
 puts(b);
}       
