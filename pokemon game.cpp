
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	
	srand(time(0));
	
	int i, j;//loop
	int player_A, player_B, pokemon, opponent,damage, recharge ; //initializing players
	int a=1,b=1; //used for name count
	int turn=1; //turn count
	char action;
	int HP[2][3]  = {{100,100,100} , {100,100,100}}; //health of each pokemon
	string name[2][3]; //stores name of pokemon
	bool defend[2][3] = {{true,true,true} , {true,true,true}};
	
	// ~>entering pokemon names
	for(i=0; i<2; i++)
	{
		for(j=0; j<3; j++)
		{
			
			if(i==0)
			{
				cout<<"player A, enter pokemon names: "<<a<<": ";
				cin>>name[i][j];
				a++;
			}
			else
			{
				cout<<"player B, enter pokemon names: "<<b<<": ";
				cin>>name[i][j];
				b++;
			}
		}
	}
	
	cout<<endl;
	// ~>output of pokemon names
	for(i=0; i<2; i++)
	{
		a=1, b=1;
		for(j=0; j<3; j++)
		{
			if(i==0)
			{
			cout<<"player A pokemon name "<<a<< " is: " << name[i][j]<<", HP:"<<HP[i][j]<<endl;
			a++;
			}
			else
			{
			cout<<"player B pokemon name "<<b<< " is: " << name[i][j]<<", HP:"<<HP[i][j]<<endl;
			b++;
			}
		}
		
	}
	

	
	// ~>turn system:
	for(i=0; i<2; i++)
	{
		a=1, b=2;
		for(j=0; j<3; j++)
		{
		 while((HP[0][1] > 0 || HP[0][0] > 0|| HP[0][2] > 0) && (HP[1][0] > 0 || HP[1][1] > 0|| HP[1][2] > 0))//make changes
		 {
			if(turn%2==1)
			{
				cout<<"---Player A turn---"<<endl;
				
				if(HP[i][j]<=0)
				{
					cout << "Fainted pokemon"<<endl;
				}
				
				else
				{//else start
				
				cout<<"Choose your active pokemon (1-3)";
				cin>>pokemon;
				switch(pokemon)
				{
					case 1://player 1; pokemon 1
						{
							cout<<"chose :"<<name[0][0]<<endl; // NOT printing
							cout<<"choose your action (a=Attack, d=Defend, r=recharge)";
							cin>>action;
							switch(action)
							{
							case 'a'://attack
								{
									cout<<"Choose opponent’s Pokémon (1–3).";
									cin>>opponent;
									switch(opponent)
									{
										case 1://opponent pokemon 1
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[1][0]==false)
											{
												HP[1][0]-=(damage*0.5);
												defend[1][0]= true;
												cout<<"attack applied"<<endl;
												
											}
											else
											{
											HP[1][0]-=damage;
											cout<<"attack applied"<<endl;
										
											}
											if(HP[1][0] <= 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}
										case 2://opponent pokemon 2
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[1][1]==false)
											{
												HP[1][1]-=(damage*0.5);
												defend[1][1]=true;
											}
											else
											{
											HP[1][1]-=damage;
											}
											if(HP[1][1] < 0)
											{
												cout<<"fainted!!!";
											}
											
											break;
										}
										case 3: //opponent pokemon 3
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[1][1]==false)
											{
												HP[1][2]-=(damage*0.5);
												defend[1][1]=true;
											}
											else
											{
											HP[1][2]-=damage;
											}
											if(HP[1][2] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}	
											
									}
									break;
								}
							case 'd': //defend
								{
									defend[0][0] = false;
									cout<<"defend action applied!!"<<endl; 
									break;
								}
							
							case 'r': //recharge
								{
									recharge = (rand()%(20-10+1))+10;
									if(HP[0][0]>0)
									{
										HP[0][0] += recharge;
										if(HP[0][0]>0)
										cout<<"recharged HP is : 100"<<endl;
										else
										cout<<"recharged HP is : "<<HP[0][0]<<endl;
									}
									else
									{
										cout<<"pokemon is already fainted!!!"<<endl;
									}
									break;
								}
							default:
							{
								cout<<"invalid"<<endl;
								break;
				 			}
							}
							break;
						}
					case 2://player 1; pokemon 2
					{
						cout<<"chose :"<<name[0][1]<<endl;
						cout<<"choose your action (a=Attack, d=Defend, r=recharge)";
						cin>>action;
						switch(action)
						{
							case 'a': //attack
								{
									
									cout<<"Choose opponent’s Pokémon (1–3).";
									cin>>opponent;
									switch(opponent)
									{
										case 1://opponent pokemon 1
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[1][0]==false)
											{
												HP[1][0]-=(damage*0.5);
												defend[1][0]=true;
											}
											else
											{
											HP[1][0]-=damage;
											}
											if(HP[1][0] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}
										case 2://opponent pokemon 2
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[1][1]==false)
											{
												HP[1][1]-=(damage*0.5);
												defend[1][1]=true;
											}
											else
											{
											HP[1][1]-=damage;
											}
											if(HP[1][1] < 0)
											{
												cout<<"fainted!!!";
											}
											
											break;
										}
										case 3: //opponent pokemon 3
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[1][1]==false)
											{
												HP[1][2]-=(damage*0.5);
												defend[1][1]=true;
											}
											else
											{
											HP[1][2]-=damage;
											}
											if(HP[1][2] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}	
											
									}	
									break;
								}
							case 'd': //defend
								{
							 		defend[0][1] = false;
									cout<<"defend action applied!!"<<endl; 
							
									break;
								}
							case 'r': //recharge
								{
									recharge = (rand()%(20-10+1))+10;
									if(HP[0][1]>0)
									{
										HP[0][1] += recharge;
										if(HP[0][1]>0)
										cout<<"recharged HP is : 100"<<endl;
										else
										cout<<"recharged HP is : "<<HP[0][1]<<endl;
									}
									else
									{
										cout<<"pokemon is already fainted!!!"<<endl;
									}
									
									break;
								}
								default:
								{
									cout<<"invalid"<<endl;
									break;
								}
									
						}	
						break;
					}	
					case 3://player 1; pokemon 3
					{
						cout<<"chose :"<<name[0][2]<<endl;
						cout<<"choose your action (a=Attack, d=Defend, r=recharge)";
						cin>>action;
						
						switch(action)
						{
							case 'a': //attack
								{
									
									cout<<"Choose opponent’s Pokémon (1–3).";
									cin>>opponent;
									switch(opponent)
									{
										case 1://opponent pokemon 1
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[1][0]==false)
											{
												HP[1][0]-=(damage*0.5);
												defend[1][0]= true;
											}
											else
											{
											HP[1][0]-=damage;
											}
											if(HP[1][0] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}
										case 2://opponent pokemon 2
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[1][1]==false)
											{
												HP[1][1]-=(damage*0.5);
												defend[1][1]=true;
											}
											else
											{
											HP[1][1]-=damage;
											}
											if(HP[1][1] < 0)
											{
												cout<<"fainted!!!";
											}
											
											break;
										}
										case 3: //opponent pokemon 3
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[1][1]==false)
											{
												HP[1][2]-=(damage*0.5);
												defend[1][1]= true;
											}
											else
											{
											HP[1][2]-=damage;
											}
											if(HP[1][2] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}	
											
									}	
									break;
								}
							case 'd': //defend
								{
							 		defend[0][2] = false;
									cout<<"defend action applied!!"<<endl; 
							
									break;
								}
							case 'r': //recharge
								{
									recharge = (rand()%(20-10+1))+10;
									if(HP[0][2]>0)
									{
										HP[0][2] += recharge;
										if(HP[0][2]>0)
										cout<<"recharged HP is : 100"<<endl;
										else
										cout<<"recharged HP is : "<<HP[0][2]<<endl;
									}
									else
									{
										cout<<"pokemon is already fainted!!!"<<endl;
									}
									
									break;
								}
						default:
		   				{
							cout<<"invalid"<<endl;
							break;
						}			
						}
						break;
					}
				default:
				{
					cout<<"invalid"<<endl;
					break;
				}	
				}//switch end
			}
			}
			
			
			
			else
			{
				cout<<"---Player B turn---"<<endl;
				if(HP[i][j]<=0)
				{
					cout << "Fainted pokemon"<<endl;
				}
				
				else
				{ //else start
					
				cout<<"Choose your active pokemon (1-3)";
				cin>>pokemon;
				switch(pokemon)
				{
					case 1://player 2; pokemon 1
						{
							cout<<"chose :"<<name[1][0]<<endl;
							cout<<"choose your action (a=Attack, d=Defend, r=recharge)";
							cin>>action;
							switch(action)
							{
							case 'a'://attack
								{
									cout<<"chose :"<<name[1][0]<<endl;
									cout<<"Choose opponent’s Pokémon (1–3).";
									cin>>opponent;
									switch(opponent)
									{
										case 1://opponent pokemon 1
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[0][0]==false)
											{
												HP[0][0]-=(damage*0.5);
											}
											else
											{
											HP[0][0]-=damage;
											}
											
											if(HP[0][0] <= 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}
										case 2://opponent pokemon 2
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[0][1]==false)
											{
												HP[0][1]-=(damage*0.5);
												defend[0][1]=true;
											}
											else
											{
											HP[0][1]-=damage;
											}
											if(HP[0][1] < 0)
											{
												cout<<"fainted!!!";
											}
											
											break;
										}
										case 3: //opponent pokemon 3
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[0][2]==false)
											{
												HP[0][2]-=(damage*0.5);
											}
											else
											{
											HP[0][2]-=damage;
											}
											if(HP[0][2] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}	
											
									}
									break;
								}
							case 'd': //defend
								{
									defend[1][0] = {false};
									cout<<"defend action applied!!"<<endl; 
									break;
								}
							
							case 'r': //recharge
								{
									recharge = (rand()%(20-10+1))+10;
									if(HP[1][0]>0)
									{
										HP[1][0] += recharge;
										if(HP[1][0]>0)
										cout<<"recharged HP is : 100"<<endl;
										else
										cout<<"recharged HP is : "<<HP[1][0]<<endl;
									}
									else
									{
										cout<<"pokemon is already fainted!!!"<<endl;
									}
									break;
								}
							}
							break;
						}
					case 2://player 2; pokemon 2
					{
						cout<<"chose :"<<name[1][0]<<endl;
						cout<<"choose your action (a=Attack, d=Defend, r=recharge)";
						cin>>action;
						cin>>action;
				
						switch(action)
						{
							case 'a': //attack
								{
									cout<<"Choose opponent’s Pokémon (1–3).";
									cin>>opponent;
									switch(opponent)
									{
										case 1://opponent pokemon 1
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[0][0]==false)
											{
												HP[0][0]-=(damage*0.5);
												defend[0][0]=true;
											}
											else
											{
											HP[0][0]-=damage;
											}
											if(HP[0][0] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}
										case 2://opponent pokemon 2
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[0][1]==false)
											{
												HP[0][1]-=(damage*0.5);
												defend[0][1]=true;
											}
											else
											{
											HP[0][1]-=damage;
											}
											if(HP[0][1] < 0)
											{
												cout<<"fainted!!!";
											}
											
											break;
										}
										case 3: //opponent pokemon 3
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[0][2]==false)
											{
												HP[0][2]-=(damage*0.5);
											}
											else
											{
											HP[0][2]-=damage;
											}
											if(HP[0][2] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}
										default:
										{
											cout<<"invalid"<<endl;
											break;
										}		
											
									}	
									break;
									
										default:
											{
												cout<<"invalid"<<endl;
												break;
											}	
								}
							case 'd': //defend
								{
							 		defend[1][1] = false;
									cout<<"defend action applied!!"<<endl; 
							
									break;
								}
							case 'r': //recharge
								{
									recharge = (rand()%(20-10+1))+10;
									if(HP[1][1]>0)
									{
										HP[1][1] += recharge;
										if(HP[1][1]>0)
										cout<<"recharged HP is : 100"<<endl;
										else
										cout<<"recharged HP is : "<<HP[1][1]<<endl;
									}
									else
									{
										cout<<"pokemon is already fainted!!!"<<endl;
									}
									
									break;
								}
						}	
						break;
					}	
					case 3://player 2; pokemon 3
					{
						cout<<"chose :"<<name[1][0]<<endl;
						cout<<"choose your action (a=Attack, d=Defend, r=recharge)";
						cin>>action;
						switch(action)
						{
							case 'a': //attack
								{
									cout<<"Choose opponent’s Pokémon (1–3).";
									cin>>opponent;
									switch(opponent)
									{
										case 1://opponent pokemon 1
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[0][0]==false)
											{
												HP[0][0]-=(damage*0.5);
											}
											else
											{
											HP[0][0]-=damage;
											}
											if(HP[0][0] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}
										case 2://opponent pokemon 2
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[0][1]==false)
											{
												HP[0][1]-=(damage*0.5);
												defend[0][1]=true;
											}
											else
											{
											HP[0][1]-=damage;
											}
											if(HP[0][1] < 0)
											{
												cout<<"fainted!!!";
											}
											
											break;
										}
										case 3: //opponent pokemon 3
										{
											damage = (rand()%(20-10+1))+10;
											if(defend[0][2]==false)
											{
												HP[0][2]-=(damage*0.5);
											}
											else
											{
											HP[0][2]-=damage;
											}
											if(HP[0][2] < 0)
											{
												cout<<"fainted!!!";
											}
											break;
										}
										default:
										{
											cout<<"invalid"<<endl;
											break;
										}
													
											
									}	
									break;
								}
							case 'd': //defend
								{
							 		defend[1][2] = false;
									cout<<"defend action applied!!"<<endl; 
							
									break;
								}
							case 'r': //recharge
								{
									recharge = (rand()%(20-10+1))+10;
									if(HP[1][2]>0)
									{
										HP[1][2] += recharge;
										if(HP[1][2]>0)
										cout<<"recharged HP is : 100"<<endl;
										else
										cout<<"recharged HP is : "<<HP[1][2]<<endl;
									}
									else
									{
										cout<<"pokemon is already fainted!!!"<<endl;
									}
									break;
								}
							}
							break;
						}
					default:
			 		{
					cout<<"invalid"<<endl;
					break;
					}	
					}//switch end
				}//else end
			}turn++;
		}//while ended
		}//for loop j ended
	}//for loop i ended
	
	
	if  (HP[0][0] == 0 && HP[0][1] == 0 && HP[0][2] == 0) 
	{
		cout<<"PLAYER B WON!!!";
	}
	else if (HP[1][0] == 0 && HP[1][1] == 0 && HP[1][2] == 0)
	{
		cout<<"PLAYER A WON!!!";
	}
	
	return 0;
}

