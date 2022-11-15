#include <stdio.h>
 
int main() {
 
int n, h, a, v=0;
scanf("%d %d", &n,&h);
for(int i=0;i<n;i++){
    scanf("%d", &a);
    v += a/h;
    if(a%h !=0)
        v +=1;
}
 
 
printf("%d",v);
 
    return 0;
}