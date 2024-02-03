#incluide <iostream>
#incluide <cstdlib>
#incluide <ctime>

using namespace std;

int generarNumeroAleatorio(int min, int max){
  return rand()	% (max - min + 1) + min;
}

int main(){
  int cantidad Numeros;
  int min, max;
  
  cout << "Introduce la cantidad de numeros enteros aleatorios que desea generar:";
  cin  >> cantidadNumeros;
  
  cout << "Introduce el rango de numeros (minimos y maximos separados por un espacio): ";
  cin >> min >> max;
  //Inicializa la semilla para poder generar valores aleatorios srand(time(0));
  
  for(int i = 0; i < cantidadNumeros; i++){
  	cout << generarNumeroAleatorio(min,max) << "";
   }
 
 
    return 0;
}










