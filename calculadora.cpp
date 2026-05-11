#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
char letra, decision ='S';
double x, y, Total;
int main(){

while(decision == 'S'){
cout << "Elige una opcion:\n";
cout << "s: suma\n";
cout << "r: resta\n";
cout << "m: multiplicacion\n";
cout << "d: division\n";
cin>> letra;

switch(letra){

    case 's':
    cout <<"Ingresa el primer numero que vas a sumar: ";
    cin>> x;
cout <<"Ingresa el segundo numero que vas a sumar: ";
    cin>> y;
    Total = x+y;
    cout<<"Su resultado es: " << Total;
break;
    case 'S':
    cout <<"Ingresa el primer numero que vas a sumar: ";
    cin>> x;
cout <<"Ingresa el segundo numero que vas a sumar: ";
    cin>> y;
    Total = x+y;
    cout<<"Su resultado es: " << Total;
break;

    case 'r':
    cout <<"Ingresa el primer numero que vas a restar: ";
    cin>> x;
cout <<"Ingresa el segundo numero que vas a restar: ";
    cin>> y;
    Total = x-y;
    cout<<"Su resultado es: " << Total;
break;

    case 'R':
    cout <<"Ingresa el primer numero que vas a restar: ";
    cin>> x;
cout <<"Ingresa el segundo numero que vas a restar: ";
    cin>> y;
    Total = x-y;
    cout<<"Su resultado es: " << Total;
break;

    case 'm':
    cout <<"Ingresa el primer numero que vas a multiplicar: ";
    cin>> x;
cout <<"Ingresa el segundo numero que vas a multiplicar: ";
    cin>> y;
    Total = x*y;
    cout<<"Su resultado es: " << Total;
break;
    case 'M':
    cout <<"Ingresa el primer numero que vas a multiplicar: ";
    cin>> x;
cout <<"Ingresa el segundo numero que vas a multiplicar: ";
    cin>> y;
    Total = x*y;
    cout<<"Su resultado es: " << Total;
break;
    case 'd':
    cout <<"Ingresa el primer numero que vas a dividir: ";
    cin>> x;
cout <<"Ingresa el segundo numero que vas a dividir: ";
    cin>> y;
    Total = x/y;
    cout<<"Su resultado es: " << Total;
    break;

    case 'D':
    cout <<"Ingresa el primer numero que vas a dividir: ";
    cin>> x;
cout <<"Ingresa el segundo numero que vas a dividir: ";
    cin>> y;
    Total = x/y;
    cout<<"Su resultado es: " << Total;
    break;
}
cout<<"\n Desea hacer otra operacion\n S para si, N para no: ";
cin>>decision;
}
};