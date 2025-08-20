#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float v,t;
    while(scanf("%f%f",&v,&t)!=EOF){
        float x,a;
        a=v/t;
        t*=4;
        x=(a/2.0)*t*t;
        printf("%.f\n",x);
    }

}
