#include"person.h"
#include <iostream>
#include <string>
using namespace std;

person::person()
{
	name="";
	address="";
	number="";
}
person::person(string n,string ad,string num)
{
	name=n;
	address=ad;
	number=num;
}
void person::setname(string n)
{
	name=n;
}
void  person::setadd(string add)
{
	address=add;
}
void  person::setnum(string num)
{
	number=num;
}
string  person::getname()
{
	return name;
}
string  person::getadd()
{
	return address;
}
string  person:: getnum()
{
	return number;
}
void person::setinfo(string n,string add,string num)
{
	name=n;
	address=add;
	number=num;
}
string person::getinfo()
{
	return name,address,number;
}
void person::inp()
{
	string n;
	cin.ignore();
	cout<<"Enter name :";
	getline(cin,n);
	
	cout<<"Enter address :";
	string add;
	//cin.ignore();
	getline(cin,add);
	setname(n);
	//cin.ignore();
	cout<<"Enter Cell Number :";
	string num;
	//cin.ignore();
	getline(cin,num);
	cout<<n<<"\t"<<add<<"\t"<<num<<endl;
	setinfo(n,add,num);
}
 person::~person()
{
	;
}