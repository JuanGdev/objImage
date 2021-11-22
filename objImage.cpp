#include "objImage.hpp"

//Constructor por defecto
PIXEL::PIXEL(): m_R(0), m_G(0), m_B(0), m_A(0){}

PIXEL::PIXEL(unsigned char R, unsigned char G, unsigned char B, unsigned char A): PIXEL()
{
    if((R < 0) || (G < 0) || (B < 0) || (A < 0)) return;
    
    m_R = R;
    m_G = G;
    m_B = B;
    m_A = A;
}