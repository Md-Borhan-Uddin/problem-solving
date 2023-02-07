#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x,count=0;
    cin>>x;
    
    
    for(int i=0;i<n-1;i++){
       if(a[i]==a[i+1])
        count++;
    }
    if(count>1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}