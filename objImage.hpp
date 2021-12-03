#ifndef OBJIMAGE_HPP
#define OBJIMAGE_HPP

#include "lodepng.h"

class Image{
    public:
    //Constructor por defecto
    Image();

    //Constructor paramétrico para crear una imagen (encode)
    Image(unsigned width, unsigned height);

    //Constructor paramétrico para leer una imagen (decode)
    Image(const char* filename);

    //Constructor copia
    Image(const Image& copy);

    private:
    unsigned m_width;
    unsigned m_height;
    //Valores RGBA de cada pixel. Cada canal es de tipo unsigned char.
    std::vector<unsigned char> m_data;
    //DE 4 EN 4 PARA CADA PIXEL
    //SI BUSCAMOS UN RENGLON, ANCHO*RENGLON QUE QUEREMOS * 4
    //SI BUSCAMOS UNA COLUMNA, COLUMNA QUE QUEREMOS *ALTURA * 4

    //Le pasamos el vector a la imagen que le escribe
    std::vector<unsigned char> m_image;
    const char* m_filename;

};

//GUARDAR Y LEER
//CONSTRUIR UNA IMAGEN CON DEFAULT
//CARGAR IMAGEN OBJETO.LOAD("NOMBREIMG");
//GUARDAR IMAGEN OBJETO.SAVE("NOMBREIMG");

#endif
