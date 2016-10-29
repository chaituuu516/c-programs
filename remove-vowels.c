#include<stdio.h>
#include<string.h>
void main()
{
 int n,i,j=0;
 char ip[100],op[100];
 scanf("%s",ip);
 n=strlen(ip);
 for(i=0;i<n;i++)
  {
   if(ip[i]=='a'||ip[i]=='e'||ip[i]=='i'||ip[i]=='o'||ip[i]=='u')
    {}
   else
    {
     op[j]=ip[i];
     j++; 
    }
  }
 for(i=0;i<j;i++)
  printf("%c",op[i]);
 printf("\n");
}
