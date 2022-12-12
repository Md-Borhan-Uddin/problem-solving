#include <stdio.h>

int paw(int n, int m)
{
    if(m<1)return 1;
    int s = 1;
    s = paw(n,m-1);
    return s*n;
}

int main() {
    // Write C code here
    int n,m;
    scanf("%d %d",&n,&m);
    int ans = paw(n,m);
    printf("%d\n",ans);

    return 0;
}