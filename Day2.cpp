#include<iostream>// cout,cin, puts and null
#include<stdlib.h> //(srand, rand)
#include <time.h>
using namespace std;
int main()
{
	// program to find size of different datatypes 
  	//----------------------------------------------------------//
  	/*
  	cout<<"The size of int is:"<<sizeof(int)<<"bytes"<<endl;
  	cout<<"The size of char is:"<<sizeof(char)<<"bytes"<<endl;
  	cout<<"The size of float is:"<<sizeof(float)<<"bytes"<<endl;
  	cout<<"The size of double is:"<<sizeof(double)<<"bytes"<<endl;
  	*/
  	
  	//C++ Program to Find ASCII Value of a Character
  	/*
  	--------------------------------------------------------------
  	algorithms 
  	1. Start 
  	2. declare variable of char data type
  	3. take input from user 
  	4. assign value to variable
  	5. print ASCII value of that char
  	6. End
  	Note: Upercase and lowercase letter have different value
  	------------------------------------------------------------------
  	*/
  	/*
  	char C;
  	cout<<"Enter any character type ??\n";
  	cin>>C;
  	cout<<"The ASCII value of ["<<C<<"] is:"<<int(C)<<endl; 
  	*/
  	
  	//--------------------------------------------------------------------------------//
  	/*  C++ Program to Generate Random Numbers between 0 and 100  
	  to generate random number you should add #include<stdlib.h> in the heading 
	  */
  	
	/*

    int i;          //loop counter
    int num;        //declaring the varibles that store random number

    cout<<"Generating Random Numbers between 0 to 100:: \n";
    for(i=1;i<=10;i++)
    {
        num=rand()%100; //get random number
        cout<<" "<<num<<" ";
    }

    cout<<"\n";
    */
    
    //-------------------------------------------------------------------//
    // Simple progarm to guess the number
    // srand is use to create every time different sequence of number in the 
    // runtime 
    // rand create same sequence of number every time
    
    //---------------------------------------------------------------------//
    /*
    int Guess, HiddenNumber;
    //initialize random seed: 
  srand (time(NULL));

  //generate secret number between 1 and 10: 
  HiddenNumber = rand() % 10 + 1;

  do {
    cout<<"Guess the number (1 to 10): \n";
    cin>>Guess;
    if (HiddenNumber<Guess)
	{
		cout<<"\nThe Hidden number is lower \n";
	 } 
 
    else if (HiddenNumber>Guess) 
    {
    cout<<"\nThe Hidden number is higher \n";
	}
	else if(HiddenNumber==Guess)
	{
		 cout<<"\nCongratulations!";
	}
	
  }
   while (HiddenNumber!=Guess);
   */

 

	return 0;
}
