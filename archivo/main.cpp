#include <iostream>


#include<fstream>
using namespace std;

int main()
{
    string nombre;
    string apellido;
    int edad;
    char r;
    ofstream archivoprueba;
    string nombrearchivo;
    cout << "Ingrese nombre del archivo: ";
    getline(cin,nombrearchivo);
    archivoprueba.open(nombrearchivo.c_str(),ios::out);
    do
    {
        cout << "\tIngrese el nombre ";
        getline(cin, nombre,'\n');
        cout << "\tIngrese el apellido ";
        getline(cin, apellido,'\n');
        cout << "\tIngrese la edad ";
        cin>> edad;
        archivoprueba<<nombre<<" "<< apellido << " "<< edad<< "\n";
        cout << "Desea ingresar otro contacto s/n: ";
        cin >> r;
        cin.ignore();
    }
    while(r=='s');

    archivoprueba.close();

    ifstream archivolectura("contactos.txt");
    string texto;

    while(!archivolectura.eof())
    {

            archivolectura>> nombre>> apellido>> edad;


            if(!archivolectura.eof()){

            cout <<"Nombre: " << nombre << "\n";
            cout <<"Apellido: " << apellido << "\n";
            cout << "Edad: "<< edad << "\n";

            }
            getline(archivolectura,texto);



    }
    archivolectura.close();



    /*ofstream archivoprueba;
    archivoprueba.open("C:/Users/Algoritmos/Desktop/datos/prueba.txt",ios::out);
    archivoprueba << "Stiven\n";
    archivoprueba << "Lopez\n";
    archivoprueba <<"Cardenas\n";

    int e;

    cout << "Ingresa tu edad: ";
    cin >> e;
    archivoprueba<< e;

    archivoprueba.close();

    ifstream archivolectura;
    string texto;
    archivolectura.open("prueba.txt",ios::in);
    if(archivolectura.fail()){

        cout << "ERRROR AL ABRIR EL ARCHIVO";

    }
    else
    {

        while(!archivolectura.eof())
        {

            getline(archivolectura,texto);
            cout << texto<< endl;

        }

    }
    archivolectura.close();
*/
    return 0;
}
