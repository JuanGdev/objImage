#ifndef OBJIMAGE_HPP
#define OBJIMAGE_HPP

#include "lodepng.h"

class Image{
    public:
    //Constructor por defecto
    Image();

    //Constructor paramétrico para crear una imagen
    Image(unsigned width, unsigned height);

    //Constructor paramétrico para leer una imagen (se usa la función Read)
    Image(const char* filename);

    //Constructor copia
    Image(const Image& copy);


    //Funcion para leer los datos de una imagen
    void Load(const char* filename);

    //Funcion para guardar la imagen contenida en el objeto
    void Save(const char* filename);
    //Funciones de acceso
    unsigned width()const;
    unsigned height()const;
    private:
    //Ancho de la imagen
    unsigned m_width;

    //Alto de la imagen
    unsigned m_height;


    //Le pasamos el vector a la imagen que le escribe
    std::vector<unsigned char> m_image;
    //Valores RGBA de cada pixel. Cada canal es de tipo unsigned char.
    std::vector<unsigned char> m_data;
    
    
    //Nombre del archivo
    const char* m_filename;

    std::vector<unsigned char> m_buffer;
};

//GUARDAR Y LEER
//CONSTRUIR UNA IMAGEN CON DEFAULT
//CARGAR IMAGEN OBJETO.LOAD("NOMBREIMG");
//GUARDAR IMAGEN OBJETO.SAVE("NOMBREIMG");

#endif
