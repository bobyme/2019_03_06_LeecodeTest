//
//  217_Contains_Duplicate.c
//  Leecode_test
//
//  Created by CSWu on 2019/7/19.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//
//#include < stdbool.h >
#include "217_Contains_Duplicate.h"

int containsDuplicate(int* nums, int numsSize){
    int i=0;
    int j=0;
    int temp=0;
    for(i=numsSize-1;i>0;i--){
        for(j=0;j<i;j++){
            if(*(nums+j)>*(nums+j+1)){
                printf("before,[%d]:%d,[%d]:%d,\n",j,*(nums+j),j+1,*(nums+j+1));
                temp=*(nums+j);
                *(nums+j)=*(nums+j+1);
                *(nums+j+1)=temp;
                printf("after,[%d]:%d,[%d]:%d,\n",j,*(nums+j),j+1,*(nums+j+1));
            }
        }
        printf("====\n");
    }
    for(i=0;i<numsSize;i++){
        printf("aftersort[%d]:%d\n",i,*(nums+i));
    }
    printf("numsSize:%d\n",numsSize);
    for(i=0;i<(numsSize-1);i++){
        if(*(nums+i)==*(nums+i+1)){
            printf("(1):%d,(2):%d\n",*(nums+i),*(nums+i+1));
            return 1;
        }
    }
    return 0;
    
}


void test217(void){
    int test[]={3,2,1,0};
    int test_size=sizeof(test)/sizeof(test[0]);
    int ans=0;
    ans=containsDuplicate(test, test_size);
    printf("test 216, ans=%d\n",ans);
}
