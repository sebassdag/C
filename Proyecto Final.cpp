#include <stdio.h>
#include <math.h>
main(){
	int  P1;
	printf("\nBienvenido a la Recopilacion de programas\n");
	printf("Usted debe introducir el numero que coincida con su programa en el directorio\n");
	
	printf("\nDIRECTORIO\n");
	
	printf("\nNumeros Ordenados [1]\n");
	printf("Formula Cuadratica [2]\n");
	printf("Clasificacion de Fechas [3]\n");
	printf("Fecha del dia siguiente [4]\n");
	printf("Lados de triangulos [5]\n");
	printf("numeros primos [6] \n ");
	printf("signos zodiacales[7] \n");
	printf("numeros perfectos [8] \n");
	printf("cambio de moneda [9] \n ");
	printf("convertor de litros[10]\n");
	printf("cuenta de banco[11] \n");
	printf("\nIntroduzca su numero: ");
	scanf("%i", &P1);
	
// *****************************************************************************
	
	if(P1==1){
		int a, b,c;
		
		printf("\n**** Numeros Ordenados ****\n");
		printf("Introduzca 3 numeros enteros: \n");
		scanf("\n %i %i %i", &a, &b, &c);
		
		if((a > b && a > c) && (b > c)){
		    printf("\n El numero mayor es: %i\n El numero del medio es: %i\n El numero menor es: %i\n", a, b, c);
		}
		if((b > a && b > c) && (a > c)){
		    printf("\n El numero mayor es: %i\n El numero del medio es: %i\n El numero menor es:  %i\n", b, a, c);
		}
		if((c > b && c > a) && (b > a)){
		    printf("\n El numero mayor es: %i\n El numero del medio es: %i\n El numero menor es:  %i\n", c, b, a);
		}
		if((a < b && a < c) && (b > c)){
		    printf("\n El numero mayor es: %i\n El numero del medio es: %i\n El numero menor es:  %i\n", b, c,a );
		}
		if((a > b && a > c) && (c > b)){
		    printf("\n El numero mayor es: %i\n El numero del medio es: %i\n El numero menor es:  %i\n", a, c, b);
		}
		if((c > b && c > a) && (a > b)){
		    printf("\n El numero mayor es: %i\n El numero del medio es: %i\n El numero menor es:  %i\n", c, a, b);
		}
	}
	
// *****************************************************************************
	
	else if(P1==2){
		float a, b, c, q1, q2;
		float x1, y1, z1, x2, y2, z2;
		
		printf("\n**** Formula Cuadratica ****\n");
		printf("Introduzca el valor de a, b, c\n" );
		scanf("%f",&a);
		scanf("%f",&b);
		scanf("%f",&c);
		printf("\n");
		printf("a = %.2f\n", a);
		printf("b = %.2f\n", b);
		printf("c = %.2f\n", c);
		printf("\n");
		if(a!=0){
	    // Bloque  X1
	    x1 = -(b);
	    y1 = sqrt((b*b)-(4*a*c));
	    z1 = 2*a;
	    q1 = (x1 + y1) / z1;
	    printf("X1 = %.2f\n", q1 );
	
	    // Bloque  X2
	    x2 = -(b);
	    y2 = sqrt((b*b)-(4*a*c));
	    z2 = 2*a;
	    q2 = (x1 - y1) / z1;
	    printf("X2 = %.2f\n", q2 );
	    
	    printf("En caso tal de que salgan codigos en su resultado, es porque sus valores introducidos no son correctos");
		}
		else{
		    printf("No da porque a vale 0");
		}
		}

// *****************************************************************************
	
	else if(P1==3){
		int nac, pre, edad;
	
		printf("\n**** Clasificacion de edades ****\n");
		printf("Introduzca el año que usted nacio ");
		scanf("%i",&nac);
		printf("Introduzca el año presente ");
		scanf("%i",&pre);
			
		edad = pre - nac;
		
		printf("\nSu edad es de: %i\n", edad);
		
		if(edad == 0 || edad <= 2){
	
			printf("\nUsted pertenece al rango de Bebes\n");
		}
		if(edad >= 3 && edad <= 11){
	
			printf("\nUsted pertenece al rango de Infantes\n");
		}
		if(edad >= 12 && edad <= 17){
	
			printf("\nUsted pertenece al rango de Jovenes\n");
		}
		if(edad >= 18 && edad <= 55){
	
			printf("\nUsted pertenece al rango de adultos\n");
		}
	}
	
// *****************************************************************************	

	else if(P1==4){
		//Variables
		int dia, mes, a, dia1, mes1, a1;
		
		
		printf("\n**** Fecha del Dia Siguiente ****\n");
		//Intrucciones
		
		
		printf("Introduzca solo los numeros de los dias, meses y años\n");
		printf ("\n");
		
		//Solicitud de datos	
		printf("Introduzca el dia: ");
		scanf("%i",&dia);
		printf("Intzoduzca el mes: ");
		scanf("%i",&mes);
		printf("Introduzca el año: ");
		scanf("%i",&a);
		
		// Resolucion de problema
		
		// Si son meses de 30
		if (dia <= 30 && (mes == 4 || mes == 2 || mes == 6 || mes == 9 || mes == 11)){
			if(dia == 30 || (dia == 28 && mes == 2)){
				mes1 = mes + 1;
				dia1 = 1;
				a1 = a;
			}
			else{
				dia1 = dia + 1;
				mes1 = mes;
				a1 = a;
			}
		}
		
		//Si son meses de 31
		if (dia < 32 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)){
			if(mes == 12 && dia == 31){
				dia1 = 1;
				mes1 = 1;
				a1 = a + 1;
			}
			else{
				mes1 = mes;
				dia1 = dia + 1;
				a1 = a;
			}
		}
		
		//Impresion de fechas
		printf("La fecha del dia siguiente sera el dia %i del mes %i del año %i", dia1, mes1, a1);
		}
	
// *****************************************************************************	
	
	else if(P1==5){
		int a ,b,c;  
	 
	 	printf("\n**** Lados de Triangulos ****\n");
		printf("\nIntroduce el lado 1: ");scanf("%i",&a);
		printf("Introduce el lado 2: ");scanf("%i",&b);
		printf("Introduce el lado 3: ");scanf("%i",&c); 
		 
		if(a==b && b==c) {
			printf("Equilatero\n"); }
		else if(a==b && b!=c || b==c && c!=a || c==a && a!=b) {
			printf("Isosceles\n"); }
		else{
			printf("Escaleno\n"); 
			}
	}

// *****************************************************************************
 else if (P1==6) { 
   int x=0;
    //Comienzo de for (hasta 50)
    for(x=0; x<=50; x++){
        if(((x%2!=0)&&(x%3!=0)&&(x%5!=0)&&(x%7!=0))|| (x==2 || x==3 || x==5 || x==7)) {
            printf("%i\n", x);
        }
    }
}
//*******************************************************************************
// Juego de Signos Zodiacales
  else if (P1==7){
  
// Variables
        int d, m, x;
//Instrucciones
for(x=0 ; x<=2 ; x++){
    puts("");
    printf ("Introduzca su dia de nacimiento: ");
    scanf ("%i", &d);
    printf ("Introduzca el numero de mes de su nacimiento: ");
    scanf ("%i", &m);

        if (d>0 && d<=31 && m>0 && m<=12) {
            if (m==1) {
                if (d>=1 && d<=18) {
                    printf ("Usted es de signo Sagitario");
                }
                else{
                    printf ("Usted es de signo Capricornio");
                }
            }

            if (m==2) {
                if(d>0 && d<=29){
                        if (d>=15 && d<=29) {
                            printf ("Usted es de signo Sagitario");
                        }
                        else{
                            printf ("Usted es de signo Ofiuco");
                        }
                }
                else{
                    printf ("Su día no existe en el mes correspondiente");
                }
            }

            if (m==3) {
                if (d>=1 && d<=11) {
                    printf ("Usted es de signo Acuario");
                }
                else{
                    printf ("Usted es de signo Piscis");
                }
            }

            if (m==4) {
                if(d>0 && d<=30){
                    if (d>=1 && d<=18) {
                        printf ("Usted es de signo Piscis");
                    }
                    else{
                        printf ("Usted es de signo Aries");
                    }
                }
            else{
                    printf ("Su día no existe en el mes correspondiente");
                }
            }

            if (m==5) {
                if (d>=1 && d<=13) {
                    printf ("Usted es de signo Aries");
                }
                else{
                    printf ("Usted es de signo Tauro");
                }
            }

            if (m==6) {
                if(d>0 && d<=30){
                    if (d>=1 && d<=19) {
                        printf ("Usted es de signo Tauro");
                    }
                    else{
                        printf ("Usted es de signo Géminis");
                    }
                }
                else{
                    printf ("Su día no existe en el mes correspondiente");
                }
                }

            if (m==7) {
                if (d>=1 && d<=20) {
                    printf ("Usted es de signo Géminis");
                }
                else{
                    printf ("Usted es de signo Cáncer");
                }
            }

            if (m==8) {
                if (d>=1 && d<=9) {
                    printf ("Usted es de signo Cáncer");
                }
                else{
                    printf ("Usted es de signo Leo");
                }
            }

            if (m==9) {
                if(d>0 && d<=30){
                    if (d>=1 && d<=15) {
                        printf ("Usted es de signo Leo");
                    }
                    else{
                        printf ("Usted es de signo Virgo");
                    }
                }
                else{
                    printf ("Su día no existe en el mes correspondiente");
                }
            }

            if (m==10) {
                if (d>=1 && d<=30) {
                    printf ("Usted es de signo Virgo");
                }
                else{
                    printf ("Usted es de signo Libra");
                }
            }

            if (m==11) {
                if(d>0 && d<=30){
                    if (d>=1 && d<=22) {
                        printf ("Usted es de signo Libra");
                    }
                    else if (d>22 && d<30) {
                        printf ("Usted es de signo Escorpio");
                    }
                    else if (d==30){
                        printf ("Usted es de signo Ofiuco");
                    }
                }
                else{
                    printf ("Su día no existe en el mes correspondiente");
                }
            }


            if (m==12) {
                if (d>=1 && d<=17) {
                    printf ("Usted es de signo Ofiuco");
                }
                else{
                    printf ("Usted es de signo Sagitario");
                }
            }
        }
        else{
    printf ("El día o el mes que usted introdujo no pertenece al calendario moderno");
    }
 } 
}
//***************************************************************************************
  else if (P1==8){
  
int n2 = 2, n3 = 3, n5 = 5, n7 = 7, n13 = 13;
int x1, x2, x3, x4, x5;

    x1 = (pow(2,(n2-1)))*(pow(2,n2)-1);
    printf("%i\n", x1);

    x2 = (pow(2,(n3-1)))*(pow(2,n3)-1);
    printf("%i\n", x2);

    x3 = (pow(2,(n5-1)))*(pow(2,n5)-1);
    printf("%i\n", x3);

    x4 = (pow(2,(n7-1)))*(pow(2,n7)-1);
    printf("%i\n", x4);

    x5 = (pow(2,(n13-1)))*(pow(2,n13)-1);
    printf("%i\n", x5);
}
//***************************************************************************
else if (P1==9){
	int a;
while (a<=3) {	
printf("\n 1)cambiar valor a euros\n");
printf(" 2)cambiar valor a yuan\n ");
printf(" 3)cambiar valor a pesos colombianos\n");
printf(" 4)salir\n");
printf("ingrese el numero de la opcion a realizar \n");
scanf("%i",&a);	

if(a==1){
	float res,b;
printf("ingrese el valor a cambiar\n");
scanf("%f",&b);
res=(b*0.91);
printf("su valor en euros es: %f \n",res);	
}
else if(a==2){
	float res,b;
printf("ingrese el valor a cambiar\n");
scanf("%f",&b);
res=(b*7.1234);
printf("su valor en euros es: %f \n",res);			
}
else if (a==3){
	float res,b;
printf("ingrese el valor a cambiar");
scanf("%f",&b);
res=(b*3.447);
printf("su valor en euros es: %f \n",res);	
}
}	
	
	
}
//*******************************************************************************
else if (P1==10){
 int a;
 while(a<=1){
 printf("1) diesel \n");
 printf("2) gasolina\n");
 scanf("%i",&a);

    if (a==1) {
     int b,r;
     printf("ingrese sus kilometros recorridos");
     scanf("%i",&b);
     r=b * 7 ;
    	    printf("su resultado es %i",&r);

	}
    

    if  (a==2){
      int b,r;
     printf("ingrese sus kilometros recorridos");
     scanf("%i",&b);
     r=b * 8   ;
         printf("su resultado es %i",&r);

    }
 }	
	
}
//*****************************************************************************
else if (P1==11){
	int a;
    printf("1) consultar saldo\n");
    printf("2) ingresar dinero\n");
    printf("3) retirar dinero\n");
    scanf("%i",&a);
 
 if(a==1){
     printf("en su centa tiene la cantidad de 50$ \n");       
 }
 else if (a==2) {
 	int b,r;
 	printf("escriba la cantidad de dinero a ingresar \n");
 	scanf("%i",&b);
 	r=(50 + b);
 	printf("su cuenta tiene un valor de v: %i \n",&r);
 }
 else if(a==3){
 	int c,res;
 	printf("ingrese la cantidad a retirar \n");
 	scanf("%i",&c);
 	 if(c>30){
 	 	printf("solo puede retirar maximo 30$ \n");
}
	
	     else  {
 	 	(res=(50 - c));
 	printf("su cuenta cuenta con \n %i",&res);
	  }	  
 }
}
	else{
		printf("El numero que usted introdujo no esta en el menu");
	}		

}
