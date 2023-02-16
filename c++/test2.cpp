#include <bits/stdc++.h>
using namespace std;
map<int, int> mp;
int main()
{
 int n,a,b,ix,val;
    cin>>n>>a>>b; //cin的输入并不是cin>>a,b,n.这样子使用会出错。
    for(int i = 0;i < a;i++){
        cin>>ix>>val;
        if(ix >= n){
           cout<<"error"<<endl;
        }
        mp[ix] = val;
    }
    int sum = 0;
    for(int i = 0;i<b;i++){
        cin>>ix>>val;
        sum+=val*mp[ix];
    }
    cout<<sum<<endl;//cout的最后这个单词是endl并不是end1；
    return 0;
}