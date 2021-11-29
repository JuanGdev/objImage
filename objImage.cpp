#include "objImage.hpp"

//Constructor por defecto
PIXEL::PIXEL(): m_R(0), m_G(0), m_B(0), m_A(0){}

//Constructor paramétrico
PIXEL::PIXEL(unsigned char R, unsigned char G, unsigned char B, unsigned char A): PIXEL()
{
    if((R < 0) || (G < 0) || (B < 0) || (A < 0)) return;
    
    m_R = R;
    m_G = G;
    m_B = B;
    m_A = A;
}

//Constructor predeterminado
Image::Image(): m_ancho(0), m_alto(0){}

//Constructor paramétrico
Image::Image(float ancho, float alto): Image()
{
    m_ancho = ancho;
    m_alto = alto;
    
}
