//
//  054_Spiral_Matrix.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/4/7.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "054_Spiral_Matrix.h"

int* spiralOrder(int** matrix, int matrixRowSize, int matrixColSize) {
    //（CSmall，RSmall）向右走，走到（CMax，RSmall）,Cidx++
    //（CMax，RSmall）向下走，走到（CMax，RMax）,CMax--
    //（CMax，RMax）向左走，走到（CSmall，RMax）,RMax--
    //（CSmall，RMax）向上走，走到（CSmall，RSmall）,CSmall++
    int direct=0; //0:right,1:down,2:left,3:up
    int CSmall=0;
    int RSmall=0;
    int CMax=matrixColSize-1;
    int RMax=matrixRowSize-1;
    int ridx=0;
    int cidx=0;
    int i=0;
 
    int *pt;
    int totalLength=matrixColSize*matrixRowSize;
    pt = malloc(totalLength*sizeof(int));

    
    while(i<totalLength){
        switch (direct) {
            case 0: //right
                *(pt+i)=(*(*(matrix+ridx)+cidx));
                printf("direct:%d,ridx:%d,cidx:%d,value:%d\n",direct,ridx,cidx,*(pt+i));
                cidx++;
                if(cidx>CMax){
                    direct=1;
                    cidx=CMax;
                    RSmall++;
                    ridx++;
                    printf("Rmax:%d,RSmal:%d,CMax:%d,CSmal:%d\n",RMax,RSmall,CMax,CSmall);
                }

                break;
            case 1: //down
                *(pt+i)=*(*(matrix+ridx)+cidx);
                printf("direct:%d,ridx:%d,cidx:%d,value:%d\n",direct,ridx,cidx,*(pt+i));
                ridx++;
                if(ridx>RMax){
                    direct=2;
                    ridx=RMax;
                    CMax--;
                    cidx--;
                    printf("Rmax:%d,RSmal:%d,CMax:%d,CSmal:%d\n",RMax,RSmall,CMax,CSmall);
                }
                break;
            case 2: //left
                *(pt+i)=*(*(matrix+ridx)+cidx);
                printf("direct:%d,ridx:%d,cidx:%d,value:%d\n",direct,ridx,cidx,*(pt+i));
                cidx--;
                if(cidx<CSmall){
                    direct=3;
                    cidx=CSmall;
                    RMax--;
                    ridx--;
                    
                    printf("Rmax:%d,RSmal:%d,CMax:%d,CSmal:%d\n",RMax,RSmall,CMax,CSmall);
                }
                break;
            case 3: //up
                *(pt+i)=*(*(matrix+ridx)+cidx);
                printf("direct:%d,ridx:%d,cidx:%d,value:%d\n",direct,ridx,cidx,*(pt+i));
                ridx--;
                if(ridx<RSmall){
                    direct=0;
                    ridx=RSmall;
                    CSmall++;
                    cidx++;
                    printf("Rmax:%d,RSmal:%d,CMax:%d,CSmal:%d\n",RMax,RSmall,CMax,CSmall);
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
    int i,j;
    int array[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *ptr[3] = {array[0], array[1], array[2]};

    ans=spiralOrder(ptr,3,4);

}
