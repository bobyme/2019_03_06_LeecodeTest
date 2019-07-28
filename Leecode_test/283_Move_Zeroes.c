//
//  283_Move_Zeroes.c
//  Leecode_test
//
//  Created by CSWu on 2019/7/28.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "283_Move_Zeroes.h"
void moveZeroes(int* nums, int numsSize){
    int count=0;
    for(int i=0;i<numsSize;i++)
        if(nums[i]!=0)
        {
            nums[count]=nums[i];
            if(count!=i)
                nums[i]=0;
            count++;
        }

}

void test283(void){
    int test[]={0,2,1,3};
    int test_size=sizeof(test)/sizeof(test[0]);
    int ans=0;
    moveZeroes(test, test_size);
    printf("test 283, ans=%d\n",ans);
}
