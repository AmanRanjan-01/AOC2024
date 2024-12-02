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
    map<ll,ll> mp;
    ll x;
    while(cin>>x){
        if(flg){
            mp[x]++;
        }
        else{
            v1.push_back(x);
        }
        flg^=1;
    }
    ll ans = 0;
    for(int i=0 ;i<v1.size();i++){
        if(mp.find(v1[i])!=mp.end()){
            ans += (mp[v1[i]]*v1[i]);
        }
    }
    cout<<ans<<"\n";
}
//26859182