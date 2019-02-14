#include <iostream>

using namespace std;

int main ()
{
 int a;
 int matriz1 [3][3];
 int matriz2 [3][3];
 int matriz3 [3][3];

cout<<"SUMA DE DOS MATRICES 3X3\n";

 for(int fila = 0; fila <3; fila++)
 {
 	for(int columna = 0; columna < 3; columna++)
	 {
	 	cout<<"Ingrese el valor para la matriz A "<<fila<<columna<<" : ";cin>>a;
		matriz1[fila][columna] = a;	 	
	 }
	 a=0;
 }
 cout<<"\n"
 
 for(int fila = 0; fila <3; fila++)
 {
 	for(int columna = 0; columna < 3; columna++)
	 {
	 	cout<<"Ingrese el valor para la matriz B "<<fila<<columna<<" : ";cin>>a;
		matriz2[fila][columna] = a;	
		matriz3[fila][columna] = matriz1[fila][columna] + matriz2[fila][columna];
		 	
	 }
	 a=0;
 }

 
 cout<<"\n";

 cout<<"MATRIZ A\n";
 for(int fila = 0; fila <3; fila++)
 {
 	for(int columna = 0; columna < 3; columna++)
	 {
	 	cout<< matriz1[fila][columna]<<" "; 
			
	 }
	 cout<<"\n";
 }
 
 cout<<"MATRIZ B\n";
 for(int fila = 0; fila <3; fila++)
 {
 	for(int columna = 0; columna < 3; columna++)
	 {
	 	cout<< matriz2[fila][columna]<<" "; 
			
	 }
	 cout<<"\n";
 }
 
 cout<<"MATRIZ RESULTADO\n";
 for(int fila = 0; fila <3; fila++)
 {
 	for(int columna = 0; columna < 3; columna++)
	 {
	 	cout<< matriz3[fila][columna]<<" "; 
			
	 }
	 cout<<"\n";
 }

 
}
