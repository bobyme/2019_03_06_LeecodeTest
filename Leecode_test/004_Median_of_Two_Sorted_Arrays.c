//
//  004_Median_of_Two_Sorted_Arrays.c
//  Leecode_test
//
//  Created by Ching ShengWu on 2019/3/16.
//  Copyright © 2019 Ching ShengWu. All rights reserved.
//

#include "004_Median_of_Two_Sorted_Arrays.h"
double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int halfsize,i=0;
    int idx1=0;
    int idx2=0;
    int ans[2]={0,0};
    double aveans=0;
    if (((nums1Size+nums2Size)%2)==0){
        halfsize=1+(nums1Size+nums2Size-2)/2;
    }
    else{
        halfsize=(nums1Size+nums2Size-1)/2;
    }
    printf("************\n");
    for(i=0;i<nums1Size;i++){
        printf("array1[%d]:%d\n",i,*(nums1+i));
    }
    printf("************\n");
    for(i=0;i<nums2Size;i++){
        printf("array2[%d]:%d\n",i,*(nums2+i));
    }
    printf("nums1Size:%d,nums1Size:%d\n",nums1Size,nums2Size);
    printf("halfsize:%d,ave:%d\n",halfsize,aveans);
    for(i=0;i<=halfsize;i++){
        printf("====================\n");
        printf("1001,idx1:%d,idx2:%d\n",(idx1),(idx2));
        printf("1002,ans[0]:%d,ans[1]:%d\n",*(nums1+idx1),*(nums2+idx2));
        if (idx1==nums1Size){
            printf("1010,pre_ans[0]:%d,pre_ans[1]:%d,idx1:%d\n",ans[0],ans[1],idx1);
            ans[0]=ans[1];
            ans[1]=*(nums2+idx2);
            printf("1011,smallvalue:%d\n",*(nums1+idx1));
            printf("1012,aft_ans[0]:%d,aft_ans[1]:%d,idx1:%d\n",ans[0],ans[1],idx1);
            //printf("1012,small:%d\n",*(nums1+idx1));
            idx2++;
            
            printf("1013,ans[0]:%d,ans[1]:%d,idx1:%d\n",ans[0],ans[1],idx1);
        }
        else if (idx2==nums2Size){
            printf("1020,pre_ans[0]:%d,pre_ans[1]:%d,idx1:%d\n",ans[0],ans[1],idx1);
            ans[0]=ans[1];
            ans[1]=*(nums1+idx1);
            printf("1021,smallvalue:%d\n",*(nums1+idx1));
            printf("1022,aft_ans[0]:%d,aft_ans[1]:%d,idx1:%d\n",ans[0],ans[1],idx1);
            //printf("1012,small:%d\n",*(nums1+idx1));
            idx1++;
            
            printf("1023,ans[0]:%d,ans[1]:%d,idx1:%d\n",ans[0],ans[1],idx1);
        }
        else if(*(nums1+idx1)< *(nums2+idx2)){
            printf("1030,pre_ans[0]:%d,pre_ans[1]:%d,idx1:%d\n",ans[0],ans[1],idx1);
            ans[0]=ans[1];
            ans[1]=*(nums1+idx1);
            printf("1031,smallvalue:%d\n",*(nums1+idx1));
            printf("1032,aft_ans[0]:%d,aft_ans[1]:%d,idx1:%d\n",ans[0],ans[1],idx1);
            //printf("1012,small:%d\n",*(nums1+idx1));
            idx1++;
            
            printf("1033,ans[0]:%d,ans[1]:%d,idx1:%d\n",ans[0],ans[1],idx1);
        }
        else{
            ans[0]=ans[1];
            ans[1]=*(nums2+idx2);
            printf("1041,smallvalue:%d\n",*(nums2+idx2));
            printf("1042,aft_ans[0]:%d,aft_ans[1]:%d,idx2:%d\n",ans[0],ans[1],idx2);
            idx2++;
            
            printf("1043,ans[0]:%d,ans[1]:%d,idx2:%d\n",ans[0],ans[1],idx2);
            
        }
        //printf("====================\n");
    }
    printf("====================\n");
    if (((nums1Size+nums2Size)%2)!=0){
        aveans=ans[1];
        printf("1051,ans[0]:%d,ans[1]:%d,aveans:%f\n",ans[0],ans[1],aveans);
        return (int)aveans;
    }
    else{
        
        aveans=(double)(ans[0]+ans[1])/2.0;
        printf("1052,ans[0]:%d,ans[1]:%d,aveans:%f\n",ans[0],ans[1],aveans);
        return (double)aveans;
    }
    //return aveans;
}

void test004(){
    double ans;
    int nums1[]={1,3};
    int nums2[]={2};
    int nums1Size=2;
    int nums2Size=1;
    printf("Hello, World!\n");
    ans=findMedianSortedArrays(nums1, nums1Size, nums2,nums2Size);
    printf("1099,ans:%f\n",ans);

}
