#include<iostream>
using namespace std;

void bubbleSort(int a[], int n){
	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]<a[i]){
				int temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
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
	
	int a[n];
	
	cout<<"\nENTER THE ELEMENTS OF THE ARRAY:";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	bubbleSort(a, n);
	
	return 0;
}
