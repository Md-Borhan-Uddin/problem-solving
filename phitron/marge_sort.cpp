#include<bits/stdc++.h>

using namespace std;

int marge_sort(vector<int> a, int k){

    if(a.size()<=1){
        return 0;
    }
    int mid=a.size()/2;
    vector<int> arr1;
    for(int i=0;i<mid;i++){
        arr1.push_back(a[i]);
    }
    vector<int> arr2;
    for(int i=mid;i<a.size();i++){
        arr2.push_back(a[i]);
    }
    

    vector<int> sorted_a = marge_sort(arr1,k);
    vector<int> sorted_b = marge_sort(arr2,k);
    vector<int> sorted_c;
    // cout<<"size= "<<sorted_a.size()<<" ";
    // cout<<"size= "<<sorted_b.size()<<" ";
    int i = 0, j = 0, c = 0;
    while (i < sorted_a.size() && j < sorted_b.size()) {
        if (sorted_a[i] + sorted_b[j] == k) {
            c++;
            i++;
            j++;
        }
        else if (sorted_a[i] + sorted_b[j] < k)
            i++;
        else
            j++;
    }
    int id1=0,id2=0;
    for(int i=0;i<a.size();i++){
        if(id1==sorted_a.size()){
            sorted_c.push_back(sorted_b[id2]);
            id2++;
        }
        else if(id2==sorted_b.size()){
            sorted_c.push_back(sorted_a[id1]);
            id1++;
        }
        else if(sorted_a[id1]<sorted_b[id2]){
            sorted_c.push_back(sorted_b[id2]);
            id2++;

        }
        else{
            sorted_c.push_back(sorted_a[id1]);
            id1++;
            
        }

        cout<<sorted_c[i]<<" ";
    }
    cout<<endl;
    return c;




}

int main(){

    vector<int> s = {6,1,3,2,4};
    marge_sort(s,5);

    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }


    return 0;
}