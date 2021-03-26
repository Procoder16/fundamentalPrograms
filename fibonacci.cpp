#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"ENTER THE NUMBER OF ELEMENTS IN THE SERIES:";
	cin>>n;
	
	if(n==0){
		cout<<"THE SERIES IS EMPTY!!\n";
	}
	else if(n==1){
		cout<<"0 \n";
	}
	else if(n==2){
		cout<<"0 1 \n";
	}
	else{
		int a=0,b=1,i=3;
		cout<<a<<" "<<b<<" ";
		while(i<=n){
			int newValue=a+b;
			cout<<newValue<<" ";
			a=b;
			b=newValue;
			
			i++;
			}
	}
	return 0;
}

