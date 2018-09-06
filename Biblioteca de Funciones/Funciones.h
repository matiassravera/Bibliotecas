#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);
int utn_validarInt(int auxNumero,int min, int max);

int utn_validarChar(char auxDeLetra,char min , char max);
int utn_getChar(char* pLetra,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos);

int utn_validarFloat(float auxDeFloat,float min , float max);
int utn_getFloat(float* pNumeroFlotante,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos);

int sumaDeLosOperadores (int* pPrimerOperador, int* pSegundoOperador, int* pResultadoSumaDeLosOperadores);
int restaDeLosOperadores (int* pPrimerOperador, int* pSegundoOperador, int* pResultadoRestaDeLosOperadores);
int multiplicacionDeLosOperadores (int* pPrimerOperador, int* pSegundoOperador, int* pResultadomultiplicacionDeLosOperadores);
int divisionDeLosOperadores (int* pPrimerOperador, int* pSegundoOperador, float* pResultadoDivisionDeLosOperadores);
int factorialDelPrimerOperador(int* pPrimerOperador, long* pResultadoFactorialDelPrimerOperador);
int factorialDelSegundoOperador(int* pSegundoOperador, long* pResultadoFactorialDelSegundoOperador);

int retornarTotal(int listadoDeNotas[],int tamano);
int retornarPromedio(int listadoDeNotas[],int tamano);
void cargarListado(int listadoDeNotas[],int tamano);
int numeroMayor(int listadoDeNotas[], int tamano);
int numeroMenor(int listadoDeNotas[], int tamano);
int cantidadDePares(int listadoDeNotas[], int tamano);
void mostrarListado(int listadoDeNotas[], int tamano);
char * evaluarDesempeno(int listadoDeNotas[], int tamano);
void mostrarInformacionDeLaArray(int listadoDeNotas[],int tamano);

/*
void mostrarInformacionDelArray(int listado[],int tamanio)
*/

#endif // FUNCIONES_H_INCLUDED
