
#include<iostream>
using namespace std;

void binarySearch(int n, int a[], int key){
	int s=0;
	int e=n;
	bool flag=0;
	
	while(s<=e){
		int mid=(s+e)/2;
		if(a[mid]==key){
			cout<<"THE ELEMENT IS FOUND AT "<<mid+1;
			flag=1;
//			return mid;
			break;
		}
		else if(a[mid]>key){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	if(flag==0){
		cout<<"ELEMENT NOT FOUND";
	}
//	return -1;
}

int main(){
	int n;
	cout<<"ENTER THE SIZE OF THE ARRAY:";
	cin>>n;
	
	int a[n];
	cout<<"ENTER THE ELEMENTS OF THE ARRAY:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int key;
	cout<<"ENTER THE ELEMENT TO SEARCH:";
	cin>>key;
	
	binarySearch( n,  a,  key);
	
	return 0;
}
