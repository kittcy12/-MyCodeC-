#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char input[100];
	
	int check=1,count=0;
	gets(input);
	int l=strlen(input);
	strlwr(input); //optional
	for(int i=0;i<l;i++)
		{
			if(isalpha(input[i]))
			
				{
					for(int j=i+1;j<l;j++)
						{
							if(input[i]==input[j])
								{
									check=0;
									break;
								}
							else
								{
									check=1;
								}
							}	
				if(check==1)
					{
						count++;
					}
				}
			
		}
	if(count==26)
		{
			cout<<"Pangram";
			
		}
	if(count==25)
		{
			cout<<"Lipogram";
		}
}
