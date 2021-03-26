#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"ENTER A NUMBER TO FIND THE FACTORIAL:\n";
	cin>>n;
	
	int factorial=1;
	
	for(int i=1;i<=n;i++){
		factorial*=i;
	}
	cout<<"FACTORIAL:"<<factorial;
	return 0;
}
