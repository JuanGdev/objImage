#include "objImage.hpp"
#include <iostream>
//Constructor por defecto con lista de inicialización
Image::Image():  m_width(0), m_height(0), m_image(0), m_data(0),m_filename(""), m_buffer(0){}

//Constructor paramétrico
Image::Image(unsigned width, unsigned height)
{
  m_width = width;
  m_height = height;
  //Generar un vector dinamico con esa
  //cantidad de datos necesarios para 
  //cada pixel en la imagen

  m_data.resize(m_width * m_height * 4, 0);
 
}

//Constructor para cargar una imagen con su nombre
Image::Image(const char* filename)
{
  Load(filename);
}

//Constructor copia
Image::Image(const Image& copy)
{
  m_width = copy.m_width;
  m_height = copy.m_height;
  m_image = copy.m_image; 
}

//Destructor
Image::~Image()
{
  delete[]m_filename;
}
//Leer una imagen
void Image::Load(const char* filename)
{
  lodepng::load_file(m_buffer, filename); //load the image file with given filename
  lodepng::State state;
  lodepng::decode(m_image, m_width, m_height, state, m_buffer);
}

//Guardar una imagen
void Image::Save( const char* filename )
{
  lodepng::encode(filename, m_image, m_width, m_height);
}

//Funciones de acceso
unsigned Image::width() const{
    return m_width;
}

unsigned Image::height() const{
    return m_height;
}

//Operator=
Image& Image::operator=(const Image& other)
{
  m_width = other.m_width;
  m_height = other.m_height;
  m_image = other.m_image;
  m_data = other.m_data;
  m_filename = other.m_filename;
  m_buffer = other.m_buffer;

  return *this;
}

Image& Image::operator+(const Image& B)
{
  Image C;
  
}