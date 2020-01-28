#include "superpixmanip.h"

int		main(int ac, char **av){
	ppm_image_t	*img;
	size_t		i,j,count;
	pixel_t		*pixel, black;

	black.red = black.blue = black.green = 0;
	if (ac != 2){
		printf("Error: invalide arguments.\n");
		return 0;
	}
	img = ppm_new(av[1]);
	if (img == NULL){
		printf("Error: failed to load %s.\n", av[1]);
		return 0;
	}
	for (count = 0, i = 0 ; i < img->height ; i++){
		for (j = 0; j < img->width ; j++){
			pixel = ppm_pixel(img,i,j);
			if (img_cmp(&black, pixel))
				count++;
		}
	}
	printf("Il y a %lu pixels noir dans l'image.\n", count);
	return 0;
}