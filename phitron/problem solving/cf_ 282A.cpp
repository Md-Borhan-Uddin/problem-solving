#include<iostream>

using namespace std;

int main(){
    int n,ans=0;
    string s;
    cin>>n;
    while (n--)
    {
        cin>>s;
        if(s=="++X" || s=="X++")
        ans++;
        else if(s=="--X" || s=="X--")
        ans--;
    }
    cout<<ans<<"\n";
    

    return 0;
}