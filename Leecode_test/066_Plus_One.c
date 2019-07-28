//
//  066_Plus_One.c
//  Leecode_test
//
//  Created by CSWu on 2019/7/21.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "066_Plus_One.h"
int* plusOne(int* digits, int digitsSize, int* returnSize){
    int *nums1=(int*)malloc(sizeof(int)*(digitsSize+1));
    int *nums2=(int*)malloc(sizeof(int)*(digitsSize));
    int i=0;
    int j=0;
    int residual=1;
    int temp=0;
    for(i=digitsSize-1;i>=0;i--){
        temp=*(digits+i);
        *(nums1+i+1)=(temp+residual)%10;
        residual=(temp+residual)/10;
        printf("residual:%d\n",residual);
        printf("dit[%d]:%d\n",i+1, *(nums1+i+1));
        if(i==0){
            if(residual==1){
                *(nums1)=1;
                *returnSize=digitsSize+1;
                printf("dit[%d]:%d\n",i, *(nums1+i));
            }
            else{
                *(nums1)=0;
                *returnSize=digitsSize;
                for(j=0;j<digitsSize;j++){
                    *(nums2+j)=*(nums1+j+1);
                }
   
            }
        }
    }
    if(*returnSize>digitsSize)
        return nums1;
    else
        return nums2;
}
    


void test066(void){
    int test[]={1,2,3};
    int ans_size_value=0;
    int test_size=sizeof(test)/sizeof(test[0]);
    int *ans;
    int *ans_size=&ans_size_value;
    ans=plusOne(test, test_size,ans_size);
    printf("test 066, ans=%d\n",ans);
    
}
