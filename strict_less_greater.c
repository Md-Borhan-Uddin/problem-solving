#include <stdio.h>

int number_count(int a[], int n,int k){
    int i,count=0;
    for(i=0;i<n;i++){
        if(a[i]!=k)
            count +=1;
    }
    return count;
}

int main() {
    // Write C code here
    int n,k,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    
    int count = number_count(arr,n,k);
    
    printf("%d\n",count);

    return 0;
}