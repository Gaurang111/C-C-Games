#include<iostream.h>
#include<stdlib.h>
#include<dos.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
//using namespace std;

char str[50];

class information
{

	public:

	char name[50];
	char login_password[50],password[50],cpassword[50];
	char resi_no[50];
	char phone_number[20];
	char email[50];
	char state[50];


	public:
	void enter_info();
	char* resi_pass();
	void display();


};

class buyflat
{
public:
char place[50];
char name[50];
char area[50];
char location[50];
char bhk[50];
char cost[50];
char contact[50];

public:

void display();

};


class buyplot
{
public:

char place[50];
char area[50];
char location[50];
char cost[50];
char contact[50];

public:
void display2();
};

class flatrent
{
public:
//char type[50];
char place[50];
char name[50];
char location[50];
char bhk[50];
char fur[50];
char pre[50];
char cost[50];
char contact[50];
public:
void display3();
};



void flatrent::display3()
{


cout<<"NAME       : "<<name<<endl;
cout<<"LOCATION   : "<<location<<endl;
cout<<"BHK        : "<<bhk<<endl;
cout<<"FURNISHING : "<<fur<<endl;
cout<<"PREPERRD   : "<<pre<<endl;
cout<<"PRICE      : "<<cost<<endl;
cout<<"CONTACT    : "<<contact<<endl;
cout<<"----------------------------------------\n";
}


void buyplot::display2()
{



cout<<"AREA     : "<<area<<endl;
cout<<"LOCATION : "<<location<<endl;
cout<<"PRICE    : "<<cost<<endl;
cout<<"CONTACT  : "<<contact<<endl;
cout<<"--------------------------------------------------\n";

}

void buyflat::display()
{
cout<<"NAME     : "<<name<<endl;
cout<<"AREA     : "<<area<<endl;
cout<<"LOCATION : "<<location<<endl;
cout<<"BHK      : "<<bhk<<endl;
cout<<"PRICE    : "<<cost<<endl;
cout<<"CONTACT  : "<<contact<<endl;
cout<<"----------------------------------------"<<endl;
}
//-----------------------welcome page------------------------------
void welcome()
{
clrscr();
int u,o,n,i;
//char dark=219,dark1=178,dark2=177,dark3=176;

for(i=0;i<450;i++)
{
u=rand()%80;
o=rand()%25;

gotoxy(u,o);
cout<<".";
delay(8);
}
	gotoxy(34,07);

	textcolor(8);
	textbackground(7);
	cprintf(" W E L C O M E ");
	textbackground(0);
	   delay(500);
	gotoxy(39,10);

	textcolor(8);
	textbackground(7);
	cprintf(" T O ");
	textbackground(0);
	delay(500);
	gotoxy(25,13);

	textcolor(8);
	textbackground(7);
	cprintf(" R E A L E S T A T E   A D V I S O R");
	textbackground(0);

	delay(500);
	gotoxy(27,17);

	textcolor(8);
	textbackground(7);
	cprintf(" C S E 2 0 2   P R O J E C T ");
	textbackground(0);



getch();
clrscr();
}

//-----------------------loading--------------------------
void load()
{
clrscr();
int i,j,b=178;
char d;
//c=a;
d=b;


	cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nplease wait...\n";

	       for(i=0;i<=79;i++)
	       {
	       cout<<d;
	       delay(20);

	       if(i==19 || i==60)
	       {

	       delay(100);
	       }
	       }


	       clrscr();
}





void boundry()
{

	int i,x=01;
	char dark=219;

	for(i=0;i<79;i++)
	{
		cout<<dark;
	}

	gotoxy(01,25);

	for(i=0;i<79;i++)
	{
		cout<<dark;
	}

	for(i=0;i<25;i++)
	{
		gotoxy(01,x);
		cout<<dark;
		x++;

	}

x=01;

	for(i=01;i<25;i++)
	{
		gotoxy(79,x);
		cout<<dark;
		x++;

	}

}


//-------------------------------


void information::display()
{                                             /*profile page*/
clrscr();
boundry();
gotoxy(34,04);
textcolor(8);
textbackground(7);
cprintf(" P R O F I L E ");
textbackground(0);

gotoxy(25,07);
cout<<"NAME             :";
gotoxy(44,07);
cout<<name;

gotoxy(25,9);
cout<<"RESI. NO         :";
gotoxy(44,9);
cout<<resi_no;

gotoxy(25,11);
cout<<"PHONE. NO        :";
gotoxy(44,11);
cout<<phone_number;

gotoxy(25,13);
cout<<"EMAIL            :";
gotoxy(44,13);
cout<<email;

gotoxy(25,15);
cout<<"STATE            :";
gotoxy(44,15);
cout<<state;
//cout<<total_money;
}
//---------------------------------------------------------------
//----------------------------------print_pro--------------------------
void print_pro()
{
clrscr();
information in;
ifstream fin;
fin.open(str,ios::in|ios::binary);

while(!fin.eof())
{
if(!fin.eof())
{
fin.read((char*)&in,sizeof(information));
in.display();
}
}
fin.close();
getch();

}



//--------------------------------------enter_info------------------------------

void information::enter_info()
{


gotoxy(35,04);
textcolor(8);
textbackground(7);
cprintf(" S I G N    U P ");
textbackground(0);


gotoxy(25,07);
cout<<"NAME             :";
gotoxy(44,07);
cin.getline(name,50);

gotoxy(25,9);
cout<<"RESI. NO         :";
gotoxy(44,9);
cin.getline(resi_no,20);

gotoxy(25,11);
cout<<"PHONE. NO        :";
gotoxy(44,11);
cin.getline(phone_number,50);

gotoxy(25,13);
cout<<"EMAIL            :";
gotoxy(44,13);
cin.getline(email,50);

gotoxy(25,15);
cout<<"STATE            :";
gotoxy(44,15);
cin.getline(state,20);

again:
gotoxy(25,17);
cout<<"create password  :";
gotoxy(44,17);
cin.getline(password,50);

gotoxy(25,19);
cout<<"confirm password  :";
gotoxy(44,19);
cin.getline(cpassword,50);

if(strcmp(cpassword,password)!=0)
{
gotoxy(30,22);
cout<<"password not match! TRY AGAIN";
getch();

gotoxy(03,22);
cout<<"                                                                   ";
gotoxy(03,17);
cout<<"                                                                   ";
gotoxy(03,19);
cout<<"                                                                    ";

goto again;
}
}
//------------------------------------
//-------------------------------sign_up----------------------------
int sign_up()
{
	clrscr();
	information in;
	int msg=0;

	boundry();

	in.enter_info();
	strcpy(str,in.resi_no);
	strcat(str,".dat");

	getch();
	ofstream fout;

	fout.open(str,ios::out|ios::binary);

		if(!fout)
		{
			msg=1;

		}

		fout.write((char*)&in,sizeof(information));

	fout.close();

	if(msg==1)
	{
		clrscr();
		gotoxy(32,12);
		cout<<"cant sign up!! error found";
		getch();
		return 1;
	}

	else
	{
		clrscr();
		load();
		gotoxy(32,12);
		cout<<"successfully signed up";
		getch();
		clrscr();

	}

	return 0;

}//-------------------------
//------------------------------------------------------
char* information::resi_pass()
{
	clrscr();
	boundry();
	gotoxy(35,04);
	textcolor(8);
	textbackground(7);
	cprintf(" L O G   I N ");
	textbackground(0);


	gotoxy(25,07);
	cout<<"RESI. NO      :";
	gotoxy(44,07);
	cin.getline(resi_no,50);

	gotoxy(25,9);
	cout<<"PASSWORD      :";
	gotoxy(44,9);
	cin.getline(login_password,50);


	return login_password;

}
//--------------------------------------------


//----------------------log_in---------------------------
int log_in()
{

	char takepass[50];
	int flag=0;
	information in;

	again3:
	strcpy(takepass,in.resi_pass());
	strcpy(str,in.resi_no);
	strcat(str,".dat");
	ifstream fin;

	fin.open(str,ios::in|ios::binary);

	while(!fin.eof())
	{
		if(!fin.eof())
		{

			fin.read((char*)&in,sizeof(information));

			if(strcmp(takepass,in.password)==0)
			{

				flag=1;
			}
			else
			{
				gotoxy(25,12);
				cout<<"WRONG PASSWORD/REGISTRATION NUMBER TRY AGANIN" ;
				getch();
				goto again3;
			}
		}
	}

	fin.close();


	return flag;

}

//----------------------------------second_page-----------------------
int second_page()
{

clrscr();
	int x,y;

	char ch,mark=16,enter=13;
	char down=80,up=72;

	boundry();
	gotoxy(33,07);

	textcolor(8);
	textbackground(7);
	cprintf("R E A L E S T A T E");
	textbackground(0);
	gotoxy(38,11);
cout<<"PROFILE";
gotoxy(38,14);
cout<<"SEARCH PROPERTY";
gotoxy(38,17);
cout<<"LOG OUT";

x=35;
y=11;
gotoxy(x,y);
cout<<mark;
do
{
ch=getch();

if(ch==down)
{

gotoxy(x,y);
cout<<" ";

if(y==17)
{
y=11;
}
else
{
y=y+3;
}

gotoxy(x,y);
cout<<mark;

}

if(ch==up)
{

gotoxy(x,y);
cout<<" ";

if(y==11)
{
y=17;
}
else
{
y=y-3;
}

gotoxy(x,y);
cout<<mark;

}
}while(ch!=enter);

return y;
}


//-----------------------------------------------------------------
//---------------------------------first_page-------------------------


int first_page()
{
	int x,y;

	char ch,mark=16,enter=13;
	char down=80,up=72;

	boundry();
	gotoxy(32,07);

	textcolor(8);
	textbackground(7);
	cprintf(" M A I N   M E N U  ");
	textbackground(0);
	gotoxy(38,11);
cout<<"SIGN UP";
gotoxy(38,14);
cout<<"LOG IN";
gotoxy(38,17);
cout<<"EXIT";

x=35;
y=11;
gotoxy(x,y);
cout<<mark;
do
{
ch=getch();

if(ch==down)
{

gotoxy(x,y);
cout<<" ";

if(y==17)
{
y=11;
}
else
{
y=y+3;
}

gotoxy(x,y);
cout<<mark;

}

if(ch==up)
{

gotoxy(x,y);
cout<<" ";

if(y==11)
{
y=17;
}
else
{
y=y-3;
}

gotoxy(x,y);
cout<<mark;

}
}while(ch!=enter);

return y;
}



//-------------------------------------------------------



main()
{
clrscr();
buyflat f;
buyplot p;
flatrent r;
welcome();
int get_y,get_flag,get_option;
char u[50];
int x,y;
char ans;
char mark=16,enter=13;
char down=80,up=72;
int ch;

onemore:
get_y=first_page();

	if(get_y==11)
	{
	      sign_up();
	      goto onemore;

	}

	if(get_y==14)
	{
	    get_flag=log_in();
	    if(get_flag==1)
		{
		second:
		get_option=second_page();

		if(get_option==11)
		{
		  print_pro();
		  goto second;

		}
		if(get_option==14)
		{
				clrscr();
				boundry();
				gotoxy(32,07);

				textcolor(8);
				textbackground(7);
				cprintf(" SEARCH PROPERTY ");
				textbackground(0);
				gotoxy(35,11);
				cout<<"CITY NAME : ";
				gets(u);
				gotoxy(38,15);
				cout<<"BUY FLATS";
				gotoxy(38,17);
				cout<<"BUY PLOTS";
				gotoxy(38,19);
				cout<<"FLATS FOR RENT";


				x=35;
				y=15;
				gotoxy(x,y);
				cout<<mark;

				do
				{

					ch=getch();

					if(ch==down)
					{

					gotoxy(x,y);
					cout<<" ";

					if(y==19)
					{
					y=15;
					}
					else
					{
					y=y+2;
					}

					gotoxy(x,y);
					cout<<mark;

					}

					if(ch==up)
					{

					gotoxy(x,y);
					cout<<" ";

					if(y==15)
					{
					y=19;
					}
					else
					{
					y=y-2;
					}

					gotoxy(x,y);
					cout<<mark;

					}
					}while(ch!=enter);

			 clrscr();



			if(y==15)
			{

				ifstream fin4;
				fin4.open("he.dat",ios::in|ios::binary);
				while(fin4)
				{
				if(fin4)
				{
				fin4.read((char*)&f,sizeof(f));

				if(strcmp(f.place,u)==0)
				{
			       //clrscr();
				//load();
				//clrscr();
				f.display();
			      //	getch();
			       //	 goto second;
				}
				/*else
				{
				getch();
				clrscr();
				gotoxy(32,11);
				cout<<"RECORD NOT FOUND";
				cout<<"PRESS ENTER TO TRY AGAIN";
				} */

				}

				}

				fin4.close();
			}
			if(y==17)
			{
				ifstream fin2;
				fin2.open("hell.dat",ios::in|ios::binary);
				while(fin2)
				{
				if(fin2)
				{
					fin2.read((char*)&p,sizeof(p));
					if(strcmp(p.place,u)==0)
					{//   clrscr();
				       //	load();
						p.display2();
					   ///	getch();
					      //	 goto second;
					}

				}
				}

				fin2.close();
			}

			if(y==19)
			{
				ifstream fin3;
				fin3.open("hello.dat",ios::in|ios::binary);
				while(fin3)
				{
				if(fin3)
				{
					fin3.read((char*)&r,sizeof(r));
					if(strcmp(r.place,u)==0)
					{
				     //	clrscr();
				       //	load();

						r.display3();
					 //	getch();
					   //	 goto second;
					}
				}
				}

				fin3.close();
			}
			getch();

			goto second;
		     }
		   if(get_option==17)
		   {
		   clrscr();

		   goto onemore;
		   }


		}





}














getch();
}
