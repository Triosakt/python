#include <iostream>
using namespace std;
int main(){
	
	int a = 10;
	
	int *aPtr = &a;
	
	cout << " Masukan nilai dari a = " << a << endl;
	cout << "Masukan alamat dari a = " << aPtr << endl;
	cout << "Mengambil nilai dari dari pointer aptr : " << *aPtr << endl;
	
	cin.get();
	return 0;
}
