//
//  066_Plus_One.c
//  Leecode_test
//
//  Created by CSWu on 2019/7/21.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "066_Plus_One.h"
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *nums=(int*)malloc(sizeof(int)*(digitsSize+1));
    int i=0;
    long temp=0;
    for(i=digitsSize-1;i>=0;i--){
        temp=temp*10+*(digits+i);
        printf("temp:%d\n",temp);
    }
    temp=temp+1;
    printf("add 1,temp:%d\n",temp);
    for(i=digitsSize;i>0;i--){
        *(nums+i)=temp%10;
        temp=temp/10;
        printf("dit[%d]:%d\n",i, *(nums+i));
    }
    return nums;
}


void test066(void){
    int test[]={9,9,9,9};
    int test_size=sizeof(test)/sizeof(test[0]);
    int *ans;
    int *ans_size;
    ans=plusOne(test, test_size,ans_size);
    printf("test 066, ans=%d\n",ans);
    
}
