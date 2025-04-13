#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,delta=0,x1=0,x2=0;
	cout<<"请输入一元二次方程的各项系数:\n"; 
	cin>>a>>b>>c;
	cout<<"Thinking......\n";
	delta=b*b-4*a*c;
	if(delta<0){
		cout<<"原方程无解"<<endl; 
		system("pause");
	}
	else if(delta==0){
		x1=x2=-b/2*a;
		printf("x1=x2=%.2f",x1);
		cout<<endl;
		system("pause");
	}
	else if(delta>0){
		x1=(-b+sqrt(delta))/2*a;
		x2=(-b-sqrt(delta))/2*a;
		printf("x1=%.2f x2=%.2f",x1,x2);
		cout<<endl;
		system("pause");
	}
}
