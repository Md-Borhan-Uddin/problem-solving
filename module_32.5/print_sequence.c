#include <stdio.h>

void print_sequence(int n,int i)
{
    
    if(n<i)return;
    printf("%d ",i);
    print_sequence(n,i+1);
}

int main() {
    // Write C code here
    int n,i;
    scanf("%d",&n);
    print_sequence(n,1);

    return 0;
}