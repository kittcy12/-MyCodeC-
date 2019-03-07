	
#include <cstring>
using namespace std;

class prime{
	public:

		
		int PrimeCheck(int num){
			for(int i=2;i<num;i++)
				{
				if(num%i==0)
				{
				return 0;
				}
				}
		}

		
		
		
		
	protected:
		
		char inp[100],*token,*number[100];
		int size;
};
