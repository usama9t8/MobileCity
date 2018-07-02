#ifndef DATE_H
#define DATE_H
using namespace std;
class date
{
	int day;
	int month;
	int year;
public:
	date();
	date(int d,int m,int y);
	void setday(int d);
	void setmonth(int m);
	void setyear(int y);
	int getday();
	int getmonth();
	int getyear();
	void setdate(int d, int m,int y);
	int getdate();
	void displaydate();
	~date();
};
#endif