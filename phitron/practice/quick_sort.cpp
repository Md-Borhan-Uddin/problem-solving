#include<bits/stdc++.h>

using namespace std;

vector<int> sort(vector<int> m){

    if(m.size()<=1)
        return m;
    int pivot = rand()%m.size();
    vector<int>a;
    vector<int>b;
    for(int i=0;i<m.size();i++){
        if(i==pivot)
            continue;
        else if(m[i]<=m[pivot])
            a.push_back(m[i]);
        else{
            b.push_back(m[i]);
        }
    }

    vector<int>sorted_b = sort(a);
    vector<int>sorted_c = sort(b);
    vector<int>sorted_a;

    

    for(int i=0;i<sorted_c.size();i++){
        sorted_a.push_back(sorted_c[i]);
    }
    sorted_a.push_back(m[pivot]);

    for(int i=0;i<sorted_b.size();i++){
        sorted_a.push_back(sorted_b[i]);
    }

    return sorted_a;
}

int main(){

    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int> ar = sort(a);

    for(int i=0;i<ar.size();i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\n";

    return 0;
}