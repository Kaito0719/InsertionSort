#include <iostream>

using namespace std;

int main()
{
	int	x,k,array[5] = { 5,3,4,1,2 };
	for (int i = 1; i < 5; i++){
		x = array[i];
		// For�o�[�W����
		//for (k = i; k > 0 && array[k - 1] > x; k--){
		//	array[k] = array[k - 1];
		//}
		// For�����

		// While�o�[�W����
		k = i;
		while (k > 0 && array[k-1] > x)
		{
			array[k] = array[k - 1];
			k--;
		}
		// While�����
		array[k] = x;
	}
	for (int i = 0; i < 5; i++){
		cout << array[i] << endl;
	}

	// ���͑҂�
	cin.get();

	return 0;
}