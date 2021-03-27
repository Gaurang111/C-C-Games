#include<iostream.h>
#include<conio.h>
#include<process.h>

main()
{

clrscr();
char hline=196,vline=179;
int j,i;
char s1=01,s2=02;
int x,y;
int screen[100][100];


for(i=0;i<100;i++)
{
for(j=0;j<100;j++)
{
screen[i][j]=0;
}
}

//-------------------------------horizontal lines--------------------------

x=18;
y=04;
gotoxy(x,y);

for(i=0;i<9;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}


x=20;y=06;
gotoxy(x,y);
for(i=0;i<5;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=18;
y=8;
gotoxy(x,y);
for(i=0;i<5;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=18;
y=10;
gotoxy(x,y);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}
x=20;
y=16;
gotoxy(x,y);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}
x=22;
y=13;
gotoxy(x,y);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=18;
y=18;

gotoxy(x,y);
for(i=0;i<5;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=18;
y=20;
gotoxy(18,20);
for(i=0;i<7;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=24;
y=15;
gotoxy(24,15);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=26;
y=18;
gotoxy(26,18);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=30;
y=04;
gotoxy(30,04);
for(i=0;i<19;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=32;
y=06;
gotoxy(32,06);
for(i=0;i<15;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;

}

x=32;
y=20;

gotoxy(32,20);
for(i=0;i<15;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=34;
y=8;
gotoxy(34,8);
for(i=0;i<11;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=36;
y=10;
gotoxy(36,10);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=40;
y=10;
gotoxy(40,10);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=42;
y=11;

gotoxy(42,11);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=46;
y=11;

gotoxy(46,11);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=38;
y=12;
gotoxy(38,12);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=40;
y=13;

gotoxy(40,13);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=38;
y=14;
gotoxy(38,14);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=44;
y=13;
gotoxy(44,13);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=36;
y=16;
gotoxy(36,16);
for(i=0;i<7;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}
x=34;
y=18;

gotoxy(34,18);
for(i=0;i<9;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=48;
y=14;

gotoxy(48,14);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}
x=52;
y=04;
gotoxy(52,04);
for(i=0;i<10;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}
x=54;
y=06;
gotoxy(54,06);
for(i=0;i<10;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}


x=56;
y=8;
gotoxy(56,8);
for(i=0;i<6;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=58;
y=10;
gotoxy(58,10);
for(i=0;i<6;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=58;
y=14;
gotoxy(58,14);
for(i=0;i<6;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=58;
y=12;
gotoxy(58,12);
for(i=0;i<4;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=56;
y=16;

gotoxy(56,16);
for(i=0;i<6;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=52;
y=13;
gotoxy(52,13);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=52;
y=20;
gotoxy(52,20);
for(i=0;i<10;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=54;
y=18;
gotoxy(54,18);
for(i=0;i<10;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

x=32;
y=17;
gotoxy(x,y);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}
x=56;
y=13;
gotoxy(56,13);
for(i=0;i<3;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}
//-----------------------vertical lines---------------------------------

x=20;y=10;
for(i=0;i<5;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}


x=22;y=10;
for(i=0;i<7;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=24;y=06;
for(i=0;i<13;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=26;y=04;
for(i=0;i<10;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=26;y=15;
for(i=0;i<6;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=28;y=04;
for(i=0;i<19;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}


x=30;y=04;
for(i=0;i<14;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}


x=30;y=19;
for(i=0;i<4;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}


x=32;y=06;
for(i=0;i<15;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}

x=34;y=8;
for(i=0;i<7 ;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=34;y=16;
for(i=0;i<3;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=36;y=10;
for(i=0;i<7;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=40;y=12;
for(i=0;i<3;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=40;y=16;
for(i=0;i<3;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=42;y=10;
for(i=0;i<5;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}

x=44;y=8;
for(i=0;i<11;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=44;y=20;
for(i=0;i<3;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=46;y=8;
for(i=0;i<6;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}

x=46;y=15;
for(i=0;i<6;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=48;y=04;
for(i=0;i<17;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=50;y=02;
for(i=0;i<13;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=50;y=16;
for(i=0;i<7;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=52;y=04;
for(i=0;i<17;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=54;y=8;
for(i=0;i<9;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=56;y=8;
for(i=0;i<9;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=58;y=12;
for(i=0;i<3;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}






//---------main border-----------
x=18;
y=02;
gotoxy(18,02);
for(i=0;i<46;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}

gotoxy(18,02);
x=18;y=02;
for(i=0;i<21;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y++;
}
x=18;
y=22;
gotoxy(18,22);
for(i=0;i<46;i++)
{
screen[x][y]=hline;
cout<<hline;
x++;
}
x=63;y=22;
for(i=0;i<21;i++)
{
gotoxy(x,y);
screen[x][y]=vline;
cout<<vline;
y--;
}
//-----------------------position of smiles--------------------------------


gotoxy(19,11);                                        // 19,11  simle 1
cout<<s1;
gotoxy(59,13);                                         // 59,13  simle2
cout<<s2;


//----------------------control logic-----------------------------------


char ch;
int z,w,q,v;
gotoxy(19,11);
cout<<s1;
x=19;
y=11;
do
{
choice:
ch=getch();

if(ch=='w')
{
w=y-1;
if(screen[x][w]==hline || screen[x][w]==vline)
{
goto choice;
}

gotoxy(x,y);
cout<<" ";
y--;
gotoxy(x,y);
cout<<s1;


}


if(ch=='d')
{
z=x+1;
if(screen[z][y]==hline || screen[z][y]==vline)
{
goto choice;
}

gotoxy(x,y);
cout<<" ";
x++;
gotoxy(x,y);
cout<<s1;
}


if(ch=='a')
{
v=x-1;
if(screen[v][y]==hline || screen[v][y]==vline)
{
goto choice;
}
gotoxy(x,y);
cout<<" ";
x--;
gotoxy(x,y);
cout<<s1;
}


if(ch=='s')
{
q=y+1;
if(screen[x][q]==hline || screen[x][q]==vline)
{
goto choice;
}
gotoxy(x,y);
cout<<" ";
y++;
gotoxy(x,y);
cout<<s1;
}
if(x==59 && y==13)
{
break;
}

}
while(ch!='z');


clrscr();
gotoxy(34,12);
cout<<"YOU WON!" ;








getch();
}