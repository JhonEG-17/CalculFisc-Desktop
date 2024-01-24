
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
				
				sueldo = 8500 * 0.020;
		
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
		
		 // Verificar en qué banda salarial se encuentra el sueldo ingresado
		if (sueldo >= 31652 && sueldo <= 91284) {
        cout << "\n\t\t      Usted esta en la seccion 9 (nivel jefe de oficina)." << endl;
    	} else if (sueldo >= 22789 && sueldo <= 78244) {
        cout << "\n\t\t      Usted esta en la seccion 8 (nivel jefe de oficina)." << endl;
    	} else if (sueldo >= 17725 && sueldo <= 65203) {
        cout << "\n\t\t      Usted esta en la seccion 7 (nivel jefe de oficina)." << endl;
    	} else if (sueldo >= 13927 && sueldo <= 52161) {
        cout << "\n\t\t    Usted esta en la seccion 6 (nivel analista)." << endl;
    	} else if (sueldo >= 11902 && sueldo <= 30123) {
        cout << "\n\t\t    Usted esta en la seccion 5 (nivel operativo)." << endl;
    	} else if (sueldo >= 8862 && sueldo <= 20866) {
        cout << "\n\t\t    Usted esta en la seccion 4 (nivel operativo)." << endl;
    	} else if (sueldo >= 6710 && sueldo <= 15649) {
        cout << "\n\t\t    Usted esta en la seccion 3 (nivel operativo)." << endl;
    	} else if (sueldo >= 5571 && sueldo <= 10693) {
        cout << "\n\t\t    Usted esta en la seccion 2 (nivel operativo)." << endl;
    	} else if (sueldo >= 5063 && sueldo <= 8607) {
        cout << "\n\t\t    Usted esta en la seccion 1 (nivel operativo)." << endl;
    	} else {
    	cout << "\n\tSu sueldo no corresponde a ninguna de las secciones especificadas." << endl;
    	}
	
	    cout<<"\n\t\t\tRetencion IMSS................."<<imss<<endl;
		cout<<"\t\t\tRetencion ISR.................."<<isr<<endl;
		cout<<"\t\t\tRetencion SUELDO NETO........."<<neto<<endl;
		//mesnaje de salida o despedida para el usuario
		cout<<"\n\t\t\tGRACIAS POR UTILIZAR ESTE PROGRAMA"<<"\n\n"<<"\tThis program was developed by the developer Jhonatan Espinal Garcia"<<"\n\n\t\t"<<"all rights of use and distribution are reserved\n\n\n\n";
	
	}
	