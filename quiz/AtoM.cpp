#include <stdio.h>
#include <stdlib.h>
int UR(int nu1,int nu2,int nu3){
    int n[nu3];
    for (int i =0;i<nu3;i++){
        scanf("%d",&n[i]);
    }
    int count=0;
    for (int i =0;i<nu3;i++){
        printf("%d ",n[i]);
        count ++;
        if(count%nu2==0){
            printf("\n");
        }
    }
}
int UC(int nu1,int nu2,int nu3){
    int n[nu3];
    for (int i =0;i<nu3;i++){
        scanf("%d",&n[i]);
    }
    int count = 0;
    for(int i=0;i<=nu1-1;i++){
        for(int j =0;j<=nu2-1;j++){
            printf("%d",n[i+(count*nu1)]);
            count++;
        }
        count=0;
        printf("\n");
    }
}
int DR(int nu1,int nu2,int nu3){
    int n[nu3];
    int count=0;
    int j;
    for(int i =0;i<nu1;i++){
        for (j =count;j<nu2+count;j++){
            scanf("%d",&n[j]);
        }count=j;//printf("%d\n",count);
    }
    for(int i =0;i<nu3;i++){
        printf("%d ",n[i]);
    }
}
int DC(int nu1,int nu2,int nu3){
    int n[nu3];
    int count=0;
    int j;
    for(int i =0;i<nu1;i++){
        for (j =count;j<nu2+count;j++){
            scanf("%d",&n[j]);
        }count=j;//printf("%d\n",count);
    }
    count =0;
    for(int i =0;i<nu2;i++){
        printf("%d %d ",n[i],n[i+nu2]);
    }

}
int main()
{
    int nu1,nu2,nu3;
    char ch1,ch2;
    while(scanf("%d%d%d %c %c",&nu1,&nu2,&nu3,&ch1,&ch2)!=EOF){
        if(ch1=='U'){
            if(ch2=='R'){
                UR(nu1,nu2,nu3);
                continue;
            }
            else{
                UC(nu1,nu2,nu3);
                continue;
            }
        }
        else if(ch1=='D'){
            if(ch2=='R'){
                DR(nu1,nu2,nu3);
                continue;
            }
            else{
                DC(nu1,nu2,nu3);
                continue;
            }
        }
        else{
            break;
        }
    }

}
