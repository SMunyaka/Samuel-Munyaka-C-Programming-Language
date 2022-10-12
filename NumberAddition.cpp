//For example statement For Addition of all numbers
#include<iostream> 
using namespace std;
int main(){
	int i,sum=0;
	for(i=10;i>=1;i--){
		cout<<i<<" "<<endl;
		sum=sum+i;
	}
	cout<<"Total summation"<<endl<<sum;
	return 0;
			
}