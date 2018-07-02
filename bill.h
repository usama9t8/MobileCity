#ifndef BILL_H
#define BILL_H
#include<iostream>
#include<string>
#include "date.h"
#include "person.h"
using namespace std;

class bill
{
	person per;
	date dat;
	int quantity[1000];
	string particulars[1000];
	int rate[1000];
	int amount[1000];
public:
	bill();
	bill(string p[],int q[],int r[],int a[]);
	void setpart(string p[],int size);
	void setqua(int q[],int size);
	void setrate(int r[],int size);
	void setamou(int q[],int r[],int size);
	string getpart(string p[],int size);
	int getqua(int q[],int size);
	int getrate(int r[],int size);
	int getamou(int a[],int size);
	void billdisplay();
	~bill();
};

#endif