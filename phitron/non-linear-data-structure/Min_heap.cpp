#include<bits/stdc++.h>

using namespace std;

class MinHeap{
    vector<int> a;

    //O(logn)
    void up_hipyfy(int idx){
        while (idx>0&&a[idx]<a[(idx- 1)/2])
        {
            
            swap(a[idx],a[(idx- 1)/2]);
            idx = (idx- 1)/2;
        }
        
    }
    //O(logn)
    void down_heapify(int idx){
        while (1)
        {
           int largest = idx;
           int l = 2*idx+1;
           int r = 2*idx+2;
           if(l<a.size()&&a[largest]>a[l]){
            largest = l;
           }
           if(r<a.size()&&a[largest]>a[r]){
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
    //O(logn)
    void Insert(int val){
        a.push_back(val);
        up_hipyfy(a.size()-1);
    }

    //O(logn)
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

    //Build heap from array O(n)
    void build_from_array(vector<int> &ar){
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

    int getmin(){
        return a[0];
    }
};


//sort array using heap short algorithon O(nlogn)
vector<int> sort_heap(vector<int> &a){
    MinHeap mh;
    mh.build_from_array(a);
    vector<int> ans;
    for(int i=0;i<a.size();i++){
        ans.push_back(mh.TopDelete());
    }

    return ans;
}



int main(){
    vector<int> a = {4,7,8,2,1,4,6};
    MinHeap h;
    h.build_from_array(a);

    vector<int> sorted  = sort_heap(a);
    for(int i=0;i<sorted.size();i++){
        cout<<sorted[i]<<" ";
    }

    return 0;
}