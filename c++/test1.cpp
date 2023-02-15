#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
struct Point
{
    int x,y;
}a[N],b[N];
int acnt,bcnt;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    acnt = bcnt = 0;
    for(int i=0; i < n;i++){
        int x,y;
        char type;
        scanf("%d%d%s",&x,&y,&type);
        if(type == 'A'){
            a[acnt].x = x;
            a[acnt++].y = y;
        }else{
            b[bcnt].x = x;
            b[bcnt++].y = y;
        }
    }
    for(int i = 0;i < m;i++){
        bool side;
        bool ans = true;
        int t0,t1,t2;
        bool flag = true;
        
        scanf("%d%d%d",&t0,&t1,&t2);
        if(acnt){
            side = t0+a[0].x*t1+a[0].y*t2 > 0;
        }else{
            side = t0+b[0].x*t1+b[0].y*t2 > 0;
            flag = false;
        }
        for(int i = 1;i<acnt;i++){
            if(t0+a[i].x*t1+a[i].y*t2 > 0 != side){
                ans = false;
                break;
            }
        }
        for(int i = 0;i<bcnt;i++){
            if(flag==true){
                if(t0+b[i].x*t1+b[i].y*t2 > 0 == side){
                    ans = false;
                    break;
                    }
                }else{
                    if(t0+b[i].x*t1+b[i].y*t2 > 0 !=side){
                        ans = false;
                        break;
                    }
                }
        }
        printf(ans ? "YES\n":"NO\n");
    }
    return 0;
}