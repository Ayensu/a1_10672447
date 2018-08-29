#include <iostream>
using namespace std;
/* A C++ PROGRAM TO DETERMINE WHDETHER A NUMBER IS PRIME OR NOT */

int main() {
	//DECLARING VARIABLES
	int num,a;
	cout<<"enter any positive integer "<<endl;
	cin>>num;
	
	//USING THE FOR LOOP(NESTED)
	
	for(a=2; a<num; a++){
		
		if (num % a == 0)
		{
		cout<<num<< " is not a prime number"<<endl;
		}else{
		cout<<num<< " is  a prime number"<<endl;
		}
		
	}
	return 0;
}