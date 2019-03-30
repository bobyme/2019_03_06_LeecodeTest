//
//  007_Reverse_Integer.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/3/23.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "007_Reverse_Integer.h"

int reversex(int x) {
    int64_t temp=x;
    int64_t ans=0;
    int64_t p_max= 2147483647; //pow(2,31)-1;
    int64_t n_min= -2147483648;//pow(2,31);
    int i=0;
    int sign=1;
    printf("long\t\t%lu\n", sizeof(long));
    printf("intut:%d;pmax:%d,pmin:%d\n",x,p_max,n_min);
    if((x>p_max)||(x<n_min)){
        return 0;
    }
    temp=x;
    if (x<0){
        sign=-1;
        temp=temp*sign;
    }
        
    while(temp>0){
        printf("===============\n");
        printf("index:%d,temp:%d\n",i,temp);
        ans=ans*10+temp%10;
        if((ans>p_max)||(ans<n_min)){
            return 0;
        }
        printf("1st part:%d,2nd part:%d\n",ans*10,temp%10);
        printf("ans:%d\n",ans);
        temp=temp/10;
        //printf("index %d:%d\n",i,temp);
        i++;
    }
    printf("===============\n");
    return (int)ans*sign;
}


void test007(void){
    int testno=1534236469;
    int ans=0;
    ans=reversex(testno);
    printf("finish,ori:%d,ans:%d\n",testno,ans);
}
