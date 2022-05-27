
#include <bits/stdc++.h>

using namespace std;

int solve(int n){

    long long x[n+7],y[n+7];
    int m=n/2,c=0,d=0,sum1=0,sum2=0;
    if(m%2==0){
        cout << "YES\n" ;
        for(int i=1;i<=n;i++){
            if(i%2==0){
            //x[c]=i; //
            cout << i << " ";
            c++;
            sum1+=i;    ///1
            }else {
                y[d]=i;
                //cout << y[d] <<" ";
                d++;
                sum2+=i;
            }
        }
        int dif=sum1-sum2;
        y[d-1]+=dif;
        for(int i=0;i<d;i++){
            cout << y[i] << " ";
        }
        cout << endl;
    }else{
        cout << "NO\n";
    }




}

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m,c=0;
        cin>>n;
        solve(n);
       /* long long int x[n+9];
        m=n/2;
        ///cout << m <<endl;
        if(m%2==0){
            cout << "YES\n" ;
            for(int i=2;i<=n;i+=2){
                x[c]=i; //
                cout << x[c] << " ";
                c++;    ///1
            }
            for(int i=0;i<c/2;i++){
                cout << x[i]-1 << " ";
            }
            for(int i=c/2;i<c;i++){
                cout << x[i]+1 << " ";
            }
        cout << endl;
        }else{
            cout << "NO\n";
        }
        /*for(int i=0;i<m-1;i++){
            a=x[i]+x[i+1];
            a/=2;

        }*/


    }

return 0;
}
