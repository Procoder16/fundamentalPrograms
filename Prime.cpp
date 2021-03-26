#include<iostream>
using namespace std;

int main(){
	int a,b;
	cout<<"ENTER THE UPPER AND THE LOWER LIMIT:\n";
	cin>>a>>b;
	
	for(int i=a;i<=b;i++){
		int count = 0;
		
		for(int j=2;j<i;j++){
			if(i%j==0)
			count++;
		}
		if(count>0)
			continue;
		else
		{
			cout<<i<<" ";
		}
		
	}
	return 0;
}

