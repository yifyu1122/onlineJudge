#include <iostream>
#include<cstring>
using namespace std;

int main(){
	int result=0;
	char id[10];
	cin.get();
	cin.getline(id, 10);
	if(id[0]=='A'){
		result += 1;
	}
	else if(id[0]=='B'){
		result += 10;
	}
	else if(id[0]=='C'){
		result += 19;
	}
	else if(id[0]=='D'){
		result += 28;
	}
	else if(id[0]=='E'){
		result += 37;
	}
	else if(id[0]=='F'){
		result += 46;
	}
	else if(id[0]=='G'){
		result += 55;
	}
	else if(id[0]=='H'){
		result += 64;
	}
	else if(id[0]=='I'){
		result += 39;
	}
	else if(id[0]=='J'){
		result += 73;
	}
	else if(id[0]=='K'){
		result += 82;
	}
	else if(id[0]=='L'){
		result += 2;
	}
	else if(id[0]=='M'){
		result += 11;
	}
	else if(id[0]=='N'){
		result += 20;
	}
	else if(id[0]=='O'){
		result += 48;
	}
	else if(id[0]=='P'){
		result += 29;
	}
	else if(id[0]=='Q'){
		result += 38;
	}
	else if(id[0]=='R'){
		result += 38;
	}
	else if(id[0]=='S'){
		result += 56;
	}
	else if(id[0]=='T'){
		result += 65;
	}
	else if(id[0]=='U'){
		result += 74;
	}
	else if(id[0]=='V'){
		result += 83;
	}
	else if(id[0]=='W'){
		result += 21;
	}
	else if(id[0]=='X'){
		result += 3;
	}
	else if(id[0]=='Y'){
		result += 12;
	}
	else if(id[0]=='Z'){
		result += 30;
	}

	int j=8;
	for(int i=1;i<9;i++){
		result += j*int(id[i]);
		j--;
	}
	result += int(id[9]);
	 
	if (result % 10 == 0) {
        cout << result <<"real";
    } 
	else {
        cout << result << "fake";
    }
}

	/*A=10 台北市     J=18 新竹縣     S=26 高雄縣
      B=11 台中市     K=19 苗栗縣     T=27 屏東縣
      C=12 基隆市     L=20 台中縣     U=28 花蓮縣
      D=13 台南市     M=21 南投縣     V=29 台東縣
      E=14 高雄市     N=22 彰化縣     W=32 金門縣
      F=15 台北縣     O=35 新竹市     X=30 澎湖縣
      G=16 宜蘭縣     P=23 雲林縣     Y=31 陽明山
      H=17 桃園縣     Q=24 嘉義縣     Z=33 連江縣
      I=34 嘉義市     R=25 台南縣*/
      
      
      
      
      
      
      
      
