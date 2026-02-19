
#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	char c1='1', c2='2', c3='3', c4='4', c5='5', c6='6', c7='7', c8='8', c9='9';
	int turn_count, coloumn;
	
	cout<<"Initial Board"<<endl
	<<endl<<"C1 | C2 | C3 "
	<<endl<<c1<<"  | "<<c2<<"  | "<<c3
	<<endl<<c4<<"  | "<<c5<<"  | "<<c6
	<<endl<<c7<<"  | "<<c8<<"  | "<<c9
	<<endl ;
	
	for(turn_count=1; turn_count<=9; turn_count++)
	{
		cout <<"Turn: "<<turn_count<<endl;
		if(turn_count%2!=0) //player A
		{
			cout <<"Player A Turn "<<endl;
		    cout <<"choose coloumn (1, 2 OR 3): ";
		    cin>>coloumn;
		    switch(coloumn)
		    {
		    	default:
			        cout<<"invalid input";
			        break;
			
			case 1: //coloumn 1
			{
				if(c7=='7')
				{
					c7='A';
				}
				else if(c4=='4')
				{
					c4='A';
				}
				else if(c1=='1')
				{
					c1='A';
				}
				cout<<endl<<"C1 | C2 | C3 "
	            <<endl<<c1<<"  | "<<c2<<"  | "<<c3
	            <<endl<<c4<<"  | "<<c5<<"  | "<<c6
	            <<endl<<c7<<"  | "<<c8<<"  | "<<c9
	            <<endl<<endl ;
	            
	             if((c1=='A' && c4=='A' && c7=='A') || (c2=='A' && c5=='A' && c8=='A') || (c3=='A' && c6=='A' && c9=='A') 
	            || (c1=='A' && c2=='A' && c3=='A') || (c4=='A' && c5=='A' && c6=='A') || (c7=='A' && c8=='A' && c9=='A')
	            || (c1=='A' && c5=='A' && c9=='A') || (c3=='A' && c5=='A' && c7=='A'))
				{
					cout<<"PLAYER 'A' WON!!!";
					turn_count=10;
				}
				else if((c1=='B' && c4=='B' && c7=='B') || (c2=='B' && c5=='B' && c8=='B') || (c3=='B' && c6=='B' && c9=='B') 
	                ||  (c1=='B' && c2=='B' && c3=='B') || (c4=='B' && c5=='B' && c6=='B') || (c7=='B' && c8=='B' && c9=='B')
	                ||  (c1=='B' && c5=='B' && c9=='B') || (c3=='B' && c5=='B' && c7=='B'))
				{
					cout<<"PLAYER 'B' WON!!!";
					turn_count=10;
				}
				else if(turn_count==9)
				{
					cout << "DRAW";
				}
	            break;
	        }
	            
	            
	            case 2: //coloumn 2
	        {   
				if(c8=='8')
				{
					c8='A';
				}
				else if(c5=='5')
				{
					c5='A';
				}
				else if(c2=='2')
				{
					c2='A';
				}
				cout<<endl<<"C1 | C2 | C3 "
	            <<endl<<c1<<"  | "<<c2<<"  | "<<c3
	            <<endl<<c4<<"  | "<<c5<<"  | "<<c6
	            <<endl<<c7<<"  | "<<c8<<"  | "<<c9
	            <<endl<<endl ;
	            
	            if((c1=='A' && c4=='A' && c7=='A') || (c2=='A' && c5=='A' && c8=='A') || (c3=='A' && c6=='A' && c9=='A') 
	            || (c1=='A' && c2=='A' && c3=='A') || (c4=='A' && c5=='A' && c6=='A') || (c7=='A' && c8=='A' && c9=='A')
	            || (c1=='A' && c5=='A' && c9=='A') || (c3=='A' && c5=='A' && c7=='A'))
				{
					cout<<"PLAYER 'A' WON!!!";
					turn_count=10;
				}
				else if((c1=='B' && c4=='B' && c7=='B') || (c2=='B' && c5=='B' && c8=='B') || (c3=='B' && c6=='B' && c9=='B') 
	                ||  (c1=='B' && c2=='B' && c3=='B') || (c4=='B' && c5=='B' && c6=='B') || (c7=='B' && c8=='B' && c9=='B')
	                ||  (c1=='B' && c5=='B' && c9=='B') || (c3=='B' && c5=='B' && c7=='B'))
				{
					cout<<"PLAYER 'B' WON!!!";
					turn_count=10;
				}
				else if(turn_count==9)
				{
					cout << "DRAW";
				}
			}
	            break;
	            
	            case 3: //coloumn 3
			{	  
				if(c9=='9')
				{
					c9='A';
				}
				else if(c6=='6')
				{
					c6='A';
				}
				else if(c3=='3')
				{
					c3='A';
				}
				cout<<endl<<"C1 | C2 | C3 "
	            <<endl<<c1<<"  | "<<c2<<"  | "<<c3
	            <<endl<<c4<<"  | "<<c5<<"  | "<<c6
	            <<endl<<c7<<"  | "<<c8<<"  | "<<c9
	            <<endl<<endl ;
	            
	            if((c1=='A' && c4=='A' && c7=='A') || (c2=='A' && c5=='A' && c8=='A') || (c3=='A' && c6=='A' && c9=='A') 
	            || (c1=='A' && c2=='A' && c3=='A') || (c4=='A' && c5=='A' && c6=='A') || (c7=='A' && c8=='A' && c9=='A')
	            || (c1=='A' && c5=='A' && c9=='A') || (c3=='A' && c5=='A' && c7=='A'))
				{
					cout<<"PLAYER 'A' WON!!!";
					turn_count=10;
				}
				else if((c1=='B' && c4=='B' && c7=='B') || (c2=='B' && c5=='B' && c8=='B') || (c3=='B' && c6=='B' && c9=='B') 
	                ||  (c1=='B' && c2=='B' && c3=='B') || (c4=='B' && c5=='B' && c6=='B') || (c7=='B' && c8=='B' && c9=='B')
	                ||  (c1=='B' && c5=='B' && c9=='B') || (c3=='B' && c5=='B' && c7=='B'))
				{
					cout<<"PLAYER 'B' WON!!!";
					turn_count=10;
				}
				else if(turn_count==9)
				{
					cout << "DRAW";
				}
			}
	            break;
		    }
	    }
	    if(turn_count%2==0 && turn_count<9) //Player B
	    {
	    	cout <<"Player B Turn "<<endl;
	        cout <<"choose coloumn (1, 2 OR 3): ";
		    cin>>coloumn;
		    switch(coloumn)
		    {
		    default:
			cout<<"invalid input";
			break;
				
			case 1: //coloumn 1
			    {
				if(c7=='7')
				{
					c7='B';
				}
				else if(c4=='4')
				{
					c4='B';
				}
				else if(c1=='1')
				{
					c1='B';
				}
				cout<<endl<<"C1 | C2 | C3 "
	            <<endl<<c1<<"  | "<<c2<<"  | "<<c3
	            <<endl<<c4<<"  | "<<c5<<"  | "<<c6
	            <<endl<<c7<<"  | "<<c8<<"  | "<<c9
	            <<endl<<endl ;
	            
	            if((c1=='A' && c4=='A' && c7=='A') || (c2=='A' && c5=='A' && c8=='A') || (c3=='A' && c6=='A' && c9=='A') 
	            || (c1=='A' && c2=='A' && c3=='A') || (c4=='A' && c5=='A' && c6=='A') || (c7=='A' && c8=='A' && c9=='A')
	            || (c1=='A' && c5=='A' && c9=='A') || (c3=='A' && c5=='A' && c7=='A'))
				{
					cout<<"PLAYER 'A' WON!!!";
					turn_count=10;
				}
				else if((c1=='B' && c4=='B' && c7=='B') || (c2=='B' && c5=='B' && c8=='B') || (c3=='B' && c6=='B' && c9=='B') 
	                ||  (c1=='B' && c2=='B' && c3=='B') || (c4=='B' && c5=='B' && c6=='B') || (c7=='B' && c8=='B' && c9=='B')
	                ||  (c1=='B' && c5=='B' && c9=='B') || (c3=='B' && c5=='B' && c7=='B'))
				{
					cout<<"PLAYER 'B' WON!!!";
					turn_count=10;
				}
				else if(turn_count==9)
				{
					cout << "DRAW";
				}
			    }
	            break;
	            
	            case 2: //coloumn 2
				{
				if(c8=='8')
				{
					c8='B';
				}
				else if(c5=='5')
				{
					c5='B';
				}
				else if(c2=='2')
				{
					c2='B';
				}
				cout<<endl<<"C1 | C2 | C3 "
	            <<endl<<c1<<"  | "<<c2<<"  | "<<c3
	            <<endl<<c4<<"  | "<<c5<<"  | "<<c6
	            <<endl<<c7<<"  | "<<c8<<"  | "<<c9
	            <<endl<<endl ;
	            
	            if((c1=='A' && c4=='A' && c7=='A') || (c2=='A' && c5=='A' && c8=='A') || (c3=='A' && c6=='A' && c9=='A') 
	            || (c1=='A' && c2=='A' && c3=='A') || (c4=='A' && c5=='A' && c6=='A') || (c7=='A' && c8=='A' && c9=='A')
	            || (c1=='A' && c5=='A' && c9=='A') || (c3=='A' && c5=='A' && c7=='A'))
				{
					cout<<"PLAYER 'A' WON!!!";
					turn_count=10;
				}
				else if((c1=='B' && c4=='B' && c7=='B') || (c2=='B' && c5=='B' && c8=='B') || (c3=='B' && c6=='B' && c9=='B') 
	                ||  (c1=='B' && c2=='B' && c3=='B') || (c4=='B' && c5=='B' && c6=='B') || (c7=='B' && c8=='B' && c9=='B')
	                ||  (c1=='B' && c5=='B' && c9=='B') || (c3=='B' && c5=='B' && c7=='B'))
				{
					cout<<"PLAYER 'B' WON!!!";
					turn_count=10;
				}
				else if(turn_count==9)
				{
					cout << "DRAW";
				}
			    }
	            break;
	            
	            case 3: //coloumn 3
	            {
				if(c9=='9')
				{
					c9='B';
				}
				else if(c6=='6')
				{
					c6='B';
				}
				else if(c3=='3')
				{
					c3='B';
				}
				cout<<endl<<"C1 | C2 | C3 "
	            <<endl<<c1<<"  | "<<c2<<"  | "<<c3
	            <<endl<<c4<<"  | "<<c5<<"  | "<<c6
	            <<endl<<c7<<"  | "<<c8<<"  | "<<c9
	            <<endl<<endl ;
	            
	            if((c1=='A' && c4=='A' && c7=='A') || (c2=='A' && c5=='A' && c8=='A') || (c3=='A' && c6=='A' && c9=='A') 
	            || (c1=='A' && c2=='A' && c3=='A') || (c4=='A' && c5=='A' && c6=='A') || (c7=='A' && c8=='A' && c9=='A')
	            || (c1=='A' && c5=='A' && c9=='A') || (c3=='A' && c5=='A' && c7=='A'))
				{
					cout<<"PLAYER 'A' WON!!!";
					turn_count=10;
				}
				else if((c1=='B' && c4=='B' && c7=='B') || (c2=='B' && c5=='B' && c8=='B') || (c3=='B' && c6=='B' && c9=='B') 
	                ||  (c1=='B' && c2=='B' && c3=='B') || (c4=='B' && c5=='B' && c6=='B') || (c7=='B' && c8=='B' && c9=='B')
	                ||  (c1=='B' && c5=='B' && c9=='B') || (c3=='B' && c5=='B' && c7=='B'))
				{
					cout<<"PLAYER 'B' WON!!!";
					turn_count=10;
				}
				else if(turn_count==9)
				{
					cout << "DRAW";
				}
		    	}
	            break;
		    }
				
		}
		
	}
	return 0;
}
