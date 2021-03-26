
#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"ENTER THE NUMBER TO CHECK FOR ARMSTRONG NUMBER:\n";
	cin>>n;
	int t=n;
	int num=0;
	
	while(t!=0){
		int k=t%10;
		num+=pow(k,3);
		t=t/10;
	}
	if(num==n){
		cout<<"ARMSTRONG NUMBER";
	}
	else{
		cout<<"NOT AN ARMSTRONG NUMBER";
	}
	return 0;
}

