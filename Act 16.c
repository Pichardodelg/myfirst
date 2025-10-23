/* A partir del ejemplo del código del archivo PDF, definir con struct, y declarar un arreglo
    de estructuras con datos Nombre, Apellido, Edad, Sexo, Temperatura, hacer:
    1. Solicitar el número de pacientes, guardar (Leer) la información de estos pacientes.
    2. Mostrar en pantalla la información almacenada
    3. Solicitar al usuario si desea modificar algún dato
    4.1 en consecuencia modificar un dato en especifico
    5. Volver a mostrar en pantalla la estructura con los campos modificados
    6. permitir al usuario salir o permanecer en el programa */
#include<stdio.h>
#define MAXCAR 256
#define MAXPACIENTE 100
typedef char Cadena[MAXCAR];

typedef struct {
    Cadena nombre;
    Cadena apellido;
    int edad;
    char sexo;
    float temperatura;
} Paciente;
typedef Paciente Hospital[MAXPACIENTE];

Paciente leePaciente(){
    Paciente p;
    printf("Escriba H o M para el sexo: ");
    scanf("%c",&p.sexo);
    fflush(stdin);
    printf("escriba el nombre: ");
    scanf("%s",p.nombre);
    printf("escriba el apellido: ");
    scanf("%s",p.apellido);
    printf("escriba la edad: ");
    scanf("%d",&p.edad);
    printf("escriba la temperatura: ");
    scanf("%f",&p.temperatura);
return p;
}

void main(void){
    Hospital usp;
    int num,i;

    printf("Introduzca el número de pacientes: ");
    scanf("%d",&num);

    for(i=0;i<num;i++){
        usp[i]=leePaciente();
    }
}
