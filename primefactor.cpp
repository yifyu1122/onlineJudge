#include <iostream>
using namespace std;

int main(){
	int a,b,flag=0;
	cin >> a;
	b = 0;
	
	for(int i=2;i<=a;i++){
		if(flag==1){
			cout << " * ";
			flag = 0;
		}
		
		while(a % i==0){
			b++;
			a = a/i;
		}
		if(b==1){
			cout <<  i ;
			flag++;
			b = 0;
		}
		else if(b>1){
			cout << i << "^" << b;
			flag++;
			b = 0;
		}	
	}	
}
