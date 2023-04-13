#include <iostream>
using namespace std;

void fungsi(int *b){
	cout << "alamat b " << *b << endl;
	cout << "nilai b " << b << endl;
	
}

void kuadrat(int *valptr){
	*valptr = (*valPtr) * (*valPtr);
}

int kuadrat(int value){
	return value*value;
}
	
	int nain(){
		int a = 5;
		cout << "alamat a " << *a << endl;
		cout << "nilai a " << b << endl;
		
		kuadrat(&a);
		
		a = kuadrat(a);
		cout << " nilai a " << a << endl;
		
		cin.get()
		return 0;
		
	
}
