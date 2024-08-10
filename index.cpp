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
    set<int> se;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        se.insert(a[i]);
    }
    int b;
    cin >> b;
    string kq[b]; 
    for(int i = 0; i < b; i++){
        int c; 
        cin >> c; 
        auto it = se.find(c);
        if(it == se.end()){
            kq[i] = "NO\n";
        }
        else{
            kq[i] = "YES\n";
        }
    }
    // Đẩy mảng vào set
    for(int i = 0; i < b; i++){
        cout << kq[i] ; 
    }
    return 0;
}