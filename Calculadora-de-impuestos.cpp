#include <iostream>
#include <string>
using namespace std;

// Definición de funciones
void leer_datos(string &nombre, double &sueldo);
void imprimir_datos(double imss, double isr, double sueldoBruto);
double sueldo, sueldoBruto, sueldoneto, salarioDiarioIntegrado, cuotaAdicionalObrero, cuotaPorPrestamo, gastosMedicos, gastoPorInvalidez, imss, isr;
const float UMA = 123.22;
const int DIAS_LABORADOS = 30;

int main() {
    // Variables
    string nombre = "";
    

    // Llamada a las funciones
    leer_datos(nombre, sueldo);

    // Cálculos
    sueldoBruto = sueldo;
    sueldoBruto = sueldoneto;
    salarioDiarioIntegrado = sueldoBruto / DIAS_LABORADOS;

    // Calcular Cuota Adicional Obrero
    cuotaAdicionalObrero = (salarioDiarioIntegrado - UMA * 3) * DIAS_LABORADOS * 0.011;
    if (cuotaAdicionalObrero < 0) {
        cuotaAdicionalObrero = 0;
    }

    // Calcular Cuota por Préstamo
    cuotaPorPrestamo = (salarioDiarioIntegrado * DIAS_LABORADOS * 0.25) / 100;

    // Calcular Gastos Médicos
    gastosMedicos = (salarioDiarioIntegrado * DIAS_LABORADOS * 0.375) / 100;

    // Calcular Gasto por Invalidez
    gastoPorInvalidez = (salarioDiarioIntegrado * DIAS_LABORADOS * 0.625) / 100;

    // Calcular IMSS
    imss = cuotaAdicionalObrero + cuotaPorPrestamo + gastosMedicos + gastoPorInvalidez;

    // Calcular ISR
    isr = sueldoBruto * 0.03 + sueldoBruto * 0.01;

    // Mostrar resultados
    imprimir_datos(imss, isr, sueldoBruto);

    return 0;
}

void leer_datos(string &nombre, double &sueldo) {
    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nombre);
    cout << "Ingrese el sueldo del empleado: ";
    cin >> sueldo;
}
						
// funcion que recopila los datos optenidos enlas operaciones
					
	void imprimir_datos(double imss,double sueldoBruto,double isr){

		
		double sueldoNeto = sueldoBruto - imss - isr;
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
		
		// Mostrar resultados
	    cout<<"\n\t\t\tCuota Adicional Obrero........" << cuotaAdicionalObrero << endl;
	    cout<<"\t\t\tCuota por Préstamo: $" << cuotaPorPrestamo << endl;
	    cout<<"\t\t\tGastos Médicos:..............." << gastosMedicos << endl;
	    cout<<"\t\t\tGasto por Invalidez..........." << gastoPorInvalidez << endl;
	    cout<<"\t\t\tTotal rentencion IMSS........." << imss << endl;
		cout<<"\t\t\tRetencion ISR................."<<isr<<endl;
		cout<<"\t\t\tRetencion SUELDO NETO........."<<sueldoneto<<endl;
		//mesnaje de salida o despedida para el usuario
		cout<<"\n\t\t\tGRACIAS POR UTILIZAR ESTE PROGRAMA"<<"\n\n"<<"\tThis program was developed by the developer Jhonatan Espinal Garcia"<<"\n\n\t\t"<<"all rights of use and distribution are reserved\n\n\n\n";
	
	}
	