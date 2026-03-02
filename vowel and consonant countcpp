#include<iostream>
using namespace std;

void cons_vow(string *arr, int *vow, int *cons)
{
	for(int i=0; i<(*arr).length();i++)
	{
		if((*arr)[i]=='a'||(*arr)[i]=='e'||(*arr)[i]=='i'||(*arr)[i]=='o'||(*arr)[i]=='u')
		{
			(*vow)++;
		}
		else
		{
			if((*arr)[i]==' ')
			continue;
		(*cons)++;
		}
	}
}

int main()
{
//	Count Vowels and Consonants in String
//Dynamically allocate a string. Write a function that counts the vowels and consonants using pointers.
	
	int size=20;
	string *arr= new string [size];
	cout<<"enter a string to count vowel and consonant: ";
	getline(cin,*arr);	
	int v=0,c=0;
	cons_vow(arr, &v,&c);

	cout<<"vowels are: "<<v<<"consonants are: "<<c;
	
	return 0;
}
