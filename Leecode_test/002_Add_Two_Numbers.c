//
//  002_Add_Two_Numbers.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/3/16.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "002_Add_Two_Numbers.h"

//Definition for singly-linked list.
typedef struct ListNode {
    int val;
    struct ListNode *next;
}tListNode;

tListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    static struct ListNode* p1;
    static struct ListNode* p2;
    static struct ListNode* ans;
    static struct ListNode c1;
    static struct ListNode c2;
    static struct ListNode c3;
    int temp=0;
    c1.val=0;
    c2.val=0;
    c3.val=0;
    
    p1=l1;
    p2=l2;
    c1.val=(p1->val+p2->val+temp)%10;
    c1.next=&c2;
    temp=(p1->val+p2->val)/10;
    printf("c1:%d,temp:%d\n",c1.val,temp);
    p1=p1->next;
    p2=p2->next;
    
    c2.val=(p1->val+p2->val+temp)%10;
    c2.next=&c3;
    temp=(p1->val+p2->val)/10;
    printf("c2:%d,temp:%d\n",c2.val,temp);
    p1=p1->next;
    p2=p2->next;
    
    c3.val=(p1->val+p2->val+temp)%10;
    temp=(p1->val+p2->val)/10;
    printf("c3:%d,temp:%d\n",c3.val,temp);
    ans=&c1;
    return ans;
};

void test002(){
    tListNode a1,a2,a3,b1,b2,b3;
    tListNode* p1;
    tListNode* l1;
    tListNode* l2;

    a1.val=2;
    a2.val=4;
    a3.val=3;
    b1.val=5;
    b2.val=6;
    b3.val=4;
    a1.next=&a2;
    a2.next=&a3;
    b1.next=&b2;
    b2.next=&b3;
    l1=&a1;
    l2=&b1;
    
    p1=addTwoNumbers(l1,l2);
    printf("ans1:%d\n",p1->val);
    p1=p1->next;
    printf("ans2:%d\n",p1->val);
    p1=p1->next;
    printf("ans3:%d\n",p1->val);

    
}
