#include<stdio.h>
#include<string.h>
void main()
 {
  int n,i=0;
  char a[100];
  scanf("%s",a);
  n=strlen(a);
  for(i=n;i>=0;i--)
   {
    printf("%c",a[i]);
   }
  printf("\n");
 }
