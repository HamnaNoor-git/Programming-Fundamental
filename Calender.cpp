
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	
	int year, month, y, m;
	int d;//year (last two digits mainly)
	int c;//century
	int a=1;//printing date
	bool leap_year= true;
	string month_name[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	int month_days[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	cout<<"enter the year (1-9999): ";
	cin>>year;
	if(year<1 || year>9999) //validation for right year input
	{
		cout<<"ivalid year"<<endl;
		return 0;
	}
	
	cout<<"enter the month (1-12): ";
	cin>>month;
	if(month<1 || month>12) //validation for right month input
	{
		cout<<"ivalid month"<<endl;
		return 0;
	}
	
	//check leap year
	if(year%400 == 0 || (year % 4==0))
	{
		month_days[1]=29;
		cout<<"Leap year so, \nFebruary will have "<<month_days[1]<<" days."<<endl;
	}
	else if(year%100 == 1)
	{
		month_days[1]=28;
		cout<<"Not a Leap year so, \nFebruary will have "<<month_days[1]<<" days."<<endl;
	}
	//computing week day
	m=month; //making a copy so that the input remain saved
	y=year;  //making a copy so that the input remain saved
	if(m <= 2)
	{
        m=m+12;
        y=y-1;
    }
    
	d=y%100;
	c=y/100;
	int q=1; //weekday for 1
	int z=(q+(13*(m+1))/5+d+ d/4 + c/4 + 5*c)%7; //Zeller’s congruence
	//z=0 saturday....................z=6 friday
	int begining=(z+5)%7;
	
	//printing calender
	
	cout<<"-----C A L E N D E R-----"<<endl;
	cout<<endl<<"--"<<month_name[month-1]<<" "<<year<<"--"<<endl;
	cout<<"Sun Mon Tue Wed Thur Fri Sat"<<endl;
	
	for(int i=0; i<begining; ++i) 
	{
		cout<<"    ";//for printing space before date 1 if reqy
    }
    for(int i=a ;a <= month_days[month-1]; a++)
	{
        cout<<setw(3)<<a;
        if((begining + a) % 7 == 0) cout<<endl;
        else 
		cout<<" ";
    }
	  
	
	  
	return 0;
}
