#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{

    int retorno;
    Employee* e1=(Employee*)pEmployeeA;
    Employee* e2=(Employee*)pEmployeeB;
    retorno=-5;

    if(e1!=NULL && e2!=NULL)
    {
        retorno=stricmp(e1->name,e2->name);
    }
    return retorno;
}


void employee_print(Employee* this)
{
    printf("\n********\nId: %d  \nName: %s  \nLastname: %s  \nOcupado: %d",this->id,this->name,this->lastName,this->isEmpty);
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;
    //hacer malloc
    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


