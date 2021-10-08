#include<iostream>
using namespace std;
int main()
{
	int num,i,result;
	cout<<"Enter number ??"<<endl;
	cin>>num;
	for( i=1;i<=10;i++)
	{
		result=num*i;
	}
	cout<<num<<"x"<<i<<"="<<result<<endl;
	return 0;
}
