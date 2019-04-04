//
//  011_Container_With_Most_Water.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/4/4.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "011_Container_With_Most_Water.h"
int maxArea(int* height, int heightSize) {
    int i,j=0;
    int maxarea=0;
    int temparea,temphigh,tempwidth=0;
    for(i=0;i<heightSize-1;i++)
    {
        for(j=i+1;j<heightSize;j++){
            tempwidth=j-i;
            if((*(height+i))>(*(height+j))){
                temphigh=*(height+j);
            }
            else{
                temphigh=*(height+i);
            }
            
            temparea=temphigh*tempwidth;
            if (temparea>maxarea)
            {
                maxarea=temparea;
            }
        }
    }
    return maxarea;
    
}
void test011(void){
    int testpattern[]={1,8,6,2,5,4,8,3,7};
    int *p_testpattern=testpattern;
    int ans=0;
    ans=maxArea(p_testpattern, 9);
    printf("011_Container_With_Most_Water\n");
    printf("the max area =%d\n",ans);
}
