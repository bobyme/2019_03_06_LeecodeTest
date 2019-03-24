//
//  007_Reverse_Integer.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/3/23.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "007_Reverse_Integer.h"

int reverse(int x) {
    long temp=x;
    long ans=0;
    long p_max= pow(2,31)-1;
    long n_max= pow(2,31);
    if((x>p_max)||(x<n_max)){
        return 0;
    }
    while(x>0){
        temp=ans*10+temp%10;
        temp=temp/10;
    }
    return (int)ans;
}


void test007(void){
    int testno=123;
    int ans=0;
    ans=reverse(testno);
    printf("finish,ori:%d,ans:%d\n",testno,ans);
}
