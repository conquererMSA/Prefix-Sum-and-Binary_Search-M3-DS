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
        sort(arr, arr+size); // O(NlogN)
        bool isExist=false;
        while(leftIndex<=rightIndex){ // O(logN), ekhane protibar array ordek hoye zacce tai array er size 10^7 bar bar array er size ordek hoay 50-60 ti step er moddhye value khuje pawa zacce
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
        //total time complexity O(size+query×sizelogsize)
        if(isExist) cout<<"Found"<<endl;
        else cout<<"None"<<endl;
    }
    return 0;
}