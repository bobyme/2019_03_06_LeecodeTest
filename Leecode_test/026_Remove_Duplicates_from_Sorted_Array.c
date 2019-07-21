//
//  026_Remove_Duplicates_from_Sorted_Array.c
//  Leecode_test
//
//  Created by CSWu on 2019/7/18.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "026_Remove_Duplicates_from_Sorted_Array.h"

int removeDuplicates(int* nums, int numsSize){
    int i=0;
    int ReduceSize=1;
    int tempVal=*nums;
    int tempIdx=0;
    if(numsSize==0)
        return 0;
    for(i=1;i<numsSize;i++){
        if(*(nums+i)>tempVal){
            tempVal=*(nums+i);
            ReduceSize++;
            tempIdx++;
            *(nums+tempIdx)=tempVal;
        }
    }
    return ReduceSize;
    
}

void test026(void){
    int test[]={0,0,1,1,1,2,2,3,3,4};
    int test_size=sizeof(test)/sizeof(test[0]);
    int ans=0;
    ans=removeDuplicates(test, test_size);
    printf("test 026, ans=%d\n",ans);
}
