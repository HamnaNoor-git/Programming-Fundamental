#include<iostream>
using namespace std;
int main()

{
	int TotalSeconds,seconds,minutes,hours,result;
	
	//number of hours can be obtained by division of number of seconds by 3600
	cout << "the total number of seconds are " ;
	cin >> TotalSeconds;
	hours = (TotalSeconds/3600);
	
	/*after finding hours if there is any remaining second then they will be obtained from remaindr and on 
	division with 60 it will give minutes*/ 
	cout << "the number of hours are " <<hours <<endl;
	minutes = (TotalSeconds%3600)/60;
	
	/*after finding minutes if there is any remaining second then they will be obtained from remaindr*/ 
	cout << "the number of minutes are " <<minutes <<endl;
	seconds = TotalSeconds%60;
	
	cout << "the number of seconds are " <<seconds <<endl;
	cout << "There are " <<hours <<" hours, " <<minutes <<" minutes and " <<seconds <<" seconds.";
	return 0;
}
