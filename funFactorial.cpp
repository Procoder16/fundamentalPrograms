#include<iostream>

using namespace std;

void fact(int num){
	int product=1;
	for(int i=1;i<=num;i++){
		product*=i;
		
	}
	cout<<"FACTORIAL:"<<product;
}

int main(){
	int n;
	cout<<"ENTER THE NUMBER TO FIND THE FACTORIAL:";
	cin>>n;
	fact(n);
	
	return 0;
}
