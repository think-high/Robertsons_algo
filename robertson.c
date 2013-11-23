
               /*                 ROBERTSON'S ALGORITHM FOR MULTIPLICATION                  */



#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

char x[8]={},y[16]={},m[8]={};
char zero[8]={'0','0','0','0','0','0','0','0'};
char flag='0';

void ADD(char [],char []);
void R_SHIFT(char [],char);
void CORRECTION(char [],char []);
void ANSWER(char []);
char FLAG(char,char,char);




main()
{

int choice,i,j;
char buffer;
    
printf("\n\n\n\n\n\n");
printf("\n\t\t\t            A\n\n\t\t\t\t PROJECT\n\n\t\t\t\t    OF\n\n\t\t\t  ");
printf("  COMPUTER ORGANISATION\n\n\t\t\t\t    & \n\n\t\t\t\tArchitecture");
printf("\n\n\n\t\t      **********************************\n");
printf("\t\t%c%c%c%c  ROBERTSON MULTIPLICATION ALGORITHM  %c%c%c%c",1,2,1,2,1,2,1,2);
printf("\n\t\t      ----------------------------------\n");
printf("\n\n\n\t\t\t\t\t\t\t\tSUBMITTED BY :\n");
printf("\n\t\t\t\t\t\t\t\tRAHUL K BHOJWANI  ");
printf("\n\t\t\t\t\t\t\t\t%c%c 11CO73 %c%c",1,2,1,2);
printf("\n\t\t\t");
getch();
do
{
   system("cls");
    printf("\n\n\n\t\t      **********************************\n");
  	printf("\t\t%c%c%c%c  ROBERTSON MULTIPLICATION ALGORITHM  %c%c%c%c",1,2,1,2,1,2,1,2);
	printf("\n\t\t      -_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-\n");

   printf("\n\nEnter the multiplicand(8 bits)  :   ");
     for(i=0;i<8;i++)
       scanf("%c",&x[i]);
 
    scanf("%c",&buffer);
  
    printf("\nEnter the multiplier  (8 bits)  :   "); 
     for(i=0;i<8;i++)
       scanf("%c",&m[i]);

      system("cls");
printf("\n\n\n\t\t      **********************************\n");
printf("\t\t%c%c%c%c  ROBERTSON MULTIPLICATION ALGORITHM  %c%c%c%c",1,2,1,2,1,2,1,2);
printf("\n\t\t      -_-_-_-_-_-_-_-_--_-_-_-_-_-_-_-_-\n");

  
    printf("\nMultiplcand M = ");
          for(i=0;i<8;i++)
             printf("%c",x[i]);
    printf("\nMultiplier  X = ");
          for(i=0;i<8;i++)
             printf("%c",m[i]);
 

printf("\n\n");
printf("\n--------------------------------------------------------------------------------\n");
printf("\nStep         Action           flag   Accumulator (ACC)      Register (Q)    \n");
printf("\n--------------------------------------------------------------------------------\n\n");

          for(i=0;i<8;i++)
                y[i]='0';
          for(i=8;i<16;i++)
                y[i]=m[i-8];
         
         
printf("(%d.)    Initialize  \t\t%c\t",0,flag);
         ANSWER(y);
printf("\n--------------------------------------------------------------------------------\n");
     for(i=7;i>0;i--)
        {
           flag = FLAG(m[i],x[0],flag);
           printf(" %d.   ",8-i);            
    
              if(m[i]=='1')
                      {  
        		                 printf("  Add M to A\t\t%c\t",flag);
       		                     for(j=0;j<8;j++)
       		                        { 
                                                 printf("%c",x[j]);}
                                                 printf("\n\t\t\t\t\t");
                                                 ADD(y,x); 
                                     }
     	    else
     	           {
         
                  		printf("  Add 0 to A\t\t%c\t",flag);
        		              for(j=0;j<8;j++)
        		                 { 
                                              printf("%c",'0');}
                                              printf("\n\t\t\t\t\t");
         		                              ADD(y,zero); 
        	                      }
     
                                        ANSWER(y); 
                                        printf("\n\n\tRightshift :\t\t\t");
                                        R_SHIFT(y,flag);
                                        ANSWER(y);  
printf("\n\n-------------------------------------------------------------------------------\n");
                   }
  /*                               correction step                              */
 	if(m[0]=='1')
  	    {
     		 printf(" 8.     Correction step\n\tSubtract M from A \t%c\t",flag);
   			for(j=0;j<8;j++)
                     printf("%c",x[j]);           
    			 CORRECTION(y,x);
     			printf("\n\t\t\t\t\t");
    			 ANSWER(y);
   	    }
  	else
  	   {  
     		printf(" 8.     NO Correction step\n\t\t\t\t%c\t",flag);
     		ANSWER(y);
  	   } 
     		printf("\n\t\tSet Q[0]=0 \t\t");
  
    	y[15]='0';
               ANSWER(y); 
 printf("\n-------------------------------------------------------------------------------\n");         
  
              printf("\n\nAnswer (15 bits)    :    ");
               for(i=0;i<15;i++)
                   printf("%c",y[i]);
      
     	printf("\n\n\n");
     	getch();
     	system("cls");
     
    	 printf("\t\t********************************\n");
     	 printf("\n\t\t\tROBERTSON ALGORITHM\n");
     	 printf("\t\t********************************\n");
     printf("\n\n\nDo You Want to Continue........??");
     	 printf("\n\n\tTo get more algorithm-tables : press 1");
     	 printf("\n\tTo exit : press 0");
    
	 printf("\n\n\t\tYOUR CHOICE :  ");
               scanf("%d",&choice);
 
    


     }while(choice!=0);      
   
  
system("cls");
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t");
printf("%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c\n",1,2,1,2,1,2,1,2,1,2,1,2,1,2,1);
printf("\n\t\t\t    !!...THANK YOU...!!\n");
printf("\t\t\t\n\t\t\t");
printf("%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c-%c\n",2,1,2,1,2,1,2,1,2,1,2,1,2,1,2);
printf("\n\n\n\tSUBMITTED TO:	SIR VINAY KUMAR\n\n\t COMPUTER SCIENCE DEPARTMENT\t\t\t\t\t");
getch();

}


void ADD(char a[],char b[])
{
int i;
char c='0';

      for(i=7;i>=0;i--)  
         {
         	if(a[i]=='0' && b[i]=='0' && c=='0') {a[i]='0';c='0';}
            else if(a[i]=='0' && b[i]=='0' && c=='1') {a[i]='1';c='0';}
            else if(a[i]=='0' && b[i]=='1' && c=='0') {a[i]='1';c='0';}
            else if(a[i]=='0' && b[i]=='1' && c=='1') {a[i]='0';c='1';}
            else if(a[i]=='1' && b[i]=='0' && c=='0') {a[i]='1';c='0';}
            else if(a[i]=='1' && b[i]=='0' && c=='1') {a[i]='0';c='1';}
            else if(a[i]=='1' && b[i]=='1' && c=='0') {a[i]='0';c='1';}
            else if(a[i]=='1' && b[i]=='1' && c=='1') {a[i]='1';c='1';}
            else 
                  {
                     printf("\nentered input is wrong.....add...:-/\n");             
                     getch();
                     exit(1);
                  }
      } 
      
}  



void R_SHIFT(char a[],char flag)
{
int i=0;
     for(i=14;i>=0;i--)
        a[i+1]=a[i];
        a[i+1]=flag;
}


char FLAG(char m,char y,char t)
{  
int i;
i=(m-48)*(y-48)+(t-48);
if(i==0) return '0';
return '1';
}



void CORRECTION(char a[],char b[])
{
int i;
char  borrow='0';
      for(i=7;i>=0;i--)  
      {
       if(a[i]=='0' && b[i]=='0' && borrow=='0')      {a[i]='0';borrow='0';}
       else if(a[i]=='0' && b[i]=='0' && borrow=='1') {a[i]='1';borrow='1';}
       else if(a[i]=='0' && b[i]=='1' && borrow=='0') {a[i]='1';borrow='1';}
       else if(a[i]=='0' && b[i]=='1' && borrow=='1') {a[i]='0';borrow='1';}
       else if(a[i]=='1' && b[i]=='0' && borrow=='0') {a[i]='1';borrow='0';}
       else if(a[i]=='1' && b[i]=='0' && borrow=='1') {a[i]='0';borrow='0';}
       else if(a[i]=='1' && b[i]=='1' && borrow=='0') {a[i]='0';borrow='0';}
       else if(a[i]=='1' && b[i]=='1' && borrow=='1') {a[i]='1';borrow='1';}
        else 
        {
        printf("\nentered input is WRONG..........:-/\n");             
        getch();
        exit(1);
         }
        }
     
}



void ANSWER(char y[])
{
int j;

 	for(j=0;j<8;j++)
                 printf("%c",y[j]);              
             
           printf("\t     ");
                for(j=8;j<16;j++)
                  printf("%c",y[j]);    
}
