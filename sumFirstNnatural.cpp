
#include<iostream>

using namespace std;

int sumOf(int n){
	int sum=0;
	for(int i=0;i<=n;i++){
	     sum+=i;
	}
	return sum;
}

int main(){
	
	int n;
	cout<<"ENTER THE LAST NUMBER:";
	cin>>n;
	
	int sum=sumOf(n);
	
	
//	OR
//	sum=n*(n+1)/2;
	
	cout<<"Sum of first "<<n<<" natural numbers is "<<sum;
	
	return 0;
}
