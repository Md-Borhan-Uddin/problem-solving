#include<bits/stdc++.h>

using namespace std;

bool isSubset(int arr1[], int arr2[],int a,int b) {
    
    int i = 0, j = 0;
    while (i < a && j < b) {
        cout<<arr1[i]<<"->"<<arr2[j]<<"\n";
        if (arr1[i] == arr2[j]) {
            i++;
            j=0;
            cout<<i<<"->"<<j<<"\n";
        } 
        else {
            j++;
        }
    }
    cout<<"i->"<<i;
    return i == a;
}


int main(){
    int a,b;
    cin>>a;

    int v1[a];
    for(int i=0;i<a;i++){
        cin>>v1[i];
    }
    cin>>b;
    int v2[b];
    for(int i=0;i<b;i++){
        cin>>v2[i];
    }
    if(isSubset(v1,v2,a,b)){

    cout<<"YES";
    }
    else
        cout<<"NO";



    return 0;
}
