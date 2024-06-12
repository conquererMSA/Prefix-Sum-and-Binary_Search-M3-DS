#include<bits/stdc++.h>
using namespace std;
int main(){
     int size, query;
    cin>>size>>query;
    int arr[size];

    //take input for every index for making array
    for(int i=0; i<size; i++){ //O(s)
        cin>>arr[i];
    }
    // make cumulative / prefix sum array
    int prefixSum[size];
    prefixSum[0]=arr[0];//initialize first index value
    // assign prefixSum index value, startIndex hobe 1. karon first index manually assign kora hoyeche;
    

    return 0;
}