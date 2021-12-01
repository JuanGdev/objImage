#ifndef OBJIMAGE_HPP
#define OBJIMAGE_HPP

#include "lodepng.h"

class Image{
    public:
    //Constructor por defecto
    Image();

    //Constructor paramétrico
    Image(unsigned width, unsigned height);

    private:
    unsigned m_width;
    unsigned m_height;
    std::vector<unsigned char> image;
    const char* filename;

};

class PIXEL
{
    public:

    private:

};


#endif
