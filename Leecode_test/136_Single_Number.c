//
//  136_Single_Number.c
//  Leecode_test
//
//  Created by CSWu on 2019/6/21.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "136_Single_Number.h"


int singleNumber(int* nums, int numsSize){
    int i=0;
    int ans=0;
    for(i=0;i<numsSize;i++){
        ans=ans^*(nums+i);
    }
    return ans;
    
}

void test136(void){
    int test[]={2,2,1};
    int ans;
    ans=singleNumber(test, 3);
    printf("ans:%d\n",ans);


}
