#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int BusquedaBinaria(int X, std::vector<int> V, int ini, int fin){
	size_t tamanyo = V.size();
	if(ini > tamanyo){ 
		cout << "No se encuentra en el array" << endl;
		return -1;
	}
        int medio = (ini + fin) / 2; 
        if (V[medio] == X){ 
                 return medio;
	} 
	else if (V[medio] > X){
                 return BusquedaBinaria(X, V, ini, medio-1);
	}else{
                 return BusquedaBinaria(X, V, medio + 1, fin);
	}
}


	
int Partition(std::vector<int>& V, int ini, int fin){
         int x = V[fin];
         int i = ini;
         for (int j = ini; j < fin; j++){
               if (V[j] <= x){
                     //Intercambiar V[i] V[j];
		     std::swap(V[i], V[j]);
		     i++;
	       }
	 }
	
         //Intercambiar V[i] V[fin]
	 std::swap(V[i], V[fin]);
         return i;
}

void QuickSort(std::vector<int>& V, int ini, int fin){
        if (ini < fin){
                 int pivot = Partition(V, ini, fin);
                 QuickSort(V, ini, pivot - 1);
                 QuickSort(V, pivot + 1, fin);
        }
}