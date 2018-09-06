
#include <stdio_ext.h>
#include <stdlib.h>


/**
*\brief le paso por parametro un  numero que tome con la funcion getNumero y verifico si es un numero valido.
*\param auxNumero , es el numero a evaluar si es correcto.
*\param min , es el numero minimo que aceptamos como parametro
*\param max , es el numero maximo que  acpetamos como parametro
*\return retorna 0 si esta todo bien , -1 si hubo error
*/
int utn_validarInt(int auxNumero,int min , int max){
    int retorno=0;
    if(auxNumero<min || auxNumero>max){
        retorno=-1;
    }
    return retorno;
}
/**
*\brief toma un numero , verifica si es un numero y si es valido , si no es valido  tiene 3 intentos  y sale de la funcion.
*\param pResultado , es un puntero a una variable .
*\param mensaje, mensaje para  indicar que debe ingresar  un numero.
*\param mensajeError , es el mensaje  que aparece i hay un error.
*\param minimo, es el  minimo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param max , es el  maximo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param reintentos , es  el numero de intentos que va a tener  el usuario para equivocarnos.
*\return retorna 0 si esta todo bien , -1 si hubo error.
*/
int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos){
    int retorno=0;
    int auxNumero;
    do{
        __fpurge(stdin);
        printf("%s \n",mensaje);
        if(scanf("%d",&auxNumero)!=1 || utn_validarInt(auxNumero,minimo,maximo)!=0){
            system("clear");
            printf("%s\n",mensajeError);
            reintentos--;
        }else{
            *pResultado=auxNumero;
            break;
        }
        if(reintentos==0){
            system("clear");
            printf("Pasaste el limite de intentos, ADIOS.");
            retorno=-1;
        }
    }while(reintentos>0);
    return retorno;
}
/**
*\brief le paso por parametro una  letra que tome con la funcion getLetra y verifico si es una letra valido.
*\param auxLetra , es la letra a evaluar si es correcta.
*\param min , es la letra minima que aceptamos como parametro
*\param max , es la letra maxima que  acpetamos como parametro
*\return retorna 0 si esta todo bien , -1 si hubo error
*/
int utn_validarChar(char auxDeLetra,char min , char max){
    int retorno=0;
    if(auxDeLetra<min || auxDeLetra>max){
        retorno=-1;
    }
    return retorno;
}
/**
*\brief toma una letra , verifica si es una letra y si es valida , si no es valida tiene 3 intentos  y sale de la funcion.
*\param pLetra , es un puntero a una variable . //seguir aca
*\param mensaje, mensaje para  indicar que debe ingresar  un numero.
*\param mensajeError , es el mensaje  que aparece i hay un error.
*\param minimo, es el  minimo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param max , es el  maximo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param reintentos , es  el numero de intentos que va a tener  el usuario para equivocarnos.
*\return retorna 0 si esta todo bien , -1 si hubo error.
*/
int utn_getChar(char* pLetra,char* mensaje,char* mensajeError,char minimo,char maximo,int reintentos){
    int retorno=0;
    char auxDeLetra;
    do{
        __fpurge(stdin);
        printf("%s \n",mensaje);
        if(scanf("%c",&auxDeLetra)!=1 || utn_validarInt(auxDeLetra,minimo,maximo)!=0){
            system("clear");
            printf("%s\n",mensajeError);
            reintentos--;
        }else{
            *pLetra=auxDeLetra;
            break;
        }
        if(reintentos==0){
            system("clear");
            printf("Pasaste el limite de intentos, ADIOS.");
            retorno=-1;
        }
    }while(reintentos>0);
    return retorno;
}

/**
*\brief le paso por parametro un numero con coma que tome con la funcion getFloat y verifico si es un numero con coma valido.
*\param auxDeFloat, es la letra a evaluar si es correcta.
*\param min , es la letra minima que aceptamos como parametro
*\param max , es la letra maxima que  acpetamos como parametro
*\return retorna 0 si esta todo bien , -1 si hubo error
*/


int utn_validarFloat(float auxDeFloat,float min , float max){
    float retorno=0;
    if(auxDeFloat<min || auxDeFloat>max){
        retorno=-1;
    }
    return retorno;
}

/**
*\brief toma un numero , verifica si es un numero con coma y si es valido , si no es valido  tiene 3 intentos  y sale de la funcion.
*\param pResultado , es un puntero a una variable .
*\param mensaje, mensaje para  indicar que debe ingresar  un numero.
*\param mensajeError , es el mensaje  que aparece i hay un error.
*\param minimo, es el  minimo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param max , es el  maximo numero que vamos a permitir que se lo pasaremos a la funcion validarNumero.
*\param reintentos , es  el numero de intentos que va a tener  el usuario para equivocarnos.
*\return retorna 0 si esta todo bien , -1 si hubo error.
*/


int utn_getFloat(float* pNumeroFlotante,char* mensaje,char* mensajeError,float minimo,float maximo,int reintentos){
    int retorno=0;
    float auxDeFloat;
    do{
        __fpurge(stdin);
        printf("%s \n",mensaje);
        if(scanf("%f",&auxDeFloat)!=1 || utn_validarFloat(auxDeFloat,minimo,maximo)!=0){
            system("clear");
            printf("%s\n",mensajeError);
            reintentos--;
        }else{
            *pNumeroFlotante=auxDeFloat;
            break;
        }
        if(reintentos==0){
            system("clear");
            printf("Pasaste el limite de intentos, ADIOS.");
            retorno=-1;
        }
    }while(reintentos>0);
    return retorno;
}


/**
*\brief Se toma por parametro 2 operadores que ya fueron verficados con anterioridad, y se realiza una suma de estos.
*\param pPrimerOperado: Primer numero verificado que se ultilizara para la suma.
*\param pSegundoOperador: Segundo numero verificado que se ultilizara para la suma.
*\param pResultadoSumaDeLosOperadores: Variable en el cual se almacena el valor de la suma.
*\return Retorna 0 si todo es correcto o -1 si hubo error.
*/

int sumaDeLosOperadores (int* pPrimerOperador, int* pSegundoOperador, int* pResultadoSumaDeLosOperadores)
{
    *pResultadoSumaDeLosOperadores = *pPrimerOperador + *pSegundoOperador;
    return 0;
}

/**
*\brief Se toma por parametro 2 operadores que ya fueron verficados con anterioridad, y se realiza una resta de estos.
*\param pPrimerOperado: Primer numero verificado que se ultilizara para la resta.
*\param pSegundoOperador: Segundo numero verificado que se ultilizara para la resta.
*\param pResultadoRestaDeLosOperadores: Variable en el cual se almacena el valor de la resta.
*\return Retorna 0 si todo es correcto o -1 si hubo error.
*/

int restaDeLosOperadores (int* pPrimerOperador, int* pSegundoOperador, int* pResultadoRestaDeLosOperadores)
{
    *pResultadoRestaDeLosOperadores = *pPrimerOperador - *pSegundoOperador;
    return 0;
}

/**
*\brief Se toma por parametro 2 operadores que ya fueron verficados con anterioridad, y se realiza una multiplicacion de estos.
*\param pPrimerOperado: Primer numero verificado que se ultilizara para la multiplicacion.
*\param pSegundoOperador: Segundo numero verificado que se ultilizara para la multiplicacion.
*\param pResultadoMultiplicacionDeLosOperadores: Variable en el cual se almacena el valor de la multiplicacion.
*\return Retorna 0 si todo es correcto o -1 si hubo error.
*/

int multiplicacionDeLosOperadores (int* pPrimerOperador, int* pSegundoOperador, int* pResultadomultiplicacionDeLosOperadores)
{
    *pResultadomultiplicacionDeLosOperadores = *pPrimerOperador * *pSegundoOperador;
    return 0;
}

/**
*\brief Se toma por parametro 2 operadores que ya fueron verficados con anterioridad, y se realiza una division de estos, en el caso que sea posible.
*\param pPrimerOperado: Primer numero verificado que se ultilizara para la division.
*\param pSegundoOperador: Segundo numero verificado que se ultilizara para la division.
*\param pResultadoDivisionDeLosOperadores: Variable en el cual se almacena el valor de la division.
*\return Retorna 0 si todo es correcto o -1 si se ingresa un 0 como divisor.
*/

int divisionDeLosOperadores (int* pPrimerOperador, int* pSegundoOperador, float* pResultadoDivisionDeLosOperadores)
{
    if (*pSegundoOperador !=0)
    {
		*pResultadoDivisionDeLosOperadores = (float)*pPrimerOperador / *pSegundoOperador;
		return 0;
    }
    return -1;
}

/**
*\brief Se toma por parametro un operador que ya fue verificado con anterioridad se y realiza el factorial del mismo, en el caso que sea posible.
*\param pPrimerOperador: Primer numero verificado que se ultilizara para obtener el factorial.
*\param pResultadoFactorialDelPrimerOperador: Variable en el cual se almacena el valor del resultado del factorial del primer operador ingresado.
*\return Retorna 0 si todo es correcto o retorna -1  si no se pudo realizar el factorial del valor ingresado.
*/

int factorialDelPrimerOperador(int* pPrimerOperador, long* pResultadoFactorialDelPrimerOperador)
{
    int primerNumeroIngresado;
    long valorParcialDelResultadoFactorial = 1;
    int i;
    primerNumeroIngresado = *pPrimerOperador;
    if(primerNumeroIngresado > 0)
    {
        for(i = primerNumeroIngresado; i >= 1; i--)
        {
            valorParcialDelResultadoFactorial = valorParcialDelResultadoFactorial*i;
            if(i==1)
            {
                *pResultadoFactorialDelPrimerOperador = valorParcialDelResultadoFactorial;
                valorParcialDelResultadoFactorial = 1;
            }
        }
    }
    else
    {
        return -1;
    }
    return 0;
}

/**
*\brief Se toma por parametro un operador que ya fue verificado con anterioridad se y realiza el factorial del mismo, en el caso que sea posible.
*\param pSegundoOperador: Segundo numero verificado que se ultilizara para obtener el factorial.
*\param pResultadoFactorialDelSegundoOperador: Variable en el cual se almacena el valor del resultado del factorial del segundo operador ingresado.
*\return Retorna 0 si todo es correcto o retorna -1  si no se pudo realizar el factorial del valor ingresado.
*/

int factorialDelSegundoOperador(int* pSegundoOperador, long* pResultadoFactorialDelSegundoOperador)
{
    int segundoNumeroIngresado;
    long valorParcialDelResultadoFactorial = 1;
    int i;
    segundoNumeroIngresado = *pSegundoOperador;
    if(segundoNumeroIngresado > 0)
    {
        for(i = segundoNumeroIngresado; i >= 1; i--)
        {
            valorParcialDelResultadoFactorial = valorParcialDelResultadoFactorial*i;
            if(i==1)
            {
                *pResultadoFactorialDelSegundoOperador = valorParcialDelResultadoFactorial;
                valorParcialDelResultadoFactorial = 1;
            }
        }
    }
    else
    {
        return -1;
    }
    return 0;
}


int cantidadDePares(int listadoDeNotas[], int tamano){
    int contadorDePares=0;
    for(int i=0;i<tamano;i++){
        if(listadoDeNotas[i]%2==0){
            contadorDePares++;
        }
    }
    return contadorDePares;
}


int numeroMayor(int listadoDeNotas[], int tamano){
    int numeroMayor;
    for(int i=0;i<tamano;i++){
        if(i==0 || listadoDeNotas[i]>numeroMayor){
            numeroMayor= listadoDeNotas[i];
        }
    }
    return numeroMayor;
}


int numeroMenor(int listadoDeNotas[], int tamano){
    int numeroMenor;
    for(int i=0;i<tamano;i++){
        if(i==0 || listadoDeNotas[i]<numeroMenor){
            numeroMenor= listadoDeNotas[i];
        }
    }
    return numeroMenor;
}


int retornarTotal(int listadoDeNotas[], int tamano){
    int sumaTotal=0;
    for(int i=0;i<tamano;i++){
        sumaTotal=sumaTotal+listadoDeNotas[i];
    }
    return sumaTotal;
}


int retornarPromedio(int listadoDeNotas[],int tamano){
    int suma;
    int promedio;
    suma=retornarTotal(listadoDeNotas,tamano);
    promedio=suma/tamano;
    return promedio;
}


void mostrarInformacionDeLaArray(int listadoDeNotas[],int tamano){
    for(int i= 0; i< tamano;i++){
        printf("\nEl elemento %d es : %d",i,listadoDeNotas[i]);
    }
}


void cargarListado(int listadoDeNotas[],int tamano){
    int numeroIngresado;
    for(int i=0;i<tamano;i++){
        printf("ingrese una nota: ");
        scanf("%d", &numeroIngresado);
        listadoDeNotas[i]=numeroIngresado;
    }
}


void mostrarListado(int listadoDeNotas[], int tamano){
    printf("\nEl numero mayor es %d",numeroMayor(listadoDeNotas,tamano));
    printf("\nEl numero menor es %d",numeroMenor(listadoDeNotas,tamano));
    printf("\nLa cantidad de pares es de %d", cantidadDePares(listadoDeNotas,tamano));
    printf("\nLa suma de todas las notas es %d", retornarTotal(listadoDeNotas,tamano));
    printf("\nEl promedio es %d", retornarPromedio(listadoDeNotas,tamano));
}


char * evaluarDesempeno(int listadoDeNotas[], int tamano){
    int aprobado=0;
    int desaprobado=0;
    int seVaAFinal=0;
    char retorno[100];
    for(int i=0;i<tamano;i++){

        if(listadoDeNotas[i]>=6){
            aprobado++;
        }else if(listadoDeNotas[i]>=4 &&listadoDeNotas[i]<=5){
            seVaAFinal++;
        }else if(listadoDeNotas[i]>=1 && listadoDeNotas[i]<=3){
            desaprobado++;
        }
    }
    strcpy(retorno,"%d alumnos aprobaron , %d  alumnos se van a final y %d alumnos desaprobaron.",aprobado,desaprobado,seVaAFinal);/*
    retorno=;
*/
    return *retorno;
}


/*

void mostrarInformacionDelArray(int listado[],int tamanio)
{
    int mayor;
    int menor;
    int cantidadDePares;
    int total;
    int promedio;
    int aprobados;
    int aFinal;
    int desaprobados;
    mayor = retornoMayor(listado,tamanio);
    menor = retornoMenor(listado,tamanio);
    cantidadDePares = retornoCantidadDePares(listado,tamanio);
    total = retornoTotal(listado,tamanio);
    promedio = retornoPromedio(listado,tamanio);
    aprobados = retornarCantidadEntreNotas(listado,tamanio,6,10);
    aFinal = retornarCantidadEntreNotas(listado,tamanio,4,5);
    desaprobados = retornarCantidadEntreNotas(listado,tamanio,1,3);
    printf("\n\nLa mayor nota es: %d",mayor);
    printf("\n\nLa menor nota es: %d",menor);
    printf("\n\nLa cantidad de pares es: %d",cantidadDePares);
    printf("\n\nLa suma total de las notas es: %d",total);
    printf("\n\nEl promedio de las notas es: %d",promedio);
    printf("\n\nLa cantidad de aprobados es: %d",aprobados);
    printf("\n\nLa cantidad de gente a final es: %d",aFinal);
    printf("\n\nLa cantidad de desaprobados es: %d\n",desaprobados);
}

*/
