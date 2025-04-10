#include <stdio.h>
#include <string.h>

int main ()
{
    int opc1,cont = 0, len = 1, aux, opc2 = 0, noting = 0, nombing = 0, cont2 = 0, opc3 = 0;
    int notasreg[5] = {0,0,0,0,0};
    char materias [3][30] = {"Biologia", "Lenguaje", "Matematicas"};
    char nombres [5][30];
    float nota_bio[5] = {0,0,0,0,0};
    float nota_mate[5] = {0,0,0,0,0};
    float nota_leng[5] = {0,0,0,0,0};
    float promedio_final = 0;
    float nota_altobio = 0;
    float nota_altomate = 0;
    float nota_altoleng = 0;
    float nota_bajobio = 0;
    float nota_bajomate = 0;
    float nota_bajoleng = 0;


    do{
        printf("-----Menu-----\n");
        printf("1. Registrar nombres de estudiantes. \n");
        printf("2. Ingresar calificaciones. \n");
        printf("3. Calcular promedio general de estudiantes. \n");
        printf("4. Calcular promedio de materias. \n");
        printf("5. Ver aprobados y reprobados por asignatura. \n");
        printf("6. Ver Calificaciones altas y bajas. \n");
        printf("7. Salir. \n");
        printf("---------------------\n");
        printf("Seleccione una opcion: ");
        scanf("%d",&opc1);
        printf("---------------------\n");
        printf("\n");
        printf("\n");
        switch (opc1){
            case 1:
                cont = 1;
                len = 0;
                for (int i = 0; i<5 ; i++){
                    printf("Ingrese el nombre del estudiante %d: ", cont);
                    fflush(stdin);
                    fgets(nombres[i],30,stdin);
                    cont++;
            
                    len = strlen(nombres[i]) - 1;
                    nombres[i][len]='\0';
                    nombing++;
                }
                len = 0;
                printf("Nombres ingresados con exito.\n");
                break;

            case 2:
                
                if (nombing > 0){
                    do{ 
                        cont = 1;
                        printf ("#\tNombre\n");
                        for (int i = 0; i < 5; i++){
                            printf("%d\t%s\n",cont ,nombres[i]);
                            cont++;
                        }
                        printf("Seleccione el estudiante al que registrara la nota: ");
                        do {
                            scanf("%d", &aux);
                            if (aux < 1 || aux > 5){
                                printf("El numero de estudiante ingresado es invalido.\nIngrese nuevamente el numero del estudiante: ");
                            }
                        } while (aux < 1 || aux > 5);

                        if (aux > 0 && aux<=5){
                            aux--;
                            if (notasreg[aux] == 1){
                                printf("El estudiante %s ya tiene notas registradas.\n", nombres[aux]);
                                printf("Desea reingresar las notas del estudiante? \n 1. Si \n 2. No\n");
                                printf("Ingrese la opcion: ");
                                do {
                                    scanf("%d", &opc2);
                                    if (opc2 < 1 || opc2 > 2){
                                        printf("Opcion invalida. Ingrese nuevamente la opcion: ");
                                    }
                                } while (opc2 < 1 || opc2 > 2);

                                if (opc2 == 1){
                                    printf("\nIngrese la nota de Biologia del estudiante %s: ", nombres[aux]);
                                    do {
                                        scanf("%f", &nota_bio[aux]);
                                        if (nota_bio[aux]< 0.1 || nota_bio[aux] > 10){
                                            printf("\nLa nota no es valida. Debe ser entre 0.1 y 10. Ingrese nuevamente la nota: ");
                                        } 
                                    } while (nota_bio[aux]< 0.1 || nota_bio[aux] > 10);
                                    printf("\nIngrese la nota de Lenguaje del estudiante %s: ", nombres[aux]);
                                    do {
                                        scanf("%f", &nota_leng[aux]);
                                        if (nota_leng[aux]< 0.1 || nota_leng[aux] > 10){
                                            printf("\nLa nota no es valida. Debe ser entre 0.1 y 10. Ingrese nuevamente la nota: ");
                                        } 
                                    } while (nota_leng[aux]< 0.1 || nota_leng[aux] > 10);
                                    printf("\nIngrese la nota de Matematicas del estudiante %s: ", nombres[aux]);
                                    do {
                                        scanf("%f", &nota_mate[aux]);
                                        if (nota_mate[aux]< 0.1 || nota_mate[aux] > 10){
                                            printf("\nLa nota no es valida. Debe ser entre 0.1 y 10. Ingrese nuevamente la nota: ");
                                        } 
                                    } while (nota_mate[aux]< 0.1 || nota_mate[aux] > 10);
                                    notasreg[aux] = 1;
                                    printf("\nNotas del estudiante %s reingresadas con exito.\n", nombres[aux]);
                                } 

                            } else {
                                printf("\nIngrese la nota de Biologia del estudiante %s: ", nombres[aux]);
                                do {
                                    scanf("%f", &nota_bio[aux]);
                                    if (nota_bio[aux]< 0.1 || nota_bio[aux] > 10){
                                        printf("\nLa nota no es valida. Debe ser entre 0.1 y 10. Ingrese nuevamente la nota: ");
                                    } 
                                } while (nota_bio[aux]< 0.1 || nota_bio[aux] > 10);
                                printf("\nIngrese la nota de Lenguaje del estudiante %s: ", nombres[aux]);
                                do {
                                    scanf("%f", &nota_leng[aux]);
                                    if (nota_leng[aux]< 0.1 || nota_leng[aux] > 10){
                                        printf("\nLa nota no es valida. Debe ser entre 0.1 y 10. Ingrese nuevamente la nota: ");
                                    } 
                                } while (nota_leng[aux]< 0.1 || nota_leng[aux] > 10);
                                printf("\nIngrese la nota de Matematicas del estudiante %s: ", nombres[aux]);
                                do {
                                    scanf("%f", &nota_mate[aux]);
                                    if (nota_mate[aux]< 0.1 || nota_mate[aux] > 10){
                                        printf("\nLa nota no es valida. Debe ser entre 0.1 y 10. Ingrese nuevamente la nota: ");
                                    } 
                                } while (nota_mate[aux]< 0.1 || nota_mate[aux] > 10);
                                notasreg[aux] = 1;
                                printf("\nNotas del estudiante %s ingresadas con exito.\n", nombres[aux]);
                            }
                            
                            
                        } else {
                            printf("El numero de estudiante ingresado es invalido.\n Ingrese nuevamente el numero del estudiante\n");
                        }
                        

                        noting++;
                        opc2 = 0;
                        printf("Desea ingresar la nota de otro estudiante? \n 1. Si \n 2. No\n");
                        printf("Ingrese la opcion: ");
                        do {
                            scanf("%d", &opc2);
                            if (opc2 < 1 || opc2 > 2){
                                printf("Opcion invalida. Ingrese nuevamente la opcion: ");
                            }
                        } while (opc2 < 1 || opc2 > 2);
                    } while (opc2 == 1);
                    
                    printf("Notas ingresadas con exito.\n\n\n");

                } else {
                    printf("No hay estudiantes registrados\n\n\n");
                }

                break;

            case 3:
                
                if (nombing == 0){
                    printf("No hay estudiantes registrados.\n\n\n");
                } else {
                    if (noting == 0){
                        printf("No hay notas registradas.\n\n\n");
                    } else {
                        promedio_final = 0;
                        cont = 1;
                        printf("#\t\tNombre\t\tPromedio\n");
                        for (int i = 0; i < 5; i++){
                            if (notasreg[i] == 1){
                                promedio_final = (nota_bio[i] + nota_leng[i] + nota_mate[i]) / 3;
                                printf("%d\t\t%s\t\t%.2f\n",cont ,nombres[i], promedio_final);
                                
                            }
                            cont++;
                        }
                        
                    }
                }

                break;

            case 4:
                
                if (nombing == 0){
                    printf("No hay estudiantes registrados.\n\n\n");
                } else {
                    if (noting == 0){
                        printf("No hay notas registradas.\n\n\n");
                    } else {
                        do {
                            printf("#\tMateria\n");
                            cont = 1;
                            for (int i = 0; i < 3; i++){
                                printf("%d\t%s\n",cont ,materias[i]);
                                cont++;
                            }
                            printf("Elija la materia para ver el promedio de calificaciones grupal: ");
                            do {
                                scanf("%d", &aux);
                                if (aux < 1 || aux > 3){
                                    printf("El numero de materia ingresado es invalido.\nIngrese nuevamente el numero de la materia: ");
                                }
                            } while (aux < 1 || aux > 3);
                            aux--;
                            cont = 1;
                            cont2 = 0;
                            printf("\nPromedio de %s\n", materias[aux]);
                            printf("#\tNombre\tNota\n");
                            promedio_final = 0;
                            for (int i = 0; i < 5; i++){
                                if (notasreg[i] == 1){
                                    if (aux == 0){
                                        printf("%d\t%s\t%.2f\n",cont ,nombres[i], nota_bio[i]);
                                    } else if (aux == 1){
                                        printf("%d\t%s\t%.2f\n",cont ,nombres[i], nota_leng[i]);
                                    } else if (aux == 2){
                                        printf("%d\t%s\t%.2f\n",cont ,nombres[i], nota_mate[i]);
                                    }
                                    cont2++;
                                }
                                cont++;
                            }
                            printf("El promedio de la materia de %s es: ", materias[aux]);
                            for (int i = 0; i < 5; i++){
                                if (notasreg[i] == 1){
                                    if (aux == 0){
                                        promedio_final += nota_bio[i];
                                    } else if (aux == 1){
                                        promedio_final += nota_leng[i];
                                    } else if (aux == 2){
                                        promedio_final += nota_mate[i];
                                    }
                                }
                            }
                            promedio_final = promedio_final / cont2;
                            printf("%.2f\n", promedio_final);
                            printf("\n");
                            printf("Desea ver el promedio de otra materia? \n 1. Si \n 2. No\n");
                            printf("Ingrese la opcion: ");
                            do {
                                scanf("%d", &opc2);
                                if (opc2 < 1 || opc2 > 2){
                                    printf("Opcion invalida. Ingrese nuevamente la opcion: ");
                                }
                            } while (opc2 < 1 || opc2 > 2);
                        } while (opc2 == 1);
                    }
                }

                break;

            case 5:
                
                if (nombing == 0){
                    printf("No hay estudiantes registrados.\n\n\n");
                } else {
                    if (noting == 0){
                        printf("No hay notas registradas.\n\n\n");
                    } else {
                        do {
                            do {
                                printf("#\tMateria\n");
                                cont = 1;
                                for (int i = 0; i < 3; i++){
                                    printf("%d\t%s\n",cont ,materias[i]);
                                    cont++;
                                }
                                printf("Elija la materia para ver los aprobados y reprobados: ");
                                do {
                                    scanf("%d", &aux);
                                    if (aux < 1 || aux > 3){
                                        printf("El numero de materia ingresado es invalido.\nIngrese nuevamente el numero de la materia: ");
                                    }
                                } while (aux < 1 || aux > 3);
                            } while (aux < 1 || aux > 3);
                            printf("\n\n");
                            printf("Aprobados y reprobados de %s\n\n", materias[aux]);
                            aux--;
                            cont = 1;
                            printf("#\tNombre\t\t\t\tEstado\n");
                            for (int i = 0; i < 5; i++){
                                if (notasreg[i] == 1){
                                    if (aux == 0){
                                        if (nota_bio[i] >= 6.0){
                                            printf("%d\t%s\t\t\tAprobado\n",cont ,nombres[i]);
                                        } else {
                                            printf("%d\t%s\t\t\tReprobado\n",cont ,nombres[i]);
                                        }
                                    } else if (aux == 1){
                                        if (nota_leng[i] >= 6.0){
                                            printf("%d\t%s\t\t\tAprobado\n",cont ,nombres[i]);
                                        } else {
                                            printf("%d\t%s\t\t\tReprobado\n",cont ,nombres[i]);
                                        }
                                    } else if (aux == 2){
                                        if (nota_mate[i] >= 6.0){
                                            printf("%d\t%s\t\t\tAprobado\n",cont ,nombres[i]);
                                        } else {
                                            printf("%d\t%s\t\t\tReprobado\n",cont ,nombres[i]);
                                        }
                                    }
                                }
                                cont++;

                            }
                            printf("\n");
                            printf("Desea ver los aprobados y reprobados de otra materia? \n 1. Si \n 2. No\n");
                            do {
                                scanf("%d", &opc2);
                                if (opc2 < 1 || opc2 > 2){
                                    printf("Opcion invalida. Ingrese nuevamente la opcion: ");
                                }
                            } while (opc2 < 1 || opc2 > 2);
                        } while (opc2 == 1);
                    }
                }

                break;

            case 6:
                do {
                    printf("Calificaciones altas y bajas\n\n");
                    printf("1. Por materia\n");
                    printf("2. Por estudiante\n");
                    printf("3. Salir\n");
                    printf("Seleccione una opcion: ");
                    do {
                        scanf("%d", &opc3);
                        if (opc3 < 1 || opc3 > 2){
                            printf("Opcion invalida. Ingrese nuevamente la opcion: ");
                        }
                    } while (opc3 < 1 || opc3 > 2);

                    switch (opc3){
                        case 1:
                            
                            if (nombing == 0){
                                printf("\n\n");
                                printf("No hay estudiantes registrados.\n\n\n");
                            } else if (noting == 0){
                                printf("\n\n");
                                printf("No hay notas registradas.\n\n\n");
                            } else {
                                printf("Calificaciones altas y bajas por materia\n\n");
                                printf("#\tMateria\t\tNota Alta\t\t\tEstudiante\t\t\tNota Baja\t\t\tEstudiante\n");
                                for (int i = 0; i < 3; i++){
                                    int id_alto = -1, id_bajo = -1;
                                    if (i == 0){
                                        nota_altobio = -1;
                                        nota_bajobio = 11;
                                        for (int j = 0; j < 5; j++){
                                            if (notasreg[j] == 1 && nota_bio[j] > 0){
                                                if (nota_bio[j] > nota_altobio){
                                                    nota_altobio = nota_bio[j];
                                                    id_alto = j;
                                                }
                                                if (nota_bio[j] < nota_bajobio){
                                                    nota_bajobio = nota_bio[j];
                                                    id_bajo = j;
                                                }
                                            }
                                        }
                                        if (id_alto != -1 && id_bajo != -1) {
                                            printf("%d\t%s\t%.2f\t\t\t\t>> %s\t\t\t\t%.2f\t\t\t\t>> %s\n", i+1, materias[i], nota_altobio, nombres[id_alto], nota_bajobio, nombres[id_bajo]);
                                        }
                                    } else if (i == 1){
                                        nota_altoleng = -1;
                                        nota_bajoleng = 11;
                                        for (int j = 0; j < 5; j++){
                                            if (notasreg[j] == 1 && nota_leng[j] > 0){
                                                if (nota_leng[j] > nota_altoleng){
                                                    nota_altoleng = nota_leng[j];
                                                    id_alto = j;
                                                }
                                                if (nota_leng[j] < nota_bajoleng){
                                                    nota_bajoleng = nota_leng[j];
                                                    id_bajo = j;
                                                }
                                            }
                                        }
                                        if (id_alto != -1 && id_bajo != -1) {
                                            printf("%d\t%s\t%.2f\t\t\t\t>> %s\t\t\t\t%.2f\t\t\t\t>> %s\n", i+1, materias[i], nota_altoleng, nombres[id_alto], nota_bajoleng, nombres[id_bajo]);
                                        }
                                    } else if (i == 2){
                                        nota_altomate = -1;
                                        nota_bajomate = 11;
                                        for (int j = 0; j < 5; j++){
                                            if (notasreg[j] == 1 && nota_mate[j] > 0){
                                                if (nota_mate[j] > nota_altomate){
                                                    nota_altomate = nota_mate[j];
                                                    id_alto = j;
                                                }
                                                if (nota_mate[j] < nota_bajomate){
                                                    nota_bajomate = nota_mate[j];
                                                    id_bajo = j;
                                                }
                                            }
                                        }
                                        if (id_alto != -1 && id_bajo != -1) {
                                            printf("%d\t%s\t%.2f\t\t\t\t>> %s\t\t\t\t%.2f\t\t\t\t>> %s\n", i+1, materias[i], nota_altomate, nombres[id_alto], nota_bajomate, nombres[id_bajo]);
                                        }
                                    }
                                }
                            }
                            break;
                            
                        case 2:
                            
    
                            if (nombing == 0){
                                printf("\n\n");
                                printf("No hay estudiantes registrados.\n\n\n");
                            } else if (noting == 0){
                                printf("\n\n");
                                printf("No hay notas registradas.\n\n\n");
                            } else {
                                printf("Calificaciones altas y bajas por estudiante\n\n");
                                printf("#\tNombre\t\t\tNota Mas Alta\t\t\tMateria Alta\t\tNota Mas Baja\t\t\tMateria Baja\n");
                                for (int i = 0; i < 5; i++) {
                                    if (notasreg[i] == 1) {
                                        float nota_alta = nota_bio[i];
                                        float nota_baja = nota_bio[i];
                                        char *materia_alta = materias[0];
                                        char *materia_baja = materias[0];
    
                                        if (nota_leng[i] > nota_alta) {
                                            nota_alta = nota_leng[i];
                                            materia_alta = materias[1];
                                        }
                                        if (nota_mate[i] > nota_alta) {
                                            nota_alta = nota_mate[i];
                                            materia_alta = materias[2];
                                        }
    
                                        if (nota_leng[i] < nota_baja) {
                                            nota_baja = nota_leng[i];
                                            materia_baja = materias[1];
                                        }
                                        if (nota_mate[i] < nota_baja) {
                                            nota_baja = nota_mate[i];
                                            materia_baja = materias[2];
                                        }
    
                                        printf("%d\t%s\t\t\t%.2f\t\t\t\t>> %s\t\t%.2f\t\t\t\t>> %s\n", i + 1, nombres[i], nota_alta, materia_alta, nota_baja, materia_baja);
                                    }
                                }
                            }
                            break;
                            
                        case 3:
                            printf("Saliendo del menu de calificaciones altas y bajas.\n\n\n");
                            break;
                        default:
                            printf("Opcion invalida. Ingrese nuevamente la opcion: ");
                            break;
                    }
                } while (opc3 < 1 || opc3 > 2);

                break;
            case 7:
                printf("Saliendo del programa.\n\n\n");
                break;

            default:
                printf("Opcion invalida. Ingrese nuevamente la opcion: ");
                break;
        }
        printf("\n\n");
    } while (opc1 != 7);

    return 0;
}
