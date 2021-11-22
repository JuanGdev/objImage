#ifndef OBJIMAGE_HPP
#define OBJIMAGE_HPP

class Image{

};

class PIXEL
{
    public:
        PIXEL::PIXEL(); //Constructor por defecto
        PIXEL::PIXEL(unsigned char R, unsigned char G, unsigned char B, unsigned char A); //Constructor paramétrico

    private:

        unsigned char m_R; //Rojo
        unsigned char m_G; //Verde
        unsigned char m_B; //Azul
        unsigned char m_A; //Transparencia
    
};


#endif
