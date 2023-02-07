#include<bits/stdc++.h>
using namespace std;

void remove( int a[], int p, int n){
    for(int i=p;i<n;i++){
        a[i-1]=a[i];
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x,y;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        
        remove(a,x,n);
        n--;
    }
    
    for(int i=0;i<n;i++){
        cout<< a[i]<<" ";
    }

    return 0;
}