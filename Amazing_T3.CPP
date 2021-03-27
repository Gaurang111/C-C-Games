#include<stdio.h>
#include<ctype.h>
#include<process.h>
#include<conio.h>
#include<dos.h>
int q;

//--------------------START PAGE ----------------------------------------
void start()
{
clrscr();
int i,j,k=0;


for(i=0;i<20;i++)
{
printf(" x o");
delay(50);
}


for(i=0;i<11;i++)
{
printf("o\nx\n");
delay(50);
}


gotoxy(0,25);
for(i=0;i<20;i++)
{
printf(" x o");
delay(50);
}


gotoxy(80,k);
for(k=0;k<24;k++)
{
	gotoxy(80,k);
	if(k%2==0)
	{
	printf("x");
	}
	else
	{
	printf("o");
	}
	delay(50);
}

gotoxy(32,10);

printf("   W E L C O M E  ");
delay(500);
gotoxy(32,12);
printf("        T O       ");
delay(500);
gotoxy(32,14);
printf("T I C   T A C  T O E");

getch();
}



//------------------------------MAIN MEANU-----------------------------------


void menu()
{
clrscr();
int i,j,k=0,x,a=17,m,n,enter=13;
char b,v,ups,downs;
b=a;
v=enter;


for(i=0;i<20;i++)
{
printf(" x o");

}


for(i=0;i<11;i++)
{
printf("o\nx\n");
}


gotoxy(0,25);
for(i=0;i<20;i++)
{
printf(" x o");
}


gotoxy(80,k);
for(k=0;k<24;k++)
{
	gotoxy(80,k);
	if(k%2==0)
	{
	printf("x");
	}
	else
	{
	printf("o");
	}

}

gotoxy(26,8);
printf("----- M A I N   M E N U -----");
gotoxy(30,12);
printf("       S T A R T");
gotoxy(30,14);
printf("        E X I T");

m=51;
n=12;
gotoxy(m,n);
printf("%c",b);


do
{
	x=getch();
		if(x=='w')
		{
		gotoxy(m,n);
		printf(" ");
		n=12;

		gotoxy(m,n);
		printf("%c",b);
		}

	if(x=='s')

	{
	gotoxy(m,n);
	printf(" ");
	n=14;

	gotoxy(m,n);

	printf("%c",b);
	}
}while(x!=v);

if(n==14)
{
exit(0);
}
}


//------------------------------LOADING--------------------------------------


void load()
{
clrscr();
int a=176,i,j,b=178;
char c,d;
c=a;
d=b;


	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nLOADING...\n");
	       /*	for(j=0;j<=79;j++)
		{

		printf("%c",c);
		}
	       gotoxy(0,2);*/
	       for(i=0;i<=79;i++)
	       {
	       printf("%c",d);
	       delay(20);

	       if(i==19 || i==60)
	       {

	       delay(100);
	       }
	       }


}



//-----------------------BOUNTRY -----------------------------
void bountry()
{
clrscr();


int x=196,y=179;
char z,w,i,j;
z=x;
w=y;


j=10;
for(i=28;i<48;i++)
{
gotoxy(i,j);
printf("%c",z);
}


j=14;
for(i=28;i<48;i++)
{
gotoxy(i,j);
printf("%c",z);
}


i=34;
for(j=7;j<18;j++)
{
gotoxy(i,j);
printf("%c",w);
}


i=41;
for(j=7;j<18;j++)
{
gotoxy(i,j);
printf("%c",w);
}


gotoxy(01,25);
printf("usw w,a,s,d to move corser...");


}
//---------------------------------logic------------------------------------

void logic()
{
int a[50][50],m,n,x,flag=0,car=1,q,t=3,y=5;

for(m=0;m<50;m++)
{
for(n=0;n<m;n++)
{
a[m][n]=car;
car++;
}
}
m=37;n=12;

gotoxy(t,y);
printf("PLAYER 1 YOUR TURN ");
gotoxy(m,n);

do
{

	x=getch();
	if(x=='d')
	{
		if(m==45)
		{
		 m=30;
		}
		else if(m==30)
		{
		m=37;
		}
		else
		{
		m=45;
		}
		gotoxy(m,n);

	}

	if(x=='a')
	{
		if(m==30)
		{
		   m=45;
		}
		else if(m==45)
		{
		 m=37;
		 }
		 else
		 {
		 m=30;
		 }
		gotoxy(m,n);

	}

if(x=='w')
{
	 if(n==8)
	 {
	 n=16;
	 }
	 else if(n==16)
	 {
	 n=12;
	 }
	 else
	 {
	 n=8;
	 }
	 gotoxy(m,n);
}
if(x=='s')
{
	 if(n==12)
	 {
	 n=16;
	 }
	 else if(n==8)
	 {
	 n=12;
	 }
	 else
	 {
	 n=8;
	 }
	 gotoxy(m,n);
}

if(x=='x')
{
printf("X");
a[m][n]=x;
gotoxy(t,y);
printf("PLAYER 1 YOUR TURN ");
gotoxy(m,n);
}

if(x=='o')
{
printf("O");
a[m][n]=x;
gotoxy(t,y);
printf("PLAYER 2 YOUR TURN");
gotoxy(m,n);
}


if(a[30][8]==a[30][12] && a[30][12]==a[30][16])
{
flag=1;
::q=a[30][8];
}
if(a[37][8]==a[37][12] && a[37][12]==a[37][16])
{
flag=1;
::q=a[37][8];
}
if(a[45][8]==a[45][12] && a[45][12]==a[45][16])
{
flag=1;
::q=a[30][8];
}
if(a[30][8]==a[37][8] && a[37][8]==a[45][8])
{
flag=1;
::q=a[30][8];
}
if(a[30][12]==a[37][12] && a[37][12]==a[45][12])
{
flag=1;
::q=a[30][12];
}
if(a[30][16]==a[37][16] && a[37][16]==a[45][16])
{
flag=1;
::q=a[30][16];
}
if(a[30][8]==a[37][12] && a[37][12]==a[45][16])
{
flag=1;
::q=a[30][8];
}
if(a[45][8]==a[37][12] && a[37][12]==a[30][16])
{
flag=1;
::q=a[45][8];
}

if((a[30][8]=='o'||a[30][8]=='x') && 
   (a[30][12]=='o'|| a[30][12]=='x') && 
   (a[30][16]=='o'|| a[30][16]=='x') && 
   (a[37][8]=='o'|| a[37][8]=='x') && 
   (a[37][12]=='o'|| a[37][12]=='x') && 
   (a[37][16]=='o'|| a[37][216]=='x') && 
   (a[45][8]=='o'|| a[45][8]=='x') && 
   (a[45][12]=='o'||a[45][12]=='x') && 
   (a[45][16]=='o'||a[45][16]=='x'))
{

flag=1;
::q='n';
}



}while(flag!=1);



}

//---------------------------------------------------------------------------

main()
{
char p1[20],p2[20];
int choice;
start();

    quit:

menu();
load();
clrscr();
gotoxy(28,8);
printf("ENTER NAME OF PLAYER 1 (O): ");
scanf("%s",&p1);
gotoxy(28,12);
printf("ENTER NAME OF PLAYER 2 (X): ");
scanf("%s",&p2);


	again:

load();
bountry();
logic();
clrscr();
if(::q=='o')
{
gotoxy(34,6);
printf("%s",p1);
printf("  WON !");
}
if(::q=='x')
{
gotoxy(34,6);
printf("%s",p2);
printf("  WON !");
}
if(::q=='n')
{
gotoxy(34,6);
printf("MATCH IS DRAW !");
}

getch();
gotoxy(26,10);
printf("DO   YOU  WANT  TO  PLAY AGAIN ??");
gotoxy(26,14);
printf("             Y E S");
gotoxy(26,16);
printf("              N O");

int m,n,x,enter=13,ar=17;
char v,arrow;
v=enter;
arrow=ar;
m=51;
n=14;
gotoxy(m,n);
printf("%c",arrow);


do
{
	x=getch();
		if(x=='w')
		{
		gotoxy(m,n);
		printf(" ");
		n=14;

		gotoxy(m,n);
		printf("%c",arrow);
		}

	if(x=='s')

	{
	gotoxy(m,n);
	printf(" ");
	n=16;

	gotoxy(m,n);

	printf("%c",arrow);
	}
}while(x!=v);

if(n==14)
{
goto again;
}
if(n==16)
{
goto quit;
}


getch();
}
