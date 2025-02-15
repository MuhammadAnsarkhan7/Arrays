#include <iostream>
using namespace std;

int main(){
	//1st way to display arrays
	int num[4]={2,3,4,5};
	
	cout<< "Here is arrays"<< endl;
	cout<<num[0]<< endl;
	cout<< num[1]<< endl;
	num[2]=55;  // Changing values of array
	cout<<num[2]<< endl;
	cout<< num[3]<< endl;\
	//1st way to display arrays
	
	int num2[4];
	cout<< "Here is another way" << endl;
	 num2[0]=11;
	 num2[1]=22;
	 num2[2]=33;
	 num2[3]=44;
	 cout<<num2[0]<< endl;
	cout<< num2[1]<< endl;
	cout<<num2[2]<< endl;
	cout<< num2[3]<< endl;


return 0;
}
