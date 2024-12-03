#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("inp.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
    string s;
    ll sum = 0,perfOp=1;
    while(getline(cin,s)){
        for (ll i = 0; i < s.size(); ++i) {
            if (i + 3 < s.size() && s.substr(i, 4) == "do()") {
                perfOp = 1;
                i += 3; 
            }
            else if (i + 6 < s.size() && s.substr(i, 7) == "don't()") {
                perfOp = 0;
                i += 6; 
            }
            else if (perfOp && i + 3 < s.size() && s.substr(i, 4) == "mul(") {
                i += 4;
                string temp = "",temp1="";
                while(i<s.size() && (s[i]>='0' && s[i]<='9')){
                    temp += s[i];
                    i++;
                }
                if(temp==""|| i>=s.size() || s[i]!=',' || temp.size()>3)continue;
                i++;
                while(i<s.size() && ((s[i]>='0' && s[i]<='9'))){
                    temp1 += s[i];
                    i++;
                }
                if (temp1=="" || i >= s.size() || s[i] != ')' || temp1.size()>3) continue;
                ll num1 = stoi(temp);
                ll num2 = stoi(temp1);
                ll tot = num1*num2;
                sum += tot;
            }
        
            
    }
    }
    cout <<sum <<"\n";
    return 0;
}
//56275602
