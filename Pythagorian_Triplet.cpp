#include<iostream>

using namespace std;

bool check(int a,int b, int c){
	if(a*a==b*b + c*c || a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	int x,y,z;
	
	cout<<"ENTER THE 3 NUMBERS TO CHECK FOR PYTHAGOREAN TRIPLET:";
	cin>>x>>y>>z;
	
	if(check(x,y,z)){
		cout<<"IT IS A PYTHAGOREAN TRIPLET!!";
	}
	else{
		cout<<"IT IS NOT A PYTHAGOREAN TRIPLET!!";
	}
	
	return 0;
	
} 
