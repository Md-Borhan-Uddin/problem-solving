#include<bits/stdc++.h>

using namespace std;

vector<int> quick_sort(vector<int> a){

    if(a.size()<=1){
        return a;
    }
    int pivot=a.size()/2;
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<a.size();i++){
        if(i==pivot)
            continue;
        if(a[i]>a[pivot])
            arr1.push_back(a[i]);
        else{
            arr2.push_back(a[i]);
        }
    }
    
    
    
    vector<int> sorted_a = quick_sort(arr1);
    vector<int> sorted_b = quick_sort(arr2);
    vector<int> sorted_c;
    
    for(int i=0;i<sorted_a.size();i++){
       sorted_c.push_back(sorted_a[i]);
    }
    sorted_c.push_back(a[pivot]);
    for(int i=0;i<sorted_b.size();i++){
       sorted_c.push_back(sorted_b[i]);
    }

    return sorted_c;




}


int main(){
    int n,x;
    vector<int> s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        s.push_back(x);
    }
    vector<int> a = quick_sort(s);
    for(int i=0;i<a.size();i++){
       cout<<a[i]<<" ";
    }
    return 0;
}