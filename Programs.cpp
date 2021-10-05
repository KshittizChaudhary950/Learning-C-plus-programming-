// program to convert days into year week and days 
/*
------------------------------------------------------------------------------
1.start 
2. daclare vaiables
3. take input from user 
4. store input in days variable
5. divide days variable by year and store value in year variable
6. store remaining value in days variable
7. divide days by 7 to get week 
8. store remaining value to days variable 
9. print the out put 
10. stop
---------------------------------------------------------------------------------0.
*/
/*
#include <iostream>
using namespace std;
int main()
{
	int year, week, days;
	cout<<"Enter days: \n";
	cin>>days;
	year=days/365;
	days=days%365;
	week=days/7;
	days=days%7;
	cout<<year<<" years "<<week<<" week "<<days<<" days"<<endl;
	return 0;
}
*/
//--------------------------------------------------------------//
/*
	program to print square root of any number using sqrt() function
	
*/
/*
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float num,sqt;
	cout<<"Enter the number to square root \n";
	cin>>num;
	sqt=sqrt(num);//using sqrt function which is define in math.h header file
	cout<<"The square root of "<<num<<" is "<<sqt<<endl;
	return 0;
}
*/
//program to print cube of a number using macros
// macro is define in the header file #define 
//------------------------------------------------------------------------------//
#include <iostream>
#include <math.h>
#define cube(base) pow(base,3)
using namespace std;
int main()
{
	float num=2,cube;
	cube=cube(num);
	cout<<"The cube of: ["<<num<<"] is "<<cube<<endl;
	
	return 0;
}

//----------------------------------------------------------------------------------//
