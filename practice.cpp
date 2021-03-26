#include<iostream>

using namespace std;

void insertionSort(int a[], int n){
	int temp, i, j;
	for(i=1;i<n;i++){
		
		temp = a[i];
		j = i-1;
		
		while(temp<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1] = temp;
	}

		
	cout<<"OK"<<endl;
	// cout<<"SORTED ARRAY:";

	// for(int i=0;i<n;i++){
	// 	cout<<a[i]<<" ";
	// }
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
	
	insertionSort(arr, n);
	
	return 0;
}
