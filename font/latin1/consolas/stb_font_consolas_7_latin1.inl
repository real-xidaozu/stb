// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_7_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_7_latin1'.
//
/* // Example usage:

static stb_fontchar fontdata[STB_SOMEFONT_NUM_CHARS];

static void init(void)
{
    // optionally replace both STB_SOMEFONT_BITMAP_HEIGHT with STB_SOMEFONT_BITMAP_HEIGHT_POW2
    static unsigned char fontpixels[STB_SOMEFONT_BITMAP_HEIGHT][STB_SOMEFONT_BITMAP_WIDTH];
    STB_SOMEFONT_CREATE(fontdata, fontpixels, STB_SOMEFONT_BITMAP_HEIGHT);
    ... create texture ...
    // for best results rendering 1:1 pixels texels, use nearest-neighbor sampling
    // if allowed to scale up, use bilerp
}

// This function positions characters on integer coordinates, and assumes 1:1 texels to pixels
// Appropriate if nearest-neighbor sampling is used
static void draw_string_integer(int x, int y, char *str) // draw with top-left point x,y
{
    ... use texture ...
    ... turn on alpha blending and gamma-correct alpha blending ...
    glBegin(GL_QUADS);
    while (*str) {
        int char_codepoint = *str++;
        stb_fontchar *cd = &fontdata[char_codepoint - STB_SOMEFONT_FIRST_CHAR];
        glTexCoord2f(cd->s0, cd->t0); glVertex2i(x + cd->x0, y + cd->y0);
        glTexCoord2f(cd->s1, cd->t0); glVertex2i(x + cd->x1, y + cd->y0);
        glTexCoord2f(cd->s1, cd->t1); glVertex2i(x + cd->x1, y + cd->y1);
        glTexCoord2f(cd->s0, cd->t1); glVertex2i(x + cd->x0, y + cd->y1);
        // if bilerping, in D3D9 you'll need a half-pixel offset here for 1:1 to behave correct
        x += cd->advance_int;
    }
    glEnd();
}

// This function positions characters on float coordinates, and doesn't require 1:1 texels to pixels
// Appropriate if bilinear filtering is used
static void draw_string_float(float x, float y, char *str) // draw with top-left point x,y
{
    ... use texture ...
    ... turn on alpha blending and gamma-correct alpha blending ...
    glBegin(GL_QUADS);
    while (*str) {
        int char_codepoint = *str++;
        stb_fontchar *cd = &fontdata[char_codepoint - STB_SOMEFONT_FIRST_CHAR];
        glTexCoord2f(cd->s0f, cd->t0f); glVertex2f(x + cd->x0f, y + cd->y0f);
        glTexCoord2f(cd->s1f, cd->t0f); glVertex2f(x + cd->x1f, y + cd->y0f);
        glTexCoord2f(cd->s1f, cd->t1f); glVertex2f(x + cd->x1f, y + cd->y1f);
        glTexCoord2f(cd->s0f, cd->t1f); glVertex2f(x + cd->x0f, y + cd->y1f);
        // if bilerping, in D3D9 you'll need a half-pixel offset here for 1:1 to behave correct
        x += cd->advance;
    }
    glEnd();
}
*/

#ifndef STB_FONTCHAR__TYPEDEF
#define STB_FONTCHAR__TYPEDEF
typedef struct
{
    // coordinates if using integer positioning
    float s0,t0,s1,t1;
    signed short x0,y0,x1,y1;
    int   advance_int;
    // coordinates if using floating positioning
    float s0f,t0f,s1f,t1f;
    float x0f,y0f,x1f,y1f;
    float advance;
} stb_fontchar;
#endif

#define STB_FONT_consolas_7_latin1_BITMAP_WIDTH         256
#define STB_FONT_consolas_7_latin1_BITMAP_HEIGHT         30
#define STB_FONT_consolas_7_latin1_BITMAP_HEIGHT_POW2    32

#define STB_FONT_consolas_7_latin1_FIRST_CHAR            32
#define STB_FONT_consolas_7_latin1_NUM_CHARS            224

#define STB_FONT_consolas_7_latin1_LINE_SPACING           5

static unsigned int stb__consolas_7_latin1_pixels[]={
    0x22013013,0x8151c42a,0x28285058,0x15c41050,0x94b85324,0x51661545,
    0x2a810105,0x982ee14c,0x1e41c00b,0x88e20e0e,0x21cc284b,0x55115c2b,
    0x70e21544,0x21c43b88,0xb88aa22b,0x8530ee22,0x4c14282a,0x1aa446a2,
    0x230c6192,0x230cc29a,0x2b862318,0x8aa1c15c,0x4e0aa2a8,0x0b8aa2e3,
    0x9512a15c,0x4623188c,0x8255388a,0x16e1542b,0x2a088455,0x462922e2,
    0x50ae20b9,0x11542a85,0x2a15c457,0x88aa1542,0x4462262b,0x4c2ee62b,
    0x217730bb,0x17710bb9,0x21a9646a,0x2a35352c,0x853551a9,0x7149c522,
    0x4c5ca62e,0x4c5cb912,0x14c5d222,0x28a491ce,0x2ab94c5c,0x38a4b62e,
    0x9e5dce29,0x22e3c884,0x2a35352a,0x233151a9,0x45371a9a,0x10351a9b,
    0x5c6a6a37,0x435352a8,0x5c6e21b8,0x255172a8,0x46e22a8b,0x86e228bc,
    0x06a0d41a,0x35054c35,0x99244096,0x0a22a4c8,0x149c5215,0xba494927,
    0x4a449228,0x4e48e712,0x36692428,0x8a526722,0x5ddce293,0x23710172,
    0xb94d2714,0x233151bb,0x37171bbb,0x21791264,0x37771cb9,0x1bbb9c52,
    0x32e63973,0x38a4e291,0x8e5cce29,0x397329bb,0x1502a054,0x42f660a8,
    0x9204491a,0x9951dc3b,0x4e290c41,0x49392714,0x87245953,0x31ce1c94,
    0x3921c199,0x9c5e46ea,0xb9c52714,0x237911bb,0x19931cb9,0x5e4c3326,
    0x32639b30,0x5437370b,0x39750541,0x664c2f26,0x2ea17930,0x2639751c,
    0x219930cc,0x39750cc9,0x65d4b22e,0xa81502a1,0xa8330540,0x2710d491,
    0xa83220c8,0x33261c80,0x32619930,0x5c19930c,0x44433262,0x9c419934,
    0x4750dcc3,0x19b50cc9,0x664c33a6,0x22e19930,0x39750540,0x00000000,
    0x00000015,0x00000000,0x9b30164e,0x6cc33661,0x2619b30c,0x4e2350bd,
    0x204c321a,0x00c40409,0x40140000,0xa8d400a8,0x20060442,0x26000182,
    0x00000001,0x00000000,0x00000000,0x00000000,0x88411000,0x00000020,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xa8000000,0x1c414282,0x298550ae,0x0a0aa198,
    0x22083105,0x45d46a2a,0x15c45712,0xb10a8771,0x55044239,0x877115c4,
    0x0ae1c42a,0x3550ae13,0x985505cc,0x40a8ee0b,0x430aa819,0x09830ea1,
    0x2630c531,0x2605cc0b,0x4208e21b,0x4422b861,0x5c42ee20,0x4217710b,
    0x1a822108,0x9872a0cc,0x10660cc1,0x42212543,0x4d47771a,0x71220cc4,
    0x98a957e4,0x24835351,0x4a62e099,0x86a6a0b9,0x0b9a9209,0x954dc255,
    0xa836212a,0x2a6a1c29,0x20dce291,0x2a130ada,0x2353529a,0x5c0e1a8b,
    0xdca82a23,0x2a217531,0xa98662a0,0x0a982a60,0x4c54662a,0x549712e1,
    0x9712e1a9,0x9b9444b8,0x2a33152c,0x09e986a1,0x2299212e,0x35152af9,
    0x24b8f272,0x774923c9,0xa8176217,0xb848f2a3,0x9a8dd274,0x5c53550c,
    0x7148d520,0x4c190b26,0x26451150,0x21ed4e7b,0x98661da8,0x330f20b9,
    0x7b30cc54,0x6cc2f661,0x2a33150b,0x44971198,0xb88d524b,0x4b892e24,
    0x9c5642e2,0x5c13198a,0x225b193c,0x4c0e484b,0x2b279b52,0x46a0d438,
    0x35389ce4,0x54295c35,0xbb8170bc,0x644a2939,0x4451151a,0x8a46ee63,
    0x1a890dc3,0x71dc1995,0x5dc144e6,0x4b930cc3,0x98660cc9,0x330661cd,
    0x8e6cc198,0x3b951cd9,0x664c772a,0x32a3b951,0x223b951d,0x2619b30c,
    0x22e351cd,0x2a5b773c,0x1c9731dc,0xc9815298,0x2219730c,0x4c33264b,
    0x419950cc,0x398c871b,0x2ee63791,0x25859930,0x4c1c0cba,0x2ea19931,
    0x8d42ee0c,0x9706440a,0xb86f6a19,0x219932d8,0x1993198a,0xb3003326,
    0x4c2f6617,0x924000bd,0x94920492,0x218924a4,0x49000002,0x49701304,
    0x00000000,0x00aa2000,0x801dcc00,0x00004409,0x00980844,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x750554c0,0x5728aa80,0x55115451,0x1b89455c,
    0xa8771026,0x220e02a1,0x3018aa1c,0xb88d54c7,0x30660cc2,0x113184c1,
    0x37730623,0x0c62318a,0x2a131863,0x373141bb,0x2b985dcc,0x8aa1c15c,
    0x43088c28,0x2a617711,0xbb986e60,0x2a217711,0x5411130a,0x399cd441,
    0x88eea0a8,0x44aa2e3a,0x330ea20a,0x29884454,0x22aa82a2,0x3505c0a8,
    0xb98f2a35,0xb8866660,0x1cc992e1,0x945e4573,0x10513bab,0x4c6a6e19,
    0x149c70bb,0x5c1a8267,0x1a82e6a5,0x5c44aa2a,0x1a8b82e0,0x5249a8e6,
    0x46415338,0x4417150b,0x4881531a,0xb8951322,0x5432a2cc,0xa83311cd,
    0x8331c521,0x7550cc1a,0x4330d554,0xa8661aaa,0x237771bd,0x9835298a,
    0x239731a9,0x82ee24b8,0x5ca6ee29,0x530513ab,0x571e44c8,0x402a6a73,
    0xca92a20a,0x37350544,0x73712248,0x45a86445,0x17b33cbc,0x90b75392,
    0x902e1e4c,0x5de44c87,0x05419731,0x32bb8aee,0x2e0cc199,0x1ca8663a,
    0x2198662a,0x9066198a,0x9750bc98,0x31985e41,0x6e5472ea,0x14c3b951,
    0x226e5917,0x35090513,0x8eeee4c8,0x20a8ae4c,0x89352ebd,0x3706ea0a,
    0x90d4c488,0x9c522aa8,0x1539a419,0x8330d453,0x37550bd9,0x4c000ee2,
    0x279170bb,0x32603c8b,0x64cb270c,0x2a17150c,0x21993198,0x1993198a,
    0x400d4024,0x49202aba,0x8ee4c731,0xb138e593,0xa8736e37,0x564a62e0,
    0x0a80f23b,0x4caa2a48,0xea8150cd,0x00ee601c,0x9c521715,0x19990bd9,
    0x4c48332a,0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x8c300000,0x18a621a8,0x22014c46,
    0x4c2a802b,0x2604c400,0x77022200,0x770ee04c,0x4c220e40,0x23398e20,
    0x2a37730a,0x5c2a88e1,0x03b81112,0x00000000,0x00000000,0x00000000,
    0x559389b8,0x4d46aaa7,0x2253731a,0x255550bb,0x88ea23a8,0x21991089,
    0x826e24d8,0x4c37532b,0x43a88ee4,0x4198b238,0x4540352a,0x31bb981c,
    0x55540001,0x00000ea2,0x00000000,0x00000000,0x2ee00000,0x2a71373b,
    0x1992e198,0x3753254c,0x4c7905dc,0xa89321aa,0x5c379309,0x26770440,
    0xd886a098,0x00013203,0x00000000,0x00000000,0x00000000,0x00000000,
    0x25977000,0x3315389b,0x130331e4,0x43110441,0x110d43b8,0x00098011,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__consolas_7_latin1_x[224]={ 0,1,0,0,0,0,0,1,1,0,0,0,0,0,
1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__consolas_7_latin1_y[224]={ 5,0,0,0,-1,0,0,0,-1,-1,0,1,3,2,
3,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,-1,0,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,-1,0,0,0,
-1,0,0,0,0,1,2,2,0,0,0,0,0,0,0,1,0,2,5,0,0,1,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,-1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
 };
static unsigned short stb__consolas_7_latin1_w[224]={ 0,2,3,4,4,4,4,2,2,3,4,4,3,3,
2,4,4,4,4,4,4,4,4,4,4,4,2,3,4,4,4,3,4,4,4,4,4,4,4,4,4,4,3,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,3,4,4,3,4,4,4,4,4,4,4,4,4,
3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,2,4,4,4,4,
2,4,4,4,4,4,4,3,4,3,4,4,4,3,4,4,4,2,2,4,4,4,4,4,4,3,4,4,4,4,
4,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
 };
static unsigned short stb__consolas_7_latin1_h[224]={ 0,6,2,5,7,6,6,2,8,8,4,4,4,2,
3,6,6,5,5,6,5,6,6,5,6,5,5,6,5,2,5,6,7,5,5,6,5,5,5,6,5,5,6,5,
5,5,5,6,5,7,5,6,5,6,5,5,5,5,5,7,6,7,3,2,2,5,6,5,6,5,5,6,5,5,
7,5,5,4,4,5,6,6,4,5,6,5,4,4,4,6,4,7,8,7,2,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,6,7,5,5,5,
8,6,2,6,4,4,3,2,4,2,3,5,3,3,2,6,6,2,2,3,4,4,5,5,5,6,6,6,6,6,
6,6,5,7,6,6,6,6,6,6,6,6,5,6,7,7,7,7,7,4,7,7,7,7,7,6,5,6,6,6,
6,6,6,7,5,6,6,6,6,6,5,5,5,5,6,5,6,6,6,6,6,4,6,6,6,6,6,7,7,7,
 };
static unsigned short stb__consolas_7_latin1_s[224]={ 255,70,148,106,95,73,78,127,4,10,56,
61,66,102,94,92,107,111,184,112,164,117,127,229,132,194,156,137,189,122,199,
141,115,101,224,150,219,214,234,160,209,174,88,204,126,121,116,122,179,80,169,
190,159,185,151,146,141,136,131,77,175,73,79,143,130,96,170,86,36,76,71,
145,61,56,64,46,41,6,11,26,203,180,21,6,195,249,16,1,244,208,239,
85,1,29,114,91,91,91,91,91,91,91,91,91,91,91,91,91,91,91,91,
91,91,91,91,91,91,91,91,91,91,91,91,91,91,91,91,91,255,200,54,
218,234,239,7,165,134,155,249,26,70,102,31,139,84,11,89,75,109,102,97,
106,119,97,41,36,21,36,16,56,51,46,41,83,31,26,223,120,11,6,1,
250,245,240,235,230,213,220,44,49,90,59,68,51,100,39,34,105,110,160,81,
155,195,190,170,225,215,125,1,165,140,150,175,185,66,229,244,31,135,51,130,
205,210,200,180,46,60,145,16,21,65,19,24,14, };
static unsigned short stb__consolas_7_latin1_t[224]={ 1,10,23,17,1,10,10,23,1,1,23,
23,23,23,23,10,10,17,17,10,17,10,10,17,10,17,17,10,17,23,17,
10,1,17,17,10,17,17,17,10,17,17,10,17,17,17,17,10,17,1,17,
10,17,10,17,17,17,17,17,1,10,1,23,23,23,17,10,17,10,17,17,
10,17,17,1,17,17,23,23,17,10,10,23,17,10,10,23,23,17,10,17,
1,1,1,23,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,
17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,17,1,10,1,
10,10,10,1,10,23,10,17,23,23,23,23,23,23,17,23,23,23,10,10,
23,23,23,23,23,17,17,17,10,10,10,10,10,10,10,10,1,10,10,10,
1,1,1,1,1,10,1,1,1,1,1,1,23,1,1,1,1,1,1,17,
1,1,1,1,1,1,1,17,1,1,1,1,1,17,10,10,17,1,17,1,
1,1,1,1,23,10,1,10,10,10,1,1,1, };
static unsigned short stb__consolas_7_latin1_a[224]={ 62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,62,
62,62,62,62,62,62,62,62, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_7_latin1_BITMAP_HEIGHT or STB_FONT_consolas_7_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_7_latin1(stb_fontchar font[STB_FONT_consolas_7_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_7_latin1_BITMAP_HEIGHT][STB_FONT_consolas_7_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_7_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_7_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_7_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_7_latin1_BITMAP_WIDTH-1; ++i) {
                unsigned int value;
                if (numbits==0) bitpack = *bits++, numbits=32;
                value = bitpack & 1;
                bitpack >>= 1, --numbits;
                if (value) {
                    if (numbits < 3) bitpack = *bits++, numbits = 32;
                    data[j][i] = (bitpack & 7) * 0x20 + 0x1f;
                    bitpack >>= 3, numbits -= 3;
                } else {
                    data[j][i] = 0;
                }
            }
        }
    }

    // build font description
    if (font != 0) {
        float recip_width = 1.0f / STB_FONT_consolas_7_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_7_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_7_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_7_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_7_latin1_s[i] + stb__consolas_7_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_7_latin1_t[i] + stb__consolas_7_latin1_h[i]) * recip_height;
            font[i].x0 = stb__consolas_7_latin1_x[i];
            font[i].y0 = stb__consolas_7_latin1_y[i];
            font[i].x1 = stb__consolas_7_latin1_x[i] + stb__consolas_7_latin1_w[i];
            font[i].y1 = stb__consolas_7_latin1_y[i] + stb__consolas_7_latin1_h[i];
            font[i].advance_int = (stb__consolas_7_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_7_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_7_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_7_latin1_s[i] + stb__consolas_7_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_7_latin1_t[i] + stb__consolas_7_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_7_latin1_x[i] - 0.5f;
            font[i].y0f = stb__consolas_7_latin1_y[i] - 0.5f;
            font[i].x1f = stb__consolas_7_latin1_x[i] + stb__consolas_7_latin1_w[i] + 0.5f;
            font[i].y1f = stb__consolas_7_latin1_y[i] + stb__consolas_7_latin1_h[i] + 0.5f;
            font[i].advance = stb__consolas_7_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_7_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_7_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_7_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_7_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_7_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_7_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_7_latin1_LINE_SPACING
#endif

