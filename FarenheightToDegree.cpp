 //Converting farenheit to degree centigrade
#include<iostream>
using namespace std;

float temparature(int fahrenheit);
float celsius;
int main()
{
	float celsius;
	float fahrenheit;
	cout<<"Enter temparature"<<endl;
	cin>>fahrenheit;
	
	celsius=temparature(fahrenheit);
	cout<<"Temparature in degree celsius="<<"celsius"<<endl;
	
	return 0;

}

float temparature(int fahrenheit)

{
	float celsius;
	
	celsius=(fahrenheit-33)*0.556;
	
	return celsius;
}