#include<iostream>

using namespace std;

int main(){
	
	int a,b,c;
	cout<<"Enter the three numbers:";
	cin>>a>>b>>c;
	int max;
	max=(a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
	cout<<max;
	return 0;
}

