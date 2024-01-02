//https://codeforces.com/contest/1914/problem/B

//B. Preparing for the Contest

#include<bits/stdc++.h>

using namespace std;

int main(){

    int n,k;

     cin >>n >>k;

    vector<int>ans;

    for(int i =0 ; i<=k; i++){
        ans.pb(i);
    }

    for(int i =n; i >k; i--){
        ans.pb(i);
    }

    cout<< ans << "\n";
}


