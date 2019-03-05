# -MyCodeC-

/* rand example: guess the number */
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iostream>
using namespace std;
int main ()
{
	int temp,num[100],count=0,number=1;
	srand (time(NULL));
	int row=0;
	while(count!=60 )
		{
//			system("PAUSE");
			 temp= rand() % 60;
			 if(temp>0 && temp<=60)
			 	{
				 
			 
	 		
			 int match=0;
			 for(int i=0;i<60;i++)
			 	{
			 		if(temp==num[i])
			 				{match=0;break;}
					else
							{match=1;}
			 				
				 }
				if(match==1)
					{
						
						cout<<number<<" - "<<num[count];
						count++;
						number++;
						row++;
						num[count]=temp;
						if(row==5)
							{
							cout<<"    ";	
							}
						if(row==7)
							{
								cout<<endl;
								row=0;
						
							}
			}
					}
			
			
		}
	return 0;

}
