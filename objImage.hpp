#ifndef OBJIMAGE_HPP
#define OBJIMAGE_HPP


class Image{
    public:
    Image(); //Constructor por defecto
    Image(float ancho, float alto); //Constructor parametrico que crea una imagen con el ancho y alto indicado

    private:
    float m_ancho;
    float m_alto;

};

class PIXEL
{
    public:
        PIXEL(); //Constructor por defecto
        PIXEL(unsigned char R, unsigned char G, unsigned char B, unsigned char A); //Constructor paramétrico

    private:

        unsigned char m_R; //Rojo
        unsigned char m_G; //Verde
        unsigned char m_B; //Azul
        unsigned char m_A; //Transparencia
    
};


#endif
