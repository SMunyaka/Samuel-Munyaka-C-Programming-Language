//For example statement For Addition of all numbers with input option
#include<iostream> 
using namespace std;
int main(){
	int i,x,y,sum=0;
	
	//prompting the user to input
		cout<<"Enter the starting point"<<endl;
		cin>>x,
		cout<<"Enter ending point"<<endl;
		cin>>y;
		for(i=x;i<=y;i++){
			cout<<i<<endl;
			sum=sum+i;
	}
	cout<<"Total summation"<<x<<"and"<<y<<"is"<<sum;
	return 0;
			
}