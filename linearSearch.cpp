#include<iostream>
using namespace std;

void linearSearch(int n, int arr[], int key){
	bool check=0;
	for(int i=0;i<=n;i++){
		if(arr[i]==key){
			cout<<"THE ELEMENT WAS FOUND AT POSITION "<<i+1;
			check=1;
			
		}
	}
	if(check==0){
		cout<<"ELEMENT NOT FOUND";
	}
}

int main(){
	int n;
	cout<<"ENTER THE SIZE OF THE ARRAY:";
	cin>>n;
	
	int arr[n];
	
	cout<<"ENTER THE ELEMENTS IN THE ARRAY:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int key;
	cout<<"ENTER THE ELEMENT TO SEARCH:";
	cin>>key;
	
	linearSearch(n,arr,key);
	
	return 0;
	
}
