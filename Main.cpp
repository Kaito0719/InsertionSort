#include <iostream>

using namespace std;

int main()
{
	int	x,k,array[5] = { 5,3,4,1,2 };
	for (int i = 1; i < 5; i++){
		x = array[i];
		// Forバージョン
		//for (k = i; k > 0 && array[k - 1] > x; k--){
		//	array[k] = array[k - 1];
		//}
		// Forおわり

		// Whileバージョン
		k = i;
		while (k > 0 && array[k-1] > x)
		{
			array[k] = array[k - 1];
			k--;
		}
		// Whileおわり
		array[k] = x;
	}
	for (int i = 0; i < 5; i++){
		cout << array[i] << endl;
	}

	// 入力待ち
	cin.get();

	return 0;
}