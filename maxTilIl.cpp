#include<iostream>
using namespace std;

void maxTillI(int a[], int n){
	for(int i=0;i<n;i++){
		int max=a[i];
		for(int j=0;j<=i;j++){
			if(a[j]>=max){
				max=a[j];
			}
		}
		cout<<max<<" ";
	}
}

int main(){
	int n;
	cout<<"ENTER THE LENGTH OF THE ARRAY:";
	cin>>n;
	
	int arr[n];
	
	cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	maxTillI(arr,n);
	return 0;
}
