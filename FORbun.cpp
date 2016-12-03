#include <iostream>
using namespace std;

int main()
{
	int i;
	int f;
	int n;
	int num=1;
	for(i=1;i<=5;i++){
		cout << i << "回目\n";
	}

	for(f=1;f<=10;f++){
	   for(n=1;n<=10;n++){
		if(num<10){
			cout << "  " << num;
		}else if(num >=10 && num <100){
			cout << " " << num;
		}else{
			cout << num;
		}
		num++;
	   }
		cout << "\n";
	}

	return 0;

}
