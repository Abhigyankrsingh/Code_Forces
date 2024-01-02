#include<bits/stdc++.h>

using namespace std;


void btn(int n){

  if( n<= 1){
    cout << n << " ";
  } else {
    btn(n/2);

    cout << n%2 <<' ';
  }



}



int main(){

btn(10);

}