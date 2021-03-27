//collision of smiles..........
#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
void boundry()
{
int i,k=01;
char block=176;
char s=01,s2=02;


gotoxy(01,01);
for(i=0;i<68;i++)
{
printf("%c",block);
}

gotoxy(01,25);
for(i=0;i<68;i++)
{
printf("%c",block);
}

gotoxy(01,01);
for(i=0;i<25;i++)
{
gotoxy(01,k);
printf("%c",block);
k++;
}
k=01;
gotoxy(02,01);
for(i=0;i<25;i++)
{
gotoxy(02,k);
printf("%c",block);
k++;
}


k=01;
gotoxy(67,01);
for(i=0;i<25;i++)
{
gotoxy(67,k);
printf("%c",block);
k++;
}


k=01;
gotoxy(68,01);
for(i=0;i<25;i++)
{
gotoxy(68,k);
printf("%c",block);
k++;
}

gotoxy(73,06);
printf("Score:");

gotoxy(70,15);
printf("%c: You",s);
gotoxy(70,17);
printf("%c: Prisoner",s2);
gotoxy(70,19);
printf("Use W,A,S,D");
gotoxy(70,20);
printf("keys to");
gotoxy(70,21);
printf("move around");
};


//----------------------------------------------------------------------


int logic()
{
int flag=0;
char s=01,s2=02;
char ch;
gotoxy(39,12);
cout<<s;
int x=39,y=12;
int m,n,car,speed=150,score=0;

srand(time(NULL));
m=rand()%67;
n=rand()%25;

if(m<=2)
{
m=m+5;
}
if(n<=2)
{
n=n+2;
}

gotoxy(m,n);
cout<<s2;

gotoxy(73,07);
cout<<score;

ch=getch();

do
{


come:

if(ch=='w')
{
do
{
gotoxy(x,y);
cout<<" ";
y--;
if(y<=01)
{
flag=1;

break;
}

gotoxy(x,y);
cout<<s;
if(x==m && y==n)
{
srand(time(NULL));
m=rand()%67;
n=rand()%25;

if(m<=2)
{
m=m+5;
}
if(n<=2)
{
n=n+2;
}
score++;
gotoxy(73,07);
cout<<score;

gotoxy(m,n);
cout<<s2;
speed=speed-5;
}
delay(speed);
if(kbhit())
{
ch=getch();
break;
}

}
while(1);

}

if(ch=='d')
{


do
{
gotoxy(x,y);
cout<<" ";
x++;
if(x>=67)
{
flag=1;
break;
}
gotoxy(x,y);
cout<<s;

if(x==m && y==n)
{
srand(time(NULL));
m=rand()%67;
n=rand()%25;

if(m<=2)
{
m=m+5;
}
if(n<=2)
{
n=n+2;
}
score++;
gotoxy(73,07);
cout<<score;

gotoxy(m,n);
cout<<s2;
speed=speed-5;
}
delay(speed);
if(kbhit())
{
ch=getch();
break;
}
}
while(1);
}

if(ch=='s')
{


do
{
gotoxy(x,y);
cout<<" ";
y++;
if(y>=25)
{
flag=1;
break;
}
gotoxy(x,y);
cout<<s;
if(x==m && y==n)
{
srand(time(NULL));
m=rand()%67;
n=rand()%25;

if(m<=2)
{
m=m+5;
}
if(n<=2)
{
n=n+2;
}
score++;
gotoxy(73,07);
cout<<score;

gotoxy(m,n);
cout<<s2;
speed=speed-5;
}
delay(speed);
if(kbhit())
{
ch=getch();
break;
}
}
while(1);
}

if(ch=='a')
{


do
{
gotoxy(x,y);
cout<<" ";
x--;
if(x<=02)
{
flag=1;
break;
}
gotoxy(x,y);
cout<<s;
if(x==m && y==n)
{
srand(time(NULL));
m=rand()%67;
n=rand()%25;

if(m<=2)
{
m=m+5;
}
if(n<=2)
{
n=n+2;
}
score++;
gotoxy(73,07);
cout<<score;

gotoxy(m,n);
cout<<s2;
speed=speed-5;
}
delay(speed);
if(kbhit())
{
ch=getch();
break;
}
}
while(1);
}

if(flag==0)
{
goto come;
}


}while(flag!=1);


return score;
};





//}while()
main()
{
clrscr();
gotoxy(34,10);
cout<<"Prison Break!";
gotoxy(22,12);
cout<<"Catch all the Prisoners before it's to late,";
gotoxy(22,13);
cout<<"You will be judge based on your perrformance.";
gotoxy(22,14);
cout<<"Now, GO! GO! GO!";
getch();
clrscr();
int final_score;
boundry();
final_score=logic();

getch();
clrscr();


if(final_score<=5 )
{
gotoxy(34,10);
cout<<"Not Good! Officer.";
}
if(final_score>5 && final_score<=10)
{
gotoxy(34,10);
cout<<"Not bad! Officer.";
}
if(final_score>10 && final_score<=15)
{
gotoxy(34,10);
cout<<"better luck next time! Officer. ";
}if(final_score>15 && final_score<=20)
{
gotoxy(34,10);
cout<<"You are good! Officer.";
}

if(final_score>20 && final_score<=25)
{
gotoxy(34,10);
cout<<"You are pro! Officer.";
}

if(final_score>25 && final_score<=30)
{
gotoxy(34,10);
cout<<"You are lengendry! Officer.";
}
gotoxy(34,12);
cout<<"Your score is : ";
cout<<final_score;


getch();
}
