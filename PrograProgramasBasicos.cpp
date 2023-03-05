#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include <cmath>
#include <sstream>
#include <iomanip>
using namespace std;
int main()
{
     int X,opcion;	
        cout << "---------ESCOGER UNA OPCION---------"<< endl; 
        cout << "1. Suma, Resta, Multiplicacion y Division de dos numeros" << endl;
        cout << "2. Determinar si un numero es par o impar" << endl;
        cout << "3. Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa" << endl;
        cout << "4. Determinar si una palabra o un número es palíndromo" << endl;
        cout << "5. Conversión de números arábigos a romanos" << endl;
        cout << "6. Conversion de numeros enteros a letras" << endl;
        cout << "7. Conversion de numeros enteros con decimal a letras" << endl;
        cout << "8. Una tabla de multiplicar " << endl;
        cout << "9. Todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "10. Crear de forma grafica la multiplicacion manual" << endl;
        cout << "11. Conversion de numeros decimales a binario" << endl;
        cout << "12. Conversion de numeros decimales a hexadecimales" << endl;
        cout << "13. Crear Figuras Geometricas Basicas" << endl;
        cout << "14. Mover un punto en toda la pantalla" << endl;
        cout << "15. Simulacion de un Cajero " << endl;
        cout << "16. Muestre la hipotenusa" << endl;
        cout << "17. Saber cuantos dias tienen los meses" << endl;
        cout << "18. Numeros de forma ascendente y descendente" << endl;
        cout << "19. Calcular Area de un Cubo" << endl;
        cout << "20. Calcular area de un triangulo" << endl;
        cout << "21. SALIR" << endl;
        cin>>X;
     switch(X)
     {
     	
    case 1:
	cout<<"Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
     {
	int num1, num2, suma, resta, multiplicacion;
	float division;
	
	printf("Ingrese el primer numero: \n ");
	scanf("%d", &num1);
	printf("Ingrese el segundo numero: \n ");
	scanf("%d", &num2);
	
	printf("La suma de los numeros es %d \n ", suma = num1 + num2);
	printf("La resta de los numeros es %d \n ", resta = num1 - num2);
	printf("La multiplicacion de los numeros es %d \n ", multiplicacion = num1 * num2);
	printf("La division de los numeros es %f \n ", division = num1 / num2);
	
	return 0;
	}

    case 2:
	cout<<"Determinar si un numero es par o impar"<<endl;
     {
 	int numero;
 	
 	cout<<"Ingrese un numero: \n";
 	cin>>numero;
 	cout<<"\n";
 	
 	if(numero%2 == 0){
 		cout<<"El numero es PAR";
	 }else{
	 	cout<<"El numero es IMPAR";
	 }
	 cout<<"\n";
	 return 0;
	 }
     
    case 3:
	cout<<"Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
     float km,mi, mts, in, lb, kg;

	int opc;  
	{  
	printf("Que desea convertir\n");  
	printf("1. kilometros a Millas\n2. Millas a Kilometros\n3. Metros a Pulgadas\n4. Pulgadas a Metros\n5. Libras a Kilos\n6. Kilos a Libras\n");  
	scanf("%d", &opc);  
	switch (opc){  

	case 1:  

		system("CLS");  
		printf("Escriba la cantidad de Kilometros que desea convertir\n");  
		scanf("%f", &km); 
		printf("%.f kilometros equivale a %.2f millas", km, (km*0.621371));  
		break;
		  
	case 2:  

		system("CLS");  
		printf("Escriba la cantidad de Millas que desea convertir\n");  
		scanf("%f", &mi); 
		printf("%.f Millas equivale a %.2f Kilometros", mi, (mi*1.60934));  
		break;
		
	case 3:  

		system("CLS");  
		printf("Escriba la cantidad de Metros que desea convertir\n");  
		scanf("%f", &mts);  
		printf("%.f Metros equivale a %.2f pulgadas", mts, (mts*39.3701));  
		break;  

	case 4:
		system("CLS");  
		printf("Escriba la cantidad de pulgadas que desea convertir\n");  
		scanf("%f", &in);  
		printf("%.f Pulgadas equivale a %.2f Metros", in, (in*0.0254));  
		break;
		
	case 5:  

		system("CLS");  
		printf("Escriba la cantidad de Libras que desea convertir\n");  
		scanf("%f", &lb);  
		printf("%.f Libras equivale a %.2f kilos", lb, (lb*0.45));  
		break;  	

	case 6:
		system("CLS");  
		printf("Escriba la cantidad de Kilos que desea convertir\n");  
		scanf("%f", &kg);  
		printf("%.f Kilos equivale a %.2f Libras", kg, (kg*2.20));  
		break;
	
		default:  
		system("CLS");  
		printf("Opcion invalida");  
		break;  
	}  

	getch();  

	return 0;  

	}
    case 4:
	cout<<"Determinar si una palabra o un número es palíndromo"<<endl; 
	{
    string palabra;
    int aux = 0, igual = 0;
    
    cout << "Ingrese una palabra, frase o Numero:: ";
    getline(cin >> ws, palabra);
    
    for(int ind = palabra.length() - 1; ind >= 0; ind--) {
        if(palabra[ind] == palabra[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(palabra.length() == igual) {
        cout << "La palabra o Numero ingresado es Palindromo. " << endl;
    } else {
        cout << "La palabra o Numero ingresado NO es Palindromo. " << endl;
    }
    
    return 0;
	}
    
	case 5:
	cout<<"Conversion de numeros arabigos a romanos"<<endl;
      {
 	int numero, unidades, decenas, centenas, millones;
 
 	cout<< "Ingrese un numero"<<endl;
 	cin>> numero;

 	/* "Como se realiza la operacion"
	   1615/10= cociente=161,residuo=5
	   161/10= cociente=16;residuo=1
	   16/10=cociente=1;residuo=6
	   1/10=cociente=0;residuo=1*/

 	unidades = numero % 10; numero /= 10;
 	decenas = numero % 10; numero /= 10;
 	centenas = numero % 10; numero /= 10;
 	millones = numero % 10; numero /= 10;

 	switch (millones)
 	{
  	case 1: cout<<"M"; break;
  	case 2: cout<<"MM"; break;
  	case 3: cout<<"MMM"; break;
 	}
 
 	switch (centenas)
 	{
  	case 1: cout<<"C"; break;
  	case 2: cout<<"CC"; break;
  	case 3: cout<<"CCC"; break;
  	case 4: cout<<"CD"; break;
  	case 5: cout<<"D"; break;
  	case 6: cout<<"DC"; break;
  	case 7: cout<<"DCC"; break;
  	case 8: cout<<"DCCC"; break;
  	case 9: cout<<"CM"; break; 
 	}
 
 	switch (decenas)
 	{
  	case 1: cout<<"X"; break;
	case 2: cout<<"XX"; break;
	case 3: cout<<"XXX"; break;
	case 4: cout<<"XL"; break;
	case 5: cout<<"L"; break;
	case 6: cout<<"LX"; break;
	case 7: cout<<"LXX"; break;
	case 8: cout<<"LXXX"; break;
	case 9: cout<<"XC"; break; 
	}
 
 	switch (unidades)
 	{
  	case 1: cout<<"I"; break;
  	case 2: cout<<"II"; break;
  	case 3: cout<<"III"; break;
  	case 4: cout<<"IV"; break;
  	case 5: cout<<"V"; break;
  	case 6: cout<<"VI"; break;
  	case 7: cout<<"VII"; break;
  	case 8: cout<<"VIII"; break;
  	case 9: cout<<"IX"; break;
 	}	

 	return 0;
	}

	case 6:
	cout<<"Conversion de numeros enteros a letras<"<<endl;
     {
    int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        	if(x>=900)   {cout<<"NOVECIENTOS " 	;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " 	;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " 	;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " 	;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  	;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS ";x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS "  ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "   ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  		;x=x-100;}
       else if(x==100)  {cout<<"CIEN" 			;x=x-100;}
        	if(x>90) 	{cout<<"NOVENTA Y "   	;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  		;x=x-90; }  
            if(x>80) 	{cout<<"OCHENTA Y "   	;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  		;x=x-80; }
            if(x>70) 	{cout<<"SETENTA Y "   	;x=x-70; }
            if(x==70)   {cout<<"SETENTA" 		;x=x-70; }
            if(x>60) 	{cout<<"SESENTA Y "   	;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  		;x=x-60; }
            if(x>50) 	{cout<<"CINCUENTA Y "	;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"  	;x=x-50; }
            if(x>40) 	{cout<<"CUARENTA Y " 	;x=x-40; }
            if(x==40)   {cout<<"CUARENTA"		;x=x-40; }
            if(x>30) 	{cout<<"TREINTA Y "  	;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  		;x=x-30; }
            if(x>20) 	{cout<<"VEINTI"       	;x=x-20; }
            if(x==20)   {cout<<"VEINTE"    	    ;x=x-20; }
        	if(x>=16)   {cout<<"DIECI"        	;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       	;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  		;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        	;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     		;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     		;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     		;x=x-10; }      
        	if(x==9)    {cout<<"NUEVE"        	;x=x-9;  }
        	if(x==8)    {cout<<"OCHO"     		;x=x-8;  }
        	if(x==7)    {cout<<"SIETE"        	;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     		;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        	;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       	;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     		;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      		;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      		;x=x-1;  }
       }
    cout<<endl;
	cin.ignore();
	return 0;
	}
   case 7:
   cout<<"Conversion de numeros enteros con decimal a letras"<<endl; 
    {
     double valor;
     int miles,cientos,unidades,decimales;
     char numeros[100][20] = 
     {
     {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
     {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
     {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
     {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
     {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
     {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
     {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
     {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
     {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
     {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
      };
     char centenas[10][20] = 
     {
     {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
     };
     std::cout << "Introduzca numero a transcribir: ";
     std::cin >> valor;
     miles = ((int)valor)/1000;
     cientos = (((int)valor)%1000)/100;
     unidades = ((int)valor)%100;
     decimales = ((int) (valor*100.0))%100 ;
     if (miles)
     std::cout << numeros[miles] << " mil ";
     if (cientos)
     std::cout << centenas[cientos] << " ";
     if (unidades) 
     std::cout << numeros[unidades];
     if (decimales)
      {
     if(miles || cientos || unidades)
     {
     std::cout << " con ";
     }
     std::cout << numeros[decimales] << " centimos.";
     }
     std::cout << std::endl;
     system("pause");
     return 0;
	 } 
  
 
    case 8:
	cout<<"Una tabla de multiplicar"<<endl;
	{
	int multiplicacion, numero, a=1;
		cout<<"Ingresar un numero de la tabla de multiplicacion : ";
		cin>>numero;
		cout<<"La tabla del "<<numero<<" es :"<<endl;
	do{
		multiplicacion = numero * a;
		cout<< numero <<" x "<< a <<" = "<< multiplicacion <<endl;
		a++;
		}
	while(a<=10);
	}
	 
    case 9:
	cout<<"Todas las tablas de multiplicar del 1 al 10"<<endl;
     {
	
	for(int i=1; i<=10; i++){
		cout<<"____Tabla del: "<<i<<"____"<<endl;
		
		for(int n=0; n<=10; n++){
			cout<< i << " x " << n << " = " << i * n << endl;
		}
	}
	system("pause");
	
	return 0;
	}

 	
   case 10:
   cout<<"Crear de forma grafica la multiplicacion manual<<"<<endl;
     {
     float num1 = 45.0, num2 = 32.0, resultado, espacio = 0.0;
     cout << "  " << num1 << endl;
     cout << "x " << num2 << endl;
     cout << "-----" << endl;
     while (num2 > 0.0) {
        resultado = num1 * (num2 - int(num2));
        num2 = int(num2);
        espacio += 1.0;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << resultado << endl;
        resultado = num1 * num2;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << resultado << endl;
        for (float i = 0.0; i < espacio; i += 1.0) {
            cout << " ";
        }
        cout << "-----" << endl;
        num2 /= 10.0;
     }
     resultado = num1 * int(num2);
     for (float i = 0.0; i < espacio; i += 1.0) {
        cout << " ";
     }
     cout << resultado << endl;
     cout << "-----" << endl;
     cout << " " << num1 * num2 << endl;
     return 0;
	 }
	 
    case 11:
	cout<<"Conversion de numeros decimales a binarioS"<<endl;
     {
  	int i,j,num,num2,res,x[10];
  		cout << "Ingrese un Numero: ";
  		cin >> num;
  		num2 = num;
  	for(i = 1 ; i <= num ; i++){ 
   		num2 = num2 / 2;
    if(num2 == 1)
    break;
	}
  	for(j = 1 ; j <= i; j++){ 
      	res = num % 2;
    if(res == 1)
        x[j] = 1;
    else if(res == 0)
              x[j] = 0;
      	num = num / 2;
  }
  		cout << "1"; 
  	for(j = i ; j > 0 ; j--)
    	cout << x[j];
  		cout << endl;
	system("PAUSE");
	return 0;
	}

    case 12:
	cout<<"Conversion de numeros decimales a hexadecimales"<<endl; 
     {
    long dec;
    int rem;

    std::cout << "Ingrese un numero decimal: ";
    std::cin >> dec;

    while (dec > 0) {
        rem = dec % 16;
        if (rem > 9) {
            switch (rem) {
               case 10: std::cout << "A"; break;
               case 11: std::cout << "B"; break;
               case 12: std::cout << "C"; break;
               case 13: std::cout << "D"; break;
               case 14: std::cout << "E"; break;
               case 15: std::cout << "F"; break;
            }
        }
        else {
            std::cout << rem;
        }
        dec = dec / 16;
    }
	}
   
    case 13:
	cout<<"Crear Figuras Geometricas Basicas"<<endl;
	cout << "Triangulo:" << endl;
	cout << "  **  " << endl;
	cout << " **** " << endl;
	cout << "******" << endl;
	cout << "Circulo:" << endl;
	cout << "  ***  " << endl;
	cout << " ***** " << endl;
	cout << "*******" << endl;
	cout << "*******" << endl;
	cout << " ***** " << endl;
	cout << "  ***  " << endl;
	cout << "Cuadrado:" << endl;
	cout << "******" << endl;
	cout << "*    *" << endl;
	cout << "*    *" << endl;
	cout << "*    *" << endl;
	cout << "******" << endl;
	return 0;
     
    case 14:cout<<"Mover un punto en toda la pantalla"<<endl; 
    
	
	/*void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X =x1;
	dwPos.Y =y1;
	SetConsoleCursorPosition(hcon, dwPos);
	
	}

	char opcion;
	int x=10, y=10;

	int main(){
	while(opcion!='z')
	{
		system("cls");
		gotoxy(x,y); cout<<".";
		opcion=getch();
		switch(opcion)
		{
			case 'w': y--; break;
			case 's': y++; break;
			case 'a': x--; break;
			case 'd': x++; break;
		}
	}
	return 0;
	} */
	//Si funciona, pero en el case, me marca error :(
    case 15:
	
	cout<<"Simulacion de un Cajero (Automata)"<<endl;
    {
    const string claveCorrecta = "0441";
    cout << "Bienvenido al cajero automático\n";
    cout << "Ingrese la clave: ";
    string clave = "";
    cin >> clave;
    if (clave != claveCorrecta)
    {
        cout << "La clave es incorrecta";
        return 0;
    }
    cout << "La clave es correcta\nBienvenid@\n";
    double fondos = 500; 

    string eleccion = "";
    while (eleccion != "2")
    {
        cout << "Fondos disponibles: " << fondos << endl;
        cout << "1. Retirar dinero\n2. Salir\nSeleccione: ";
        cin >> eleccion;
        if (eleccion == "1")
        {
            double retiro;
            cout << "Ingrese cantidad a retirar: " << endl;
            cin >> retiro;
            if (retiro > fondos || retiro <= 0)
            {
                cout << "No puede retirar esa cantidad";
            }
            else
            {
                cout << "Cantidad retirada " << retiro << endl;
                fondos = fondos - retiro;
            }
        }
    }
    return 0;
	}

    case 16:cout<<"Calcular la hipotenusa"<<endl;
     {
		double c1,c2,h;
		cout<<"Ingrese el cateto opuesto: ";cin>>c1;
		cout<<"Ingrese el cateto adyacente: ";cin>>c2;
		h=sqrt(pow(c1,2)+pow(c2,2));
		cout<<"La hipotenusa es: "<<h;
	}
    case 17:cout<<"Saber cuantos dias tienen los meses"<<endl;
     {
    int mes;

    printf( "\n   Introduzca un mes: " );
    scanf( "%d", &mes );

    if ( mes < 13 )

        switch ( mes )
        {
            case  1 :
            case  3 :
            case  5 :
            case  7 :
            case  8 :
            case 10 :
            case 12 : printf( "\nEl mes tiene 31 dias: " );
                      break;

            case  4 :
            case  6 :
            case  9 :
            case 11 : printf( "\nEl mes tiene 30 dias: " );
                      break;

            case  2 : printf( "\nEl mes tiene 29 diaas: " );
                      
        }

    else
        printf( "\n   ERROR: Mes incorrecto." );

   	return 0;
	}
	 
	case 18:
	cout<<"Numeros de forma ascendente y descendente"<<endl;
	{
    int a,b,c,p,s,t;    	    
    printf("Ingrese el primer numero : ");
    scanf("%d",&a);
    printf("Ingrese el segundo numero : ");
    scanf("%d",&b);
    printf("Ingrese el tercer numero : ");
    scanf("%d",&c);
    if ((a>b) && (a>c)) {
        p = a;
        if (b>c) {
            s = b; t = c;
        } else {
            s = c; t = b;
        }
    } else {
        if (b>c) {
            p = b;
            if (a>c) {
                s = a; t = c;
            } else {
                s = c; t = a;
            }
        } else {
            p = c;
            if (a>b) {
                s = a; t = b;
            } else {
                s = b; t = a;
            }
        }
    }
    printf("\los numeros de forma descendente son : %d-%d-%d\n",p,s,t);
    printf("Los numeros de forma ascendente son : %d-%d-%d\n",t,s,p);
    return 0;
}
	
    case 19:
	cout<<"Calcular Area de un Cubo"<<endl;
    {
    float arista;

    printf( "\n   Introduzca la medida el cubo(Un lado): " );
    scanf( "%f", &arista );


    while ( arista <= 0 )
    {
        printf( "\n   ERROR: La medida debe ser mayor que cero." );
        printf( "\n\n   Introduzca la medida de nuevo: " );
        scanf( "%f", &arista );
    }

    printf( "\n   El %crea de un cubo de medida %f la cual es: %f", 160, arista, 6 * pow( arista, 2 ) );
 
    getch();

    return 0;
	}
    case 20:
    cout<<"Calcular area de un triangulo  "<<endl;
	{
	float base,altura,resultado;
	cout << "Ingrese la base del triangulo: ";
	cin >> base;
	cout << "Ingrese la altura del triangulo: ";
	cin >> altura;
	resultado=(base*altura)/2; 
	cout << "El area de su triangulo es: " << resultado << endl;

	cin.ignore();
	cin.get();
	}
    
    case 21:cout<<"SALIR"<<endl;
    {
  	return 0;
	}
     default: cout<<"El valor ingresado no esta en el menu"<<endl;
     
	}
	 cin.ignore(); return 0; 
  } 


