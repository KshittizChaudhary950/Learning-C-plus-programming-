#include<iostream>
#include <numeric>
using namespace std;
int main()
{
	int n=5;
	int a[n],sum=0;
	cout<<"Enter any number to store into array??\n";
	for(int i=0; i<5;i++)
	{
		cin>>a[i];// taking in put from user
	
		//sum=sum+a[i];// this is classic method 
	}
		// from accumulate method which is in numeric library in C++
		// syntax is: accumulate(array_name , array_name+array_length , sum);
	sum=accumulate(a, a+n, sum);
	
     cout<<"The sum is:"<<sum;
     

	return 0;
}
