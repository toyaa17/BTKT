#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define taskname "Bai3"
using namespace std;
typedef long double ldb;
typedef long long ll;

int calFactorial(int n) {
    int result = 1;
    int i = 1;
    while(i <= n) {
        result = result * i;
        i++;
    }
    return result;
}
int main()
{
    cin.tie(0);cout.tie(0);
    freopen(taskname".inp", "r", stdin);
    freopen(taskname".out", "w", stdout);
    int n;
    cin >> n;
    cout << calFactorial(n);
    return 0;
}
