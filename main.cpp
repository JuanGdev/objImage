#include <iostream>
#include "objImage.hpp"

using namespace std;

int main()
{
    //Creamos un objeto y le pasamos los datos de una imagen de nuestro disco
    Image imgA;
    imgA.Load("A.png");

    //Consultamos su ancho y alto
    cout << "Medidas de la imagen A:\n" << endl;
    cout << "Ancho: " << imgA.width() << endl;
    cout << "Alto: " << imgA.height() << endl;

    //Utilizamos el constructor para pasarle una imagen y cargarla
    Image imgB("B.png");
    cout << "Medidas de la imagen B:\n" << endl;
    cout << "Ancho: " << imgB.width() << endl;
    cout << "Alto: " << imgB.height() << endl;

    //Guardaremos la imagen B en un espacio nuevo en el disco
    imgB.Save("imgC.png");
    imgA.Save("B.png");
}
