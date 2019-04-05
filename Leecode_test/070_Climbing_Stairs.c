//
//  070_Climbing_Stairs.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/4/5.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "070_Climbing_Stairs.h"
int climbStairs(int n) {
    if(n==2)
        return 2;
    else if (n==1)
        return 1;
    else
        return (climbStairs(n-1)+climbStairs(n-2));
}

void test070(void){
    int ans=0;
    int testno=5;
    ans=climbStairs(testno);
    printf("test input:%d,ans:%d\n",testno,ans);
}
