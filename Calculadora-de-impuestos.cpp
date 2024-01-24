
//calculadora de impuestos

//bibliotecas

#include<iostream>
#include<conio.h>

using namespace std;

//definicion de funciones y objetos o cadena de funciones
	
void leer_datos(double &sueldo, string &nombre);

void bandasalarial(double sueldo);

double calcuIsr(double sueldo);

double cuotaImss(double sueldo, double cuotap, double gastosm, double gastosin);

void imprimir_datos(double sueldo, double isr, double imss);

// Funcion de imprimir para ingresar datos del usuario 
						
void leer_datos(double &sueldo, string &nombre, double &cuotap, double &gastosm, double &gastosin){
							
	cout<<"\n\n\t\t\t\tDatos del usuario\n\n";
	
	cin.ignore();				
	cout<<"\t\t\tNombre del empleado: ";
	getline(cin, nombre);
							
	cout<<"\n\t\t\tSueldo del empleado: ";
	cin>>sueldo;
	
	cout<<"\n\t\t\tIngrese el monto de la cuota por prestamo: ";
	cin>>cuotap;
	
	cout<<"\n\t\t\tIngrese el monto de ls gastos medicos del mes: ";
	cin>>gastosm;
	
	cout<<"\n\t\t\tIngrese el monto de los gastos por invalides del mes: ";
	cin>>gastosin;
		
}

void bandasalarial(double sueldo){
	
	// Verificar en qué banda salarial se encuentra el sueldo ingresado
	if (sueldo >= 31652 && sueldo <= 91284) {
		
    	cout << "\n\n\n\t\t\t\tBANDASALARIAL:\n\n\t\tUsted esta en la seccion 9 (nivel jefe de oficina)." <<"\n"<< endl;
    	
    } else if (sueldo >= 22789 && sueldo <= 78244) {
    	
    	cout << "\n\n\n\t\t\t\tBANDASALARIAL:\n\n\t\tUsted esta en la seccion 8 (nivel jefe de oficina)." <<"\n"<< endl;
    
    } else if (sueldo >= 17725 && sueldo <= 65203) {
    	
    	cout << "\n\n\n\t\t\t\tBANDASALARIAL:\n\n\t\tUsted esta en la seccion 7 (nivel jefe de oficina)." <<"\n"<< endl;
    
    } else if (sueldo >= 13927 && sueldo <= 52161) {
    	
    	cout << "\n\n\n\t\t\t\tBANDASALARIAL:\n\n\t\tUsted esta en la seccion 6 (nivel analista)." <<"\n"<< endl;
    
    } else if (sueldo >= 11902 && sueldo <= 30123) {
    	
    	cout << "\n\n\n\t\t\t\tBANDASALARIAL:\n\n\t\tUsted esta en la seccion 5 (nivel operativo)." <<"\n"<< endl;
    
    } else if (sueldo >= 8862 && sueldo <= 20866) {
    	
   		cout << "\n\n\n\t\t\t\tBANDASALARIAL:\n\n\t\tUsted esta en la seccion 4 (nivel operativo)." <<"\n"<< endl;
    
    } else if (sueldo >= 6710 && sueldo <= 15649) {
    	
    	cout << "\n\n\n\t\t\t\tBANDASALARIAL:\n\n\t\tUsted esta en la seccion 3 (nivel operativo)." <<"\n"<< endl;
    
    } else if (sueldo >= 5571 && sueldo <= 10693) {
    	
    	cout << "\n\n\n\t\t\t\tBANDASALARIAL:\n\n\t\tUsted esta en la seccion 2 (nivel operativo)." <<"\n"<< endl;
    
    } else if (sueldo >= 5063 && sueldo <= 8607) {
    	
    	cout << "\n\n\n\t\t\t\t\tBANDASALARIAL\n\n\t\tUsted esta en la seccion 1 (nivel operativo)." <<"\n"<< endl;
    
    } else {
    	
    	cout << "\n\tSu sueldo no corresponde a ninguna de las secciones de las bandas salariales." <<"\n"<< endl;
    	
    }
	
}

double calcuIsr(double sueldo){
	
	double isr = 0, resultado = 0, resultado2 = 0;
	
	//procedimiento para calcular irs
	if (sueldo >= 291550.01 && sueldo <= 100000000000.0) {
			
			resultado = sueldo - 291550.01;
			resultado2 = resultado * 0.35;
			isr = resultado2 + 91435.02;
			
    } else if (sueldo >= 97183.34 && sueldo <= 291550.00) {
    	
    	resultado = sueldo - 97183.34;
		resultado2 = resultado * 0.34;
		isr = resultado2 + 25350.35;
		
    } else if (sueldo >= 72887.51 && sueldo <= 97183.33) {
    	
    	resultado = sueldo -72887.51;
		resultado2 = resultado * 0.32;
		isr = resultado2 + 17575.69;
    
    } else if (sueldo >= 38177.70 && sueldo <= 72887.50) {
    	
    	resultado = sueldo - 38177.70;
		resultado2 = resultado * 0.30;
		isr = resultado2 + 7162.74;
    
    } else if (sueldo >= 24222.32 && sueldo <= 38177.69) {
    	
    	resultado = sueldo - 24222.32;
		resultado2 = resultado * 0.2352;
		isr = resultado2 + 3880.44;
    
    } else if (sueldo >= 12009.95 && sueldo <= 24222.31) {
    	
    	resultado = sueldo - 12009.95;
		resultado2 = resultado * 0.2136;
		isr = resultado2 + 1271.87;
    
    } else if (sueldo >= 10031.08 && sueldo <= 12009.94) {
    	
    	resultado = sueldo - 10031.08;
		resultado2 = resultado * 0.1792;
		isr = resultado2 + 917.26;
    
    } else if (sueldo >= 8629.21 && sueldo <= 10031.07) {
    	
    	resultado = sueldo - 8629.21;
		resultado2 = resultado * 0.16;
		isr = resultado2 + 692.96;
    
    } else if (sueldo >= 4910.19 && sueldo <= 8629.20) {
    	
    	resultado = sueldo-4910.19;
		resultado2 = resultado*0.1088;
		isr= resultado2 + 288.33;
	
    } else if (sueldo >= 578.53 && sueldo <= 4910.18) {
    	
    	resultado = sueldo - 578.53;
		resultado2 = resultado * 0.064;
		isr = resultado2 + 11.11;
    
    } else if (sueldo >= 0.01 && sueldo <= 578.52) {
    	
    	resultado = sueldo - 0.01;
		resultado2 = resultado * 0.0192;
		isr = resultado2 + 0.00;
    
    } else {
    	
    	cout << "\n\tSu sueldo excede la cantidad calculable de isr y es necesario realizarlo a mano" << endl;
    
    }
	return isr;
}

// funcion para calcular el imss

double cuotaImss(double sueldo, double cuotap, double gastosm, double gastosin){
	
	double imss = 0.0, UMA = 123.22, DiasLabor = 30.0, SDI = 0.0, CAO = 0.0;
	
	if (sueldo >= 291550.01 && sueldo <= 100000000000) {
			
			SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
			
    } else if (sueldo >= 97183.34 && sueldo <= 291550.00) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
		
    } else if (sueldo >= 72887.51 && sueldo <= 97183.33) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
    
    } else if (sueldo >= 38177.70 && sueldo <= 72887.50) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
    
    } else if (sueldo >= 24222.32 && sueldo <= 38177.69) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
    
    } else if (sueldo >= 12009.95 && sueldo <= 24222.31) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
    
    } else if (sueldo >= 10031.08 && sueldo <= 12009.94) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
    
    } else if (sueldo >= 8629.21 && sueldo <= 10031.07) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
    
    } else if (sueldo >= 4910.19 && sueldo <= 8629.20) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
	
    } else if (sueldo >= 578.53 && sueldo <= 4910.18) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
    
    } else if (sueldo >= 0.01 && sueldo <= 578.52) {
    	
    	SDI = sueldo / DiasLabor;
			CAO = SDI -UMA * 3.0 * DiasLabor * 0.011;
			if(CAO <= 0){
				CAO = 0;
			}
			cuotap = SDI * DiasLabor * 0.25 / 100.0;
			gastosm = SDI * DiasLabor * 0.375 / 100.0;
			gastosin = SDI * DiasLabor * 0.625 / 100.0;
			imss = CAO + cuotap + gastosm + gastosin;
    
    } else {
    	
    	cout << "\n\tSu sueldo excede la cantidad calculable de isr y es necesario realizarlo a mano" << endl;
    
    }
	return imss;
		
}

// funcion que recopila los datos optenidos en las operaciones

void imprimir_datos(double sueldo, double isr, double imss){

	double neto = sueldo - isr - imss;
		
		cout<<"\t\t\tRetencion ISR.................."<<isr<<endl;
		
		cout<<"\n\t\t\tRetencion IMSS................."<<imss<<endl;
		
		cout<<"\t\t\tRetencion SUELDO NETO........."<<neto<<endl;
	
}
		
int main(){
	// Definimos las variables
					
	double sueldo = 0, isr = 0, imss = 0, cuotap = 0, gastosm = 0, gastosin = 0;
	
	string nombre = "";
	
	int opcion = 6;
	
	system("Title calcula Nomina" );
	
	while (opcion != 0) {
        cout << "\n\n\t\t\t\tMenu\n";
        cout << "\n\t\t1.- Ingresar datos del usuario.\n";
        cout << "\t\t2.- Ver banda salarial del usuario.\n";
        cout << "\t\t3.- Ver las cuotas de impuestos del usuario.\n";
        cout << "\t\t0.- Salir del programa\n";
        cout << "\n\t\tIngrese la opcion que desea realizar: ";
        cin >> opcion;
        system("cls");

        switch (opcion) {
            case 1:
                leer_datos(sueldo, nombre, cuotap, gastosm, gastosin);
                break;
            case 2:
                bandasalarial(sueldo);
                system("pause");
                break;
            case 3:
                isr = calcuIsr(sueldo);
                imss = cuotaImss(sueldo, cuotap, gastosm, gastosin);
                imprimir_datos(sueldo, isr, imss);
                system("pause");
                break;
            case 0:
                break;
            default:
                	cout << "\n\t\tOpcion invalida. Por favor, ingrese una opcion valida.\n";
                break;
        }
        system("cls");
    }
	system("cls");
	//mesnaje de salida o despedida para el usuario
		cout<<"\n\t\t\tGRACIAS POR UTILIZAR ESTE PROGRAMA"<<"\n\n"<<"\tThis program was developed by the developer Jhonatan Espinal Garcia"<<"\n\n\t\t"<<"all rights of use and distribution are reserved\n\n\n\n";
	system("pause");
	return 0;
}
