#include <stdio.h>

int main()
{
    int cedula;
    char nombre[20];
    char apellido[20];
    char otros [20];
    
    printf("Bienvenido a Power Controller \n");
    printf("Ingrese sus datos: \n");
    
    printf("Introduzca su nombre: ");
    scanf("%s",nombre);
    
    printf("Introduzca su apellido: ");
    scanf("%s",apellido);
    
    printf("Introduzca su cédula: \n");
    scanf("%d",&cedula);
    

int opcion;
char temp[10];
int res;
int wlav=1500;
int hora;
int wTv=250;
int wNv=500;
int otross;





    printf("Selecciona tus electrodomesticos: \n");
        printf("[1]Lavadora \n");
        printf("[2]Televisor \n");
        printf("[3]Nevera \n");
        printf("[4]Otros \n");
        scanf("%d",&opcion);
    
        switch(opcion){
            case 1:
          
          printf("introduzca el numero de horas de usado de la lavadora :");
          scanf("%d",&hora);
          res=wlav*hora;
          printf("el total de watts de la Lavadora es :%d",res);
          break;
        
            case 2:
        printf("introduzca el numero de horas de usado del televisor :");
          scanf("%d",&hora);
          res=wTv*hora;
          printf("el total de watts del televisor es :%d",res);
            break;
        
            case 3:
            printf("introduzca el numero de horas de usado de la nevera :");
          scanf("%d",&hora);
          res=wNv*hora;
          printf("el total de watts de la nevera es :%d",res);
        
            break;
        
            case 4:
            printf("introduzca el numero de horas de los otros :");
          scanf("%d",&hora);
          res=otross*hora;
          printf("el total de watts de los otros es :%d",res);
        
           break;
        
        
        default: 
        printf("Opcion incorrecta \n");
        break;
        
    }

        
        
        

    return 0;
}

