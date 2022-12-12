#include <stdio.h>

int sum_N_number(int n,int i)
{
    
    if(n<i)return 0;
    int s = sum_N_number(n,i+1);
    return s+i;
}

int main() {
    // Write C code here
    int n,i;
    scanf("%d",&n);
    int ans = sum_N_number(n,1);
    printf("%d",ans);

    return 0;
}