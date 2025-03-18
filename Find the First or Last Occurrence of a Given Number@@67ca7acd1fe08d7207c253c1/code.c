#include<stdio.h>
int findOccurrence(int arr[], int size, int target, char mode){
    int result=-1;
    int left=0, right=size-1;
    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            result=mid;
            if(mode=='F'){
                right=mid-1;
            }
            else{
                left=mid-1;
            }
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    return result;
}
 