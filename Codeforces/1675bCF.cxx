
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+6];
		
		for(int i=01;i<=n;i++){
			cin>>a[i];
		}
		int c=0,d=1;
	    for(int i=n;i>1;i--){
			//	for(int j=1; ;j++){
			     	while(a[i-1]>=a[i] and a[i-1]>=i-1){
			     		c++;
			     		a[i-1]/=2;
			     	//	cout <<a[i-1] <<"  ";
			     	}		
			     	if(a[i-1]<i-1) {
	    	        	d=0;
	    		         break;
	            	}	     	
		}
		if(d==0) cout <<-1<<endl;
		else cout << c <<endl;
	}
}
     	
			//	}
		}
		if(d==0) cout <<-1<<endl;
		else cout << c <<endl;
	}
}






dl;
	}
}






