#include<iostream>
using namespace std;

void fib(int n){
	int a=0,b=1;
	cout<<a<<" "<<b<<" ";
	for(int i=3;i<=n;i++){
		int nextterm=a+b;
		cout<<nextterm<<" ";
		a=b;
		b=nextterm;
	}
}

int main(){
	int n;
	cout<<"ENTER THE NUMBER OF ELEMENTS IN THE FIBONACCI SERIES:";
	cin>>n;
	fib(n);
	
	return 0;
} 
