#ifndef SUPERPIXMANIP_H
# define SUPERPIXMANIP_H

# define  _GNU_SOURCE
# include <stdint.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>


//stdbool.h: no such file or directory
//
//# include <stdbool.h.>
//
//
//on remplace par un type def
typedef enum
{
    false = 0,
    true  = 1,
} bool;

typedef struct	pixel_s
{
	uint8_t	red;
	uint8_t	blue;
	uint8_t	green;
}				pixel_t;

typedef struct	ppm_image_s
{
	size_t	height;
	size_t	width;
	pixel_t	*pixels;
	size_t	length;
	char	magic_number[3];
}				ppm_image_t;


ppm_image_t		*ppm_new(const char *path);
pixel_t			*ppm_pixel(const ppm_image_t *img, const size_t i, const size_t j);
bool			img_cmp(const pixel_t *p1, const pixel_t *p2);
#endif