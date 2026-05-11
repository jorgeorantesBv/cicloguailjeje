#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
char letra, decision = 'S';
double b, h, l1, l2 ,Total;
main(){

    while(decision == 'S'){

    cout << "Elige una opcion:\n";
cout << "Triangulo: t\n";
cout << "Rectangulo: r\n";
cout << "Cuadrado: c\n";
cin>> letra;

switch(letra){

    case 't':
    cout <<"Ingresa la base en cm: ";
    cin>> b;
cout <<"Ingresa la altura en cm: ";
    cin>> h;
    Total = b*h/2;
    cout<<"El area del triangulo es igual a: " << Total;
break;

    case 'T':
    cout <<"Ingresa la base en cm: ";
    cin>> b;
cout <<"Ingresa la altura en cm: ";
    cin>> h;
    Total = b*h/2;
    cout<<"El area del triangulo es igual a: " << Total;
break;

    case 'r':
    cout <<"Ingresa la base en cm: ";
    cin>> b;
cout <<"Ingresa la altura en cm: ";
    cin>> h;
    Total = b*h;
    cout<<"El area es de: " << Total;
break;

    case 'R':
    cout <<"Ingresa la base en cm: ";
    cin>> b;
cout <<"Ingresa la altura en cm: ";
    cin>> h;
    Total = b*h;
    cout<<"El area es de: " << Total;
break;

    case 'c':
    cout <<"Ingresa el lado 1: ";
    cin>> l1;
cout <<"Ingresa el lado 2 ";
    cin>> l2;
    Total = l1*l2;
    cout<<"El area del cuadrado es: " << Total;
break;

    case 'C':
    cout <<"Ingresa el lado 1: ";
    cin>> l1;
cout <<"Ingresa el lado 2 ";
    cin>> l2;
    Total = l1*l2;
    cout<<"El area del cuadrado es: " << Total;
break;
   
}
cout<<"\nDesea hacer otra operacion \n S para si, N para no: ";
cin>>decision;
    }
}