//
//  189_Rotate_Array.c
//  Leecode_test
//
//  Created by CSWu on 2019/6/22.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "189_Rotate_Array.h"

void reverse_p(int* nums,int numSize){
    int i=0;
    int temp=0;
    int step=(numSize-(numSize%2))/2;
    for(i=0;i<step;i++){
        temp=*(nums+(numSize-i-1));
        *(nums+(numSize-i-1))=*(nums+i);
        *(nums+i)=temp;
    }
    for(i=0;i<numSize;i++){
        printf("ans%d:%d\n",i,*(nums+i));
    }
    printf("========\n");
}
    
void rotate(int* nums, int numsSize, int k){
    int reverse_size=0;
    //1st part
    reverse_size=numsSize-k;
    reverse_p(nums, reverse_size);
    //2nd part
    reverse_size=k;
    reverse_p((nums+(numsSize-k)), reverse_size);
    reverse_p(nums,numsSize);
}
    
void test189(void){
    int test[]={0,1,2,3,4,5,6};
    int length=7;
    int shift=1;
    int i=0;
    //reverse_p(test,length);
    rotate(test,length,shift);
    for(i=0;i<length;i++){
        printf("ans%d:%d\n",i,test[i]);
        
    }

    
    
}
