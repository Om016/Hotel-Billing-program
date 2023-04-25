#include <stdio.h>
#include <stdlib.h>

int gtot=0,sst=0,dst=0,tst=0;

void menu()
{
    printf("MENU\n");
    printf("1 samosa 20\n");
    printf("2 Dosa 30\n");
    printf("3 Tea 10\n");
    printf("0 Exit\n");
}

void cupsPlats(int ch)
{
     printf("'Sahab Kitne' ");
     if(ch==3)
      printf("Cups\n");
     else
     printf("Plats\n");
}

void order(int rate,int ch)
{
    int qty=0;
    cupsPlats(ch);
    scanf("%d",&qty);
    switch(ch)
    {
    case 1:
         sst+=qty*rate;
        break;
    case 2:
         dst+=qty*rate;
        break;
    case 3:
         tst+=qty*rate;
        break;
    }

   // printf("Sub Total =%d\n",stot);

}

void cash()
{
    int Cash=0;
    printf("Enter your Cash:  ");
    scanf("%d",&Cash);

    if(Cash>gtot)
    {
        Cash-=gtot;
        printf("Return Cash : %d\n",Cash);
        Returncash(Cash);
    }
    else if (Cash<gtot)
    {
        gtot-=Cash;
        printf("Please Pay More : %d\n",gtot);
        cash();
    }
}

void Returncash(int cash)
{
    int a[9]={500,200,100,50,20,10,5,2,1},temp,i,x=0;
    temp=cash;
    for(i=0;i<9;i++)
    {
        x=temp/a[i];

        if(x!=0)
            printf("\n %dX%d=%d",a[i],x,a[i]*x);
        temp=temp%a[i];
    }

}


/*
if(cond)
{

}


*/


void bill()
{
    int a=0;
gtot=sst+dst+tst;
printf("\n ::Your Bill::");
printf("\n.............................................");
printf("\nSr.No.|\tItem\t|Qty\t|Rate\t|Sub Total\t");
if(sst!=0)
printf("\n%d\t|Samosa\t|%d\t|20\t|%d\n",++a,sst/20,sst);
if(dst!=0)
printf("\n%d\t|Dosa\t|%d\t|30\t|%d\n",++a,dst/30,dst);
if(tst!=0)
printf("\n%d\t|Tea\t|%d\t|10\t|%d\n",++a,tst/10,tst);
printf("...............................................\n");
printf("Grand Total  = %d\n",gtot);
cash();
}

void userChoice()
{ int ch=0,l=1;
      while(l)
    {
    menu();
    printf("Enter your Choice: ");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1:
        printf("'Chotu table no 2 par Samosa hai !'\n");
        order(20,ch);
        break;
    case 2:
        printf("'Chotu table no 2 par Dosa lga!\n");
        order(30,ch);
        break;
    case 3:
        printf("Chotu table no 2 par Chai lga!\n");
         order(10,ch);
        break;
    case 0:
        l=0;
        bill();
        printf("\n'Aao Sahab Fhirse Family ke Sath....!'");
        break;
    default:
        printf("Wrong Input!\n");
        break;
        }
}
}

int main()
{
    printf("Welcome to Asterisc hotel\n");
    userChoice();
    return 0;
}


