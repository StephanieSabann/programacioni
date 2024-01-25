#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void ParIm(); //Prototipo del procedimiento
void Bisiesto();
void Iguales();
void Mayores();
void Notas();

int main(){
int opc;	
system("cls"); //para limpiar pantalla
do{
cout<< "MENU PRINCIPAL \n\n";
cout <<"1. Verificar numero par o impar. \n";
cout <<"2. Verificar si es anio bisiesto. \n";
cout <<"3. Verificar si los numeros son iguales. \n";
cout <<"4. Verificar si es mayor de edad. \n";
cout <<"5. Verificar si aprobo o reprobo un examen. \n";
cout <<"6. Salir del menu\n\n";
cout<< "Ingrese el numero de su opcion (1-5): " ;
cin>>opc;
switch(opc)
{
case 1: { ParIm();};break;
case 2: {Bisiesto();};break;
case 3: {Iguales();};break;
case 4: {Mayores();};break;
case 5: {Notas();};break;
case 6: {exit(1);};break;
} //fin del switch
system("pause");
}while(opc!=7);
return 0;
}//fin de main
//************************************************
void ParIm(){
system("cls");
int num, residuo;
cout<<"Ingrese el numero a verificar:  \n";
cin >> num;
residuo=num % 2;
if (residuo==0)
{
   cout<<"El numero es par. \n";	
}
else 
   cout<<"El numero es impar. \n";
}

//************************************************
void Bisiesto(){
system("cls");
int anio; 
	cout << "Ingrese el año: " <<endl;
	cin >> anio;
	if(anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0) {
		cout << "El año es bisiesto";	
	}
	else
		cout << "El año no es bisiesto";	
}	
//************************************************
void Iguales(){
system("cls");
int num1, num2;
cout<<"Ingrese el primer numero a comparar:  \n";
cin >> num1;
cout<<"Ingrese el segundo numero a comparar:  \n";
cin >> num2;
if (num1==num2)
{
   cout<<"Los numeros son iguales. \n";	
}
else 
   cout<<"Los numeros no son iguales. \n";
}
//************************************************
void Mayores(){
system("cls");
int edad;
cout<<"Ingrese la edad de la persona:  \n";
cin >> edad;
if (edad>=18)
{
   cout<<"Eres mayor de edad. \n";	
}
else 
   cout<<"Eres menor de edad. \n";
}
//************************************************
void Notas(){
system("cls");	
int nota;
cout<<"Ingrese la calificacion:  \n";
cin >> nota;
if (nota>=60)
  cout<<"APROBADO.\n";
else
  cout<<"REPROBADO. \n";
}