#include <stdio.h>

int sum_of_last_digit(int arr[],int i, int n)
{
    
    if(n==i)return 0;
    int s = sum_of_last_digit(arr,i+1,n);
    return s+(arr[i]%10);
}

int main() {
    // Write C code here
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int ans = sum_of_last_digit(arr,0,n);
    printf("%d\n",ans);

    return 0;
}