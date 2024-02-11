#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll k;
    cin>>k;
    while(k--){
        ll a;
        cin>>a;
        string str;
        cin>>str;
        ll x=0;
        ll y=0;
        for(ll i=0;i<a;i++){
            if(str[i]=='B'){
                x=i;
                break;
            }
        }
        for(ll i=a;i>=0;i--){
            if(str[i]=='B'){
                y=i;
                break;
            }
        }
        cout<<y-x+1<<"\n";
    }
}