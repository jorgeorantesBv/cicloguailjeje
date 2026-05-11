#include <iostream>
#include <windows.h>
using namespace std;
float descuento, precio, total;
char decision='S';
main(){
while(decision == 'S') {
   cout<< "Ingrese el precio del producto: ";
cin>> precio;
descuento = precio*0.2;
total = precio * descuento;
cout<<"El total a pagar es " << total;
cout<<"Desea ingresar otro producto\n, S para si, N para no: ";
cin>>decision;
}

 

}