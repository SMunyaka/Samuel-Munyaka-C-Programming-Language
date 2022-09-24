//program to grade results
 #include <iostream>
using namespace std;
int main()
{
	//declare variable
	int maths,english,science,kiswahili,CRE,avg;
	cout<<"enter marks for 5 subjects\n";
	cin>>maths>>english>>science>>kiswahili>>CRE;
	avg =(maths+english+science+kiswahili+CRE)/5;
	if(avg>=70&avg<=100)
	{
		cout<<"grade A";
	}
	else if(avg>=60 & avg<=69){
		cout<<"grade B";
	}
	else if(avg>=50 & avg<=59){
		cout<<"grade C";
	}
	else if(avg>=40 & avg<=49){
		cout<<"grade D";
	}
	else if(avg<40){
		cout<<"grade E";
	}
	else{
		cout<<"Enter Valid Marks";
	}
}