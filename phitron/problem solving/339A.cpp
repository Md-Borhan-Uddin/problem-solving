#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin>>s;
    vector<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+')
            st.push_back(s[i]);
    }
    sort(st.begin(),st.end());
    int sz = st.size()-1;
    for(int i=0;i<st.size();i++){
        cout<<st[i];
        
        if(sz!=0)
            cout<<'+';
            sz--;
    }
    

    return 0;
}