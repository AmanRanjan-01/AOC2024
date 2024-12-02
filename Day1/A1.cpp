#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
  #endif
    int flg= 0;
    vector<ll> v1;
    vector<ll> v2;
    ll x;
    while(cin>>x){
        if(flg){
            v2.push_back(x);
        }
        else{
            v1.push_back(x);
        }
        flg^=1;
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    ll ans = 0;
    for(int i=0 ;i<v1.size();i++){
        ans += abs(v1[i]-v2[i]);
    }
    cout<<ans<<"\n";
}
//1320851
