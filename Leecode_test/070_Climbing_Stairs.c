//
//  070_Climbing_Stairs.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/4/5.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "070_Climbing_Stairs.h"

int climbStairs(int n) {
    int i=0;
    double ans[4];
    ans[1]=1;
    ans[2]=2;
    if (n==1){
        ans[3]=1;
    }
    else if(n==2){
        ans[3]=2;
    }
    else{
        for(i=3;i<=n;i++){
            ans[3]=ans[2]+ans[1];
            ans[0]=ans[2];
            ans[2]=ans[3];
            ans[1]=ans[0];
        }
    }
    return ans[3];
            
            
        
}

/*
int climbStairs(int n) {
    if(n==2)
        return 2;
    else if (n==1)
        return 1;
    else
        return (climbStairs(n-1)+climbStairs(n-2));
}
*/

void test070(void){
    double ans=0;
    int testno=35;
    ans=climbStairs(testno);
    printf("test input:%d,ans:%d\n",testno,ans);
}
