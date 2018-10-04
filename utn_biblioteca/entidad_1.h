#ifndef ENTIDAD_1_H_INCLUDED
#define ENTIDAD_1_H_INCLUDED

typedef struct
{
    int id;
    char valorChar1[51];
    char valorChar2[51];
    float valorFloat;
    int valorEntero;
    int isEmpty;


}sFantasma;

int UTN_addEmployee(Employee arrayDeEmployee[],int indice, int limiteDeArrayDeEmployee,int id, char* name,char* lastName,char* salary,char* sector);

int UTN_initEmployees(Employee arrayDeEmployee[],int indice, int limiteDeArrayDeEmployee);

int UTN_modificarEmployee(Employee arrayDeEmployee[], int indice, int limiteDeArrayDeEmployee, int idDePersonaAModificar);

int UTN_removeEmployee(Employee arrayDeEmployee[],int indice , int limiteDeArrayDeEmployee, int idDePersonaABorrar);

int UTN_sortEmployees(Employee arrayDeEmployee[], int limite , int indice);

int printEmployees(Employee arrayDeEmployee[],int indice, int limite);

int findEmployeeById(Employee arrayDeEmployee[],int indice, int limite,int id);

#endif // ENTIDAD_1_H_INCLUDED
