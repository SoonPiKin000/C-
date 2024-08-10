#include <iostream>
#include <set>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    int a[n];
    // Nhập mảng
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // Đẩy mảng vào set
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        se.insert(a[i]);
    }
    for(int x : se){
        cout << x << " ";
    }
    return 0;
}