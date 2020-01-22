#include "superpixmanip.h"

uint8_t	img_blue(const pixel_t *p){
	return p->blue;
}

uint8_t	img_green(const pixel_t *p){
	return p->green;
}

uint8_t	img_red(const pixel_t *p){
	return p->red;
}

bool	img_cmp(const pixel_t *p1, const pixel_t *p2){
	if (p1->green != p2->green)
		return false;
	if (p1->red != p2->red)
		return false;
	if (p1->blue != p2->blue)
		return false;
	return true;
}

size_t	ppm_height(const ppm_image_t *img){
	return img->height;
}

size_t	ppm_width(const ppm_image_t *img){
	return img->width;
}

size_t	ppm_length(const ppm_image_t *img){
	return img->length;
}

pixel_t	ppm_pixel(const ppm_image_t *img, const size_t i, const size_t j){
	return img->pixels[i * (img->height) + j];
}