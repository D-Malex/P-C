#ifndef ARCHIVOS_H_
#define ARCHIVOS_H_

#include "utils.h"
typedef char stringPath[MAX_PATH]; // String con tope maximo para rutas de archivos
typedef struct{
    stringPath ruta;
} Archivo;

void verificaArchivos(Archivo ar[], int cantArchivos);
char* crearPath();
void asignarPath(stringPath path, Archivo ar[], int cantArchivos);

#include "../Sources/Archivos.c"
#endif /* ARCHIVOS_H_*/

