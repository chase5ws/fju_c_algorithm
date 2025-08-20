#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    while(scanf("%d",&a)!=EOF){
    if(a<0){
        continue;
    }
    int count=0,b=1;
    while(b<a){
        b=b*2;
        count++;
    }
    printf("%d\n",count);


    }
}
