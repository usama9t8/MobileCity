#include "date.h"
#include <iostream>
using namespace std;
date::date()
{
	day=0;
	month=0;
	year=0;
}
date::date(int d,int m,int y)
{
   		day=d;
		month=m;
		year=y;
}
	void date::setday(int d)
	{
		day=d;
	}
	void date::setmonth(int m)
	{
		month=m;
	}
	void date::setyear(int y)
	{
		year=y;
	}
	int date::getday()
	{
	return day;
	}
	int date::getmonth()
	{
	return month;
	}
	int date::getyear()
	{
	return year;
	}
	void date::setdate(int d,int m,int y)
	{
	
		day=d;
		month=m;
		year=y;
	}
	int date::getdate()
	{
		cout<<day<<"/"<<month<<"/"<<year<<endl;
		return day,month,year;
		
	}

	void date::displaydate()
	{
		int d,m,y;
		char a,b;
		d:
		cout<<"Enter date Seperated by any special character (d/m/y) :";
		cin>>d>>a>>m>>b>>y;
		if((m==2)&&(d>0&&d<29)&&y>0)
		{
		setdate(d,m,y);
				cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
		if ((m>0&&m<13)&&(m==1||m==3||m==5||m==7||m==8||m==10||m==12)&&(d>0&&d<32)&&y>0)
		{
		setdate(d,m,y);
				cout<<day<<"/"<<month<<"/"<<year<<endl;
		}
		else if((m>0&&m<13)&&(m==4||m==6||m==9||m==11)&&(d>0&&d<31)&&y>0)
		{
		setdate(d,m,y);
				cout<<day<<"/"<<month<<"/"<<year<<endl;
				
		}
		else {cout<<"Enter a valid date "<<endl;
		goto d;
		}
	}
	date::~date()
	{
	;
	}