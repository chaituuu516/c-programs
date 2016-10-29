#include<string.h>
#include<stdio.h>
void from();
void to();
void disp();
void calc();
 char s[30],d[30];
 int f,t,n,tot,q=1;
 void main()
  {
   while(q)
   {
  printf("\n***********APSRTC***********\n");
  printf("enter 0 to exit\n");
  printf("1.KAKINADA\n2.RAVULAPALEM\n3.TANUKU\n4.ELURU\n5.VIJAYAWADA\n6.GUDIWADA\n7.GUNTURU\n8.ONGOLE\n9.NAYUDUPETA\n10.CHENNAI\n");
  printf("Enter Your Choice : ");
  scanf("%d",&f);
  if(f==0) break;
  printf("Enter Destination station : ");
  scanf("%d",&t);
  if(f>t)
   printf("INVALID SELECTION");
  else
   from();
  }
 }
 void from()
  {
   switch(f)
    {
     case 1:strcpy(s,"KAKINADA");
            to();
            break;
     case 2:strcpy(s,"RAVULAPALEM");
            to();
            break;
     case 3:strcpy(s,"TANUKU");
            to();
            break;
     case 4:strcpy(s,"ELURU");
	    to();
            break;
     case 5:strcpy(s,"VIJAYAWADA");
            to();
            break;
     case 6:strcpy(s,"GUDIWADA");
            to();
            break;
     case 7:strcpy(s,"GUNTURU");
to();
            break;
     case 8:strcpy(s,"ONGOLE");
to();
            break;
     case 9:strcpy(s,"NAYUDUPETA");
            to();
            break;
    }
}
            
 void to()
  {
   switch(t)
    {
     case 2:strcpy(d,"RAVULAPALEM");
            calc();
            break;
     case 3:strcpy(d,"TANUKU");calc();
            break;
     case 4:strcpy(d,"ELURU");calc();
            break;
     case 5:strcpy(d,"VIJAYAWADA");
calc();
            break;
     case 6:strcpy(d,"GUDIWADA");calc();
            break;
     case 7:strcpy(d,"GUNTURU");calc();
            break;
     case 8:strcpy(d,"ONGOLE");calc();
            break;
     case 9:strcpy(d,"NAYUDUPET");calc();
            break;
     case 10:strcpy(d,"CHENNAI");calc();
            break;
    }
}
 void calc()
  {
   printf("\nENTER NUMBER OF TICKETS:");
   scanf("%d",&n);
   if(t-f==1)
    tot=n*60;
   else if(t-f==2)
    tot=n*120;
   else if(t-f==3)
    tot=n*180;
   else if(t-f==4)
    tot=n*240;
   else if(t-f==5)
    tot=n*300;
   else if(t-f==6)
    tot=n*360;
   else if(t-f==7)
    tot=n*420;
   else if(t-f==8)
    tot=n*480;
   else if(t-f==9)
    tot=n*540;
  
 disp();
 }
 void disp()
 {
   printf("\n********APSRTC********\n");
   printf("   From : %s\n",s);
   printf("   To   : %s\n",d);
   printf("   Tckts: %d\n",n);
   printf("   Amnt : %d\n",tot);
   printf("\n**********************\n");
}
