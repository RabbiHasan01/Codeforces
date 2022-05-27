

#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,a,c=0,b=0,x[105],y[105];
    cin>>n;
   // for(int i=1;i<=100;i++) x[i]=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a%2==1){
            b++;
            x[b]=i;
        }
        else {
            c++;
            y[c]=i;
        }


    }
     if(b==1) cout << x[b] <<endl;
     else cout << y[c] <<endl;


return 0;
}
