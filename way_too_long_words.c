#include<stdio.h>
#include<string.h>
 
int main(){
int a,i,j;
char sen[102];
scanf("%d\n", &a);
for(i=0;i<a;i++){
    fgets(sen,sizeof(sen),stdin);
    int l = strlen(sen)-1;
    if(l>10)
        printf("%c%d%c\n",sen[0],l-2,sen[l-1]);
    else
        printf("%s\n",sen);
 
}
 
 
 
return 0;
 
}