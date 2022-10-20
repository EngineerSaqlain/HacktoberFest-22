#include<iostream>
using namespace std;
int osum(int);
main()
{
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	cout<<"\nIts Sqaure is : "<<osum(num);
}
int osum(int num)
{
	if(num>1){
		return(2*num-1 + osum(num-1));
	}
	else{
		return 1;
	}
}
