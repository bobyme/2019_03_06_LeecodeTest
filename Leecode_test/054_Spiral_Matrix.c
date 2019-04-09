//
//  054_Spiral_Matrix.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/4/7.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "054_Spiral_Matrix.h"
int* spiralOrder(int** matrix, int matrixRowSize, int matrixColSize) {
    //（CS，RS）向右走，走到（CL，RS）,Cidx++
    //（CL，RS）向下走，走到（CL，RL）,CL--
    //（CL，RL）向左走，走到（CS，RL）,RL--
    //（CS，RL）向上走，走到（CS，RS）,CS++
    int direct=0; //0:right,1:down,2:left,3:up
    int cs=0;
    int rs=0;
    int cl=matrixColSize;
    int rl=matrixRowSize;
    int ridx=0;
    int cidx=0;
    int i=0;
    int *pt;
    int totalLength=matrixColSize*matrixRowSize;
    pt = malloc(totalLength * sizeof(int));
    while(i<totalLength){
        switch (direct) {
            case 0: //right
                *(pt+i)=*(*(matrix+ridx)+cidx);
                cidx++;
                printf("direct:%d,value:%d",direct,*(pt+i));
                if(cidx==cl){
                    direct=1;
                    rs++;
                }

                break;
            case 1: //down
                *(pt+i)=*(*(matrix+ridx)+cidx);
                ridx++;
                printf("direct:%d,value:%d",direct,*(pt+i));
                if(ridx==rl){
                    direct=2;
                    cl--;
                }
                break;
            case 2: //left
                *(pt+i)=*(*(matrix+ridx)+cidx);
                cidx--;
                printf("direct:%d,value:%d",direct,*(pt+i));
                if(cidx==cs){
                    direct=3;
                    rs++;
                }
                break;
            case 3: //up
                *(pt+i)=*(*(matrix+ridx)+cidx);
                ridx--;
                printf("direct:%d,value:%d",direct,*(pt+i));
                if(ridx==rs){
                    direct=0;
                    cs++;
                }
                break;
            default:
                break;
        }
        i++;
    }
    return pt;
}
void test054(void){
    int *ans;
    int input={{ 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 }};
    ans=spiralOrder(input,3,3);

}
