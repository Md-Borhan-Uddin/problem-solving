#include <stdio.h>
 
int main() {
 
int m, v;
scanf("%d", &m);
 
v = (m/5);
if(m%5 != 0){
    v +=1;
}
 
printf("%d",v);
 
    return 0;
}