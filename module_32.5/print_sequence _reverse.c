#include <stdio.h>

void print_sequence(int n,int i)
{
    
    if(n<i)return;
    print_sequence(n,i+1);
    printf("%d ",i);
    
}

int main() {
    // Write C code here
    int n,i;
    scanf("%d",&n);
    print_sequence(n,1);

    return 0;
}