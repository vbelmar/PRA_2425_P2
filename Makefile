# Compilar y generar el ejecutable
cambio: monedas.cpp
	g++ -o cambio monedas.cpp

# Ejecutar el programa
testCambio: cambio
	./cambio

