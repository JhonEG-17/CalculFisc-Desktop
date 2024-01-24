
//calculadora de impuestos

//bibliotecas

#include<iostream>

using namespace std;

//definicion de funciones y objetos o cadena de funciones
	
	void leer_datos();
	
	void imprimir_datos(double imss,double rap,double sueldoBruto,double isr);
	
	double cuotaImss();
	
	double sueldoNeto();
	
	double calcuIsr();
	
	string nombre ="";

	double sueldo = 0;

int main(){
	
// Definimos las variables
					
	double imss = 0, rap = 0, sueldoBruto = 0, isr =0;
						
// iniciamos funciones
					
	leer_datos();
						
// operaciones 
						
	imss=cuotaImss();
						
	sueldoBruto=sueldoNeto();
						
	isr=calcuIsr();
						
// iniciamos funcion para imprimir los calculos realizados en la pantalla
						
	imprimir_datos(imss,rap,sueldo,isr);
						
	return 0;
}
	
// funcion para calcular el pago del rap
			
	double calcuIsr(){
				
		double rapp = 0;
				
		rapp = sueldo *0.03;
			
		return rapp;
				
	}
			
// funcion para calcular el sueldneto
			
	double sueldoNeto(){
				
		double sindl = 0;
				
		sindl = sueldo * 0.01;
			
		return sindl;
				
	}
	
// funcion para calcular el imss
	
	double cuotaImss(){
			
		double seguro = 0;
		
		if (sueldo >= 8500){
				
			//pago fijo por excedente
				
				sueldo = 8500 *0.020;
		
		}
		else{
				
			// porsentaje del sueldo a pagar
				
				seguro = sueldo * 0.020;
				
		}
		
		return seguro;
		
	}
		
// funcion para calcular debolucion del isr

	double calculo_rap(){
				
		double excedente = 0, gravable = 0;
				
		return 0;
				
	}
		
// Funcion de imprimir para ingresar datos del usuario 
						
	void leer_datos(){
							
	cout<<"\n\n\t\t\t\tDatos del usuario\n\n";
							
	cout<<"\t\t   Nombre del empleado: ";
	getline(cin,nombre);
							
	cout<<"\n\t\t\t    Sueldo del empleado: ";
	cin>>sueldo;
								
	}
						
// funcion que recopila los datos optenidos enlas operaciones
					
	void imprimir_datos(double imss,double rap,double sueldoBruto,double isr){

		double neto = 0;
		neto = sueldo - imss -rap - isr;

		cout<<"\n\t\t\tRetencion IMSS................."<<imss<<endl;
		cout<<"\t\t\tRetencion ISR.................."<<isr<<endl;
		cout<<"\t\t\tRetencion SUELDO NETO........."<<neto<<endl;

		//mesnaje de salida o despedida para el usuario
		cout<<"\n\t\t\tGRACIAS POR UTILIZAR ESTE PROGRAMA"<<"\n\n"<<"\tThis program was developed by the developer Jhonatan Espinal Garcia"<<"\n\n\t\t"<<"all rights of use and distribution are reserved\n\n\n\n";
	
	}
	