#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"ENTER THE NUMBER TO PRINT THE REVERSE:\n";
	cin>>n;
	int remainder;
	int reverse=0;
	while(n!=0){
		remainder=n%10;
		reverse=reverse*10 + remainder;
		n=n/10;
	}
	cout<<reverse;
	return 0;
}
