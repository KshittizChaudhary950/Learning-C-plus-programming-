/*
#include<iostream>
using namespace std;
// declaration of fuction

void myFunction()
{
	cout<<"Hi";
}

int main()
{
	myFunction();
	return 0;
};
*/
//----------------------------------------------------------------------------------------//
// Above is the normal declaration of function 
/* 
fuction is most declare before main() function if you declare after main() function 
it throw an error but if u want to u can seperate declaration and defination part
*/
//--------------------------------------------------------------------------------------//
/*
#include<iostream>
using namespace std;
//Decloaration of myfuntion

void myfunction();
int main()
{
	myfunction();
	return 0;
}

//Defination part of myfuntion
void myfunction()
{
	cout<<"Wake up";
};
*/

//program to add to number taking input from user.
#include <iostream>
using namespace std;
int Add(int a,int b)
{ 

	int sum=a+b;
	return sum;
}
int main()
{	int num1,num2;
	cout<<"Enter first number:\n";
	cin>>num1;
	cout<<"Enter second number:\n";
	cin>>num2;
	//int result=Add(num1,num2);
	//here function is call and store value in the result variable
	int result=Add(num1,num2);
	cout<<"The addition of two number is:"<<result;
	
	return 0;
}

