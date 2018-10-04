#ifndef UTN_BIBLIOTECA_H_INCLUDED
#define UTN_BIBLIOTECA_H_INCLUDED


int utn_getString(char* pBuffer, int limite);
int utn_getFloat(  float* pFloat,int tamano, char* msg, char* msgErr, int reintentos);
int utn_getInt(int* pEntero,int tamano, char* msg, char* msgErr, int reintentos);
int utn_getNombre(char* pNombre,int tamano, char* msg, char* msgErr, int reintentos);

int utn_isValidFloat(char* pBuffer , int limite);
int utn_isValidInt(char* pBuffer , int limite);
int utn_isValidNombre(char* pBuffer , int limite);
int utn_getNextId();


#endif // UTN_BIBLIOTECA_H_INCLUDED
