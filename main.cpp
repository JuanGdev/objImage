#include <iostream>
#include "objImage.hpp"

using namespace std;

int main()
{
    //Creando una imagen desde 0 con encode
    Image testt;
    testt.Load("decodem.png");
    cout << "Ancho: " << testt.width() << endl;
    cout << "Alto: " << testt.height() << endl;

    Image a("ug.png");
    cout << "Ancho: " << a.width() << endl;
    cout << "Alto: " << a.height() << endl;
    a.Save("decodem.png");
}