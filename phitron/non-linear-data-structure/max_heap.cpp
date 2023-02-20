#include<bits/stdc++.h>

using namespace std;

class MaxHeap{
    vector<int> a;

    void up_hipyfy(int idx){
        while (idx>0&&a[idx]>a[(idx- 1)/2])
        {
            
            swap(a[idx],a[(idx- 1)/2]);
            idx = (idx- 1)/2;
        }
        
    }
    void down_heapify(int idx){
        while (1)
        {
           int largest = idx;
           int l = 2*idx+1;
           int r = 2*idx+2;
           if(l<a.size()&&a[largest]<a[l]){
            largest = l;
           }
           if(r<a.size()&&a[largest]<a[r]){
            largest = r;
           }
           if(largest==idx){
            break;
           }
           swap(a[idx],a[largest]);
           idx=largest;

        }
        
    }
public:
    void Insert(int val){
        a.push_back(val);
        up_hipyfy(a.size()-1);
    }

    void Delete(int idx){
        swap(a[idx],a[a.size()-1]);
        a.pop_back();
        down_heapify(idx);
    }
    void print(){
        for (int i = 0; i < a.size(); i++)
        {
            cout<<a[i]<<" ";
        }
        
    }

    //build heap from array O(n)
    void build_form_array(vector<int> &ar){
        a = ar;
        int lastleaf = (a.size()-1)/2;
        for(int i=lastleaf;i>=0;i--){
            down_heapify(i);
        }
    }

    int TopDelete(){
        int top = a[0];
        Delete(0);
        return top;
    }



    int getmax(){
        return a[0];
    }
};


//sort array using heap sort O(nlogn)
vector<int> heapSort(vector<int> &a){
    MaxHeap mh;
    //O(n)
    mh.build_form_array(a);
    vector<int> ans;
    //O(nlogn)
    for(int i=0;i<a.size();i++){
        ans.push_back(mh.TopDelete());
    }
    reverse(ans.begin(),ans.end());

    return ans;
}





int main(){
    MaxHeap h;
    vector<int> a = {1,2,3,10,7,5,4};
    h.build_form_array(a);
    // h.Delete(1);

    // h.print();

    vector<int> sorted = heapSort(a);
    for(int i=0;i<sorted.size();i++){
        cout<<sorted[i]<<" ";
    }

    return 0;
}