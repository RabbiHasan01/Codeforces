
#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,y;
		cin>>x>>y;
		long long int a=max(x,y),b=min(x,y),c=0,p=a;
	/*	if((a%b)!=0) cout <<-1;
		else {
			a/=b;
			for(int i=0;pow(2,i)<=a;i++){
				if(pow(2,i)==a){
					c=i;
					d=1;
					break;
				}
			}
		}
		if(d){
			cout <<c+p <<endl;
		}
		
	/*	while(a<pow(10,18)){
			
			if(!(a%y)){
				 n=a/y;
				 break
			}
			a*=2;
			c++;
		}
		while(b<pow(10,18)){
			
			if(!(b%y)) break
			b*=2;
			d++;
		}*/
		long long int m=0;
		while(b<=a){
			if(b==a) {
				m=c;
				break;
			}
			b*=2;
			c++;
		}
		if(m) cout <<m+p <<endl;
		else cout <<-1 <<endl;
	}
}











