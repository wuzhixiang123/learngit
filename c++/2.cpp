/* CSP202006-1 线性分类器 */
#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
struct Point {
 int x, y;
} a[N], b[N];
int acnt, bcnt;
int main()
{
 int n, m;
 scanf("%d%d", &n, &m);
 acnt = bcnt = 0;
 for(int i = 0; i < n; i++) {
 int x, y;
 char type2[2];
 scanf("%d%d%s", &x, &y, type2);
 if(type2[0] == 'A') {
 a[acnt].x = x;
 a[acnt++].y = y;
 } else if(type2[0] == 'B') {
 b[bcnt].x = x;
 b[bcnt++].y = y;
 }
 }
 for(int i = 1; i <= m; i++) {
 bool side, ans = true;
 int t0, t1, t2;
 scanf("%d%d%d", &t0, &t1, &t2);
 if(acnt)
 side = t0 + a[0].x * t1 + a[0].y * t2 > 0;
 else
 side = t0 + b[0].x * t1 + b[0].y * t2 > 0;
 // 判定 A 点集合是否在同一侧
 for(int i = 1; i < acnt; i++)
 if(t0 + a[i].x * t1 + a[i].y * t2 > 0 != side) {
 ans = false;
 break;
 }
 // 判定 B 点集合是否在同一侧
 if(ans) {
 for(int i = 0; i < bcnt; i++)
 if(t0 + b[i].x * t1 + b[i].y * t2 > 0 == side) {
 ans = false;
 break;
 }
 }
 printf(ans ? "Yes\n" : "No\n");
 }
 return 0;
}