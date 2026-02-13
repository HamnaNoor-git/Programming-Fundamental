
#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main()
{

int operators,maximumValue,n,n1,n2,ans;
char askNegative, tell;

srand(time(0));

cout <<"---MATHEMATICS EXERCISE---"<<endl;

cout <<endl<< "Enter y to start maths exercise: ";
cin>>tell;
while(tell=='y' || tell=='Y')
{
cout<<endl<<"For what exercise should be generated? (addition=1, subraction=2, multiplication=3, division=4): ";
cin>>operators;
switch(operators)
{
	case 1://addition
		{
			cout << "Enter maximum value to generate exercise including numbers till there: ";
			cin >> maximumValue;
			cout << "Do you want to allow negative values in exercise:(yes=y, no=n): ";
			cin >> askNegative;
			switch(askNegative)
			{
				case 'y'://include negative value
					n1 = (rand()%(maximumValue-(-maximumValue)+1))+(-maximumValue);
					n2 = (rand()%(maximumValue-(-maximumValue)+1))+(-maximumValue);
					cout<< n1 << "+(" << n2 << ")= ";
					cin>>ans;
					n=n1+n2;
					if(ans==n)
					{
						cout<<"CONGRAGULATIONS!YOU HAVE ANSWERED IT CORRCTLY!";
					}
					else
					{
						cout<<"WRONG ANSWER!! correct answer was: "<<n;
					}
					break;
					
				case 'n'://dont include negative	
					n1 = (rand()%(maximumValue-0+1))+(0);
					n2 = (rand()%(maximumValue-0+1))+(0);
					cout<< n1 << "+" << n2 << "=" <<endl;
					cin>>ans;
					n=n1+n2;
					if(ans==n)
					{
						cout<<"CONGRAGULATIONS!YOU HAVE ANSWERED IT CORRCTLY!";
					}
					else
					{
						cout<<"WRONG ANSWER!! correct answer was: "<<n;
					}
					break;
			}
		}
		break;
		
		
	case 2://subtraction
		{
			cout << "Enter maximum value to generate ecercise including numbers till there: ";
			cin >> maximumValue;
			cout << "Do you want to allow negative values in exercise:(yes=y, no=n): ";
			cin >> askNegative;
			switch(askNegative)
			{
				case 'y'://include negative value
					n1 = (rand()%(maximumValue-(-maximumValue)+1))+(-maximumValue);
					n2 = (rand()%(maximumValue-(-maximumValue)+1))+(-maximumValue);
					cout<< n1 << "-(" << n2 << ")=" <<endl;
					cin>>ans;
					n=n1-n2;
					if(ans==n)
					{
						cout<<"CONGRAGULATIONS!YOU HAVE ANSWERED IT CORRCTLY!";
					}
					else
					{
						cout<<"WRONG ANSWER!! correct answer was: "<<n;
					}
					break;
					
				case 'n'://dont include negative
					do
					{
					n1 = (rand()%(maximumValue-0+1))+(0);
					n2 = (rand()%(maximumValue-0+1))+(0);
				    } while(n1<n2);
				    
					cout<< n1 << "-" << n2 << "=" <<endl;
					cin>>ans;
					n=n1-n2;
					if(ans==n)
					{
						cout<<"CONGRAGULATIONS!YOU HAVE ANSWERED IT CORRCTLY!";
					}
					else
					{
						cout<<"WRONG ANSWER!! correct answer was: "<<n;
					}
					break;
				
		    }
		}
		break;
		
		
	case 3://multiplication
		{
			cout << "Enter maximum value to generate ecercise including numbers till there: ";
			cin >> maximumValue;
			cout << "Do you want to allow negative values in exercise:(yes=y, no=n): ";
			cin >> askNegative;
			switch(askNegative)
			{
				case 'y'://include negative value
					n1 = (rand()%(maximumValue-(-maximumValue)+1))+(-maximumValue);
					n2 = (rand()%(maximumValue-(-maximumValue)+1))+(-maximumValue);
					cout<< n1 << "x(" << n2 << ")=" <<endl;
					cin>>ans;
					n=n1*n2;
					if(ans==n)
					{
						cout<<"CONGRAGULATIONS!YOU HAVE ANSWERED IT CORRCTLY!";
					}
					else
					{
						cout<<"WRONG ANSWER!! correct answer was: "<<n;
					}
					break;
					
				case 'n'://dont include negative
					n1 = (rand()%(maximumValue-0+1))+(0);
					n2 = (rand()%(maximumValue-0+1))+(0);
					cout<< n1 << "x" << n2 << "=" <<endl;
					cin>>ans;
					n=n1*n2;
					if(ans==n)
					{
						cout<<"CONGRAGULATIONS!YOU HAVE ANSWERED IT CORRCTLY!";
					}
					else
					{
						cout<<"WRONG ANSWER!! correct answer was: "<<n;
					}
					break;
				
		    }
		}
		break;
		
		
	case 4://division
		{
			cout << "Enter maximum value to generate ecercise including numbers till there: ";
			cin >> maximumValue;
			cout << "Do you want to allow negative values in exercise:(yes=y, no=n): ";
			cin >> askNegative;
			switch(askNegative)
			{
				case 'y'://include negative value
					n1 = (rand()%(maximumValue-(-maximumValue)+1))+(-maximumValue);
					n2 = (rand()%(maximumValue-(-maximumValue)+1))+(-maximumValue);
					if(n2==0) //to avoid zero in demoninator 
					{
					cout<< n2 << "/(" << n1 << ")=" <<endl;
					cin>>ans;
					n=n2/n1;	
					}
					else
					{
					cout<< n1 << "/(" << n2 << ")=" <<endl;
					cin>>ans;
					n=n1/n2;
					}
					if(ans==n)
					{
						cout<<"CONGRAGULATIONS!YOU HAVE ANSWERED IT CORRCTLY!";
					}
					else
					{
						cout<<"WRONG ANSWER!! correct answer was: "<<n;
					}
					break;
					
				case 'n'://dont include negative
					n1 = (rand()%(maximumValue-0+1))+(0);
					n2 = (rand()%(maximumValue-0+1))+(0);
					if(n2==0) //to avoid zero in demoninator
					{
					cout<< n2 << "/(" << n1 << ")=" <<endl;
					cin>>ans;
					n=n2/n1;	
					}
					else
					{
					cout<< n1 << "/(" << n2 << ")=" <<endl;
					cin>>ans;
					n=n1/n2;
					}
					if(ans==n)
					{
						cout<<"CONGRAGULATIONS!YOU HAVE ANSWERED IT CORRCTLY!";
					}
					else
					{
						cout<<"WRONG ANSWER!! correct answer was: "<<n;
					}
					break;
				
		    }
		}
		break;
}
cout <<endl<< "Do you want to solve more questions related to different exercise?(y=yes, n=no)";
cin>>tell;
}
	return 0;
}

