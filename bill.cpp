#include<iostream>
#include<string>
#include<iomanip>
#include<iostream>
#include "date.h"
#include "person.h"
#include "bill.h"
using namespace std;
bill::bill()
{
	for(int i=0;i<1000;i++)
	{
		particulars[i]="";
		rate[i]=0;
		amount[i]=0;
		quantity[i]=0;
	}
}
bill::bill(string p[],int q[],int r[],int a[])
{
	for (int i=0;i<1000;i++)
	{
		particulars[i]=p[i];
		quantity[i]=q[i];
		rate[i]=r[i];
		amount[i]=a[i];
	}
}
void bill:: setpart(string p[],int size)
{
	for (int i=0;i<size;i++)
	{
		particulars[i]=p[i];
	}
}
	void bill::  setqua(int q[],int size)
	{
	for (int i=0;i<size;i++)
	{
		
		quantity[i]=q[i];
	}
	}
	void bill::  setrate(int r[],int size)
	{
	for (int i=0;i<size;i++)
	{
		rate[i]=r[i];
	}
	}
	void bill::  setamou(int q[],int r[],int size)
	{
	for (int i=0;i<size;i++)
	{
		amount[i]=r[i]*q[i];
	}
	}
	int bill:: getqua(int quan[], int size)
	{
		return quan[size];
	}
	string bill:: getpart(string p[], int size)
	{
	     return p[size];
	}
	int bill::getrate(int rate[], int size)
	{
	     return rate[size];
	}
	int bill::getamou(int amou[], int size)
	{     
         return amou[size];
	}
	void bill::billdisplay()
	{
		dat.displaydate();
		per.inp();
		cout<<"Enter number of particulars : ";
		int s;
		cin>>s;
		string p[1000];
		int a[1000], r[1000],q[1000],total=0;
		for (int i=0;i<s;i++)
		{
		cout<<"Particular "<<i+1<<" : ";
		cin>>p[i];
		cout<<"Quantity : ";
		cin>>q[i];
		cout<<"Rate : ";
		cin>>r[i];
		setpart(p,s);
		setqua(q,s);
		setrate(r,s);
		a[i]=r[i]*q[i];
		setamou(q,r,s);
		total=total+a[i];
		}
		system ("cls");
	cout<<"          MOBILO"<<endl;
	cout<<"      MOBILE CITY"<<endl;
	cout<<"| "<<"DEALS IN ALL KINDS OF MOBILE & ACCESSORIES |"<<endl;
    cout<<"=============================================="<<endl;
	cout<<"No. 1     ";
	cout<<"MBL: 0312-2020202";
	cout<<setw(5)<<"  Date : "<<dat.getday()<<"/"<<dat.getmonth()<<"/"<<dat.getyear()<<endl;
	cout<<"                         "<<endl;
	cout<<"               | CASH MEMO |"<<endl;
	cout<<"                         "<<endl;
	cout<<"NAME: "<<per.getname()<<"\t("<<per.getnum()<<")"<<endl;
	cout<<"ADRESS: "<<per.getadd()<<endl;
	cout<<"QTY."<<"     "<<"PARTICULARS"<<"        "<<"RATE"<<"       "<<"AMOUNT"<<endl;
	for(int i=0;i<s;i++)
	{
		cout<<q[i]<<setw(15)<<p[i]<<setw(15)<<r[i]<<setw(10)<<a[i]<<endl;
	}
	cout<<setw(15)<<"SIGNATURE __________________"<<setw(15)<<"Total: "<<total<<endl;
	cout<<"SHOP # G-3 GROUND FLOOR HAFEEZ CENTER, LAHORE"<<endl;
}  
	bill::~bill()
	{
	;
	}
