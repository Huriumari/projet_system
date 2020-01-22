#ifndef SUPERPIXMANIP_H
# define SUPERPIXMANIP_H

# include <stdint.h>
# include <unistd.h>

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


#endif