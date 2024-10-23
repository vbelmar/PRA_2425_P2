#include "DyV.h"
#include <chrono>

int main(){
	std::vector<int> a{5,7,23,32,34,62};

	vector<int> c{100, 90, 80, 70, 60, 50, 40, 30, 20, 10};

	size_t indice = a.size();

	size_t indice2 = c.size();

	int x, y, ini = 0;

	//QuickSort(a, ini, indice);
	
	for (int i = 0; i < indice; i++){
		if(i == 0){
			cout << "[";
		}

		cout << a[i] << ",";

		if (i == indice-1){
			cout << "]" << endl;
		}
	}

	for (int i = 0; i < indice2; i++){
                if(i == 0){
                        cout << "[";
                }

                cout << c[i] << ",";

                if (i == indice2-1){
                        cout << "]" << endl;
                }
        }

	cout << "Introduce el valor a buscar: ";

	cin >> x;

	auto start = std::chrono::system_clock::now();

	int b = BusquedaBinaria(x, a, ini, indice);

	auto end = std::chrono::system_clock::now();

	if(b != -1){
                cout << "El valor se encuentra en la posición: " << b << endl;
	}

	std::chrono::duration<float, std::milli> duration = end - start;

	cout << "Time: " << duration.count() << "s" << std::endl;

	cout << "Introduce el valor a buscar en el vector descendente: ";

        cin >> y;

	start = std::chrono::system_clock::now();

	int d = BusquedaBinaria_INV(y, c, ini, indice2);

	end = std::chrono::system_clock::now();
	
	if(d != -1){
		cout << "El valor se encuentra en la posición: " << d << endl;
	}

	duration = end - start;

	cout << "Time: " << duration.count() << "s" << std::endl;


	return 0;
}
