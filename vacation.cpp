#include<iostream>
using namespace std;

int main(){
	int pocketMoney; 
	cout<<"ENTER THE POCKETMONEY FOR 1 MONTH:";
	cin>>pocketMoney;
	
	int date;
	
	cout<<"ENTER THE DATE TO CHECK:";
	cin>>date;
	
	if(date%2==0){
		cout<<"YOU CANNOT GO OUT TODAY!!";
	}
	else{
		for(int i=1; i<date; i++){
			if(i%2==0){
				continue;
			}
			pocketMoney-=300;
		}
		if(pocketMoney>=300){
			cout<<"YOU CAN OUT TODAY!!";
		}
		else{
			cout<<"YOU HAVE EXHAUSTED YOUR POCKETMONEY.... WAIT FOR THE NEXT MONTH";
		}
	}
	return 0;
} 

