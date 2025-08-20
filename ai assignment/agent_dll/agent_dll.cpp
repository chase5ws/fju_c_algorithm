#include "agent_dll.h"

const size_t NUM_ACTIONS = 9;
enum actions { NOOP = 0, UP, DOWN, LEFT, RIGHT, UP_LEFT, UP_RIGHT, DOWN_LEFT, DOWN_RIGHT };

#ifdef __cplusplus
extern "C"
{
#endif
int acter(int x,int y)//funtion 量子糾纏
{
    //用座標去判斷
    int action;
    if(x==0&&y==0){
        action=UP_RIGHT;//原點右上
    }
    else if(x>0&&y>0){
        action=DOWN_LEFT;//第1象限往左下
    }
    else if(x>0&&y<0){
        action=UP_RIGHT;//第4象限往左上
    }
    else if(x<0&&y<0){//第3象限往右上
        action=UP_LEFT;
    }
    else if(x<0&&y>0){//第2象限往右下
        action=DOWN_RIGHT;
    }
    return action;

}


__declspec(dllexport) void controller(int &action, const size_t agent, const size_t num_agents, const size_t num_resources, const int* circleRadius,
                                      const int* xCoordinate, const int* yCoordinate, const int* xVelocity, const int* yVelocity) // the coordinates of  balls and resource centers are in turn placed in the array xCoordinate, and yCoordinate
{

    int maxcir=50;//最大半徑
    int act1=20;//座標起始
    int f=0;
    for(size_t i=10;i<15;i++){//使用迴圈去找各點大小
        if(circleRadius[i]>=maxcir && circleRadius[i]>0){//大於0也大於最大半徑
            maxcir=circleRadius[i];
            act1=i;
            f=1;//flage==ture
        }
    }
    if(!f){
        for(size_t i=15;i<20;i++){
            for(size_t k=10;k<20;k++){
                if(circleRadius[k]<circleRadius[0]&&circleRadius[k]>circleRadius[k-1]){//如果資源小於10~20 紀錄座標
                    act1=k;
                    break;
                }
            }
        }
    }

    int bx = xCoordinate[act1]-xCoordinate[0];
    int by = yCoordinate[act1]-yCoordinate[0];
    action = acter(bx,by); // random agent
    return;
}

#ifdef __cplusplus
}
#endif

extern "C" DLL_EXPORT BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason)
    {
        case DLL_PROCESS_ATTACH:
            // attach to process
            // return FALSE to fail DLL load
            break;

        case DLL_PROCESS_DETACH:
            // detach from process
            break;

        case DLL_THREAD_ATTACH:
            // attach to thread
            break;

        case DLL_THREAD_DETACH:
            // detach from thread
            break;
    }
    return TRUE; // succesful
}

