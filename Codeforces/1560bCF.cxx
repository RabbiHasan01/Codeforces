
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int a,b,c,x,y;
		cin>>a>>b>>c;
		x=min(a,b);
		y=max(a,b);
		
		int w,ans, dif=y-x;
		/*w=1+dif;
		
		if(c<w){
			for(int i=1,i!=x;i<w;i++){
				ans=i+dif;
				if(ans==a || ans==b){
					cout <<"ans " << ans <<endl;
			    	cout << -1 <<endl;
				}else {
					if(i==c) cout << ans <<endl;
					
				}
					
			}
		}else {
			cout <<-1 <<endl;
		}*/
		
		int mx=dif*2,w1,w2;
		if(y>mx or c>mx){
			cout << -1;
		}else {
			w1=c+dif;
			if(w1<=mx) cout << w1;
			else{
			      w2=c-dif;
		      	if(w2>=1) cout <<w2;
			}
		}
		
		cout <<endl;
	}
	
	
	
	
	
	
	
	
}