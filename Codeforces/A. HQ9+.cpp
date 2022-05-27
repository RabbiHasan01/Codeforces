
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    int c=1;
    for(int i=0;i<s.size();i++){
        if(s[i]>=33&&s[i]<=126){
            if(s[i]=='H' or s[i]=='Q' or s[i]=='9'){
                cout << "YES\n";
                c=0;
                break;
            }
        }
    }
    if(c) cout << "NO\n";

return 0;
}

