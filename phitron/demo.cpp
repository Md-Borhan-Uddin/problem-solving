#include<bits/stdc++.h>

using namespace std;

int findMissingNumber(vector<int> a) {
    int sum = a.size() * (a.size() + 1) / 2;
    for (int i = 0; i < a.size(); i++)
        sum -= a[i];
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);

    for(int i=0;i<a.size()-1;i++){
        cin>>a[i];
    }

    cout<<findMissingNumber(a);

    return 0;
}
