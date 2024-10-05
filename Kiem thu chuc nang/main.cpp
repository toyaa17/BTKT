#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define taskname "BTKT"
using namespace std;
typedef long double ldb;
typedef long long ll;
string solve(double t, double v) {
    if(t < 0.00 || v < 0.00 || (t - 10.00) > 0.00 || (v - 10.00) > 0.00) {
        return "Đầu vào không hợp lệ";
    }
    if((t + v - 14.00) > 0.00) {return "Đỗ";}
    return "Trượt";
}
int main()
{
    cin.tie(0);cout.tie(0);
    freopen(taskname".inp", "r", stdin);
    freopen(taskname".out", "w", stdout);
    double t,v;
    while (cin >> t >> v) {
        cout << solve(t, v) << endl;
    }
    return 0;
}
