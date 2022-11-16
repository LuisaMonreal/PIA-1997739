#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>
#include <fstream>
#include<stdlib.h>
#include <vector>

using namespace std;

void registrar();
void modificar();
void eliminar();
void listas();
void archivos();
void agregar();

int* item, * anio, registros, n = 1, desicion, Modificar;
string* nombre, * clasificacion, * caracteristicas, * genero, *descripcion;
float* precio,*  iva, * subtotal, * total;

int main()
{
	int respuesta=1;
	while(respuesta==1){
		int opc;
		cout<<"*****BISONTE GAMES*****"<<endl;
    	cout<<"Ingrese una opcin"<<endl;
    	cout<<"1-Agregar articulo"<<endl;
		cout<<"2-Modificar articulo"<<endl;
    	cout<<"3-Eliminar articulo"<<endl;
    	cout<<"4-Lista de articulos"<<endl;
    	cout<<"5-limpiar pantalla"<<endl;
    	cout<<"6-Salir"<<endl;
		cin >> opc;

		switch (opc)
		{
		case 1:
			agregar();
			return main();
			break;

		case 2:
			modificar();
			return main();
			break;

		case 3:
			eliminar();
			return main();
			break;

		case 4:
			listas();
			return main();
			break;

		case 5:
        	system("CLS");
			return main();
			break;

		case 6:
			archivos();
			respuesta=2;
			break;
		}
		}
	}

void agregar(){
    printf("Ingrese la cantidad de registros que desea dar de alta: \n");
	scanf_s("%d", &registros);
	item = new int[registros];
	nombre = new string[registros];
	anio = new int[registros];
	clasificacion = new string[registros];
	caracteristicas = new  string[registros];
	genero = new  string[registros];
	descripcion = new  string[registros];
    subtotal = new float[registros];
	total = new float[registros];
	iva = new float[registros];
    for (int i = 0;i < registros;i++){
		printf("Ingrese el numero del articulo \n");
		scanf_s("%d", &item[i]);
		do
		{
			if (item[i] != item[i - n])
			{
				n = n + 1;
			}
			else
			{
				printf("El numero del articulo ya existe \n");
				printf("Ingrese el numero del articulo \n");
				scanf("%d", &item[i]);
			}
			 	
		} while (n < registros);
		printf("Ingrese el nombre del videojuegpo \n");
		cin.ignore();
		getline(cin, nombre[i]);
		printf("Ingrese el a%cñ del articulo \n",164);
		scanf_s("%d", &anio[i]);
		printf("Ingrese la clasificacion \n");
		cin.ignore();
		getline(cin, clasificacion[i]);
		printf("Ingrese las caracteristicas \n");
		cin.ignore();
		getline(cin, caracteristicas[i]);
		printf("Ingrese el genero del videojuego \n");
		cin.ignore();
		getline(cin, genero[i]);
		printf("Ingrese la descripcion \n");
		//cin.ignore();
		getline(cin, descripcion[i]);
		printf("Ingrese el precio \n");
		//cin.ignore();
		scanf_s("%f", &subtotal[i]);
		iva[i] = subtotal[i] * 0.16;
		total[i] = subtotal[i] + iva[i];
		printf("El precio total del videojuego es de $%f \n", total[i]);
    }
}
void modificar(){
    int j, opcion;
    cout<<"ingrese el numero de articulo que desea modificar"<<endl;
         cin>>j;
         j=j-1;
         cout<<"ingrese que desea modificar:"<<endl;
             cout<<"a. Nombre del videojuego"<<endl;
             cout<<"b. Anio de lanzamiento"<<endl;
             cout<<"c. Clasficiacion"<<endl;
             cout<<"d. Caracteristicas"<<endl;
             cout<<"e. Genero"<<endl;
             cout<<"f. Descripcion"<<endl;
             cin>>opcion;
             switch(opcion){
                 case 1:
                    for (int i = j;i == j;i++)
                    {
						while (getchar() != '\n');
                        cout << "Ingrese nombre:" << endl;
             			getline(cin,nombre[i]);
                    }
                    break;
                case 2:
                    for (int i = j;i == j;i++)
                    {
                        cout << "Ingrese anio: " << endl;
			            cin >> anio[i];
                    }
                    break;
                case 3:
                    for (int i = j;i == j;i++)
                    {
						while (getchar() != '\n');
                        cout << "Ingrese la clasificacion: " << endl;
			            getline(cin,clasificacion[i]);
                    }
                    break;
                case 4:
                    for (int i = j;i == j;i++)
                    {
						while (getchar() != '\n');
                        cout << "Ingrese las caracteristicas: " << endl;
			             getline(cin,caracteristicas[i]);
                    }
                    break;
                case 5:
                    for (int i = j;i == j;i++)
                    {
                        cout << "Ingrese el genero: " << endl;
			            cin >> genero[i];
                    }
                    break;
                case 6:
                    for (int i = j;i == j;i++)
                    {
                        cout << "Ingrese la descripcion: " << endl;
			            cin >> descripcion[i];
                    }
                    break;
             }
}
void eliminar() {
	int j;
	cout << "ingrese el  articulo a eliminar";
	cin >> j;
	j = j - 1;
}
	
void listas() {
	int opc2;
	string busc;
	printf("1.-Clasificacion \n 2.-Genero \n");
	scanf_s("%d", &opc2);
	switch (opc2)
	{
	case 1:
		printf("Ingrese la clasificacion a buscar: \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (clasificacion[i] == busc);
			{
				if (item[i] != 0)
				{
					printf("Articulo: %d", item[i]);
					printf("Anio: %d", anio[i]);
					printf("Videojuego: %s", nombre[i].c_str());
					printf("Clasificacion: %s", clasificacion[i].c_str());
					printf("Genero: %s", genero[i].c_str());
					printf("Caracteristicas: %s", caracteristicas[i].c_str());
					printf("Descripcion: %s", descripcion[i].c_str());
					printf("subtotal: %f", precio[i]);
					printf("iva: %f", iva[i]);
					printf("total: %f", total[i]);
				}
			}
		}
		break;
	case 2:
		printf("Ingrese el genero a buscar: \n");
		cin.ignore();
		getline(cin, busc);
		for (int i = 0; i < registros; i++)
		{
			if (genero[i] == busc);
			{
				if (item[i] != 0)
				{
					printf("Articulo: %d", item[i]);
					printf("Anio: %d", anio[i]);
					printf("Videojuego: %s", nombre[i].c_str());
					printf("Clasificacion: %s", clasificacion[i].c_str());
					printf("Genero: %s", genero[i].c_str());
					printf("Caracteristicas: %s", caracteristicas[i].c_str());
					printf("Descripcion: %s", descripcion[i].c_str());
					printf("subtotal: %f", precio[i]);
					printf("iva: %f", iva[i]);
					printf("total: %f", total[i]);
				}
			}
		}
		break;
	default:
		printf("Ingrese la opcion correcta");
		return listas();
	}while (opc2 != 1 || opc2 != 2);
}

void archivos() 
	{
		ofstream Archivos; //clase ofstream para leer archivos
		string nombrearchivos;
		nombrearchivos = "LISTA-ARTICULOS";

		Archivos.open(nombrearchivos.c_str(), ios::out);

		if (Archivos.fail())
		{
			printf("Error el archivo no pudo ser creado");
			system("pause");
			exit(1);
		}
		Archivos << "Numero del Videojuego" << "\t";
		Archivos << "Nombre del Videojuego" << "\t";
		Archivos << "Fecha de lanzamiento del Videojuego" << "\t";
		Archivos << "Clasificacion del Videojuego" << "\t";
		Archivos << "Caracteristicas del Videojuego" << "\t";
		Archivos << "Genero del Videojuego" << "\t";
		Archivos << "Descripcion del Videojuego" << "\t";
		Archivos << "Precio Unitario del Videojuego" << "\t";
		Archivos << "Iva del Videojuego" << "\t";
		Archivos << "El total del Videojuego" << "\t";

		for (int i = 0; i < registros; i++)
		{
			Archivos << item[i] << "\t";
			Archivos << nombre[i] << "\t";
			Archivos << anio[i] << "\t";
			Archivos << clasificacion[i] << "\t";
			Archivos << caracteristicas[i] << "\t";
			Archivos << genero[i] << "\t";
			Archivos << descripcion[i] << "\t";
			Archivos << precio[i] << "\t";
			Archivos << iva[i] << "\t";
			Archivos << total[i] << "\t";
		}
		Archivos.close();
	}
