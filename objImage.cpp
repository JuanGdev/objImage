#include "objImage.hpp"

//Constructor por defecto con lista de inicialización
Image::Image():  m_width(0), m_height(0), image(0), filename(){}

//Constructor paramétrico
Image::Image(unsigned width, unsigned height)
{
    m_width = width;
    m_height = height;
    filename = "test.png";
    image.resize(m_width * m_height * 4);
      for(unsigned y = 0; y < height; y++)
         for(unsigned x = 0; x < width; x++) 
            {
             image[4 * m_width * y + 4 * x + 0] = 255 * !(x & y);
             image[4 * m_width * y + 4 * x + 1] = x ^ y;
             image[4 * m_width * y + 4 * x + 2] = x | y;
             image[4 * m_width * y + 4 * x + 3] = 255;
            }
    lodepng::encode(filename, image, m_width, m_height);
}