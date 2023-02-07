#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int n[6][6],ans=0;
    string s;
    pair<int,int> a;
    
    
    for(int i=1;i<6;i++){
        for(int j=1;j<6;j++){
            cin>>n[i][j];
            if(n[i][j]==1){
                a.first=i;
                a.second=j;
            }
        }
    }
    

    cout<<abs(a.first-3)+abs(a.second-3)<<"\n";
    

    return 0;
}