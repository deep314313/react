#include <iostream>
#include <vector>
using namespace std;

#define ll long long int

int main() {
    ll a;
    cin >> a;
    
    while (a--) {
        ll b;
        cin >> b;
        
        vector<ll> v(b);
        vector<ll> indices;
        vector<char> s(b);
        string str = "abcdefghijklmnopqrstuvwxyz";
        
        // Read input and initialize indices vector
        for (ll i = 0; i < b; i++) {
            cin >> v[i];
            indices.push_back(i);
        }
        
        ll h = 0;
        for (auto itt = indices.begin(); itt != indices.end(); ++itt) {
            ll c = 0;
            for (auto it = indices.begin(); it != indices.end(); ++it) {
                if (v[*it] == c) {
                    s[*it] = str[h];
                    c++;
                    indices.erase(it);
                    //break;
                }
            }
            h++;
        }
        
        for (char c : s) {
            cout << c;
        }
        cout << endl;
    }
    
    return 0;
}
