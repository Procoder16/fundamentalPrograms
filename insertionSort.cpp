#include<iostream>
using namespace std;

void insertionSort(int a[], int n){

	
	for(int i=1;i<n;i++){
		int temp = a[i];
		int j = i-1;
		while(temp<a[j]){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
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
	
	cout<<"ENTER THE ELEMENTS:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	insertionSort(arr,n);
	return 0;
}
// #include<iostream>
// using namespace std;

// void insertionSort(int a[], int n){

// 	int i=0;
// 	while(++i<n)
// 	{	if(a[i]<a[i-1])
// 		{
// 			int temp=a[i];
// 			a[i]=a[i-1];
// 			a[i-1]=temp;
// 			i=0;
// 		}

// 	}
// 	cout<<"\nSORTED ARRAY:";
// 	for(int i=0;i<n;i++){
// 		cout<<a[i]<<" ";
// 	}
// }

// int main(){
// 	int n;
// 	cout<<"ENTER THE LENGTH OF THE ARRAY:";
// 	cin>>n;
	
// 	int arr[n];
	
// 	cout<<"ENTER THE ELEMENTS:";
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
	
// 	insertionSort(arr,n);
// 	return 0;
// }