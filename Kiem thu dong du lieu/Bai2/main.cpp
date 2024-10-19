#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define taskname "Bai2"
using namespace std;
typedef long double ldb;
typedef long long ll;
int main()
{
    cin.tie(0);cout.tie(0);
    freopen(taskname".inp", "r", stdin);
    freopen(taskname".out", "w", stdout);
    int x, y;
    cin >> x >> y;
    while(y > 0) {
        if(x > 0) y = y - x;
        else cin >> x;
    }
    cout << x << ", " << y;
    return 0;
}
