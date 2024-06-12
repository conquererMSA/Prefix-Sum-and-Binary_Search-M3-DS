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
        bool exist=false;
        for(int i=0; i<size;i++){ //O(s*q) not possibel;
            if(arr[i]==value){
                exist=true;
                break;
            }
        }
        if(exist) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    // while loop er vitor arekti loop run korate er timeCplexity O(q * s) za 10^5 * 10^5 = 10^10 hoye zay. ai step 10 sec e somvob na za time limit excede dibe.
    return 0;
}