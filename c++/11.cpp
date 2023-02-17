#include<bits/stdc++.h>
using namespace std;
int have7(int n){
    while(n){
        if(n%10 == 7){
            return 1;
        }else{
            n/=10;
        }
    }
    return 0;
}
int main(){
    cout<<have7(17)<<endl;
    // if(!have7(27)){
    //     cout<<"no"<<endl;
    // }else{

    //     cout<<"yes"<<endl;
    // }
    return 0;
}