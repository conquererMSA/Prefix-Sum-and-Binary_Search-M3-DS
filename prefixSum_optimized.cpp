#include<bits/stdc++.h>
using namespace std;
int main(){
     int size, query;
    cin>>size>>query;
    int arr[size];

    //take input for every index for making array
    for(int i=0; i<size; i++){ //O(s) za 10^5 hote pare
        cin>>arr[i];
    }
    // make cumulative / prefix sum array
    int prefixSum[size];
    prefixSum[0]=arr[0];//initialize first index value
    // assign prefixSum index value, startIndex hobe 1. karon first index manually assign kora hoyeche;
    for(int i=1; i<size; i++){ //O(s) za 10^5 hote pare
        prefixSum[i]=arr[i]+prefixSum[i-1];
    }
    // for(int i=0; i<size; i++){ O(s)
    //     cout<<prefixSum[i]<<endl;
    // }
   
   while(query--){ //O(q) za 10^5 hote pare
      int startPos, endPos;
      cin>>startPos>>endPos;
      int startIndex=startPos-1;
      int endIndex=endPos-1;
      // find result from prefixSum array
      int value=0;
      if(startIndex==0) value=prefixSum[endIndex];
      else value=prefixSum[endIndex]-prefixSum[startIndex-1];
      // unOptimized code e ekhane arekti loop colto. zehetu nested loop chilo tai timeComlexity hoto O(q*s). kintu ekhon kuno nested loop nai tai timeComplexity hocce O(q) za 10^5, i sec ei step run kora somvob
      cout<<value<<endl;
   } 
   // final timeComplexity hocce O(q+s) za 10^5+10^5 =10^5 e za 1 sec e run kora somvob
    return 0;
}