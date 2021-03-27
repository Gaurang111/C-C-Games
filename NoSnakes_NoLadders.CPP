#include<stdlib.h>
#include<dos.h>
#include<stdio.h>
#include<conio.h>



void boundry()
{
clrscr();
int vertical,horizontal,x,y,i,j,arrow,arrow1;
char hl=196,vl=179,dark=176,uparrow=30,downarrow=31,leftarrow=17,rightarrow=16;



x=5;
y=25;
gotoxy(x,y);
for(i=5;i<=71;i++)
{
printf("%c",hl);
}

x=5;
y=22;
gotoxy(x,y);
for(i=5;i<=71;i++)
{
printf("%c",hl);
}
x=5;
y=19;
gotoxy(x,y);
for(i=5;i<=71;i++)
{
printf("%c",hl);
}
x=5;
y=16;
gotoxy(x,y);
for(i=5;i<=71;i++)
{
printf("%c",hl);
}
x=5;
y=13;
gotoxy(x,y);
for(i=5;i<=71;i++)
{
printf("%c",hl);
}
x=5;
y=10;
gotoxy(x,y);
for(i=5;i<=71;i++)
{
printf("%c",hl);
}
x=5;
y=7;
gotoxy(x,y);
for(i=5;i<=71;i++)
{
printf("%c",hl);
}

x=5;
y=4;
gotoxy(x,y);
for(i=5;i<=71;i++)
{
printf("%c",hl);
}

x=5;
y=1;
gotoxy(x,y);
for(i=5;i<=71;i++)
{
printf("%c",hl);
}


for(i=1;i<=25;i++)
{
gotoxy(05,i);
printf("%c",vl);

}


for(i=1;i<=25;i++)
{
gotoxy(11,i);
printf("%c",vl);

}


for(i=1;i<=25;i++)
{
gotoxy(17,i);
printf("%c",vl);

}


for(i=1;i<=25;i++)
{
gotoxy(23,i);
printf("%c",vl);

}


for(i=1;i<=25;i++)
{
gotoxy(29,i);
printf("%c",vl);

}


for(i=1;i<=25;i++)
{
gotoxy(35,i);
printf("%c",vl);

}


for(i=1;i<=25;i++)
{
gotoxy(41,i);
printf("%c",vl);

}

for(i=1;i<=25;i++)
{
gotoxy(47,i);
printf("%c",vl);

}


for(i=1;i<=25;i++)
{
gotoxy(53,i);
printf("%c",vl);

}


for(i=1;i<=25;i++)
{
gotoxy(59,i);
printf("%c",vl);

}

for(i=1;i<=25;i++)
{
gotoxy(65,i);
printf("%c",vl);

}

for(i=1;i<=25;i++)
{
gotoxy(71,i);
printf("%c",vl);

}

gotoxy(06,02);
printf("home");
arrow1=16;

for(arrow=10;arrow<=64;arrow=arrow+6)
{
gotoxy(arrow,5);
printf("%c",rightarrow);
}
for(arrow=10;arrow<=64;arrow=arrow+6)
{
gotoxy(arrow,11);
printf("%c",rightarrow);
}
for(arrow=10;arrow<=64;arrow=arrow+6)
{
gotoxy(arrow,17);
printf("%c",rightarrow);
}
for(arrow=16;arrow<=64;arrow=arrow+6)
{
gotoxy(arrow,23);
printf("%c",rightarrow);
}


for(arrow=16;arrow<=70;arrow=arrow+6)
{
gotoxy(arrow,2);
printf("%c",leftarrow);
}
for(arrow=10;arrow<=70;arrow=arrow+6)
{
gotoxy(arrow,8);
printf("%c",leftarrow);
}
for(arrow=10;arrow<=70;arrow=arrow+6)
{
gotoxy(arrow,14);
printf("%c",leftarrow);
}
for(arrow=10;arrow<=70;arrow=arrow+6)
{
gotoxy(arrow,20);
printf("%c",leftarrow);
}

for(arrow=5;arrow<=23;arrow=arrow+6)
{
gotoxy(70,arrow);
printf("%c",uparrow);
}


for(arrow=8;arrow<=20;arrow=arrow+6)
{
gotoxy(10,arrow);
printf("%c",uparrow);
}

};






main()
{

boundry();

int dice,k=8,l=23,m=8,n=24,temp,temp2,count=0,x,i,j,d,flag=0;
char s1=1,s2=2,enter=13;

gotoxy(k,l);
printf("%c",s1);
gotoxy(m,n);
printf("%c",s2);

do
{
//------------------------------------smile 1----------------------------------
if(count==0)
{

x=getch();


	if(x==enter)
	{        srand(time(NULL));
		dice=rand()%6+1;
		temp2=dice;
		gotoxy(73,9);
		printf("player 1");
		for(i=0;i<3;i++)
		{
		for(j=1;j<=6;j++)
		{
		gotoxy(75,11);
		printf("%d",j);
		delay(50);
		}
		}
		gotoxy(75,11);
		printf("%d",dice);

			if(l==23 || l==17 || l==11 || l==5)
			{
			forward:
			for(d=1;d<=dice;d++)
			{
			gotoxy(k,l);
			printf(" ");
				if((k==68 && l==23) ||(k==68 && l==17) ||(k==68 && l==11) ||(k==68 && l==5))
				{
				l=l-3;
				gotoxy(k,l);

				printf("%c",s1);
				delay(1000);
				dice=dice-d;
				goto reverse;
				}
			k=k+6;
			gotoxy(k,l);
			printf("%c",s1);
			delay(1000);


			}
			}

			if(l==20 || l==14 || l==8 || l==2)
			{

			reverse:
			for(d=1;d<=dice;d++)
			{
			gotoxy(k,l);
			printf(" ");
				if((k==8 && l==20) ||(k==8 && l==14) ||(k==8 && l==8))
				{
				gotoxy(k,l);
				printf(" ");
				l=l-3;
				gotoxy(k,l);
				printf("%c",s1);
				delay(1000);
				dice=dice-d;
				goto forward;
				}
			k=k-6;
			gotoxy(k,l);
			printf("%c",s1);
			delay(1000);

			if((m==8 && n==3) || (k==8 && l==2))
				{
				exit(0);
				}
			}
			}
	    if(temp2!=6)
	    {
	    count=1;
	    gotoxy(73,9);
	    printf("player 2");
	    }
	    else
	    {
	    count=0;
	    }





}
}


//---------------------------------smile 2----------------------------------
if(count==1)
{

x=getch();


	if(x==enter)
	{

		srand(time(NULL));
		dice=rand()%6+1;
		temp=dice;
			gotoxy(73,9);
		printf("player 2");
		for(i=0;i<3;i++)
		{
		for(j=1;j<=6;j++)
		{
		gotoxy(75,11);
		printf("%d",j);
		delay(50);
		}
		}
		gotoxy(75,11);
		printf("%d",dice);

			if(n==24 || n==18 || n==12 || n==6)
			{
			forward2:
			for(d=1;d<=dice;d++)
			{
			gotoxy(m,n);
			printf(" ");
				if((m==68 && n==24) ||(m==68 && n==18) ||(m==68 && n==12) ||(m==68 && n==6))
				{
				n=n-3;
				gotoxy(m,n);

				printf("%c",s2);
				delay(1000);
				dice=dice-d;
				goto reverse2;
				}
			m=m+6;
			gotoxy(m,n);
			printf("%c",s2);
			delay(1000);
			}
			}

			if(n==21 || n==15 || n==9 || n==3)
			{

			reverse2:
			for(d=1;d<=dice;d++)
			{
			gotoxy(m,n);
			printf(" ");
				if((m==8 && n==21) ||(m==8 && n==15) ||(m==8 && n==9))
				{
				gotoxy(m,n);
				printf(" ");
				n=n-3;
				gotoxy(m,n);
				printf("%c",s2);
				delay(1000);
				dice=dice-d;
				goto forward2;
				}
			m=m-6;
			gotoxy(m,n);
			printf("%c",s2);
			delay(1000);
			if((m==8 && n==3) || (k==8 && l==2))
				{
				exit(0);
				}
			}
			}

			if(temp!=6)
			{
			count=0;
			gotoxy(73,9);
			printf("player 1");
			}
			else
			{
			count=1;
			}






}
}

}
while(x!='z');
getch();
}








