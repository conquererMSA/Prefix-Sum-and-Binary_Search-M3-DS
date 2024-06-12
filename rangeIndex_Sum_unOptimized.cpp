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

    while(query--){ //O(q)
      int startPos, endPos;
      cin>>startPos>>endPos;
      int startIndex=startPos-1;
      int endIndex=endPos-1;
       int sum=0;
      for(int i=startIndex; i<=endIndex; i++){ // O(s)
          sum+=arr[i];
      }
      // while loop er vitorer complexity hobe O(s*q) => (10^5 * 10^5) => 10^10. 10^10 step 1-10+ sec ecomplte kora possible na.
      //tai etake optimize korte hobe.
      cout<<sum<<endl;
    }
}