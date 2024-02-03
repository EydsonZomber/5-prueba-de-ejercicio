#incluide <iostream>
#incluide <string>

void imprimirMensaje(std::string mensaje){
	std::cout<<mensaje<<std::endl;
}

void abrirpuertas(){
	imprimirMensaje("Se han abierto las puertas del ascensor");
}

void cerrarPuertas(){
	imprimirMensaje("Se han cerrado las puertas del ascensor");
}

void subirPiso(int piso){
	for(int i = 1;i <= piso; i++){
	  imprimirMensaje("El ascensor se encuentra en el piso " + std::to_string(i));	
	}
}

void bajarPiso(int piso){
	for (int i = piso;i >= 1, i--){
	  imprimirMensaje("El ascensor se encuentra en el piso" + std ::to_(i));	
	}
}

int main(){
  int pisodeseado;
  
  imprimirMensaje("Ingrese el piso al que desea ir");
  std::cin >> pisoDeseado;
  
  if (pisoDeseado > 0){
  	 cerradoPuertas();
  	 
  	 if (pisoDeseado > 1){
  	 	subirPiso(pisoDeseado);
	   } elseif (pisoDeseado < 1);{
	   	  bajarPiso(pisoDeseado);
	   }
        
	   abrirPuertas();
   }else{
   	 imprimirMensaje("El piso ingresado no es valida");
   }  
   
   
   return0;
}






