#incluide <iostream>
#incluide <cmath>
using namespace std;

cosnt float PI = 3.14159265359;

float calcularAreaCirculo(float
radio){
  return pow(radio,2)* PI;	
{
	
float calcularAreaTriangulo(float
base, floar altura){
  return (base * altura) / 2;	
	
}

float calcularAreaCuadrado(float
lado){
  return pow(lado, 2);
}	

int main(){
  int opcion;
  cout << "¿Que figura desea calcular su area?" <<endl;
  cout << "1. Circulo" <<endl;
  cout << "2. Triangulo" <<endl;	
  cout << "3. Cuadrado" <<endl;
  cin  >> opcion;	
	

  switch(opcion){
   case 1:{
   	 floar radio;
   	 cout << "Introduce el radio del circulo: ";
   	 cin >> radio;
   	 cout << "EL area del circulo es: " <<calcularAreaCirculo(radio) <<endl;
	break;
	}
	case 2:{
      float base, altura;	
	  cout << "Introduce la base del triangulo: ":
	  cin >> base;
	  cout << "Introduce la altura del triangulo:":
	  cin >> altura
	  cout << "El area del triangulo es: " <<calcularAreaTriangulo(base,altura)	<<endl;
	  
	break;
	}
	case 3:{
	  float lado;
	  cout << "Introduce el lado del cuadrado es:" << calcularArea(lado) << endl;
	break;
	}
	default:
		cout <<"Opcion invalida";
    }	
   
	return 0;
	
}
