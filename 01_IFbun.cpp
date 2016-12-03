#include <iostream>
using namespace std;

int main()
{

	int num = 5;
	int i = 0;
	cout << "numの数値は" << num << "です\n";
	cout << "数字を入力してください\n";
	cin >> i;	

	if(num == i){
		cout << "numと同じ数です\n";
	}else{
		cout << "numとは違う数です\n";
	}

	//else if
	if(num < i){
		cout << "入力した数はnumより大きいです\n";
	}else if(num > i){
		cout << "入力した数はnumより小さいです\n";
	}else{

	}
	
	return 0;
}
