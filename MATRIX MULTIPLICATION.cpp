#include<iostream>
#include<iomanip>

#define MAX 10
using namespace std;
int main()
{
	
	int i, j, k;
	int rowA, rowB, colA, colB;
	
	//MATRIX A 
	cout<<"--MATRIX A--"<<endl; 
	cout<<"enter number rows for matrix A:";
	cin>>rowA;
	cout<<"enter number coloumn for matrix A:";
	cin>>colA;

	if(rowA > MAX || colA > MAX) //validation
	{
        cout << "Rows and columns must not exceed " << MAX << endl;
        return 0;
    }
	
	int matrixA[MAX][MAX];
	cout<<"enter elements of matrix A:"<<endl;
	for(i=0; i<rowA; i++)
	{
		for(j=0; j<colA; j++)	
		{
			cin>>matrixA[i][j];
		}
	}
	   
	  
	for(i=0; i<rowA; i++)
	{
		for(j=0; j<colA; j++)	
		{
			cout<<matrixA[i][j]<<" ";
		}
		cout <<endl;
	}
	
	//MATRIX B
	cout<<"--MATRIX B--"<<endl;
	cout<<"enter number rows for matrix B:";
	cin>>rowB;
	cout<<"enter number coloumn for matrix B:";
	cin>>colB;
	
	if(rowB > MAX || colB > MAX) //Validation
	{
        cout << "Rows and columns must not exceed " << MAX << endl;
        return 0;
    }
	
	int matrixB[MAX][MAX];
	
	cout<<"enter elements of matrix B:"<<endl;
	for(i=0; i<rowB; i++)
	{
		for(j=0; j<colB; j++)	
		{
			cin>>matrixB[i][j];
		}
	}
	
	
	for(i=0; i<rowB; i++)
	{
		for(j=0; j<colB; j++)	
		{
			cout<<matrixB[i][j]<<" ";
		}
		cout <<endl;
	}
	
	//MATRIX MULTIPLICATION
	cout<<"--ANS MATRIX--"<<endl;
	int matrixC[rowA][colB]={0};
	
	if(colA==rowB)
	{
		for(i=0; i<rowA; i++)
		{
			for(j=0; j<colB; j++)
			{
				for(k=0; k<colA; k++)
				{
					matrixC[i][j]+=(matrixA[i][k])*(matrixB[k][j]);
				}
			}
		}
	
	
	for(i=0; i<rowA; i++)
		{
			for(j=0; j<colB; j++)
			{
				cout<<matrixC[i][j]<<"    ";
			}
			cout<<endl;
		}
		
	}
	else
	{
		cout<<"coloumn of second matrix is not equal to the row of first matrix so it is not possible";
	}
	return 0;
}

