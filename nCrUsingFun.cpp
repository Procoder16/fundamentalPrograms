#include<iostream>
using namespace std;

float fact(int num){
	float product=1;
	for(int i=1;i<=num;i++){
		product*=i;
	}
	return product;
}

int main(){
	int n,r;
	cout<<"ENTER THE VALUE OF n AND r:";
	cin>>n>>r;
	
	float binary = fact(n)/(fact(r)*fact(n-r));
	
	cout<<"BINARY COEFFICIENT:"<<binary;
	
	return 0;
}
