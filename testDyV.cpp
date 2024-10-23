#include "DyV.h"

int main(){
	std::vector<int> a{34,7,23,32,5,62};

	vector<int> c{100, 90, 80, 70, 60, 50, 40, 30, 20, 10};

	size_t indice = a.size();

	size_t indice2 = c.size();

	int x, y, ini = 0;

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

	cout << "Introduce el valor a buscar en el vector descendente: ";

        cin >> y;

	int d = BusquedaBinaria_INV(y, c, ini, indice2);
	
	if(d != -1){
		cout << "El valor se encuentra en la posición: " << d << endl;
	}


	return 0;
}
