#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class person
{
	string name;
	string address;
	string number;
public:
	person();
	person(string n,string ad,string num);
	void setname(string n);
	void setadd(string ad);
	void setnum(string num);
	string getname();
	string getadd();
	string getnum();
	void inp();
	void setinfo(string n,string ad,string num);
	string getinfo();
	~person();
};

#endif