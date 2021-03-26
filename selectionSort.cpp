#include<iostream>
using namespace std;

void selectionSort(int a[], int n){
	
	for(int i=0;i<n;i++){
		int s=a[i];
		int pos=i;
		for(int j=i+1;j<n;j++){
			if(a[j]<s){
				s=a[j];
				pos=j;
			}
		}
		int temp=a[i];
		a[i]=a[pos];
		a[pos]=temp;
	}
	cout<<"\nSORTED ARRAY:";
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
}

int main(){
	int n;
	cout<<"ENTER THE LENGTH OF THE ARRAY:";
	cin>>n;
	
	int arr[n];
	
	cout<<"\nENTER THE ELEMENTS OF THE ARRAY:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	selectionSort(arr, n);
	return 0;
}
