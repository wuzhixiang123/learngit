#include<bits/stdc++.h>
using namespace std;
const int N = 4;
int have7(int n)
{
    while (n)
    {
        if(n%10==7){
            return 1;
        }else{
            n/=10;
        }       /* code */
    }
  return 0;  
}
int main(){
    int num,count=1;
    int n;
    int cnt[N] = {0,0,0,0};
    cin>>n;
    while (count<=n)
    {
        if(num%7==0||have7(num)){
            cnt[(num-1)%4]++;
        }else{
            count++;
        }
        num++;
    }
    for(int i=0;i<4;i++){
        cout<<cnt[i]<<endl;
    }
    
    return 0;
}