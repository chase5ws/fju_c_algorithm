#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c,str[20];
    int a=0;

    while(a==0){

        scanf("%c %s\n",&c,str);
        //printf("%c %s",c,str);

        switch(c){ //無法判斷第二次迴圈數值(失敗)
            case 'E':
                printf("%s\n",str);
                break;
            case 'R':
                strrev(str);
                printf("%s\n",str);
                break;
            case 'O': //要跳出while迴圈(失敗)
                a=1;
                break;
        }
        if(a==1)break;

    }


    return 0;
}
