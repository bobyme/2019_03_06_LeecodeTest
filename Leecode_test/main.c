//
//  main.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/3/6.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include <stdio.h>
#include "002_Add_Two_Numbers.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    int a=-123;
    int b,c=0;
    b=a%10;
    a=a/10;
    c=a%10;
    printf("b:%d,c:%d\n",b,c);
    test002();

    return 0;
}
