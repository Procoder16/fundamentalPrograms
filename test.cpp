#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    
    int count;
    
    int t = n;
    while(t>0){
        
        t/=10;
        count++;
    }
    
    int arr[count];
    
    for(int i = count-1; i>=0; i--){
        int k = n%10;
        n/=10;
        arr[i++] = k;
    }
    
    int ans;
    
    for(int i = 0; i<count ; i++){
        ans*=10;
        ans+=i;
        
        
    }
    
    cout<<ans;

    return 0;
}