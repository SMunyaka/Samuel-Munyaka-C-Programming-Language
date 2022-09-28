//Program to determine voter elligibility
#include<iostream>include 
using namespace std;
int main()
{
	int age;
    cout <<"Enter your age"<<endl;
	cin>>age;
    if(age>=18){
		cout<<"You are leggible to vote"<<endl;
	}
	else{
		cout<<"ILLIGIBLE"<<endl;
	}
	return 0;
}