#include <iostream>
#include <cstring>
#include "prime.h"
#include <cstdlib>
#include <cmath>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
class base2:public prime{
	public:
			int GetInp(){
			gets(inp);
			size=0;
			token=strtok(inp," ");
			while(token)
				{
					number[size]=token;
//					cout<<number[size];
					size++;	
					token=strtok(NULL, " ");
				}
		}	
	void binary(){
		GetInp();
		for(int i=0;i<size;)
			{
				if(bincheck(number[i])==0)
					{
						cout<<number[i]<<" is not a binary "<<endl;
						cout<<"replace: ";
						gets(number[i]);
					}
				else
					{i++;}
			}
	}
	int bincheck(char *temp)
		{
			
		int l=strlen(temp)-1;
			for(int i=l;i>=0;i--)
				{
					int x=((int)temp[i])-48;
					if(x>1)
						{return 0;}
					
				}
		}
	int binconvert(char *num){
		int i=0,power,temp,dec=0;
		power=(strlen(num))-1;
		while(power>=0)
			{
				
				temp=((int)num[i])-48;
				dec+=(temp*(pow(2,power)));
				power--;
				i++;
			}
		return dec;
		
	}
	void GetPrime(){
		for(int i=0;i<size;i++)
			{

				int num=binconvert(number[i]);
				if(PrimeCheck(num)!=0)
					{
						cout<<number[i]<<" ";
					}
			}
	}
};
class base8:public prime{
	public:
				int GetInp(){
			gets(inp);
			size=0;
			token=strtok(inp," ");
			while(token)
				{
					number[size]=token;
//					cout<<number[size];
					size++;	
					token=strtok(NULL, " ");
				}
		}
	void octal(){
		GetInp();
		for(int i=0;i<size;)
			{
				if(Ocheck(number[i])==0)
					{
						cout<<number[i]<<"is not an octal"<<endl<<"replace:";
						gets(number[i]);
					}
				else
					{i++;
					}
				
			}
	}
	int Ocheck(char *num){
		
		for(int i=0;i<strlen(num);i++)
			{
					int x=((int)num[i])-48;
					if(x>7)
						{return 0;}
			}
			
	}
	int Oconvert(char *num){
		int i=0,power,temp,dec=0;
		power=(strlen(num))-1;
		while(power>=0)
			{
				
				temp=((int)num[i])-48;
				dec+=(temp*(pow(8,power)));
				power--;
				i++;
			}
		return dec;
	}
	void GetPrime(){
		for(int i=0;i<size;i++)
			{

				int num=Oconvert(number[i]);
				if(PrimeCheck(num)!=0)
					{
						cout<<number[i]<<" ";
					}
			}
	}
	
	
	
};
class base16:public prime{
	public:
				int GetInp(){
			gets(inp);
			size=0;
			token=strtok(inp," ");
			while(token)
				{
					number[size]=token;
//					cout<<number[size];
					size++;	
					token=strtok(NULL, " ");
				}
		}
		void hexa(){
			GetInp();
			for(int i=0;i<size;)
				{
					if(Hexcheck(number[i])==0)
						{
							cout<<number[i]<<"is not an hexadecimal"<<endl<<"replace:";
							gets(number[i]);
						}
					else
						{i++;}
				}
			
		}
	int Hexcheck(char *num){
		
		for(int i=0;i<strlen(num);i++)
			{
				
					 if (((int)num[i]<65 &&(int)num[i]>57 ) || (int)num[i]>70)
						{return 0;}
			
	}
	
}
int hexconvert(char *num){
		int i=0,power,temp,dec=0;
		power=(strlen(num))-1;
		while(power>=0)
			{
				
				if((int)num[i]>=65)
					{
						temp=((int)num[i])-55;
					}
				else
					{
						temp=((int)num[i])-48;
					}
				dec+=(temp*(pow(16,power)));
				power--;
				i++;
			}
		return dec;
	}
		void GetPrime(){
		for(int i=0;i<size;i++)
			{

				int num=hexconvert(number[i]);
				if(PrimeCheck(num)!=0)
					{
						cout<<number[i]<<" ";
					}
			}
	}
	
	
};

int main(int argc, char** argv) {
	
	base2 bin;
	base8 oct;
	base16 hex;
	
	//Checking process
	cout<<"Enter Binary:";
	bin.binary();
	cout<<"Enter Octal:";
	oct.octal();
	cout<<"Enter Hexadecimal:";
	hex.hexa();
	
	//display prime
	cout<<endl;
	bin.GetPrime();
	cout<<endl;
	oct.GetPrime();
		cout<<endl;
	hex.GetPrime();
	
	return 0;
}






