//
//  122_Best_Time_to_Buy_and_Sell_Stock_2.c
//  Leecode_test
//
//  Created by CSWu on 2019/7/18.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "122_Best_Time_to_Buy_and_Sell_Stock_2.h"


int maxProfit(int* prices, int pricesSize){
    int i=0;
    int profit=0;
    int dif=0;
    for(i=0;i<(pricesSize-1);i++){
        dif=*(prices+i+1)-*(prices+i);
        if(dif>0){
            profit=profit+dif;
        }
    }
    return profit;
}

void test122(void){
    int test[]={1,2,3,4,5,6};
    int test_size=sizeof(test)/sizeof(test[0]);
    int ans=0;
    ans=maxProfit(test, test_size);
    printf("test 122, ans=%d\n",ans);
}
