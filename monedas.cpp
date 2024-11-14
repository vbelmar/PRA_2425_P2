#include <algorithm>
#include <iostream>
#include <limits>
using namespace std;

int cambio(int v[], int N, int M, int x[]){
	int** matrix = new int*[N+1];
	for (int i=0; i<=N; i++){
		matrix[i] = new int[M+1];
		for (int j=0; j<=M; j++){
			if(j==0){
				matrix[i][j] = 0;
			}else{
				matrix[i][j] = -1;
			}
		}
	}

	for (int i=1; i<=N; i++){
		for (int j=0; j<=M; j++){
			matrix[i][j] = matrix[i - 1][j];

			if (j>= v[i-1] && matrix[i][j-v[i-1]] != -1){
				matrix[i][j] = matrix[i][j - v[i - 1]] + 1;
			}else{
                    		matrix[i][j] = std::min(matrix[i][j], matrix[i][j - v[i - 1]] + 1);
                	}
		}
	}
	
	int resultado = matrix[N][M];

	int M2 = M;
	for(int i = N-1; i>=0; i--){
		while((M2 - v[i]) >= 0){
			x[i] += 1;
			M2 -= v[i];
		}
	}

	for (int i = 0; i <= N; i++) {
        	delete[] matrix[i];
    	}
    	delete[] matrix;

    	return resultado;

}


int main() {
    int v[] = {2, 3, 4}; 
    int N = sizeof(v) / sizeof(v[0]); 
    int M = 23; 
    int x[N] = {0}; 

    int resultado = cambio(v, N, M, x);

    if (resultado == -1) {
        std::cout << "No es posible alcanzar la cantidad " << M << " con las monedas dadas." << std::endl;
    } else {
        std::cout << "Número mínimo de monedas necesarias: " << resultado << std::endl;
        std::cout << "Monedas usadas de cada tipo: ";
        for (int i = 0; i < N; i++) {
            std::cout << x[i] << " "; 
        }
        std::cout << std::endl;
    }

    return 0;
}
