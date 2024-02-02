//Stephanie Sabán
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
using namespace std;
//Determinación Variables
int entero;//variable utilizada para la funcion esPrimo y esBisiesto
float numm1, numm2, base, exponente; 
float resultado = 0;
//variables para la calculadora
float suma=0;
float resta=0;
float multi=0; 
float division=0; 
//Declaramiento de prototipos de los procedimientos
float Calcu(float numm1,float numm2);
float calcularPotencia(float base,float exponente);
bool esBisiesto(int entero);
bool esPrimo(int entero);
void Mayores();
void Notas(); 
int main(){
int opc;	
system("cls"); //para limpiar pantalla
do{
cout<< "MENU PRINCIPAL \n\n";
cout <<"1. Calculadora. \n";
cout <<"2. Elevar un numero a un exponente determinado. \n";
cout <<"3. Verificar si un numero es primo. \n";
cout <<"4. Verificar si es anio bisiesto. \n";
cout <<"5. Salir del menu\n\n";
cout<< "Ingrese el numero de su opcion (1-5): " ;
cin>>opc;
switch(opc)
{
case 1: {
//pedimos el ingreso de datos
 cout <<"Ingrese el primer numero: "<<endl;
 cin>>numm1;
 cout <<"Ingrese el primer numero: "<<endl;
 cin>>numm2;
//mandamos a llamar a la función
 Calcu(numm1,numm2);};break;
case 2: {
//pedimos el ingreso de datos
 cout <<"Ingrese la base: "<<endl;
 cin>>base;
 cout <<"Ingrese el exponente: "<<endl;
 cin>>exponente;
 //mandamos a llamar a la función
 calcularPotencia(base,exponente);
 //imprimiendo en pantalla el resultado
 cout<<"El resultado de elevar "<<base<<" al exponente "<<exponente<<" es:"<<resultado<<endl;	};break;
case 3: {
//pedimos el ingreso de datos
 cout <<"Ingrese un numero entero: "<<endl;
 cin>>entero;
//usamos condicional if para imprimir el resultado según lo que retorna la funcion
 if (esPrimo(entero)){
 	cout<<"Es primo."<<endl;
 }
 else{
 	cout<<"No es primo."<<endl;
 }};break;
case 4: {
//pedimos el ingreso de datos
 cout <<"Ingrese un anio: "<<endl;
 cin>>entero;
 //usamos condicional if para imprimir el resultado según lo que retorna la funcion
 if (esBisiesto(entero)){
 	cout<<entero<<" es bisiesto."<<endl;
 }
 else{
 	cout<<entero<<" no es bisiesto."<<endl;
}};break;
case 5: {exit(1);};break;
} //fin del switch
system("pause");
}while(opc!=5);
return 0;
}//fin de main
//************************************************
float Calcu(float numm1,float numm2){
	system("cls");
    suma=numm1+numm2;
    cout<<"La suma de los dos numeros es: "<<suma<<endl;
    resta=numm1-numm2;
    cout<<"La resta de los dos numeros es: "<<resta<<endl;
    multi=numm1*numm2;
    cout<<"La multiplicacion de los dos numeros es: "<<multi<<endl;
    division=numm1/numm2;
    cout<<"La division de los dos numeros es: "<<division<<endl;
    return suma, resta, multi, division;
}
//************************************************
float calcularPotencia(float base, float exponente){
system("cls");
//realizamos el proceso para elevar al numero a su respectivo exponente
resultado = pow(base,exponente);	
//retorna el numero ya elevado
   return resultado;
}
//************************************************
bool esBisiesto(int entero){
system("cls");

	if(entero % 4 == 0 && entero % 100 != 0 || entero% 400 == 0) {
		return true;	
	}
	else
		return false;	
}	
//************************************************
bool esPrimo(int entero){
system("cls");
//condiciones para casos especiales
if (entero == 0 || entero == 1 || entero == 4) return false;
  for (int a = 2; a < entero / 2; a++) {
    if (entero % a == 0) return false;
  }
//si las condiciones anteriores no se pueden realizar retorna true
return true;
}
//************************************************