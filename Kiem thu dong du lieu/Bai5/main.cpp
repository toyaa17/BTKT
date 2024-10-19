#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define taskname "Bai5"
using namespace std;
typedef long double ldb;
typedef long long ll;

int UCLN(int m, int n) {
   if(m < 0) m = -m;
   if(n < 0) n = -n;
   if(m == 0) return n;
   if(n == 0) return m;
   while(m !=n) {
    if(m > n) m = m - n;
    else n = n - m;
   }
   return m;
}
int main()
{
    cin.tie(0);cout.tie(0);
    freopen(taskname".inp", "r", stdin);
    freopen(taskname".out", "w", stdout);
    int m, n;
    cin >> m >> n;
    cout << UCLN(m, n);
    return 0;
}
