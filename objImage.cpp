#include "objImage.hpp"

//Constructor por defecto con lista de inicialización
Image::Image():  m_width(0), m_height(0), m_image(0), m_filename(){}

//Constructor paramétrico
Image::Image(unsigned width, unsigned height)
{
  m_width = width;
  m_height = height;
  //Generar un vector dinamico con esa cantidad de datos necesarios
  m_data.resize(m_width * m_height * 4, 0);
 
}

Image::Image(const char* filename)
{
  lodepng::decode(m_image, m_width, m_height, filename);
}

Image::Image(const Image& copy)
{
  m_width = copy.m_width;
  m_height = copy.m_height;
  m_image = copy.m_image;
  
}