
#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	int n;
	cout<<"ENTER A NUMBER TO CHECK FOR PRIME NUMBER:\n";
	cin>>n;
	bool flag=1;
	
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag=0;
			break;
		}
	}
	if(flag==1){
		cout<<"PRIME NUMBER";
	}
	else{
	cout<<"NON-PRIME NUMBER";
	}
	return 0;
}

