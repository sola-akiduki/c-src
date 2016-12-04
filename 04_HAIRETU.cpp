#include <iostream>
using namespace std;

int main()
{
	const int num = 10;
	int i,j;
	int NUMBER[num];

	for(i=0;i<num;i++){
		cout << "入力してください\n";
		cin >> NUMBER[i];
	}



	for(j=0;j<num;j++){
		cout << NUMBER[j] << "\n";
	}

	return 0;

}



