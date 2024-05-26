//Write a C++ program to move all the negative elements to one side of the array.

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int* moveNegatives(int* nums,int n) {
        
    int i,index;
    for(i=0;i<n;i++){
        if(nums[i]==0){
            index=i;
            break;
        }
    }
   
        for(i=index+1;i<n;i++){
            if(nums[i]!=0 ){
                swap(nums[index],nums[i]);
                index++;
            }
        
     }
     return nums;


    }
int main ()

{   int n;
    cin>>n;
    int nums[]={1,-2,5,-98,-56,24,12,54,-65};
    // for (int i=0;i<n;i++){
    //     cin>>nums[i];
    // }
    auto p=moveNegatives(nums,n);

    for(int i=0;i<n;i++){
        cout<<p[i]<<" ";
    }
    return 0;
}