#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int nm1,nm2,nm3;
    while(scanf("%d%d%d",&nm1,&nm2,&nm3)!=EOF){
        int a,b,c;
        if(nm1>nm2){ if(nm1>nm3){ a=nm1; b=nm2; c=nm3;  }   }
        if(nm2>nm3){ if(nm2>nm1){ a=nm2; b=nm1; c=nm3;  }   }
        if(nm3>nm2){ if(nm3>nm1){ a=nm3; b=nm1; c=nm2;  }   }
        //printf("%d %d %d \n",a,b,c);
        a*=a;b*=b;c*=c;
        //printf("%d %d %d \n",a,b,c);
        if(a==b+c){ printf("yes\n"); }
        else{       printf("no\n");  }
    }
}
