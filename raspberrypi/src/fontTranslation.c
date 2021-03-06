#include <stdlib.h>

#include "fontTranslation.h"

const uint_fast8_t font[] = {
    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
    0x7e,   0x81,   0xa5,   0x81,   0xbd,   0x99,   0x81,   0x7e,
    0x7e,   0xff,   0xdb,   0xff,   0xc3,   0xe7,   0xff,   0x7e,
    0x36,   0x7f,   0x7f,   0x7f,   0x3e,   0x1c,   0x8,    0x0,
    0x8,    0x1c,   0x3e,   0x7f,   0x3e,   0x1c,   0x8,    0x0,
    0x1c,   0x3e,   0x1c,   0x7f,   0x7f,   0x6b,   0x8,    0x1c,
    0x8,    0x8,    0x1c,   0x3e,   0x7f,   0x3e,   0x8,    0x1c,
    0x0,    0x0,    0x18,   0x3c,   0x3c,   0x18,   0x0,    0x0,
    0xff,   0xff,   0xe7,   0xc3,   0xc3,   0xe7,   0xff,   0xff,
    0x0,    0x3c,   0x66,   0x42,   0x42,   0x66,   0x3c,   0x0,
    0xff,   0xc3,   0x99,   0xbd,   0xbd,   0x99,   0xc3,   0xff,
    0xf0,   0xe0,   0xf0,   0xbe,   0x33,   0x33,   0x33,   0x1e,
    0x3c,   0x66,   0x66,   0x66,   0x3c,   0x18,   0x7e,   0x18,
    0xfc,   0xcc,   0xfc,   0xc,    0xc,    0xe,    0xf,    0x7,
    0xfe,   0xc6,   0xfe,   0xc6,   0xc6,   0xe6,   0x67,   0x3,
    0x99,   0x5a,   0x3c,   0xe7,   0xe7,   0x3c,   0x5a,   0x99,
    0x1,    0x7,    0x1f,   0x7f,   0x1f,   0x7,    0x1,    0x0,
    0x40,   0x70,   0x7c,   0x7f,   0x7c,   0x70,   0x40,   0x0,
    0x18,   0x3c,   0x7e,   0x18,   0x18,   0x7e,   0x3c,   0x18,
    0x66,   0x66,   0x66,   0x66,   0x66,   0x0,    0x66,   0x0,
    0xfe,   0xdb,   0xdb,   0xde,   0xd8,   0xd8,   0xd8,   0x0,
    0x7e,   0xc3,   0x1e,   0x33,   0x33,   0x1e,   0x31,   0x1f,
    0x0,    0x0,    0x0,    0x0,    0x7e,   0x7e,   0x7e,   0x0,
    0x18,   0x3c,   0x7e,   0x18,   0x7e,   0x3c,   0x18,   0xff,
    0x18,   0x3c,   0x7e,   0x18,   0x18,   0x18,   0x18,   0x0,
    0x18,   0x18,   0x18,   0x18,   0x7e,   0x3c,   0x18,   0x0,
    0x0,    0x18,   0x30,   0x7f,   0x30,   0x18,   0x0,    0x0,
    0x0,    0xc,    0x6,    0x7f,   0x6,    0xc,    0x0,    0x0,
    0x0,    0x0,    0x3,    0x3,    0x3,    0x7f,   0x0,    0x0,
    0x0,    0x24,   0x66,   0xff,   0x66,   0x24,   0x0,    0x0,
    0x0,    0x18,   0x3c,   0x7e,   0xff,   0xff,   0x0,    0x0,
    0x0,    0xff,   0xff,   0x7e,   0x3c,   0x18,   0x0,    0x0,
    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
    0xc,    0x1e,   0x1e,   0xc,    0xc,    0x0,    0xc,    0x0,
    0x36,   0x36,   0x36,   0x0,    0x0,    0x0,    0x0,    0x0,
    0x36,   0x36,   0x7f,   0x36,   0x7f,   0x36,   0x36,   0x0,
    0xc,    0x3e,   0x3,    0x1e,   0x30,   0x1f,   0xc,    0x0,
    0x0,    0x63,   0x33,   0x18,   0xc,    0x66,   0x63,   0x0,
    0x1c,   0x36,   0x1c,   0x6e,   0x3b,   0x33,   0x6e,   0x0,
    0x6,    0x6,    0x3,    0x0,    0x0,    0x0,    0x0,    0x0,
    0x18,   0xc,    0x6,    0x6,    0x6,    0xc,    0x18,   0x0,
    0x6,    0xc,    0x18,   0x18,   0x18,   0xc,    0x6,    0x0,
    0x0,    0x66,   0x3c,   0xff,   0x3c,   0x66,   0x0,    0x0,
    0x0,    0xc,    0xc,    0x3f,   0xc,    0xc,    0x0,    0x0,
    0x0,    0x0,    0x0,    0x0,    0x0,    0xe,    0xc,    0x6,
    0x0,    0x0,    0x0,    0x3f,   0x0,    0x0,    0x0,    0x0,
    0x0,    0x0,    0x0,    0x0,    0x0,    0xc,    0xc,    0x0,
    0x60,   0x30,   0x18,   0xc,    0x6,    0x3,    0x1,    0x0,
    0x1e,   0x33,   0x3b,   0x3f,   0x37,   0x33,   0x1e,   0x0,
    0xc,    0xf,    0xc,    0xc,    0xc,    0xc,    0x3f,   0x0,
    0x1e,   0x33,   0x30,   0x1c,   0x6,    0x33,   0x3f,   0x0,
    0x1e,   0x33,   0x30,   0x1c,   0x30,   0x33,   0x1e,   0x0,
    0x38,   0x3c,   0x36,   0x33,   0x7f,   0x30,   0x30,   0x0,
    0x3f,   0x3,    0x1f,   0x30,   0x30,   0x33,   0x1e,   0x0,
    0x1c,   0x6,    0x3,    0x1f,   0x33,   0x33,   0x1e,   0x0,
    0x3f,   0x33,   0x30,   0x18,   0xc,    0x6,    0x6,    0x0,
    0x1e,   0x33,   0x33,   0x1e,   0x33,   0x33,   0x1e,   0x0,
    0x1e,   0x33,   0x33,   0x3e,   0x30,   0x18,   0xe,    0x0,
    0x0,    0x0,    0xc,    0xc,    0x0,    0xc,    0xc,    0x0,
    0x0,    0x0,    0xc,    0xc,    0x0,    0xe,    0xc,    0x6,
    0x18,   0xc,    0x6,    0x3,    0x6,    0xc,    0x18,   0x0,
    0x0,    0x0,    0x3f,   0x0,    0x3f,   0x0,    0x0,    0x0,
    0x6,    0xc,    0x18,   0x30,   0x18,   0xc,    0x6,    0x0,
    0x1e,   0x33,   0x30,   0x18,   0xc,    0x0,    0xc,    0x0,
    0x3e,   0x63,   0x7b,   0x7b,   0x7b,   0x3,    0x1e,   0x0,
    0xc,    0x1e,   0x33,   0x33,   0x3f,   0x33,   0x33,   0x0,
    0x3f,   0x66,   0x66,   0x3e,   0x66,   0x66,   0x3f,   0x0,
    0x3c,   0x66,   0x3,    0x3,    0x3,    0x66,   0x3c,   0x0,
    0x3f,   0x36,   0x66,   0x66,   0x66,   0x36,   0x3f,   0x0,
    0x7f,   0x46,   0x16,   0x1e,   0x16,   0x46,   0x7f,   0x0,
    0x7f,   0x46,   0x16,   0x1e,   0x16,   0x6,    0xf,    0x0,
    0x3c,   0x66,   0x3,    0x3,    0x73,   0x66,   0x7c,   0x0,
    0x33,   0x33,   0x33,   0x3f,   0x33,   0x33,   0x33,   0x0,
    0x1e,   0xc,    0xc,    0xc,    0xc,    0xc,    0x1e,   0x0,
    0x78,   0x30,   0x30,   0x30,   0x33,   0x33,   0x1e,   0x0,
    0x67,   0x66,   0x36,   0x1e,   0x36,   0x66,   0x67,   0x0,
    0xf,    0x6,    0x6,    0x6,    0x46,   0x66,   0x7f,   0x0,
    0x63,   0x77,   0x7f,   0x6b,   0x63,   0x63,   0x63,   0x0,
    0x63,   0x67,   0x6f,   0x7b,   0x73,   0x63,   0x63,   0x0,
    0x1c,   0x36,   0x63,   0x63,   0x63,   0x36,   0x1c,   0x0,
    0x3f,   0x66,   0x66,   0x3e,   0x6,    0x6,    0xf,    0x0,
    0x1e,   0x33,   0x33,   0x33,   0x3b,   0x1e,   0x38,   0x0,
    0x3f,   0x66,   0x66,   0x3e,   0x1e,   0x36,   0x67,   0x0,
    0x1e,   0x33,   0x7,    0x1c,   0x38,   0x33,   0x1e,   0x0,
    0x3f,   0x2d,   0xc,    0xc,    0xc,    0xc,    0x1e,   0x0,
    0x33,   0x33,   0x33,   0x33,   0x33,   0x33,   0x3f,   0x0,
    0x33,   0x33,   0x33,   0x33,   0x33,   0x1e,   0xc,    0x0,
    0x63,   0x63,   0x63,   0x6b,   0x7f,   0x77,   0x63,   0x0,
    0x63,   0x63,   0x36,   0x1c,   0x36,   0x63,   0x63,   0x0,
    0x33,   0x33,   0x33,   0x1e,   0xc,    0xc,    0x1e,   0x0,
    0x7f,   0x33,   0x19,   0xc,    0x46,   0x63,   0x7f,   0x0,
    0x1e,   0x6,    0x6,    0x6,    0x6,    0x6,    0x1e,   0x0,
    0x3,    0x6,    0xc,    0x18,   0x30,   0x60,   0x40,   0x0,
    0x1e,   0x18,   0x18,   0x18,   0x18,   0x18,   0x1e,   0x0,
    0x8,    0x1c,   0x36,   0x63,   0x0,    0x0,    0x0,    0x0,
    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0xff,
    0xc,    0xc,    0x18,   0x0,    0x0,    0x0,    0x0,    0x0,
    0x0,    0x0,    0x1e,   0x30,   0x3e,   0x33,   0x6e,   0x0,
    0x7,    0x6,    0x3e,   0x66,   0x66,   0x66,   0x3d,   0x0,
    0x0,    0x0,    0x1e,   0x33,   0x3,    0x33,   0x1e,   0x0,
    0x38,   0x30,   0x30,   0x3e,   0x33,   0x33,   0x6e,   0x0,
    0x0,    0x0,    0x1e,   0x33,   0x3f,   0x3,    0x1e,   0x0,
    0x1c,   0x36,   0x6,    0xf,    0x6,    0x6,    0xf,    0x0,
    0x0,    0x0,    0x6e,   0x33,   0x33,   0x3e,   0x30,   0x1f,
    0x7,    0x6,    0x36,   0x6e,   0x66,   0x66,   0x67,   0x0,
    0xc,    0x0,    0xe,    0xc,    0xc,    0xc,    0x1e,   0x0,
    0x18,   0x0,    0x1e,   0x18,   0x18,   0x18,   0x1b,   0xe,
    0x7,    0x6,    0x66,   0x36,   0x1e,   0x36,   0x67,   0x0,
    0xe,    0xc,    0xc,    0xc,    0xc,    0xc,    0x1e,   0x0,
    0x0,    0x0,    0x37,   0x7f,   0x6b,   0x63,   0x63,   0x0,
    0x0,    0x0,    0x1f,   0x33,   0x33,   0x33,   0x33,   0x0,
    0x0,    0x0,    0x1e,   0x33,   0x33,   0x33,   0x1e,   0x0,
    0x0,    0x0,    0x3b,   0x66,   0x66,   0x3e,   0x6,    0xf,
    0x0,    0x0,    0x6e,   0x33,   0x33,   0x3e,   0x30,   0x78,
    0x0,    0x0,    0x1b,   0x36,   0x36,   0x6,    0xf,    0x0,
    0x0,    0x0,    0x3e,   0x3,    0x1e,   0x30,   0x1f,   0x0,
    0x8,    0xc,    0x3e,   0xc,    0xc,    0x2c,   0x18,   0x0,
    0x0,    0x0,    0x33,   0x33,   0x33,   0x33,   0x6e,   0x0,
    0x0,    0x0,    0x33,   0x33,   0x33,   0x1e,   0xc,    0x0,
    0x0,    0x0,    0x63,   0x63,   0x6b,   0x7f,   0x36,   0x0,
    0x0,    0x0,    0x63,   0x36,   0x1c,   0x36,   0x63,   0x0,
    0x0,    0x0,    0x33,   0x33,   0x33,   0x3e,   0x30,   0x1f,
    0x0,    0x0,    0x3f,   0x19,   0xc,    0x26,   0x3f,   0x0,
    0x38,   0xc,    0xc,    0x7,    0xc,    0xc,    0x38,   0x0,
    0x18,   0x18,   0x18,   0x0,    0x18,   0x18,   0x18,   0x0,
    0x7,    0xc,    0xc,    0x38,   0xc,    0xc,    0x7,    0x0,
    0x6e,   0x3b,   0x0,    0x0,    0x0,    0x0,    0x0,    0x0,
    0x8,    0x1c,   0x36,   0x63,   0x63,   0x63,   0x7f,   0x0,
    0x1e,   0x33,   0x3,    0x33,   0x1e,   0x18,   0x30,   0x1e,
    0x0,    0x33,   0x0,    0x33,   0x33,   0x33,   0x7e,   0x0,
    0x38,   0x0,    0x1e,   0x33,   0x3f,   0x3,    0x1e,   0x0,
    0x7e,   0xc3,   0x3c,   0x60,   0x7c,   0x66,   0xfc,   0x0,
    0x33,   0x0,    0x1e,   0x30,   0x3e,   0x33,   0x7e,   0x0,
    0x7,    0x0,    0x1e,   0x30,   0x3e,   0x33,   0x7e,   0x0,
    0xc,    0xc,    0x1e,   0x30,   0x3e,   0x33,   0x7e,   0x0,
    0x0,    0x0,    0x3e,   0x3,    0x3,    0x3e,   0x60,   0x3c,
    0x7e,   0xc3,   0x3c,   0x66,   0x7e,   0x6,    0x3c,   0x0,
    0x33,   0x0,    0x1e,   0x33,   0x3f,   0x3,    0x1e,   0x0,
    0x7,    0x0,    0x1e,   0x33,   0x3f,   0x3,    0x1e,   0x0,
    0x33,   0x0,    0xe,    0xc,    0xc,    0xc,    0x1e,   0x0,
    0x3e,   0x63,   0x1c,   0x18,   0x18,   0x18,   0x3c,   0x0,
    0x7,    0x0,    0xe,    0xc,    0xc,    0xc,    0x1e,   0x0,
    0x33,   0xc,    0x1e,   0x33,   0x33,   0x3f,   0x33,   0x0,
    0xc,    0xc,    0x0,    0x1e,   0x33,   0x3f,   0x33,   0x0,
    0x38,   0x0,    0x3f,   0x6,    0x1e,   0x6,    0x3f,   0x0,
    0x0,    0x0,    0xfe,   0x30,   0xfe,   0x33,   0xfe,   0x0,
    0x7c,   0x36,   0x33,   0x7f,   0x33,   0x33,   0x73,   0x0,
    0x1e,   0x33,   0x0,    0x1e,   0x33,   0x33,   0x1e,   0x0,
    0x0,    0x33,   0x0,    0x1e,   0x33,   0x33,   0x1e,   0x0,
    0x0,    0x7,    0x0,    0x1e,   0x33,   0x33,   0x1e,   0x0,
    0x1e,   0x33,   0x0,    0x33,   0x33,   0x33,   0x7e,   0x0,
    0x0,    0x7,    0x0,    0x33,   0x33,   0x33,   0x7e,   0x0,
    0x0,    0x33,   0x0,    0x33,   0x33,   0x3f,   0x30,   0x1f,
    0x63,   0x1c,   0x3e,   0x63,   0x63,   0x3e,   0x1c,   0x0,
    0x33,   0x0,    0x33,   0x33,   0x33,   0x33,   0x1e,   0x0,
    0x18,   0x18,   0x7e,   0x3,    0x3,    0x7e,   0x18,   0x18,
    0x1c,   0x36,   0x26,   0xf,    0x6,    0x67,   0x3f,   0x0,
    0x33,   0x33,   0x1e,   0x3f,   0xc,    0x3f,   0xc,    0x0,
    0xf,    0x1b,   0x1b,   0x2f,   0x33,   0x7b,   0x33,   0x70,
    0x70,   0xd8,   0x18,   0x7e,   0x18,   0x18,   0x1b,   0xe,
    0x38,   0x0,    0x1e,   0x30,   0x3e,   0x33,   0x7e,   0x0,
    0x1c,   0x0,    0xe,    0xc,    0xc,    0xc,    0x1e,   0x0,
    0x0,    0x38,   0x0,    0x1e,   0x33,   0x33,   0x1e,   0x0,
    0x0,    0x38,   0x0,    0x33,   0x33,   0x33,   0x7e,   0x0,
    0x0,    0x1f,   0x0,    0x1f,   0x33,   0x33,   0x33,   0x0,
    0x3f,   0x0,    0x33,   0x37,   0x3f,   0x3b,   0x33,   0x0,
    0x3c,   0x36,   0x36,   0x7c,   0x0,    0x7e,   0x0,    0x0,
    0x3c,   0x66,   0x66,   0x3c,   0x0,    0x7e,   0x0,    0x0,
    0xc,    0x0,    0xc,    0x6,    0x3,    0x33,   0x1e,   0x0,
    0x0,    0x0,    0x0,    0x3f,   0x3,    0x3,    0x0,    0x0,
    0x0,    0x0,    0x0,    0x3f,   0x30,   0x30,   0x0,    0x0,
    0x63,   0x33,   0x1b,   0x7c,   0xc6,   0x73,   0x19,   0xf8,
    0x63,   0x33,   0x1b,   0xcf,   0xe6,   0xf3,   0xf9,   0xc0,
    0x0,    0x18,   0x0,    0x18,   0x18,   0x3c,   0x3c,   0x18,
    0x0,    0xcc,   0x66,   0x33,   0x66,   0xcc,   0x0,    0x0,
    0x0,    0x33,   0x66,   0xcc,   0x66,   0x33,   0x0,    0x0,
    0x44,   0x11,   0x44,   0x11,   0x44,   0x11,   0x44,   0x11,
    0xaa,   0x55,   0xaa,   0x55,   0xaa,   0x55,   0xaa,   0x55,
    0x3b,   0x6e,   0x3b,   0x6e,   0x3b,   0x6e,   0x3b,   0x6e,
    0x18,   0x18,   0x18,   0x18,   0x18,   0x18,   0x18,   0x18,
    0x18,   0x18,   0x18,   0x18,   0x1f,   0x18,   0x18,   0x18,
    0x18,   0x18,   0x1f,   0x18,   0x1f,   0x18,   0x18,   0x18,
    0x6c,   0x6c,   0x6c,   0x6c,   0x6f,   0x6c,   0x6c,   0x6c,
    0x0,    0x0,    0x0,    0x0,    0x7f,   0x6c,   0x6c,   0x6c,
    0x0,    0x0,    0x1f,   0x18,   0x1f,   0x18,   0x18,   0x18,
    0x6c,   0x6c,   0x6f,   0x60,   0x6f,   0x6c,   0x6c,   0x6c,
    0x6c,   0x6c,   0x6c,   0x6c,   0x6c,   0x6c,   0x6c,   0x6c,
    0x0,    0x0,    0x7f,   0x60,   0x6f,   0x6c,   0x6c,   0x6c,
    0x6c,   0x6c,   0x6f,   0x60,   0x7f,   0x0,    0x0,    0x0,
    0x6c,   0x6c,   0x6c,   0x6c,   0x7f,   0x0,    0x0,    0x0,
    0x18,   0x18,   0x1f,   0x18,   0x1f,   0x0,    0x0,    0x0,
    0x0,    0x0,    0x0,    0x0,    0x1f,   0x18,   0x18,   0x18,
    0x18,   0x18,   0x18,   0x18,   0xf8,   0x0,    0x0,    0x0,
    0x18,   0x18,   0x18,   0x18,   0xff,   0x0,    0x0,    0x0,
    0x0,    0x0,    0x0,    0x0,    0xff,   0x18,   0x18,   0x18,
    0x18,   0x18,   0x18,   0x18,   0xf8,   0x18,   0x18,   0x18,
    0x0,    0x0,    0x0,    0x0,    0xff,   0x0,    0x0,    0x0,
    0x18,   0x18,   0x18,   0x18,   0xff,   0x18,   0x18,   0x18,
    0x18,   0x18,   0xf8,   0x18,   0xf8,   0x18,   0x18,   0x18,
    0x6c,   0x6c,   0x6c,   0x6c,   0xec,   0x6c,   0x6c,   0x6c,
    0x6c,   0x6c,   0xec,   0xc,    0xfc,   0x0,    0x0,    0x0,
    0x0,    0x0,    0xfc,   0xc,    0xec,   0x6c,   0x6c,   0x6c,
    0x6c,   0x6c,   0xef,   0x0,    0xff,   0x0,    0x0,    0x0,
    0x0,    0x0,    0xff,   0x0,    0xef,   0x6c,   0x6c,   0x6c,
    0x6c,   0x6c,   0xec,   0xc,    0xec,   0x6c,   0x6c,   0x6c,
    0x0,    0x0,    0xff,   0x0,    0xff,   0x0,    0x0,    0x0,
    0x6c,   0x6c,   0xef,   0x0,    0xef,   0x6c,   0x6c,   0x6c,
    0x18,   0x18,   0xff,   0x0,    0xff,   0x0,    0x0,    0x0,
    0x6c,   0x6c,   0x6c,   0x6c,   0xff,   0x0,    0x0,    0x0,
    0x0,    0x0,    0xff,   0x0,    0xff,   0x18,   0x18,   0x18,
    0x0,    0x0,    0x0,    0x0,    0xff,   0x6c,   0x6c,   0x6c,
    0x6c,   0x6c,   0x6c,   0x6c,   0xfc,   0x0,    0x0,    0x0,
    0x18,   0x18,   0xf8,   0x18,   0xf8,   0x0,    0x0,    0x0,
    0x0,    0x0,    0xf8,   0x18,   0xf8,   0x18,   0x18,   0x18,
    0x0,    0x0,    0x0,    0x0,    0xfc,   0x6c,   0x6c,   0x6c,
    0x6c,   0x6c,   0x6c,   0x6c,   0xef,   0x6c,   0x6c,   0x6c,
    0x18,   0x18,   0xff,   0x0,    0xff,   0x18,   0x18,   0x18,
    0x18,   0x18,   0x18,   0x18,   0x1f,   0x0,    0x0,    0x0,
    0x0,    0x0,    0x0,    0x0,    0xf8,   0x18,   0x18,   0x18,
    0xff,   0xff,   0xff,   0xff,   0xff,   0xff,   0xff,   0xff,
    0x0,    0x0,    0x0,    0x0,    0xff,   0xff,   0xff,   0xff,
    0xf,    0xf,    0xf,    0xf,    0xf,    0xf,    0xf,    0xf,
    0xf0,   0xf0,   0xf0,   0xf0,   0xf0,   0xf0,   0xf0,   0xf0,
    0xff,   0xff,   0xff,   0xff,   0x0,    0x0,    0x0,    0x0,
    0x0,    0x0,    0x6e,   0x3b,   0x13,   0x3b,   0x6e,   0x0,
    0x0,    0x1e,   0x33,   0x1f,   0x33,   0x1f,   0x3,    0x3,
    0x0,    0x7f,   0x63,   0x3,    0x3,    0x3,    0x3,    0x0,
    0x0,    0x7f,   0x36,   0x36,   0x36,   0x36,   0x36,   0x0,
    0x7f,   0x66,   0xc,    0x18,   0xc,    0x66,   0x7f,   0x0,
    0x0,    0x0,    0x7e,   0x33,   0x33,   0x33,   0x1e,   0x0,
    0x0,    0x66,   0x66,   0x66,   0x66,   0x3e,   0x6,    0x3,
    0x0,    0x6e,   0x3b,   0x18,   0x18,   0x18,   0x18,   0x0,
    0x3f,   0xc,    0x1e,   0x33,   0x33,   0x1e,   0xc,    0x3f,
    0x1c,   0x36,   0x63,   0x7f,   0x63,   0x36,   0x1c,   0x0,
    0x1c,   0x36,   0x63,   0x63,   0x36,   0x36,   0x77,   0x0,
    0x38,   0xc,    0x18,   0x3e,   0x33,   0x33,   0x1e,   0x0,
    0x0,    0x0,    0x7e,   0xdb,   0xdb,   0x7e,   0x0,    0x0,
    0x60,   0x30,   0x7e,   0xdb,   0xdb,   0x7e,   0x6,    0x3,
    0x3c,   0x6,    0x3,    0x3f,   0x3,    0x6,    0x3c,   0x0,
    0x1e,   0x33,   0x33,   0x33,   0x33,   0x33,   0x33,   0x0,
    0x0,    0x3f,   0x0,    0x3f,   0x0,    0x3f,   0x0,    0x0,
    0xc,    0xc,    0x3f,   0xc,    0xc,    0x0,    0x3f,   0x0,
    0x6,    0xc,    0x18,   0xc,    0x6,    0x0,    0x3f,   0x0,
    0x18,   0xc,    0x6,    0xc,    0x18,   0x0,    0x3f,   0x0,
    0x70,   0xd8,   0xd8,   0x18,   0x18,   0x18,   0x18,   0x18,
    0x18,   0x18,   0x18,   0x18,   0x18,   0x1b,   0x1b,   0xe,
    0xc,    0xc,    0x0,    0x3f,   0x0,    0xc,    0xc,    0x0,
    0x0,    0x4e,   0x39,   0x0,    0x4e,   0x39,   0x0,    0x0,
    0x1c,   0x36,   0x36,   0x1c,   0x0,    0x0,    0x0,    0x0,
    0x0,    0x0,    0x0,    0x18,   0x18,   0x0,    0x0,    0x0,
    0x0,    0x0,    0x0,    0x0,    0x18,   0x0,    0x0,    0x0,
    0xf0,   0x30,   0x30,   0x30,   0x37,   0x36,   0x3c,   0x38,
    0x1e,   0x36,   0x36,   0x36,   0x36,   0x0,    0x0,    0x0,
    0x1e,   0x30,   0x1c,   0x6,    0x3e,   0x0,    0x0,    0x0,
    0x0,    0x0,    0x3c,   0x3c,   0x3c,   0x3c,   0x0,    0x0,
    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0,    0x0};

const uint_fast8_t *charToTile(const char c)
{
    size_t i = (size_t)c;
    return &font[i * 8];
}

struct RenderingBufferObject *textToRBO(const char* c, const size_t strlen)
{
    struct RenderingBufferObject* rbo = calloc(1, sizeof(struct RenderingBufferObject));
    if (rbo == NULL)
        return NULL;
    rbo->data = calloc(8*strlen, sizeof(*rbo->data));
    if (rbo->data == NULL)
        return NULL;
    for (size_t i = 0; i < strlen; ++i){
        const uint_fast8_t* tile = charToTile(c[i]);
        for (size_t j = 0; j < 8; ++j) {
            rbo->data[j*strlen + i] = tile[j];
        }
    }
    rbo->yLen = 8;
    rbo->xLen = 8*strlen;
    rbo->elemsPerRow = strlen;
    return rbo;
}

void destroyTextRBO(struct RenderingBufferObject* rbo)
{
    if (rbo->data != NULL)
        free(rbo->data);
    free(rbo);
}
