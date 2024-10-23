#include "DyV.h"

int main(){
	std::vector<int> a{34,7,23,32,5,62};

	size_t indice = a.size();

	int x, ini = 0;

	QuickSort(a, ini, indice);
	
	for (int i = 0; i < indice; i++){
		if(i == 0){
			cout << "[";
		}

		cout << a[i] << ",";

		if (i == indice-1){
			cout << "]" << endl;
		}
	}

	cout << "Introduce el valor a buscar: ";

	cin >> x;

	int b = BusquedaBinaria(x, a, ini, indice);
	
	if(b != -1){
		cout << "El valor se encuentra en la posición: " << b << endl;
	}


	return 0;
}
