#include <iostream>
#include <string>

using namespace std;

#pragma region Estructura

struct Nodo
{
    int dato;
    Nodo* siguiente;
};

#pragma endregion

#pragma region Prototipos

void menuPrincipal();

void insertar();
void insertarLista(Nodo*& lista, int);

void buscar();
void buscarLista(Nodo* lista, int);

void eliminar();
void eliminarLista(Nodo*& lista, int n);

void mostrarLista(Nodo*);

#pragma endregion

#pragma region Variables

int datoAgregado;
Nodo* lista = NULL;

#pragma endregion


int main()
{
    menuPrincipal();
}

void menuPrincipal()
{
    int eleccion;

    do
    {
        cout << "1. Insertar" << endl << "2. Buscar" << endl << "3. Eliminar"
            << endl << "4. Mostrar Lista" << endl << "5. Salir" << endl;

        cout << endl << "Ingrese una opcion: ";

        if (cin >> eleccion)
        {
            switch (eleccion)
            {
            case 1:
                insertar();
                break;

            case 2:
                buscar();
                break;

            case 3:
                eliminar();
                break;

            case 4:
                system("cls");
                mostrarLista(lista);
                break;

            case 5:
                break;
            }
        }
        else
        {
            system("cls");
            cout << "Dato incorrecto. Elija una opcion valida.\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        if (eleccion < 1 || eleccion > 5) 
        {
            system("cls");
            cout << "Dato incorrecto. Elija una opcion valida.\n\n";
        }

    } while (eleccion < 1 || eleccion > 5);
}

void insertar() 
{
    string validacion;
    string elecUsuario;
    int validacion2 = 0;

    system("cls");

    do 
    {
        do
        {
            cout << "Ingrese el dato numerico a agregar: ";

            if (cin >> datoAgregado)
            {
                insertarLista(lista, datoAgregado);
                validacion = "0";
            }
            else
            {
                cout << "Dato incorrecto. Elija una opcion valida.\n\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                validacion = "1";
            }

        } while (validacion == "1");

        do
        {
            cout << "Desea agregar otro dato? (S/N): ";
            cin >> elecUsuario;

            if (elecUsuario == "s" || elecUsuario == "S")
            {
                validacion2 = 1;
                cout << endl;
                break;
            }
            else if (elecUsuario == "n" || elecUsuario == "N")
            {
                cout << "\nDatos agregados correctamente.\n";
                cout << "Volviendo al menu principal...\n\n";
                system("pause");

                system("cls");

                menuPrincipal();
            }
            else if (elecUsuario != "n" || elecUsuario != "N" || elecUsuario != "n" || elecUsuario != "N")
            {
                cout << "Dato incorrecto. Elija una opcion valida." << endl << endl;
                elecUsuario = "s";
            }

        } while (elecUsuario == "s");

    } while (validacion2 == 1);
}

void insertarLista(Nodo*& lista, int n)
{
    Nodo* nuevo_nodo = new Nodo;
    nuevo_nodo->dato = n;

    Nodo* aux1 = lista;
    Nodo* aux2 = NULL;

    while ((aux1 != NULL) && (aux1->dato < n))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }
    if (lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;
}

void buscar()
{
    int busqueda = 0;
    string error;

    system("cls");

    do
    {
        cout << "Ingrese el numero del elemento que desea buscar: ";
        cin >> error;

        try
        {
            busqueda = stoi(error);
        }
        catch (invalid_argument& e)
        {
            system("cls");
            cout << "Valor Invalido." << endl << endl;
            error = "r";
        }

    } while (error == "r");

    cout << endl;
    buscarLista(lista, busqueda);

    cout << endl << endl << "Volviendo al menu principal..." << endl;

    system("pause");
    system("cls");
    menuPrincipal();
}

void buscarLista(Nodo* lista, int n)
{
    bool band = false;

    Nodo* actual = new Nodo();
    actual = lista;

    while ((actual != NULL) && (actual->dato <= n))
    {
        if (actual->dato == n)
        {
            band = true;
        }
        actual = actual->siguiente;
    }

    if (band == true)
    {
        cout << "El numero " << n << " esta en la lista.";
    }
    else
    {
        cout << "El numero " << n << " NO esta en la lista.";
    }
}

void eliminar() 
{
    if (lista == NULL)
    {
        system("cls");

        cout << "Lista vacia." << endl << endl
            << "Volviendo al menu principal..." << endl;
        system("pause");

        system("cls");
        menuPrincipal();
    }

    int dato;

    system("cls");
    cout << "Ingrese el numero del elemento que desea eliminar: ";
    cin >> dato;

    eliminarLista(lista, dato);
}

void eliminarLista(Nodo*& lista, int n)
{
    if (lista != NULL)
    {
        Nodo* aux_borrar;
        Nodo* anterior = NULL;
        aux_borrar = lista;

        while ((aux_borrar != NULL) && (aux_borrar->dato != n))
        {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }
        if (aux_borrar == NULL)
        {
            cout << "El elemento no exite.";
        }
        else if (anterior == NULL)
        {
            lista = lista->siguiente;
            delete aux_borrar;
            cout << "Dato eliminado.";
            system("Pause");
            menuPrincipal();
        }
        else
        {
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
            cout << "Dato eliminado.";
            system("Pause");
            menuPrincipal();
        }
    }
}

void mostrarLista(Nodo* lista)
{
    Nodo* actual = new Nodo();
    actual = lista;

    if (actual == NULL)
    {
        system("cls");

        cout << "Lista vacia." << endl << endl
            << "Volviendo al menu principal..." << endl;
        system("pause");

        system("cls");
        menuPrincipal();
    }

    cout << "| ";

    while (actual != NULL)
    {
        cout << actual->dato << " | ";
        actual = actual->siguiente;
    }

    cout << endl << "Elementos mostrados." << endl << endl
        << "Volviendo al menu principal..." << endl;

    system("pause");
    system("cls");
    menuPrincipal();
}









