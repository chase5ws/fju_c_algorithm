#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,k;
    unsigned long long n[100];
    n[1]=1;
    n[2]=2;
    n[3]=2;
    for(i=4;i<=76;i++){
        n[i]=n[i-2]+n[i-3];
    }
    while(scanf("%d",&k)!=EOF){
        printf("%llu\n",n[k]);
    }
    return 0;
}
