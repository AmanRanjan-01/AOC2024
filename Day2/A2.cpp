
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
    ll ans =0;
    string line;
    while(getline(cin,line)){
        stringstream ss(line);
        vector<ll> row;
        ll num;
        while(ss>>num){
            row.push_back(num);
        }
        if(row.size()<=2){
            ans++;
            continue;
        }
        stack<int> inc , dec;
        int op1 = 0 , op2 = 0;
        // considering inc
        inc.push(row[0]);
        for(int i=1;i<row.size();i++){
            if(row[i]>inc.top()){
                if(abs(row[i]-inc.top())>3){
                    op1++;
                }
                else{
                    inc.push(row[i]);
                }
            }
            else{
                op1++;
            }
        }
        // considering dec
        dec.push(row[0]);
        for(int i=1 ;i<row.size();i++){
            if(row[i]<dec.top()){
                if(abs(row[i]-dec.top())>3){
                    op2++;
                }
                else{
                    dec.push(row[i]);
                }
            }
            else{
                op2++;
            }
        }
        if(op1 <=1 || op2 <= 1){

            ans++;
            continue;
        }
        // removing just 0th index  element
        op1 = 0 , op2=0;
        while(!inc.empty()){
            inc.pop();
        }
        while(!dec.empty()){
            dec.pop();
        }
        // considering inc
        inc.push(row[1]);
        for(int i=2;i<row.size();i++){
            if(row[i]>inc.top()){
                if(abs(row[i]-inc.top())>3){
                    op1++;
                }
                else{
                    inc.push(row[i]);
                }
            }
            else{
                op1++;
            }
        }
        // considering dec
        dec.push(row[1]);
        for(int i=2 ;i<row.size();i++){
            if(row[i]<dec.top()){
                if(abs(row[i]-dec.top())>3){
                    op2++;
                }
                else{
                    dec.push(row[i]);
                }
            }
            else{
                op2++;
            }
        }
        if(!op1 || !op2){
            ans++;
            continue;
        }

  }
  cout<<ans<<"\n";
  return 0;
}
//386