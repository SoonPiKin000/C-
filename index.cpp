#include <iostream>
#include <set>
#include<vector>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n; 
    cin >> n; 
    vector<int>v; 
    for(int i = 0; i < n; i++){
        int select; 
        cin >> select; 
        if(select == 1){
            int valum ;
            cin >> valum; 
            v.push_back(valum);  
        }
        else if(select == 2){
            if(v.empty()){
                continue; 
            }
            v.pop_back();
        }
        else{
            cout << "Xin vui long nhap lai\n";
        }
    }
    if(v.empty()){
        cout << "EMPTY\n";
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}