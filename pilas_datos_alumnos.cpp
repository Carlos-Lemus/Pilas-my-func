//hecho por Carlos Alfonso Lemus Rodezno

//Este programa ingresa, muestra y elimina los datos de los alumnos por medio de una pila

#include <iostream> //libreriae estandar para utilizar sus funciones
#include <stack> /* libreria que nos permitira usar sus metodos,funciones y plantillas para la creacion
                  y manipulacion de pilas */
#include <windows.h> //libreria para utilizar sus funciones
#include <stdio.h> //libreria para utilizar sus funciones

using namespace std; //espacion de nombre a usar el estandar, permite abreviar el codigo

struct student { //estructura student se utilizara como nodo para una pila
    //Declaracion de variables
    char DUE[8];
    char nom[25];
    int edad;

};

void gotoxy(int x, int y); //declaracion de funcion que que mueve un texto a cualquier lugar de la pantalla
void error_dato(); //funcion que evita errores de ingreso de datos

int main()
{   //declaracion de variables
    int opcion = 0;
    char seguir;

    stack<student> pilas; //creacion del nodo de tipo student
    student *ptr; //declaracion de puntero de tipo student, almacenara la direccion de los datos almacenados en aux
    student aux; //declaracion de variable auxiliar

    do { //ciclo do_ while evita errores para datos y la continuacion del programa

        system("color 4A"); //funcion para darle color al texto y fondo de la consola
        system("cls"); //funcion que limpia la pantalla

        do { //ciclo do_ while evita errores para datos

            system("cls"); //funcion que limpia la pantalla

            gotoxy(50, 4); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "************************" << endl;
            gotoxy(50, 5); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "*                      *" << endl;
            gotoxy(50, 6); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "*         Menu         *" << endl;
            gotoxy(50, 7); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "*                      *" << endl;
            gotoxy(50, 8); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "************************" << endl;

            gotoxy(50, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "1.ingresar Alumno" << endl;
            gotoxy(50, 11); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "2.Mostrar Alumno" << endl;
            gotoxy(50, 12); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "3.Eliminar un Alumno" << endl;
            gotoxy(50, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "4.Salir" << endl;

            gotoxy(50, 15); //funcion que mueve un texto a cualquier lugar de la pantalla
            cout << "Ingrese una opcion: ";
            cin >> opcion;
            error_dato(); //funcion que evita que se ingrese datos incorrectos

        } while(opcion < 1 || opcion > 4 || opcion == cin.fail());

        cout << endl;

        system("pause");

        switch(opcion)
        {
            case 1:
                do{ //ciclo do_ while evita errores para datos

                system("cls"); //funcion que limpia la pantalla

                    do { //ciclo do_ while evita errores para datos
                    system("cls"); //funcion que limpia la pantalla
                    gotoxy(50, 4); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "************************" << endl;
                    gotoxy(50, 5); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "*                      *" << endl;
                    gotoxy(50, 6); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "*       Ingresar       *" << endl;
                    gotoxy(50, 7); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "*                      *" << endl;
                    gotoxy(50, 8); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "************************" << endl;

                    //se ingresan los datos a la variabe aux de tipo student
                    gotoxy(50, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "Ingrese de datos" << endl;
                        gotoxy(50, 11); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "================" << endl;

                        gotoxy(50, 13); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "Ingrese el DUE: ";
                        fflush(stdin); //limpia el buffer
                        cin >> aux.DUE;
                        error_dato(); //funcion que evita que se ingrese datos incorrectos

                        gotoxy(50, 15); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "Ingrese el nombre: ";
                        fflush(stdin); //limpia el buffer
                        cin >> aux.nom, 25;
                        error_dato(); //funcion que evita que se ingrese datos incorrectos

                        gotoxy(50, 17); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "Ingrese la edad: ";
                        fflush(stdin); //limpia el buffer
                        cin >> aux.edad;
                        error_dato(); //funcion que evita que se ingrese datos incorrectos

                    } while (aux.edad == cin.fail());

                    gotoxy(50, 19); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "Desea agregar otro estudiante (y/n): ";
                    fflush(stdin); //limpia el buffer
                    cin >> seguir;
                    error_dato(); //funcion que evita que se ingrese datos incorrectos

                    /* condicion if si ninguno de los caracteres siguientes se ingresan entonces no se agregara el
                    nodo al final de la pila */
                    if(seguir == 'y'  || seguir == 'Y' || seguir == 'n' || seguir == 'N')
                    {
                        pilas.push(aux); //los datos ingresados a aux se ingresan en el nodo de la pila

                    }
                    else {
                        gotoxy(50, 21); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "Ha introducido un dato erroneo" << endl;
                        gotoxy(50, 22); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "Vuelva a ingresarlo" << endl;

                        system("pause");
                    }

                } while((seguir == 'y' || seguir == 'Y') || (seguir != 'n' && seguir != 'N') || seguir == cin.fail());

                cout << endl;

                system("pause");

                break;
            case 2:
                ptr = &pilas.top(); //el puntero de tipo student almacenara la direccion del ultimo nodo de la pila

                system("cls"); //funcion que limpia la pantalla

                gotoxy(50, 4); //funcion que mueve un texto a cualquier lugar de la pantalla
                cout << "************************" << endl;
                gotoxy(50, 5); //funcion que mueve un texto a cualquier lugar de la pantalla
                cout << "*                      *" << endl;
                gotoxy(50, 6); //funcion que mueve un texto a cualquier lugar de la pantalla
                cout << "*   Datos de Alumno    *" << endl;
                gotoxy(50, 7); //funcion que mueve un texto a cualquier lugar de la pantalla
                cout << "*                      *" << endl;
                gotoxy(50, 8); //funcion que mueve un texto a cualquier lugar de la pantalla
                cout << "************************" << endl;


                if(pilas.empty())
                {
                    gotoxy(55, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "No hay regitros!" << endl;
                }

                else {


                    for (int i = 1; i <= pilas.size(); i++)
                    {

                        aux = *ptr; //aux que es de tipo student almacenara los valores del ultimo nodo
                        cout << "\n\n\t\t\t\t\t\t\tEstudiante " << (pilas.size() - i) + 1 << endl;
                        cout << "\n\n\t\t\t\t\t\t\tDUE: " << aux.DUE << endl;
                        cout << "\n\n\t\t\t\t\t\t\tNombre y Apellido: " << aux.nom << endl;
                        cout << "\n\n\t\t\t\t\t\t\tEdad: " << aux.edad << endl;

                        ptr--; //se desicrementa ptr para pasar al no que va despues
                    }
                }

                cout << endl;

                system("pause");

                break;
            case 3:

                do { //ciclo do_ while evita errores para datos y la continuacion del programa

                    system("cls"); //funcion que limpia la pantalla

                    gotoxy(50, 4); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "************************" << endl;
                    gotoxy(50, 5); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "*                      *" << endl;
                    gotoxy(50, 6); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "*       Eliminar       *" << endl;
                    gotoxy(50, 7); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "*                      *" << endl;
                    gotoxy(50, 8); //funcion que mueve un texto a cualquier lugar de la pantalla
                    cout << "************************" << endl;

                    if(pilas.empty())
                    {
                        gotoxy(55, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "No hay regitros!" << endl;
                        seguir = 'n';
                    }
                    else {

                        gotoxy(39, 10); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "Se han eliminado el ultimo regitro exitosamente" << endl;
                        gotoxy(43, 12); //funcion que mueve un texto a cualquier lugar de la pantalla
                        cout << "Desea eliminar otro estudiante (y/n): ";
                        fflush(stdin); //limpia el buffer
                        cin >> seguir;
                        error_dato(); //funcion que evita que se ingrese datos incorrectos

                        /* condicion if si ninguno de los caracteres siguientes se ingresan entonces no se eliminara el
                        ultimo nodo de la pila */
                        if(seguir == 'y'  || seguir == 'Y' || seguir == 'n' || seguir == 'N')
                        {
                            pilas.pop(); //metodo pop elimina el ultimo nodo de la pila

                        }
                        else {
                            gotoxy(50, 14); //funcion que mueve un texto a cualquier lugar de la pantalla
                            cout << "Ha introducido un dato erroneo" << endl;
                            gotoxy(50, 15); //funcion que mueve un texto a cualquier lugar de la pantalla
                            cout << "Vuelva a ingresarlo" << endl;

                            system("pause");
                        }
                    }

                    cout << endl;

                    system("pause");

                } while((seguir == 'y' || seguir == 'Y') || (seguir != 'n' && seguir != 'N'));

                break;
            case 4:
                system("cls"); //funcion que limpia la pantalla

                gotoxy(50, 8); //funcion que mueve un texto a cualquier lugar de la pantalla
                cout << "Gracias por usar el programa" << endl << endl;
                break;
        }


    } while (opcion == 1 || opcion == 2 || opcion == 3);

    system("pause");
    return 0;
}

void gotoxy(int x, int y)
{
    //Estas instrucciones permiticra ubicar un texto en el lugar que se desee en la pantalla
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void error_dato() //funcion que evita que se ingrese datos incorrectos
{
        //Ciclo while paraevitar datos incorrectos
        while(cin.fail()){

        //Limpia el buffer de los datos ingresados
        cin.clear();

        //Ignora los primeros 1000 caracteres o en este caso los numeros
        cin.ignore(1000,'\n');

        }
}



