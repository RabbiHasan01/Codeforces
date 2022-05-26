

#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
	int n;
	cin>>n;
	int a,x[n+100],y[n+22],z[n+23];
	int i=0,j=0,k=0;
	for(int p=1;p<=n;p++){
		cin>>a;
		if(a==1){
			x[i]=p;
			i++;
		}
		else if(a==2){
			y[j]=p;
			j++;
		}
		else if(a==3){
			z[k]=p;
			k++;
		}
	}
	int mn=min(i,min(j,k));
	cout <<mn<<endl;
	if(mn>0){
		for(int i=0;i<mn;i++){
			cout <<x[i] <<" " <<y[i]<<" "<<z[i] <<endl;
		}
	}
	
	
	
	
	
}