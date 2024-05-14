/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: walnaimi <walnaimi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:41:38 by walnaimi          #+#    #+#             */
/*   Updated: 2024/05/13 16:34:47 by walnaimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

#include <string.h>
#include <stdio.h>

void init(t_fractol f,char **av)
{
    f.z.x = 0;
    f.z.y = 0;
    f.c.x = 0;
    f.c.y = 0;
    f.x = 0;
    f.y = 0;
    f.esc_value = 4;
    printf("f.z.x = %lf\nf.z.y = %lf\n",f.z.x,f.z.y);
    printf("f.c.x = %lf\nf.c.y = %lf\n",f.c.x,f.c.y);
    printf("f.x = %d\nf.y = %d\n",f.x,f.y);
    printf("esc_value = %lf\n",f.esc_value);
    printf("type = (%d)\n1 = Mandel\n2 = Julia",f.type);
}

int check_args(t_fractol *f, char **av)
{
    if (strncmp(av[1], "mandel", 6) == 0)
    {
        f->type = 1;
        printf("it is Mandel and the type is %d\n", f->type);
    }
    else if(strncmp(av[1], "julia", 6) == 0)
    {
        f->type = 2;
        printf("it is Julia and the type is %d\n", f->type);
    }
    else
    {
        printf("[checl_args]:./fractol <mandel> or <julia>\n");
        exit(0);
    }
    return 0;
}

int main(int ac, char **av)
{
    t_fractol f;
    t_complex z;
    if(ac >= 2)
        check_args(&f,av);

    else
    {
        printf("[main]:./fractol <mandel> or <julia>");
        return 0;
    }
    init(f,av);
}