
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
int money,note,note500,note1000,note5000;
cout<<setw(20)<<"---ATM---"<<endl;
cout<<"Enter the amount of for withdrawal (Rs.500 to Rs.50000): Rs.";
cin>>money;
if(money >= 500 && money <= 50000 && money%500==0) //condition for the withdrawal of money
{
	if(money >= 500 && money <= 1000) //for the amount greater or equal to 500 and less or equal to 1000
	{
		note500 = money/500;
		cout<<endl<<"----CURRENCY NOTES STATISTICS----"<<endl;
		cout<<endl<<note500<<" currency notes of Rs.500 cash given"<<endl;
		cout<<endl<<"Total currency notes given are: "<<note500;
	}
	else if(money>=1500 && money<=4500) //for the amount greater or equal to 1500 and less or equal to 4500
	{
		note500=1;
		money-=500;
		note1000=money/1000;
		note500+=((money%1000)/500);
		cout<<endl<<"----CURRENCY NOTES STATISTICS----"<<endl;
		cout<<endl<<note500<<" currency notes of Rs.500 cash given"<<endl
		    <<note1000<<" currency notes of Rs.1000 cash given"<<endl;
		cout<<endl<<"Total currency notes given are: "<<note500+note1000;
	}
	else if(money>=5000 && money<=50000) //for the amount greater or equal to 5000 and less or equal to 50,000
	{
		note500=1;
		money-=500;
		note5000=money/5000;
		note1000=(money%5000)/1000;
		note500+=((money%1000)/500);
		cout<<endl<<"----CURRENCY NOTES STATISTICS----"<<endl;
		cout<<endl<<note500<<" currency notes of Rs.500 cash given"<<endl
		          <<note1000<<" currency notes of Rs.1000 cash given"<<endl
		          <<note5000<<" currency notes of Rs.5000 cash given"<<endl;
		cout<<endl<<"Total currency notes given are: "<<note500+note1000+note5000;
	}
}

else if(money < 500)
{
	cout << "Minimum amout for the withdrawal is Rs. 500.";
}

else if(money > 50000)
{
	cout<<"Daily withdrawal limit is Rs. 50000.";
}

else if(money%500!=0)
{
	cout << "Please check your amount,as only multiples of Rs. 500 are accepted!!!";
}

	return 0;
}
