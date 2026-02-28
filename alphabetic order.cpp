#include<iostream>
using namespace std;


string* fsort(string *arr, int *size)
{
	for(int i=0; i<*size-1; i++)
	{
		for(int j=0; j<*size-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				string temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	return arr;
}
int main()
{
//	Array of Strings (1D)
//Dynamically allocate memory for an array of 5 strings. Take input, sort them alphabetically using a pointer function, and print them.
	int size=5;
	string *arr= new string[size];
	cout<<"enter any 5 name to list them in alphabetic order:\n";
	for(int i=0;i<5 ;i++)
	{
		cout<<i+1<<": ";
		cin>>arr[i];
	}
	
	fsort(arr,&size);
	
	cout<<endl<<"updated list: \n";
	
	for (int i=0; i<5; i++)
	{
		cout << arr[i]<<"\n";
	}
	
	return 0;
}
