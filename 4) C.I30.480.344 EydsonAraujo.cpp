#incluide <iostream>
#incluide <string>
#incluide <conio.h>

int main(){
   //Declaracion de variables
   std::string nombreCliente, producto;
   float precio, total,descuento;
   int cantidad;
   
   //Ingreso de datos
   std::cout << "Ingrese el nombre del cliente: ";
   std::getline(std::cin, nombreCliente);
   std::cout << "Ingrese el producto: ";
   std::getline(std::cin,producto);
   std::cout << "Ingrese el precio del producto: ";
   std::cin >> precio;
   std::cout << "Ingrese la cantidad: ";
   std::cin >> cantidad
   
   //Calculo del total sin descuento
   total = precio * cantidad;
   
   //Verificacion del descuento
   if ((producto == "frutas" || producto == "verduras" || producto == "barrotes") && total > 1000){
   	descuento = total * 0.20;
   	//20% de descuento
   	      total = total - descuento;
   	      std::cout << "/nCliente: " << nombreCliente << std::endl;
   	      std::cout << "Producto: " <<  producto << std::endl;
   	      std::cout << "Precio: $" << precio << std::endl;
   	      std::cout << "Cantidad: " << cantidad std::endl;
   	      std::cout << "Descuento: (20%): $" << descuento << std::endl;
   	      std::cout << "Total a pagar: $" << total << std::endl;
   	 
    }else{
       std::cout << "/nCliente: " << nombreCliente <<std::endl;
       std::cout << "Producto: " << producto << std::endl;
       std::cout << "Precio: $" << precio << std::endl;
       std::cout << "Cantidad: " << cantidad << std::endl;
       std::cout << "Total a pagar: $" << total << std::endl;
        }
        
        getch(); //Esperar a que el usuario presione una tecla
        
        return0
}











