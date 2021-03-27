#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
//using namespace std;
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
};

class buyplot
{
public:

char place[50];
char area[50];
char location[50];
char cost[50];
char contact[50];
//char type[50];
};

class flatrent
{
public:

char place[50];
char name[50];
char location[50];
char bhk[50];
char fur[50];
char pre[50];
char cost[50];
char contact[50];
//char type[50];
};

main()
{
clrscr();
buyflat f;
buyplot p;
flatrent r;


ofstream fout;
fout.open("he.dat",ios::out|ios::binary);


strcpy(f.place,"amritsar");
strcpy(f.name,"GT Residency");
strcpy(f.area,"1233 sqft");
strcpy(f.location,"jandiala guru,Amritsar");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.37 LAC (Rs.3000/sqft)");
strcpy(f.contact,"673746476");
//strcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"amritsar");
strcpy(f.name,"Rudra residency");
strcpy(f.area,"3241 sqft");
strcpy(f.location,"ajnala road,Amritsar");
strcpy(f.bhk,"3 BHK");
strcpy(f.cost,"Rs.81 LAC  (Rs.2500/sqft)");
strcpy(f.contact,"9444635443");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"amritsar");
strcpy(f.name,"Safal heigths");
strcpy(f.area,"2331 sqft");
strcpy(f.location,"majitha road, Amritsar");
strcpy(f.bhk,"3 BHK");
strcpy(f.cost,"Rs.37 LAC (Rs.1600/sqft)");
strcpy(f.contact,"9234567233");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"ludhiana");
strcpy(f.name,"Inox residency");
strcpy(f.area,"1234 sqft");
strcpy(f.location,"ghumar mandi,Ludiana");
strcpy(f.bhk,"4 BHK");
strcpy(f.cost,"Rs.49 LAC (Rs.4000/sqft)");
strcpy(f.contact,"6543456935");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"ludhiana");
strcpy(f.name,"orbit colony");
strcpy(f.area,"5432 sqft");
strcpy(f.location,"model town,Ludiana");
strcpy(f.bhk,"4 BHk");
strcpy(f.cost,"Rs.162 LAC (Rs.3000/sqft)");
strcpy(f.contact,"9234521234");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"ludhiana");
strcpy(f.name,"apex residency");
strcpy(f.area,"1112 sqft");
strcpy(f.location,"collage road,Ludiana");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.22 LAC (Rs.2000/sqft)");
strcpy(f.contact,"934565432");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));


strcpy(f.place,"patiala");
strcpy(f.name,"MT Residency");
strcpy(f.area,"1233 sqft");
strcpy(f.location,"sirhind Road,Patiala");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.37 LAC (Rs.3000/sqft)");
strcpy(f.contact,"673746476");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"patiala");
strcpy(f.name,"xyz residency");
strcpy(f.area,"4652 sqft");
strcpy(f.location,"manjalpur,Patiala");
strcpy(f.bhk,"3 BHK");
strcpy(f.cost,"Rs.11 LAC  (Rs.2500/sqft)");
strcpy(f.contact,"9444635443");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"patiala");
strcpy(f.name,"bigx heigths");
strcpy(f.area,"2331 sqft");
strcpy(f.location,"MD road, patiala");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.37 LAC (Rs.1600/sqft)");
strcpy(f.contact,"9234567233");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"bhatinda");
strcpy(f.name,"eva residency");
strcpy(f.area,"1234 sqft");
strcpy(f.location,"Civil line,Bhatinda");
strcpy(f.bhk,"4 BHK");
strcpy(f.cost,"Rs.49 LAC (Rs.4000/sqft)");
strcpy(f.contact,"6543456935");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"bhatinda");
strcpy(f.name,"alpha colony");
strcpy(f.area,"5432 sqft");
strcpy(f.location,"Patel nagar,Bhatinda");
strcpy(f.bhk,"4 BHk");
strcpy(f.cost,"Rs.162 LAC (Rs.3000/sqft)");
strcpy(f.contact,"9234521234");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"bhatinda");
strcpy(f.name,"kleano residency");
strcpy(f.area,"3276 sqft");
strcpy(f.location,"Bharat nagar,Bhatinda");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.65 LAC (Rs.2000/sqft)");
strcpy(f.contact,"9333333222");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));


strcpy(f.place,"chandigarh");
strcpy(f.name,"parkar Residency");
strcpy(f.area,"4322 sqft");
strcpy(f.location,"Sector 7,Chandigarh");
strcpy(f.bhk,"3 BHK");
strcpy(f.cost,"Rs.129 LAC (Rs.3000/sqft)");
strcpy(f.contact,"673746476");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"chandigarh");
strcpy(f.name,"cello residency");
strcpy(f.area,"3241 sqft");
strcpy(f.location,"Sector 10,Chandigarh");
strcpy(f.bhk,"3 BHK");
strcpy(f.cost,"Rs.81 LAC  (Rs.2500/sqft)");
strcpy(f.contact,"9444635443");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"chandigarh");
strcpy(f.name,"swing heigths");
strcpy(f.area,"2331 sqft");
strcpy(f.location,"Sector 13,Chandigarh");
strcpy(f.bhk,"3 BHK");
strcpy(f.cost,"Rs.37 LAC (Rs.1600/sqft)");
strcpy(f.contact,"9234567233");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"jalandhar");
strcpy(f.name,"svapam residency");
strcpy(f.area,"1234 sqft");
strcpy(f.location,"shiv nagar,Jalandar");
strcpy(f.bhk,"4 BHK");
strcpy(f.cost,"Rs.49 LAC (Rs.4000/sqft)");
strcpy(f.contact,"6543456935");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"jalandhar");
strcpy(f.name,"label colony");
strcpy(f.area,"1432 sqft");
strcpy(f.location,"Jawahar nagar,Jalandar");
strcpy(f.bhk,"3 BHk");
strcpy(f.cost,"Rs.42 LAC (Rs.3000/sqft)");
strcpy(f.contact,"9234521234");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"jalandhar");
strcpy(f.name,"ganesh residency");
strcpy(f.area,"1112 sqft");
strcpy(f.location,"Gopal nagar,Jalandar");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.22 LAC (Rs.2000/sqft)");
strcpy(f.contact,"911111232");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));


strcpy(f.place,"mohali");
strcpy(f.name,"mortal Residency");
strcpy(f.area,"3452 sqft");
strcpy(f.location,"phase 5,Mohali");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.103 LAC (Rs.3000/sqft)");
strcpy(f.contact,"79776476");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"mohali");
strcpy(f.name,"namo residency");
strcpy(f.area,"2322 sqft");
strcpy(f.location,"sector 68, Mohali");
strcpy(f.bhk,"3 BHK");
strcpy(f.cost,"Rs.58 LAC  (Rs.2500/sqft)");
strcpy(f.contact,"9444635443");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"mohali");
strcpy(f.name,"silver heigths");
strcpy(f.area,"2331 sqft");
strcpy(f.location,"phase 7, Mohali");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.37 LAC (Rs.1600/sqft)");
strcpy(f.contact,"9234567233");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"phagwara");
strcpy(f.name,"adars residency");
strcpy(f.area,"2341 sqft");
strcpy(f.location,"model town,Phagwara");
strcpy(f.bhk,"4 BHK");
strcpy(f.cost,"Rs.35 LAC (Rs.1500/sqft)");
strcpy(f.contact,"743456935");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"phagwara");
strcpy(f.name,"bita colony");
strcpy(f.area,"1432 sqft");
strcpy(f.location,"lowgate,Phagwara");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.14 LAC (Rs.1000/sqft)");
strcpy(f.contact,"9234521234");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));

strcpy(f.place,"phagwara");
strcpy(f.name,"kleano residency");
strcpy(f.area,"3276 sqft");
strcpy(f.location,"bharat nagar,Phagwar");
strcpy(f.bhk,"2 BHK");
strcpy(f.cost,"Rs.65 LAC (Rs.2000/sqft)");
strcpy(f.contact,"9333333222");
//rcpy(f.type,"flat");
fout.write((char*)&f,sizeof(f));
fout.close();


ofstream fout2;
fout2.open("hell.dat",ios::out|ios::binary);


strcpy(p.place,"amritsar");
strcpy(p.area,"1233 sqft");
strcpy(p.location,"jandiala guru,Amritsar");
strcpy(p.cost,"Rs.37 LAC (Rs.3000/sqft)");
strcpy(p.contact,"673746476");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"amritsar");
strcpy(p.area,"3241 sqft");
strcpy(p.location,"ajnala road,Amritsar");
strcpy(p.cost,"Rs.81 LAC  (Rs.2500/sqft)");
strcpy(p.contact,"9444635443");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"amritsar");
//strcpy(f.name,"Safal heigths");
strcpy(p.area,"2331 sqft");
strcpy(p.location,"majitha road, Amritsar");
//strcpy(f.bhk,"3 BHK");
strcpy(p.cost,"Rs.37 LAC (Rs.1600/sqft)");
strcpy(p.contact,"9234567233");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"ludhiana");
//strcpy(f.name,"Inox residency");
strcpy(p.area,"1234 sqft");
strcpy(p.location,"ghumar mandi,Ludiana");
//strcpy(f.bhk,"4 BHK");
strcpy(p.cost,"Rs.49 LAC (Rs.4000/sqft)");
strcpy(p.contact,"6543456935");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"ludhiana");
//strcpy(f.name,"orbit colony");
strcpy(p.area,"5432 sqft");
strcpy(p.location,"model town,Ludiana");
//strcpy(f.bhk,"4 BHk");
strcpy(p.cost,"Rs.162 LAC (Rs.3000/sqft)");
strcpy(p.contact,"9234521234");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"ludhiana");
//strcpy(f.name,"apex residency");
strcpy(p.area,"1112 sqft");
strcpy(p.location,"collage road,Ludiana");
//strcpy(f.bhk,"2 BHK");
strcpy(p.cost,"Rs.22 LAC (Rs.2000/sqft)");
strcpy(p.contact,"934565432");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));


strcpy(p.place,"patiala");
//strcpy(f.name,"MT Residency");
strcpy(p.area,"1233 sqft");
strcpy(p.location,"sirhind Road,Patiala");
//strcpy(f.bhk,"2 BHK");
strcpy(p.cost,"Rs.37 LAC (Rs.3000/sqft)");
strcpy(p.contact,"673746476");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"patiala");
//strcpy(f.name,"xyz residency");
strcpy(p.area,"4652 sqft");
strcpy(p.location,"manjalpur,Patiala");
//strcpy(f.bhk,"3 BHK");
strcpy(p.cost,"Rs.11 LAC  (Rs.2500/sqft)");
strcpy(p.contact,"9444635443");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"patiala");
//strcpy(f.name,"bigx heigths");
strcpy(p.area,"2331 sqft");
strcpy(p.location,"MD road, patiala");
//strcpy(f.bhk,"2 BHK");
strcpy(p.cost,"Rs.37 LAC (Rs.1600/sqft)");
strcpy(p.contact,"9234567233");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"bhatinda");
//strcpy(f.name,"eva residency");
strcpy(p.area,"1234 sqft");
strcpy(p.location,"Civil line,Bhatinda");
//strcp(f.bhk,"4 BHK");
strcpy(p.cost,"Rs.49 LAC (Rs.4000/sqft)");
strcpy(p.contact,"6543456935");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"bhatinda");
//strcpy(f.name,"alpha colony");
strcpy(p.area,"5432 sqft");
strcpy(p.location,"Patel nagar,Bhatinda");
//strcpy(f.bhk,"4 BHk");
strcpy(p.cost,"Rs.40 LAC (Rs.2200/sqft)");
strcpy(p.contact,"9234521234");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"bhatinda");
//strcpy(f.name,"kleano residency");
strcpy(p.area,"3276 sqft");
strcpy(p.location,"Bharat nagar,Bhatinda");
//strcpy(f.bhk,"2 BHK");
strcpy(p.cost,"Rs.65 LAC (Rs.2000/sqft)");
strcpy(p.contact,"9333333222");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));


strcpy(p.place,"chandigarh");
//strcpy(p.name,"parkar Residency");
strcpy(p.area,"4322 sqft");
strcpy(p.location,"Sector 7,Chandigarh");
//strcpy(p.bhk,"3 BHK");
strcpy(p.cost,"Rs.40 LAC (Rs.2000/sqft)");
strcpy(p.contact,"673746476");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"chandigarh");
//strcpy(f.name,"cello residency");
strcpy(p.area,"3241 sqft");
strcpy(p.location,"Sector 10,Chandigarh");
//strcp(f.bhk,"3 BHK");
strcpy(p.cost,"Rs.81 LAC  (Rs.2500/sqft)");
strcpy(p.contact,"9444635443");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"chandigarh");
//strcpy(f.name,"swing heigths");
strcpy(p.area,"2331 sqft");
strcpy(p.location,"Sector 13,Chandigarh");
//strcpy(f.bhk,"3 BHK");
strcpy(p.cost,"Rs.37 LAC (Rs.1600/sqft)");
strcpy(p.contact,"9234567233");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"jalandhar");
//strcpy(f.name,"svapam residency");
strcpy(p.area,"1234 sqft");
strcpy(p.location,"shiv nagar,Jalandar");
//strcpy(f.bhk,"4 BHK");
strcpy(p.cost,"Rs.49 LAC (Rs.4000/sqft)");
strcpy(p.contact,"6543456935");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"jalandhar");
//strcpyf.name,"label colony");
strcpy(p.area,"1432 sqft");
strcpy(p.location,"Jawahar nagar,Jalandar");
//strcpy(f.bhk,"3 BHk");
strcpy(p.cost,"Rs.42 LAC (Rs.3000/sqft)");
strcpy(p.contact,"9234521234");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"jalandhar");
//strcpy(f.name,"ganesh residency");
strcpy(p.area,"1112 sqft");
strcpy(p.location,"Gopal nagar,Jalandar");
//strcpy(f.bhk,"2 BHK");
strcpy(p.cost,"Rs.22 LAC (Rs.2000/sqft)");
strcpy(p.contact,"911111232");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));


strcpy(p.place,"mohali");
//strcpy(f.name,"mortal Residency");
strcpy(p.area,"3452 sqft");
strcpy(p.location,"phase 5,Mohali");
//strcpy(f.bhk,"2 BHK");
strcpy(p.cost,"Rs.103 LAC (Rs.3000/sqft)");
strcpy(p.contact,"79776476");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"mohali");
//strcpy(f.name,"namo residency");
strcpy(p.area,"2322 sqft");
strcpy(p.location,"sector 68, Mohali");
//strcpy(f.bhk,"3 BHK");
strcpy(p.cost,"Rs.58 LAC  (Rs.2500/sqft)");
strcpy(p.contact,"9444635443");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"mohali");
//strcpy(f.name,"silver heigths");
strcpy(p.area,"2331 sqft");
strcpy(p.location,"phase 7, Mohali");
//strcpy(f.bhk,"2 BHK");
strcpy(p.cost,"Rs.37 LAC (Rs.1600/sqft)");
strcpy(p.contact,"9234567233");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"phagwara");
//strcpy(f.name,"adars residency");
strcpy(p.area,"2341 sqft");
strcpy(p.location,"model town,Phagwara");
//strcpp(f.bhk,"4 BHK");
strcpy(p.cost,"Rs.35 LAC (Rs.1500/sqft)");
strcpy(p.contact,"743456935");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"phagwara");
//strcpp(f.name,"bita colony");
strcpy(p.area,"1432 sqft");
strcpy(p.location,"lowgate,Phagwara");
//strp(f.bhk,"2 BH
strcpy(p.cost,"Rs.14 LAC (Rs.1000/sqft)");
strcpy(p.contact,"9234521234");
//rcpy(p.type,"flat");
fout2.write((char*)&p,sizeof(p));

strcpy(p.place,"phagwara");
//strcpy(f.name,"kleano residency");
strcpy(p.area,"3276 sqft");
strcpy(p.location,"bharat nagar,Phagwar");
//strcpy(f.bhk,"2 BHK");
strcpy(p.cost,"Rs.65 LAC (Rs.2000/sqft)");
strcpy(p.contact,"9333333222");
//rcpy(p.type,"plot");
fout2.write((char*)&p,sizeof(p));

fout2.close();
//---------------------------------------------------------------------------

ofstream fout3;
fout3.open("hello.dat",ios::out|ios::binary);


strcpy(r.place,"amritsar");
strcpy(r.name,"GT Residency");
//strcpy(r.area,"1233 sqft");
strcpy(r.location,"jandiala guru,Amritsar");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs. 20000/m");
strcpy(r.contact,"673746476");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"amritsar");
strcpy(r.name,"Rudra residency");
//strcpy(f.area,"3241 sqft");
strcpy(r.location,"ajnala road,Amritsar");
strcpy(r.bhk,"3 BHK");
strcpy(r.fur,"furnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.81000/m");
strcpy(r.contact,"9444635443");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"amritsar");
strcpy(r.name,"Safal heigths");
//strcpy(f.area,"2331 sqft");
strcpy(r.location,"msajitha road, Amritsar");
strcpy(r.bhk,"3 BHK");
strcpy(r.fur,"furnished");
strcpy(r.pre,"family");
strcpy(r.cost,"Rs.79000/m");
strcpy(r.contact,"9234567233");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"ludhiana");
strcpy(r.name,"Inox residency");
//strcpy(f.area,"1234 sqft");
strcpy(r.location,"ghumar mandi,Ludiana");
strcpy(r.bhk,"4 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"family");
strcpy(r.cost,"Rs.40000/m");
strcpy(r.contact,"6543456935");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"ludhiana");
strcpy(r.name,"orbit colony");
//strcpr(f.area,"5432 sqft");
strcpy(r.location,"model town,Ludiana");
strcpy(r.bhk,"4 BHk");
strcpy(r.fur,"semi-furnished");
strcpy(r.pre,"bacheors/family");
strcpy(r.cost,"Rs.55000/m");
strcpy(r.contact,"9234521234");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"ludhiana");
strcpy(r.name,"apex residency");
//strcpr(f.area,"1112 sqft");
strcpy(r.location,"collage road,Ludiana");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.22000/m");
strcpy(r.contact,"934565432");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));


strcpy(r.place,"patiala");
strcpy(r.name,"MT Residency");
//strcpr(f.area,"1233 sqft");
strcpy(r.location,"sirhind Road,Patiala");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"furnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.44000/m");
strcpy(r.contact,"673746476");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"patiala");
strcpy(r.name,"xyz residency");
//strcpy(f.area,"4652 sqft");
strcpy(r.location,"manjalpur,Patiala");
strcpy(r.bhk,"3 BHK");
strcpy(r.fur,"semi-furnished");
strcpy(r.pre,"bacheors/family");
strcpy(r.cost,"Rs.35000/m");
strcpy(r.contact,"9444635443");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"patiala");
strcpy(r.name,"bigx heigths");
//strcpr(f.area,"2331 sqft");
strcpy(r.location,"MD road, patiala");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"furnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.37000/m");
strcpy(r.contact,"9234567233");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"bhatinda");
strcpy(r.name,"eva residency");
//strcpy(f.area,"1234 sqft");
strcpy(r.location,"Civil line,Bhatinda");
strcpy(r.bhk,"4 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.49000/m");
strcpy(r.contact,"6543456935");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"bhatinda");
strcpy(r.name,"alpha colony");
//strcpr(f.area,"5432 sqft");
strcpy(r.location,"Patel nagar,Bhatinda");
strcpy(r.bhk,"4 BHk");
strcpy(r.fur,"furnished");
strcpy(r.pre,"family");
strcpy(r.cost,"Rs.70000/m");
strcpy(r.contact,"9234521234");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"bhatinda");
strcpy(r.name,"kleano residency");
//strcpr(f.area,"3276 sqft");
strcpy(r.location,"Bharat nagar,Bhatinda");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"bacheors/family");
strcpy(r.cost,"Rs.15000/m");
strcpy(r.contact,"9333333222");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));


strcpy(r.place,"chandigarh");
strcpy(r.name,"parkar Residency");
//strcpr(f.area,"4322 sqft");
strcpy(r.location,"Sector 7,Chandigarh");
strcpy(r.bhk,"3 BHK");
strcpy(r.fur,"furnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.53000/m");
strcpy(r.contact,"673746476");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"chandigarh");
strcpy(r.name,"cello residency");
//strcpy(f.area,"3241 sqft");
strcpy(r.location,"Sector 10,Chandigarh");
strcpy(r.bhk,"3 BHK");
strcpy(r.fur,"furnished");
strcpy(r.pre,"family");
strcpy(r.cost,"Rs.60000/m");
strcpy(r.contact,"9444635443");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"chandigarh");
strcpy(r.name,"swing heigths");
//strcpy(f.area,"2331 sqft");
strcpy(r.location,"Sector 13,Chandigarh");
strcpy(r.bhk,"3 BHK");
strcpy(r.fur,"semi-furnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.37000/m");
strcpy(r.contact,"9234567233");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"jalandhar");
strcpy(r.name,"svapam residency");
//strcpy(f.area,"1234 sqft");
strcpy(r.location,"shiv nagar,Jalandar");
strcpy(r.bhk,"4 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"family");
strcpy(r.cost,"Rs.32000/m");
strcpy(r.contact,"6543456935");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"jalandhar");
strcpy(r.name,"label colony");
//strcpy(f.area,"1432 sqft");
strcpy(r.location,"Jawahar nagar,Jalandar");
strcpy(r.bhk,"3 BHk");
strcpy(r.fur,"furnished");
strcpy(r.pre,"bacheors/family");
strcpy(r.cost,"Rs.42000/m");
strcpy(r.contact,"9234521234");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"jalandhar");
strcpy(r.name,"ganesh residency");
//strcpy(f.area,"1112 sqft");
strcpy(r.location,"Gopal nagar,Jalandar");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.22000");
strcpy(r.contact,"911111232");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));


strcpy(r.place,"mohali");
strcpy(r.name,"mortal Residency");
//strcpy(f.area,"3452 sqft");
strcpy(r.location,"phase 5,Mohali");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.30000/m");
strcpy(r.contact,"79776476");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"mohali");
strcpy(r.name,"namo residency");
//strcpy(f.area,"2322 sqft");
strcpy(r.location,"sector 68, Mohali");
strcpy(r.bhk,"3 BHK");
strcpy(r.fur,"furnished");
strcpy(r.pre,"family");
strcpy(r.cost,"Rs.58000/m");
strcpy(r.contact,"9444635443");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"mohali");
strcpy(r.name,"silver heigths");
//strcpr(f.area,"2331 sqft");
strcpy(r.location,"phase 7, Mohali");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"semi-furnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.37000/m)");
strcpy(r.contact,"9234567233");
//rcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"phagwara");
strcpy(r.name,"adars residency");
//strcpy(f.area,"2341 sqft");
strcpy(r.location,"model town,Phagwara");
strcpy(r.bhk,"4 BHK");
strcpy(r.fur,"furnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.55000/m");
strcpy(r.contact,"743456935");
//strcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"phagwara");
strcpy(r.name,"bita colony");
//strcpy(f.area,"1432 sqft");
strcpy(r.location,"lowgate,Phagwara");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"bacheors/family");
strcpy(r.cost,"Rs.25000/m");
strcpy(r.contact,"9234521234");
//strcpy(r.type,"flat");
fout3.write((char*)&r,sizeof(r));

strcpy(r.place,"phagwara");
strcpy(r.name,"kleano residency");
//strcpy(f.area,"3276 sqft");
strcpy(r.location,"bharat nagar,Phagwar");
strcpy(r.bhk,"2 BHK");
strcpy(r.fur,"unfurnished");
strcpy(r.pre,"bacheors");
strcpy(r.cost,"Rs.20000");
strcpy(r.contact,"9333333222");
//strcpy(r.type,"flatforrent");
fout3.write((char*)&r,sizeof(r));






fout3.close();



cout<<"done";
getch();
}
