//
//  189_Rotate_Array.c
//  Leecode_test
//
//  Created by CSWu on 2019/6/22.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "189_Rotate_Array.h"


void rotate(int* nums, int numsSize, int k){
    int i=0;
    int j=0;
    int second_loop=0;
    int quotient=0;
    int remainder=0;
    int swap_idx=0;
    int swap_idx_next=0;
    int temp;
    int temp_next;
    if(k==0){
        return;
    }
    else{
        quotient=numsSize/k;
        remainder  =numsSize%k;
        printf("quotient:%d,remainder:%d\n",quotient,remainder);
        for(i=0;i<k;i++){
            second_loop=(i<remainder)?(quotient+1):(quotient);
            swap_idx=i;
            temp=*(nums+swap_idx);
            for(j=0;j<second_loop;j++){
                swap_idx_next=(swap_idx+k)%numsSize;
                temp_next=*(nums+swap_idx_next);
                printf("i:%d,j:%d,",i,j);
                printf("Swap_idx:%d;temp:%d;temp_next:%d\n",swap_idx,temp,temp_next);
                *(nums+swap_idx_next)=temp;
                swap_idx=swap_idx_next;
                temp=temp_next;
            }
        }
        
    }

}
void test189(void){
    int test[]={0,1,2,3,4,5,6};
    int length=7;
    int shift=3;
    int i=0;
    rotate(test,length,shift);
    for(i=0;i<length;i++){
        printf("ans%d:%d\n",i,test[i]);
        
    }

    
    
}
