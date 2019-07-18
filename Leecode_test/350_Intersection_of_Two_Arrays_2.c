//
//  350_Intersection_of_Two_Arrays_2.c
//  Leecode_test
//
//  Created by CSWu on 2019/6/30.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "350_Intersection_of_Two_Arrays_2.h"
#include <stdio.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
// An optimized version of Bubble Sort
void bubbleSort(int* ar, int n)
{
    int i, j;
    int swapped=0;
    printf("n:%d\n",n);
    for (i = n-1; i>0; i--)
    {
        swapped = 0;
        for (j = 0; j <i; j++)
        {
            //printf("sort i:%d,j:%d\n",i,j);
            if (*(ar+j) > *(ar+(j+1)))
            {
                //printf("before sort 1st:%d,2nd:%d\n",*(ar+j),*(ar+j+1));
                swap((ar+j),(ar+(j+1)));
                //printf("after sort 1st:%d,2nd:%d\n",*(ar+j),*(ar+j+1));
                swapped = 1;
            }
        }
        
        // IF no two elements were swapped by inner loop, then break
        /*
        if (swapped == 0){
            printf("break, i:%d,j:%d\n",i,j);
            break;
        }
        */
    }
    for(i=0;i<n;i++){
        printf("test bubble sort, data %d:%d\n",i,*(ar+i));
    }

}

int* delete_data(int* a, int size, int i) { //删除数组里面第i个元素
    int* rev = malloc(sizeof(int)*(size-1));
    int j;
    for(j=0; j<i; j++)
        rev[j] = a[j];
    for(int k=j; k < size-1; k++)
        rev[k] = a[k+1];
    return rev;
}

int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int i=0;
    int j=0;
    int match_size=0;
    int *temp;
    int temp_size=0;
    int *rev;
    if(nums1Size == 0 || nums2Size == 0) {
        *returnSize = 0;
        return NULL;
    }
    //bubbleSort(nums1, nums1Size);
    //bubbleSort(nums2, nums2Size);
    
    if(nums1Size<nums2Size){
        temp=nums2;
        temp_size=nums2Size;
        nums2=nums1;
        nums2Size=nums1Size;
        nums1=temp;
        nums1Size=temp_size;
    }
    int num[nums1Size];
    for(i=0; i < nums1Size; i++) //初始化数组
        num[i] = 0;
    match_size=0;
    for(i=0;i<nums1Size;i++){
        for(j=0;j<nums2Size;j++){
            //printf("i:%d,J:%d\n",i,j);
            //printf("comare:%d,be_compared:%d\n",*(nums1+j),*(nums2+j));
            if(*(nums1+i)==*(nums2+j)){
                
                num[match_size] = nums1[i];
                //printf("match,num[%d]:%d\n",match_size,num[match_size]);
                match_size++;
                nums2 = delete_data(nums2, nums2Size, j);//删除已经找到的元素
                nums2Size--;
                
                break;
            }
        }
    }

    
    rev = malloc(match_size*sizeof(int));
    for(i=0; i < match_size; i++)
        rev[i] = num[i];
    *returnSize = match_size;

    return rev;
}

void test350(void){
    int b[]={5,3,2,4,1};
    int a[]={5,9};
    int b_size=5;
    int a_size=2;
    int *ans=NULL;
    int ans_size=0;
    int i=0;

    //bubbleSort(b, b_size);
    ans=intersect(a,a_size,b,b_size,&ans_size);
    printf("ans:%d\n",ans_size);
    for(i=0;i<ans_size;i++){
        printf("match data %d:%d\n",i,*(ans+i));
    }

}
