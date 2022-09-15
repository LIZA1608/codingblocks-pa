/* https://hack.codingblocks.com/app/contests/3416/142/problem */

#include<iostream>
using namespace std;
int printodd(int n){
	if(n<=0){
		return 0;
	}
	if((n%2)!=0){
		cout<<n<<endl;
	}
  return printodd(n-1);
}
int printeven(int i,int n){
	if(i>n){
		return 0;
	}
		cout<<i<<endl;
	return printeven(i+2,n);
}
int main() {
	int n;
	cin>>n;
int d=n;
	printodd(n);
	printeven(2,d);
	return 0;
}
