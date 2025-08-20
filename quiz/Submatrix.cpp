#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[6];
    for(int i =0;i<6;i++){
        scanf("%d",&num[i]);
    }
    int n[100];
    int count=0;
    int j;
    for(int i =0;i<num[0];i++){
        for(j =count;j<num[1]+count;j++){
            scanf("%d",&n[j]);
        }count=j;//printf("%d ",count);
    }
    count =0;
    int length=num[3]+num[5];
    for(int i=num[2];i<num[4]+1;i++){
        for(int j=num[3]+(count*length);j<num[5]+1+(count*length);j++){
            printf("%d ",n[j]);
        }printf("\n");count+=num[3];
    }

}
