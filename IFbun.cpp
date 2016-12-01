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
		cout << "同じ数です\n";
	}else{
		cout << "違う数です\n";
	}
	
	return 0;
}
