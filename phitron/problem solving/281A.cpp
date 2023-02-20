#include<bits/stdc++.h>

using namespace std;


int main(){
    string s;
    cin>>s;
    vector<char> st;
    for(int i=0;i<s.size();i++)
        st.push_back(s[i]);
    
    if(st[0]>='a'&&st[0]<='z'){
        st[0]=st[0]-32;
    }
    for(int i=0;i<s.size();i++)
        cout<<st[i];

    return 0;
}