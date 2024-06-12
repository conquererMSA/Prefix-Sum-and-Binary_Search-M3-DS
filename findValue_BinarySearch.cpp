#include<bits/stdc++.h>
using namespace std;
int main(){
    int size, query;
    cin>>size>>query;
    int arr[size];
    for(int i=0; i<size; i++){ //O(s) za 10^7 porzonto posible
        cin>>arr[i];
    }
    while(query--){ //O(s) za 10^7 porzonto posible
        int value;
        cin>>value;
        int leftIndex=0, rightIndex=size-1;
        bool isExist=false;
        while(leftIndex<=rightIndex){
            int midIndex=(leftIndex+rightIndex)/2;
            if(arr[midIndex]==value){
                isExist=true;
                break;
                }
            if(arr[midIndex]>value){
                rightIndex=midIndex-1;
            }
            else if(arr[midIndex]<value){
                leftIndex=midIndex-1;
            }
        }
        if(isExist) cout<<"Found"<<endl;
        else cout<<"None"<<endl;
    }
    return 0;
}