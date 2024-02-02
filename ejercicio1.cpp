#include <iostream>
using namespace std;
//Declaración de variables a utilizar
float valor1 = 0;
float valor2 = 0;
float resultado = 0;
//Declaración de las funciones
void suma();
void resta();
void multiplicacion();
void division();
int main()
{
//llamado de las funciones de las operaciones en la función principal
   suma();
   resta();
   multiplicacion();
   division();
}
//integración de las funciones en sí
void suma() {
	cout<<"SUMA"<<endl;
	cout<<"ingresa el primer valor: "<<endl;
    cin>>valor1;
    cout<<"ingresa el primer valor: "<<endl;
    cin>>valor2;
    resultado=valor1+valor2;
    cout<<"El resultado es: "<<resultado<<endl;
}
void resta() {
	cout<<endl<<"RESTA"<<endl;
	cout<<"ingresa el primer valor: "<<endl;
    cin>>valor1;
    cout<<"ingresa el primer valor: "<<endl;
    cin>>valor2;
    resultado=valor1-valor2;
    cout<<"El resultado es: "<<resultado<<endl;
}
void multiplicacion() {
	cout<<endl<<"MULTIPLICACION"<<endl;
	cout<<"ingresa el primer valor: "<<endl;
    cin>>valor1;
    cout<<"ingresa el primer valor: "<<endl;
    cin>>valor2;
    resultado=valor1*valor2;
    cout<<"El resultado es: "<<resultado<<endl;
}
void division() {
	cout<<endl<<"DIVISION"<<endl;
	cout<<"ingresa el primer valor: "<<endl;
    cin>>valor1;
    cout<<"ingresa el primer valor: "<<endl;
    cin>>valor2;
    resultado=valor1/valor2;
    cout<<"El resultado es: "<<resultado<<endl;
}
