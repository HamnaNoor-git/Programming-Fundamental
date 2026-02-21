
#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout<<"---CONVERSION---\n";
	int decimal_number,base,i,remainder;
	string converted = "";
	cout << "Enter a decimal number with base 10: ";
	cin >> decimal_number;
	cout << "Enter the base in which a number needs to be converted: ";
	cin >> base;
	
	if(base>=2 && base<=16)
	{
		if(decimal_number==0)
		{
			cout << "The coversion for the decimal number " << decimal_number << " into base " << base
				 << " will be 0." ;
		}
		else if(decimal_number > 0)
		{
			for(i=decimal_number; i>0; i=i/base) 
			{
				remainder=i%base;
				if(remainder<10)
				{
					converted = char('0' + remainder) + converted;
				}
				else
				{
					converted = char('A' + (remainder-10)) + converted; 
				}
			}
			cout<<"The decimal number "<<decimal_number<<" after conversion into base "<<base <<" is "<<converted;	
		}
	}
	else
	{
		cout << "Base must be in between 2 to 16!!";
	}
return 0;
}
