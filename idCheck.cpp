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

	/*A=10 �x�_��     J=18 �s�˿�     S=26 ������
      B=11 �x����     K=19 �]�߿�     T=27 �̪F��
      C=12 �򶩥�     L=20 �x����     U=28 �Ὤ��
      D=13 �x�n��     M=21 �n�뿤     V=29 �x�F��
      E=14 ������     N=22 ���ƿ�     W=32 ������
      F=15 �x�_��     O=35 �s�˥�     X=30 ���
      G=16 �y����     P=23 ���L��     Y=31 �����s
      H=17 ��鿤     Q=24 �Ÿq��     Z=33 �s����
      I=34 �Ÿq��     R=25 �x�n��*/
      
      
      
      
      
      
      
      
