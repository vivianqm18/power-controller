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
   

int opcion = 1;
char temp[10];
int res;
int wlav=1500;
int hora;
int wTv=250;
int wNv=500;
int wAirfrayer=100;
int wCompu=150;
int wLicuadora=180;
int wAireacon=200;
int wArrocera=190;
int wBombilla=100;
int wParlante=120;




   while(opcion) {

    printf("\nSelecciona tus electrodomesticos: \n");
        printf("[1]Lavadora \n");
        printf("[2]Televisor \n");
        printf("[3]Nevera \n");
        printf("[4]Air Frayer \n");
        printf("[5]Computador \n");
        printf("[6]Licuadora \n");
        printf("[7]Aire acondicionado \n");
        printf("[8]Arrocera \n");
        printf("[9]Bombilla \n");
        printf("[10]Parlante \n");
        printf("[11]Salir del programa \n");
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
          printf("introduzca el numero de horas de la Air Frayer :");
          scanf("%d",&hora);
          res=wAirfrayer*hora;
          printf("el total de watts de la Air Frayer es :%d",res);
       
           break;
           
        case 5:
          printf("introduzca el numero de horas de usado del computador :");
          scanf("%d",&hora);
          res=wCompu*hora;
          printf("el total de watts del computador es :%d",res);
            break;
       
        case 6:
          printf("introduzca el numero de horas de usado de la licuadora :");
          scanf("%d",&hora);
          res=wLicuadora*hora;
          printf("el total de watts de la licuadora es :%d",res);
            break;
       
        case 7:
          printf("introduzca el numero de horas de usado del aire acondicionado :");
          scanf("%d",&hora);
          res=wAireacon*hora;
          printf("el total de watts del aire acondicionado es :%d",res);
            break;
            
        case 8:
          printf("introduzca el numero de horas de usado de la arrocera :");
          scanf("%d",&hora);
          res=wArrocera*hora;
          printf("el total de watts de la arrocera es :%d",res);
            break;
            
        case 9:
          printf("introduzca el numero de horas de usado de la bombilla es :");
          scanf("%d",&hora);
          res=wBombilla*hora;
          printf("el total de watts de la bombilla es :%d",res);
            break;
            
        case 10:
          printf("introduzca el numero de horas de usado del parlante :");
          scanf("%d",&hora);
          res=wParlante*hora;
          printf("el total de watts del parlante es :%d",res);
            break;
            
        case 11:
          printf("Saliendo del programa...");
          opcion=0;
            break;
            
        default:
        printf("Opcion incorrecta \n");
        break;
       
       
    }
   
    }
    return 0;

}
