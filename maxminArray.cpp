#include<iostream>

using namespace std;

int main(){
	
	int n;
	cout<<"ENTER THE SIZE OF THE ARRAY:";
	cin>>n;
	
	int arr[n];
	
	cout<<"ENTER THE ELEMENTS IN THE ARRAY:";
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int maxN=arr[0];
	int minN=arr[0];
	
	for(int i=0;i<n;i++){
		if(arr[i]>maxN){
			maxN=arr[i];
		}
		
		if(arr[i]<minN){
			minN=arr[i];
		}
	}
	cout<<"MAXIMUM NUMBER:"<<maxN<<endl;
	cout<<"MINIMUM NUMBER:"<<minN;
	return 0;
} 
