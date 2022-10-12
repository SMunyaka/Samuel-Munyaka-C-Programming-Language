 //Area of a circle using a function
#include<iostream>
using namespace std;
float circle(int r);
	//Function prototype

int main(){
	int  radius;
	float Area;
	cout<<"Enter radius"<<endl;
	cin>>radius;
	Area=circle(radius);
	//Function calling
	cout<<"The Area is"<<Area<<endl;
	return 0;
	}
	
	float circle(int r)
	{
		//function defination
		float Area;
		Area=3.142*r*r;
		return Area;
	}
