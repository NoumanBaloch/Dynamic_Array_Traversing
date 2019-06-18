//Array Sequential Search in C++
//Nouman Baloch Find on Github https://www.github.com/noumanbaloch
//Find Repository on Github 
#include <iostream>
using namespace std;
int main()
{
	
	int arrayLength, i, j, valueToFind;

	cout<<"Enter the length of array = ";

	cin>>arrayLength;

	int array[arrayLength];
	
	for(i = 0; i < arrayLength; i++){

		cout<<"Enter an element = ";

		cin>>array[i];

	}
	
	again:

	cout<<"Enter the value to find = ";

	cin>>valueToFind;

	int loc = -1;

	for(j = 0; j < arrayLength; j++ ){

		if(array[j] == valueToFind){

			loc = j;

			break;

		}
	
	}
	if(loc == -1){
		
		cout<<"Value not found";
	
	}
	
	if(loc == j){
	
		cout<<"Value found at index. "<<loc;
	
	}
	
	int con;
	
	cout<<"\n\n------------------------------\n\n";
	
	cout<<"\nDo you want to Continue.\n";
	
	tryAgain:
		
	cout<<"Press 1 for Continue!\n";
	
	cout<<"Press 0 for End the program!";
	
	cin>>con;
	
	if(con == 0){
	
		cout<<"\n\n------------------------------\n\n";
	
		cout<<"Thanks for using the system.\n";
	
	}
	
	else if(con == 1){
		
		goto again;
	
	}
	
	else{
	
		cout<<"\n\n------------------------------\n\n";
	
		cout<<"Please make the correct selection.\n";
	
		goto tryAgain;
	
	}
	
}
