#include<stdio.h>
#include<string.h>
void main()
 {
  int n=0,i=0,j;
  char a[100],b[100];
  scanf("%s",a);
  n=strlen(a);
  j=0;
  for(i=n-1;i>=0;i--)
   {
    b[j]=a[i];
    j++;
   }
  for(j=0;j<n;j++)
  {
   if(a[j]!=b[j])
   break;
  }
   if(j==n)
   printf("palindrome\n");
   else
   printf("not palindrome\n");
 }
