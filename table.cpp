
#include<iostream>
using namespace std;
//printing table of any integer 
// Declarig function and its defination

int PrintingTable()
{
	int num,i,result;
	cout<<"Enter number ??"<<endl;
	cin>>num;
	for( i=1;i<=10;i++)
	{
		result=num*i;
		cout<<num<<"x"<<i<<"="<<result<<endl;
	}
	return 0;
}

int main()
{
	//Calling PrintingTable function 
	PrintingTable();
	return 0;
}
