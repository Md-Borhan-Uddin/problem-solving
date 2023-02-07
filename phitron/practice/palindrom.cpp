#include<bits/stdc++.h>

using namespace std;

bool isPalindrom(string s){
    int i,j;
    for(i=0,j=s.size()-1;j>=0;i++,j--)
    {
        if(s[i]!=s[j])
            return false;
    }
    return true;

}

int main(){
    string st;
    cin>>st;
    if(isPalindrom(st))
    cout<<"Yes"<<"\n";
    else
    cout<<"No"<<"\n";

    return 0;
}