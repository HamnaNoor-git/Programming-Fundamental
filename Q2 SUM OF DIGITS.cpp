#include<iostream>
using namespace std;
int main()
{
	int n,n1,n2,n3,n4,n5,result;
	cout << "Enter 5-digit number ";
	cin >> n;
	
	n1 = n/10000; //this will digit on ten thousand place
	n2 = (n%10000)/1000; //remainder will give 4-digit number and on division digit on thousand place will be obtained
	n3 = (n%1000)/100; //remainder will give 3-digit number and on division digit on hundred place will be obtained
	n4 = (n%100)/10; //remainder will give 2-digit number and on division digit on tens place will be obtained
	n5 = (n%10); //remainder will give 1-digit number on ones place.
	result = n1+n2+n3+n4+n5;
	cout << "The sum of 5 digit number is " <<result;
    return 0; 
}
