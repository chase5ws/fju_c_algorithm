#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a;
    while(scanf("%d\n",&a)!=EOF){
    while(a>=0){
        a--;
        
        int nm1,nm2;
        scanf("%d%d",&nm1,&nm2);

        if (nm1>nm2){
                printf(">\n");
        }

        if (nm1==nm2){
                printf("=\n");
        }

        else{
                printf("<\n");
        }
        
    }




    }
}
