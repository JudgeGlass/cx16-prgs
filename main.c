#include <conio.h>
#include <cx16.h>

#include <stdio.h>

#define VGA_MODE 0x01
#define MAP_COLOR_DEPTH_1BPP 0b00000000

#define MAP_HEIGHT  0b01000000
#define MAP_WIDTH   0b00010000
#define COLOR 	    0b00001000
#define BITMAP_MODE 0b00000100
#define COLOR_DEPTH 0b00000000

void main(){
	unsigned i;
	printf("\n");
	for(i = 0; i < 10; ++i){
		printf("%d ", i);
	}
	printf("\n\n");

	VERA.control = 0;
	VERA.irq_enable = 0;
	VERA.display.video = VGA_MODE;
	VERA.display.vscale = 64;
	VERA.display.hscale = 64;

	VERA.layer0.hscroll = 0;
  	VERA.layer0.vscroll = 0;


}
