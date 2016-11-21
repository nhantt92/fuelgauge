#ifdef __avr__
    #include <avr/pgmspace.h> 
    #include <avr/io.h>
#else
    #define PROGMEM 
#endif

// terrance, 20150117
// Console font, 12x16, vertical little endian coding.

extern
const unsigned char font_cp437_vga_12x16[] PROGMEM;

