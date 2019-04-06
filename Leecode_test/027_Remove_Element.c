//
//  027_Remove_Element.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/4/6.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "027_Remove_Element.h"
int removeElement(int* nums, int numsSize, int val) {
    int idx=0;
    int i=0;
    int temp;
    int reduceSize=numsSize;
    for(i=0;i<numsSize;i++){
       // printf("ind:%d value:%d\n",i,*(nums+i));
        //temp=*(nums+i);
        //printf("ind no:%d\n",temp);
        if(*(nums+i)==val){
            //printf("test\n");
            reduceSize--;
        }
       
        else{
            *(nums+idx)=*(nums+i);
            idx++;
        }
        
    }
    return reduceSize;
}

void test027(void){
    int ans=0;
    int testno=8;
    int removenum=2;
    int testin[]={0,1,2,2,3,0,4,2};
    int* p_testin=testin;
    ans=removeElement(testin, testno, removenum);
    printf("reduced no:%d\n",ans);
}
