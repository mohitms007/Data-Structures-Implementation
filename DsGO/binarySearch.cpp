#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int binarySearch(int *a,int right, int left, int searchNum){
    if(right >= left){
        int mid = left + (right - left)/2;

        if(a[mid] == searchNum){
            return mid;
        }
        else if(a[mid] > searchNum){
            binarySearch(a,mid-1,left,searchNum);
        }
        else if(a[mid] < searchNum){
            binarySearch(a,right,mid+1,searchNum);
        }
    }
}

int main() {
    int index;
    int arr[] = {1,23,45,65,76,546,566,909,989};
    index = binarySearch(arr,8,0,909);
    cout<< index;
    

}
