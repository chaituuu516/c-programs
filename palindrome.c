#include<stdio.h>
#include<string.h>
void main()
 {
   int j,i,n,flag=1;
   char c[100];
   scanf("%s",c);
   n=strlen(c);
    j=n;
   for(i=0;i<(n/2);i++)
   {
    j--;
    if(c[i]!=c[j])
    {
     flag=0;
     break;
    }
   }
  if(flag==1)
      printf("palindrome\n");
  else
      printf("not a palindrome\n");
}
