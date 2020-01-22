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