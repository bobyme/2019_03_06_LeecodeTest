//
//  011_Container_With_Most_Water.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/4/4.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "011_Container_With_Most_Water.h"
int maxArea(int* height, int heightSize) {
    int i=0;
    int j=heightSize-1;
    int maxarea=0;
    int temparea=0;
    int temphigh=0;
    int tempwidth=0;
    while(i!=j)
    {
        tempwidth=j-i;
        if((*(height+i))>(*(height+j))){
            temphigh=*(height+j);
            j--;
        }
        else{
            temphigh=*(height+i);
            i++;
        }
        temparea=temphigh*tempwidth;
        printf("i:%d,j:%d,temparear:%d\n",i,j,temparea);
        if (temparea>maxarea)
        {
            maxarea=temparea;
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
