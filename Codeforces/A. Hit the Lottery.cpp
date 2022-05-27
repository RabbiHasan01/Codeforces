

#include<bits/stdc++.h>
using namespace std;

/*int check(int x){

    int count=0;
    if(x>=100){
            count+=x/100;
            x%=100;
            check(x);
        }
    else if(x>=20 && x<100){
            count+=x/20;
            x%=20;
            check(x);
        }
    else if(x>=10 && x<20){
            count+=x/10;
            x%=10;
            check(x);
        }
    else if(x>=5 && x<10){
            count+=x/5;
            x%=5;
            check(x);
        }
    cout << count+x <<endl;


}
*/
int main()
{
    long long int x,count=0;
    cin>>x;
   // check(x);
   count+=x/100;
   x%=100;
   count+=x/20;
   x%=20;
   count+=x/10;
   x%=10;
   count+=x/5;
   x%=5;
   count+=x;
   cout <<count <<endl;

}
