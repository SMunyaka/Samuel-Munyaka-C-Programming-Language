//Program to determine bonus aworded to employees
#include<iostream>include 
using namespace std;

int main()
{
	int time;
	float salary, bonus;
	cout<<"input your salary"<<endl;
	cin>>salary;
	
	cout<<"Emter time of service"<<endl;
	cin>>time;
	if(time>10){
		bonus=salary*10/100;
	}
	else if((time>=6)&(time<=10)){
		bonus=salary*8/100;
	}
	else if((time<6)&(time>=0)){
		bonus=salary*5/100;
	}
	salary=salary+bonus;
	cout<<"Your total salary is:"<<salary;
	return 0;
}