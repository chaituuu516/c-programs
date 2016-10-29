#include<stdio.h>
#include<string.h>
void main()
 {
  char a[100],rev[100],b[100],c[100];
  int n,i=0,j=0,k=0;
   scanf("%s",a);
   n=strlen(a);
  for(i=0;i<=n;i++)
   {
     if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
      {
        b[j]=a[i];
        j++;
      }
     else
      {
       c[k]=a[i];
       k++;
      }
    }
     strcat(b,c);
     strcpy(a,b);
   puts(a);
   j=0;
   for(i=n;i>=0;i--)
    {
      rev[j]=a[i];
       j++;
    }
   for(i=0;i<j;i++)
     {
      printf("%c",rev[i]);
      }
 printf("\n");
  }
