#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"
#include <string.h>
/****************************************************
    Menu:
        1. Parse del archivo data.csv
        2. Listar Empleados
        3. Ordenar por nombre
        4. Agregar un elemento
        5. Elimina un elemento
        6. Listar Empleados (Desde/Hasta)
*****************************************************/


int main()
{
    int aux;
    int i;
    int id,estado;
    char nombre[20],apellido[20],boole[20];
    ArrayList *lista;
    //hacer un malloc para que apunte a una direccion de memoria.keep.
    lista=al_newArrayList();//le pide memoria para usar el arraylist

    FILE *pdata;

    pdata=fopen("data.csv","r");

    if(pdata==NULL)
    {
        printf("El archivo no pudo ser leido.\n");
        exit(1);
    }

    do
    {
        int r;
        r=fscanf(pdata,"%d,%s,%s,%s\n",&id,nombre,apellido,boole);
        if(r==4)
        {


        printf("%d %s %s %s ",id,nombre,apellido,boole);
        break;
        }

    }while(!feof(pdata));

    fclose(pdata);



    return 0;
}
