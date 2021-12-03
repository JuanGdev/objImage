#include <iostream>
#include "objImage.hpp"

using namespace std;

int main()
{
    //Creando una imagen desde 0 con encode
    Image testt(512,123);

    //Leyendo la imagen del usuario
    Image decodeTest("decodem.png");

    //Constructor copia
    Image copia = testt;

}