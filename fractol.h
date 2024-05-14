#ifndef FRACTOL_H
#define FRACTOL_H

#include "./inc/libft/libft.h"
#include "./inc/printf/ft_printf.h"

#define MAXITERATIONS 32
#define WIDTH 256
#define HEIGHT 256

typedef struct s_complex
{
    double  x;
    double  y;
}              t_complex;

typedef struct s_fractol
{
    int         type;
    int         x;
    int         y;
    t_complex   z;
    t_complex   c;
    double  esc_value;
}              t_fractol;


#endif