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

    getchar();
    printf("\nIngrese los siguientes datos:");
    printf("\nEscriba M (masculino) o F (femenino) para el sexo: ");
    scanf(" %c",&p.sexo);
    fflush(stdin);
    printf("Nombre: ");
    scanf("%s",p.nombre);
    printf("Apellido: ");
    scanf("%s",p.apellido);
    printf("Edad: ");
    scanf("%d",&p.edad);
    printf("Temperatura: ");
    scanf("%f",&p.temperatura);
return p;
}

int main()
 {
    char centinela = 'n';
    int num=0;

    do
    {
      int opc, i, j, k, h, elec;
      int registro = 0;
      Hospital usp;

      printf("\nMenu. \n");
      printf("----------------------------------- \n");
      printf("1. Registrar paciente.\n");
      printf("2. Datos registrados.\n");
      printf("3. Modificar algun registro. \n");
      printf("4. Salir\n");
      printf("   Elige una opcion: ");
      scanf("%d",&opc);
      switch (opc)
      {
      case 1:
        printf("\n1. Cuantos pacientes desea registrar: ");
        scanf("%i",&num);
            for(i=0;i<num;i++){
                printf("\n\nRegistro %d de %d.",i+1,num);
                usp[i]=leePaciente();
            }

        break;
      case 2:
        printf("\n2. Visualizar registros: ");
        printf("\n--------------------------");
            for(i=0; i<num;i++){
                printf("\nNumero de registro %d.\n",i+1);
                printf("Nombre \t%s %s\n",usp[i].nombre,usp[i].apellido);
                printf("Sexo \t%c\n",usp[i].sexo);
                printf("Edad \t%d\n",usp[i].edad);
                printf("Temp \t%0.2f\n",usp[i].temperatura);
            }

        break;
      case 3:

        printf("\n3. Modificar algun registro: ");
        printf("\n--------------------------");
            for(i=0; i<num;i++){
                printf("\nREGISTRO NO. %d.",i+1);
                printf("\nNombre \t%s %s\n",usp[i].nombre,usp[i].apellido);
                printf("Sexo \t%c\n",usp[i].sexo);
                printf("Edad \t%d\n",usp[i].edad);
                printf("Temp \t%0.2f\n",usp[i].temperatura);
            }
        printf("\nCual registro desea modificar [1 al %d]: ",num);
        scanf("%d",&registro);
            registro = registro-1;

        printf("\nDel registro %d cual elemento deseas modificar:",registro+1);
        printf("\n\t1. Nombre\n\t2. Apellido\n\t3. Sexo\n\t4. Edad\n\t5. Temperatura.");
        printf("\nSelecciona una opcion: ");
        scanf("%d",&elec);
        if (num == 0){
            printf("\nNo se ha realizado ningun registro. ");
        }else {
            switch(elec){
                case 1:
                    printf("\nNuevo nombre: ");
                    scanf("%s",usp[registro].nombre);
                break;
                case 2:
                    printf("\nNuevo apellido: ");
                    scanf("%s",usp[registro].apellido);
                break;
                case 3:
                    printf("\nNuevo sexo: ");
                    scanf(" %c",&usp[registro].sexo);
                break;
                case 4:
                    printf("\nNueva edad: ");
                    scanf("%d",&usp[registro].edad);
                break;
                case 5:
                    printf("\nNueva temperatura: ");
                    scanf("%f",&usp[registro].temperatura);
                break;
                default:
                    printf("\nOpcion no valida");
            }
        }

        break; //fin del caso 3

      default:
        printf("\nSaliendo del programa.\n");
        break;
      }

      printf("\n\nDeseas volver al menu. - s/n - \n");
      scanf(" %c",&centinela);
    } while (centinela== 's' || centinela=='S');

 } //Fin del Main principal
