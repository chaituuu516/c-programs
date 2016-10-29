#include<stdio.h>
void add();
void mul();
int a[100][100],b[100][100],c[100][100],d[100][100];
int i,j,k,m,n,q,p;
 
 void main()
  {
   printf("Enter the order of matrix 1:");
   scanf("%d%d",&m,&n); 
   printf("Enter the order of matrix 2:");
   scanf("%d%d",&p,&q);
   printf("Enter matrix 1:");
   for(i=1;i<=m;i++)
    {
     for(j=1;j<=n;j++)
     {
      scanf("%d",&a[i][j]);
     }
    }
   printf("Enter matrix 2:");
   for(i=1;i<=p;i++)
    {
     for(j=1;j<=q;j++)
     {
      scanf("%d",&b[i][j]);
     }
    }
  if(m==p && n==q)
  {
   printf("\nAddition is:\n");
   add();
  }
  else
   printf("addition not possible\n");
  if(m==q)
  {
   printf("\nMultiplication is:\n");
   mul();
  }
  else
   printf("multiplication is not possible\n");
  }

 void add()
  {
    for(i=1;i<=m;i++)
    {
     for(j=1;j<=n;j++)
     {
      c[i][j]=0;
      c[i][j]=a[i][j]+b[i][j];
     }
    }
    for(i=1;i<=m;i++)
    {
     for(j=1;j<=n;j++)
     {
      printf("%d\t",c[i][j]);
     }
     printf("\n");
    }
   }
 
 void mul()
  {
   for(i=1;i<=m;i++)
    {
     for(j=1;j<=q;j++)
     {
      c[i][j]=0;
      for(k=1;k<=n;k++)
       {
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
       }
     }
    }
 for(i=1;i<=m;i++)
  {
   for(j=1;j<=q;j++)
    printf("%d\t",c[i][j]);
   printf("\n");
  }
 }  
