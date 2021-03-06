// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_7_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_7_latin_ext'.
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

#define STB_FONT_consolas_7_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_consolas_7_latin_ext_BITMAP_HEIGHT         50
#define STB_FONT_consolas_7_latin_ext_BITMAP_HEIGHT_POW2    64

#define STB_FONT_consolas_7_latin_ext_FIRST_CHAR            32
#define STB_FONT_consolas_7_latin_ext_NUM_CHARS            560

#define STB_FONT_consolas_7_latin_ext_LINE_SPACING           5

static unsigned int stb__consolas_7_latin_ext_pixels[]={
    0x02600098,0x50530750,0x42b88200,0x550aa0bb,0x70661544,0x50b22985,
    0x20030c50,0x2154019a,0x20a1542a,0xb885cc2b,0x012e14c2,0x2a0c1771,
    0x550ea1bb,0x221d42b8,0x20a21542,0xb8815482,0x8b306e61,0x21c43548,
    0x2e1986a4,0x42a89701,0x8aa2542b,0xb8ae388a,0x970c32a8,0x385d430c,
    0xa45705cc,0x4463a838,0x18898ae1,0x2188c2e6,0x2551862b,0x0ba86230,
    0x54ca261c,0x1a82b6a0,0xa87705d4,0x1750371a,0xb82e61dc,0x14d4aa23,
    0x20b9a866,0x21a9640b,0x21a9643b,0xb85931aa,0xc88ae2d8,0x98b8aae3,
    0x22e79772,0xa9aa4929,0x54d49711,0x551c2551,0x1494c5c2,0x38a45a87,
    0x9c521111,0xb9c5212a,0x24e29298,0x025538a4,0xd9856d47,0x4150320b,
    0x3506e12a,0x2a8b2617,0x425506e1,0x3554881b,0x49950cc5,0x446a5828,
    0x2a0a443b,0x390dc0b9,0x2e225c93,0x29245b31,0x4a492bbb,0x372a4c8e,
    0x23849321,0x38a52484,0x4e290e32,0x4e29198a,0x49271484,0x5205ce29,
    0x8706e938,0x2120660c,0xc98dd20a,0x46e0f2a2,0x48b26374,0x15482c98,
    0x9350cc51,0x83524144,0x9508a41b,0x79065d47,0xb992e271,0x7246ea1c,
    0x27246eee,0x48ee0cc9,0x702e3b92,0x7339205c,0x8a43a419,0x45233153,
    0x27148173,0x9138a4e4,0x149c5237,0x36624385,0x0a82ee0b,0x546e1452,
    0x219750bc,0x171b8514,0x32a906e0,0x2a19930c,0xa920e2a8,0x9c439731,
    0x4c19951a,0xca8674c0,0x2a39751d,0x219930cd,0x8332608b,0x101911b9,
    0xbc883225,0x98de4471,0x7702a0cc,0xb30cc98b,0x44332639,0x219931bc,
    0x19930cc9,0x21993054,0x70e22cc9,0x204c3817,0x54b32609,0x473190cb,
    0xba9664c3,0x2a37910c,0x2a9110cb,0x204c0980,0x51a9c43a,0x1a864397,
    0x18047319,0x00280924,0x4c220033,0x4004c600,0x0088002a,0x00000000,
    0x1a800000,0x04041100,0x002a8800,0x85440000,0x06010100,0x88200442,
    0x00005510,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x35000000,0x2214c2c4,0x5050cd43,
    0x5705dcc5,0x20c261a8,0x8aa2e080,0x570c262a,0x3031088c,0x21542817,
    0x0a60262b,0xb88a0e03,0x0550a623,0x0c531010,0x706615c3,0x1441ab85,
    0x5c5770aa,0x85711d42,0x0aa1c42b,0x46a37055,0x118661aa,0x18ae1863,
    0x06a15c31,0x79054455,0x31c25451,0x791dc422,0x9a8d5451,0x42550a24,
    0x88c46311,0xa8222a2a,0x5c42b6a2,0x42210621,0x31131aaa,0xa84854c4,
    0xa8e291aa,0x2a82ee62,0x986e6154,0x4c7170bb,0xb98730bb,0x4750ea0b,
    0x26188c0a,0x02e6a6a1,0x53538a45,0x8a4a62e3,0x05453173,0x70cc5317,
    0x4b62e535,0x8662a5c8,0x54a6ee48,0x288b50b9,0x4e291ba4,0x55244714,
    0x1914c5c7,0x150a2198,0x64662a33,0x350a228b,0x148cc545,0x1a8aa2e7,
    0x545caa2e,0x1a82e6a2,0xa8350ed2,0x43986a0c,0x29155439,0x2a17b338,
    0x90a83ca9,0x4924c8e2,0x54924e29,0x38664920,0x5d26725b,0x90662a28,
    0x3ca9645c,0xa4288aaa,0x8a4e2928,0x24395243,0x4330f669,0xa8cc5428,
    0x45377198,0xa8d55428,0xa4e29198,0x71482a38,0x89951c52,0x82a1d20a,
    0x502a0cb9,0xaa865419,0x2479791a,0x882f2a26,0x4771c521,0x4938a4e4,
    0x39219b33,0x954e1993,0x459538bc,0x2724198a,0x2a17952c,0x237b10b8,
    0x4e292cc9,0x22a48714,0x1771c90b,0xd98510cc,0xc8b8261c,0x51150a22,
    0x239190b8,0x982a0cc9,0x419930cc,0x9505449a,0x02e0545b,0x9865cc15,
    0x233150cb,0x26a24714,0x9872398c,0x4c1910cc,0x219930cc,0x931c0cc9,
    0x8d40b819,0x10ae0ce9,0x1312e617,0x8131cc64,0x99304c09,0x44433261,
    0x199304c4,0xd88664c0,0x64e0401b,0x4546f622,0x4c000c28,0x8a8000cd,
    0x4019b32a,0x36600cd9,0x4c54000c,0x815ce291,0x200622a8,0x88000009,
    0x20c08800,0x801a8281,0x20215440,0x51000080,0x00000081,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x14c40000,0x550ae0d4,
    0x20d5c2b8,0x50aa15c2,0x06a08845,0x1542b833,0xb88570ae,0x50550ae2,
    0x214c3a83,0x0ea15429,0x44330e0a,0x0ae1542b,0x15c2b855,0x54450380,
    0x70e215c2,0x128ba820,0x2e1dc455,0x0a0e1c42,0x1b98a6e6,0x237751d4,
    0x98442110,0xb88aa188,0x2a35350b,0xb88aa198,0xbb88aa0b,0x0bb88aa0,
    0x3088476a,0x3981730c,0x228e618a,0x1bb98e61,0x21bb98e6,0x237731b8,
    0x710cc2b8,0x4dc41985,0x5dc45713,0x08842210,0x20884221,0x550eee4a,
    0x2a1542a8,0x17711542,0x85cd40cc,0x22a1a839,0x32331519,0x2353528b,
    0x46eee0a9,0x3535198a,0x1a9a82a6,0x8d4d4153,0x42a6e0a9,0x91c7198a,
    0xb82e6171,0x5c1731a9,0x881731a9,0xc881730c,0x64439730,0x44b86e20,
    0x2612e1b8,0x0a98dc41,0x4c54662a,0x22a33151,0x54593719,0x45caa2e1,
    0x2e55172a,0x255172a8,0x540cc0a9,0x1506544c,0x98a8cc54,0x2ee53771,
    0x2617b31b,0x239b30bc,0x17b31bbb,0x5ecc6eee,0x36637770,0x4542a90b,
    0x24735719,0xa93206a7,0x206a4c81,0x8a606a29,0x98a61cba,0x4c9711cb,
    0x309711cb,0xd98e5cc3,0x2a33150b,0x23315198,0x7159198a,0x27149e5c,
    0x49c52714,0xd99c5271,0x26a04c0b,0x0a832e64,0x66cc7366,0x32659171,
    0x2120330b,0x2617930b,0x1985e4c1,0x41985e4c,0x39b30cca,0x7348eeee,
    0xc83505e4,0x17906a0b,0x0905e424,0x65d4482e,0x2ea3b951,0x983b951c,
    0x0cc72ea1,0x66cc7366,0x36639b31,0x2e19b31c,0x219933c8,0x19930cc9,
    0x664c3326,0x2a020330,0x005402a8,0x2602c9c0,0x0440c0bd,0x4c017b30,
    0x2f6600bd,0x1dd64000,0x0a801999,0x6dc00a80,0x0736e01c,0x80736e11,
    0x99248124,0x2f6600cc,0x0a000000,0x40000000,0x00000bd9,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0xa8790000,0x30ae2282,0x215c2a88,0x11cc1c38,0x71154453,0x21c42b87,
    0x06225c42,0x81860545,0x85711dc2,0x0662983a,0x2a8750e2,0x98618ae2,
    0x0a141542,0xaa8550a6,0x54154130,0x30530aa0,0x4550d543,0xb88e23b8,
    0xb7098ae3,0x260cc198,0x2a82b6a1,0x550aa154,0x535505cc,0x22b88ae2,
    0x30ae22b8,0x462245c3,0x3514d462,0xb11b9835,0x07324d41,0xaa98712a,
    0x298b8370,0x9c523113,0x17730bb9,0x5dcc2ee6,0x2e217710,0x2635350b,
    0x43835350,0x32a0cc1a,0x26e17351,0x05cd222a,0x22648133,0x712e1a9a,
    0x50644b89,0x46a6a353,0x35351a9a,0x4511506a,0x886e21b8,0x4b86e21b,
    0x2e510a6e,0x453551a9,0x26a3b84c,0x5413d30c,0xb8b26e0c,0x64ce6a20,
    0x51794922,0xa8351c52,0x986a0d41,0x5482a60a,0x1e4e4263,0x25c4b853,
    0x8f2a3535,0x7774874b,0x83a8f261,0x892e2534,0x8912e24b,0x37771bbb,
    0x5ddc6eee,0x32a17911,0x2639730c,0x239731cb,0x49711cb9,0x41711b8b,
    0xb8a22a4c,0xc88ed443,0x265b191a,0x8e2b20cb,0x70b32e38,0x53773923,
    0xa8151c52,0x982a0540,0x217b30bd,0x32351bb9,0x9710e38a,0x46a925c4,
    0x73770bca,0x350e2748,0x1993570a,0x6e54772a,0x5dc3b951,0x32617930,
    0x2617930b,0x0a82a0bc,0xcba8e5d4,0x2ea39751,0x2e3b951c,0x541911b9,
    0x64432ea1,0x72c1ddc0,0x2604c5b7,0x7791c0cd,0x64c32ea3,0x2659170c,
    0x1502a0cc,0x330540a8,0x2a330198,0x21c19931,0x3b951dca,0x4c647326,
    0x2e617733,0x2e219934,0x524800e4,0x00092524,0x00080000,0x01248000,
    0x26005431,0x732d8b80,0x40a01007,0x93800009,0x9866cc05,0x219b30cd,
    0x17b30cd9,0x21102f66,0x49026008,0x55102494,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x4c000000,0x1730ae0b,0x22b88442,0x30261cd8,0xb882e637,0x71002f23,
    0x46388183,0x8498ae08,0x2a62b808,0x4618ae0a,0x2e0b9820,0x730cc062,
    0xab855441,0x8aa8e228,0x455c6ea2,0x108e20e2,0x4750ee21,0x46aa62a8,
    0x0a22a861,0x261b88c3,0x80d42b80,0x46a6a12a,0x0662a12a,0x13157e49,
    0x46a2e3b8,0x506ae0a8,0x3710b981,0x799b14c4,0x330702a2,0x26a20a88,
    0x5d4c1513,0x21c3b950,0x98f2a298,0x235171cc,0x47513aab,0x90eea298,
    0x82a23a88,0x4662a0a8,0x510e6298,0x238cccc1,0x1cc55173,0x2a198e29,
    0x44531088,0x44255c0a,0x8a8dd25d,0xaf992e1a,0x6c76a202,0x7750cc73,
    0x644736a1,0xaaa836a3,0x0cc59771,0x2899854e,0x22ccb866,0x7331e419,
    0xaaa8f6a1,0x2e253151,0x55ce7b0b,0x9b986a1c,0xa8483312,0xa8660cc1,
    0x43555198,0x998660ca,0x5273571a,0x4d432238,0x3aa8660a,0x4198a6e6,
    0x54d40b8b,0x66d4a291,0xb8a60d43,0x7338eee2,0x433150cc,0x8730cc0a,
    0x5317198a,0x984ce0cc,0xbc866289,0xcc98661b,0x2144b930,0x1975198a,
    0x399c772a,0x95dc3997,0x122bb819,0x4c198eae,0x45473661,0x4c197319,
    0xbbb8c661,0x42419933,0x3950cc4c,0x880cc0cc,0x219951bc,0x98152cc9,
    0x3714c0cb,0xccb96c5c,0x22a19930,0x26177319,0x237b10cc,0x4a67198a,
    0x87b30cc9,0x19930bc9,0xc98664c0,0x2a33150c,0x233151bd,0x971cc41a,
    0x9e45c019,0x91e45c19,0x33265938,0x54019930,0x33260198,0x2b255750,
    0x23c8003b,0x17150cc9,0x01993066,0x20008000,0x0000004b,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x88700a80,0xbba8aa1c,0x21b98e61,0x2615c2b8,0x377515c0,
    0x77315c28,0x862318a3,0x0310d438,0x53088c33,0x77315cc1,0x8898c263,
    0x5dc43731,0x15417710,0x31861773,0x130aa88c,0x2186a211,0x98805311,
    0x85710d42,0x0444402a,0x26054413,0xaa84c400,0xa82e05c2,0xb986a1a9,
    0xb882e6a0,0x2e615511,0x1a82e222,0x910c32dc,0x5cc6a6e1,0x2215510b,
    0x970510aa,0x171924d4,0x1a88aa2a,0x2eae5179,0x2a617153,0xa8b82a60,
    0x271486a1,0x89221a9a,0x5ceab24c,0x25373389,0x35550bb8,0x25555254,
    0xa8ea23a8,0x9822623a,0x64426e21,0x2aa9b10c,0xbda8911a,0x05437771,
    0x264ca835,0x531221cb,0x51264490,0x531c4dc9,0x221e44c8,0x88512444,
    0x9c916a4b,0x77241b9a,0x54eaee53,0x4c2f665b,0xa8ae6e3c,0x4b8f2f20,
    0x9b8f205c,0x26777738,0x315254c1,0x37532643,0x542ee1e4,0x986aa61c,
    0x4c86f261,0x262a26a2,0xc9891221,0x17902a0b,0x1cba926a,0x1b85302e,
    0x25d7b054,0x2a123bbb,0x702e2641,0x372a1441,0x39a45551,0x2e1a8375,
    0x271372c8,0x9833298a,0x82a1a981,0xb31e4714,0x5c6eaa17,0x25977389,
    0x15089819,0x110ee233,0x43111dc4,0x986a0b8a,0x888260cc,0x03315008,
    0x80150048,0x36602a8a,0x2a3b930b,0x9202a1ce,0x39b72cbb,0x25317054,
    0x17b30bd9,0x29246f62,0x19990b8a,0x3271202a,0x0cca9c72,0x306617b3,
    0x4866cc77,0x00000071,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x4c1c8111,0x40ee1dc0,0x446ee63b,0x0a8aa208,0x8710d422,0x2e098e2b,
    0x00006733,0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,
    0x70661ba9,0x5261d447,0xbb98e22c,0x40055551,0x4000132a,0x6454ea1a,
    0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,0x90440000,
    0x3504c4c9,0x03d883b8,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__consolas_7_latin_ext_x[560]={ 0,1,0,0,0,0,0,1,1,0,0,0,0,0,
1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,-1,0,
0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static signed short stb__consolas_7_latin_ext_y[560]={ 5,0,0,0,-1,0,0,0,-1,-1,0,1,3,2,
3,0,0,0,0,0,0,0,0,0,0,0,1,1,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,-1,0,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,-1,0,0,0,
-1,0,0,0,0,1,2,2,0,0,0,0,0,0,0,1,0,2,5,0,0,1,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,-1,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,-1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
-1,0,-1,0,0,1,-1,0,-1,0,-1,0,-1,0,-1,-1,0,0,-1,0,-1,0,-1,0,0,1,-1,0,-1,0,
-1,0,-1,0,0,-1,-1,-1,0,0,-1,0,-1,0,-1,0,0,0,-1,1,0,0,-1,0,0,0,1,-1,-1,0,
0,-1,-1,0,0,0,0,-1,0,0,1,-1,0,-1,0,1,-1,0,-1,0,-1,0,0,1,-1,0,0,1,-1,0,
-1,0,-1,0,0,1,-1,0,0,0,-1,-1,0,0,-1,0,-1,0,-1,0,-1,-1,-1,0,0,1,-1,0,-1,0,
-1,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-2,-2,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static unsigned short stb__consolas_7_latin_ext_w[560]={ 0,2,3,4,4,4,4,2,2,3,4,4,3,3,
2,4,4,4,4,4,4,4,4,4,4,4,2,3,4,4,4,3,4,4,4,4,4,4,4,4,4,4,3,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,3,4,4,3,4,4,4,4,4,4,4,4,4,
3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,2,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,2,4,4,4,4,
2,4,4,4,4,4,4,3,4,3,4,4,4,3,4,4,4,2,2,4,4,4,4,4,4,3,4,4,4,4,
4,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,6,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,5,5,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,5,4,4,4,5,4,
4,4,4,4,4,4,4,4,4,4,4,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,5,4,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4, };
static unsigned short stb__consolas_7_latin_ext_h[560]={ 0,6,2,5,7,6,6,2,8,8,4,4,4,2,
3,6,6,5,5,6,5,6,6,5,6,5,5,6,5,2,5,6,7,5,5,6,5,5,5,6,5,5,6,5,
5,5,5,6,5,7,5,6,5,6,5,5,5,5,5,7,6,7,3,2,2,5,6,5,6,5,5,6,5,5,
7,5,5,4,4,5,6,6,4,5,6,5,4,4,4,6,4,7,8,7,2,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,6,7,5,5,5,
8,6,2,6,4,4,3,2,4,2,3,5,3,3,2,6,6,2,2,3,4,4,5,5,5,6,6,6,6,6,
6,6,5,7,6,6,6,6,6,6,6,6,5,6,7,7,7,7,7,4,7,7,7,7,7,6,5,6,6,6,
6,6,6,7,5,6,6,6,6,6,5,5,5,5,6,5,6,6,6,6,6,4,6,6,6,6,6,7,7,7,
6,6,6,6,7,6,7,6,7,6,7,6,7,6,6,7,5,6,6,6,6,6,6,6,7,6,6,6,7,7,
7,7,7,7,7,8,6,6,5,5,6,5,6,5,6,5,7,7,6,4,6,7,7,7,7,7,4,6,6,7,
7,6,6,5,5,5,5,6,5,7,6,6,5,6,7,6,7,6,7,6,7,6,6,5,6,5,7,6,6,5,
7,6,7,6,7,6,7,6,7,7,6,7,5,6,7,6,7,6,7,6,7,7,7,6,7,6,6,5,6,7,
6,6,5,6,5,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,7,8,6,6,7,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,7,6,7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5, };
static unsigned short stb__consolas_7_latin_ext_s[560]={ 254,253,74,137,45,219,116,55,1,12,251,
241,252,51,25,205,200,46,51,21,61,244,239,121,6,151,253,31,6,33,222,
249,55,101,136,1,111,141,146,11,161,156,235,106,96,131,126,147,116,65,31,
142,21,157,227,212,81,76,71,90,132,165,11,38,67,36,95,26,220,16,11,
225,1,247,230,237,232,181,201,217,51,192,191,197,21,187,166,186,176,100,171,
249,4,6,78,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,
207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,254,197,61,
122,117,112,16,111,43,230,206,196,1,51,211,63,16,56,28,21,58,16,26,
71,48,6,216,221,152,172,162,86,76,11,6,16,215,210,35,150,249,189,187,
182,177,172,167,162,41,152,140,98,60,50,121,246,56,26,101,106,11,90,132,
81,184,71,66,61,56,40,102,46,41,36,31,26,177,182,107,202,1,192,244,
239,234,229,224,231,214,209,204,199,194,16,234,70,173,168,163,158,75,148,93,
138,85,128,220,118,130,108,102,108,142,87,82,77,72,67,62,57,175,47,42,
37,160,81,190,200,210,1,96,19,243,238,76,51,223,46,213,97,203,81,36,
46,182,236,172,66,71,111,86,116,226,136,131,91,239,156,178,92,86,66,61,
32,71,76,146,151,127,162,51,167,41,177,31,187,21,192,208,147,197,157,244,
1,6,242,225,233,215,228,205,218,195,12,185,180,17,169,56,126,155,141,145,
22,135,92,125,120,115,27,103,52,97,66,123,80,113,133,86,143,91,153,41,
167,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,248,
207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,
207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,
207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,
207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,
207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,
207,207,207,35,7,105,137,29,126,207,207,207,207,207,207,207,207,207,207,207,
207,207,207,207,207,207,207,207,207,207,207,207,207,24,121,185,180,207,207,207,
207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,
207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,207,
207,207,207,207,207,207,207,207,207, };
static unsigned short stb__consolas_7_latin_ext_t[560]={ 1,10,45,32,1,18,25,45,1,1,39,
39,32,45,45,25,25,39,39,32,39,25,25,39,32,39,25,32,39,45,32,
25,1,39,39,32,39,39,39,32,39,39,25,39,39,39,39,25,39,1,39,
25,39,25,32,32,39,39,39,1,25,1,45,45,45,39,25,39,25,39,39,
25,39,32,1,32,32,39,39,32,25,25,39,32,25,32,39,39,39,25,39,
1,1,10,45,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,1,25,10,
32,32,32,1,25,45,25,39,39,45,45,39,45,45,32,45,45,45,32,32,
45,45,45,39,39,32,32,32,25,25,25,25,25,25,25,32,1,18,18,25,
25,25,25,25,25,32,25,1,1,1,1,10,39,10,10,10,10,10,25,32,
25,18,25,25,25,25,1,32,25,25,25,25,25,32,32,32,32,25,32,18,
18,18,18,18,39,18,18,18,18,18,10,1,1,18,18,18,18,1,18,1,
18,1,18,1,18,1,18,18,1,32,18,18,18,18,18,18,18,1,18,18,
18,1,10,1,1,1,10,10,1,10,10,32,32,10,32,10,32,10,32,10,
10,10,39,10,10,10,10,10,10,39,10,10,10,1,10,18,32,32,32,32,
18,32,10,10,10,32,10,10,10,10,10,10,10,10,10,10,32,10,32,1,
18,18,32,1,10,1,10,1,10,1,18,1,1,18,1,39,10,1,10,1,
18,1,18,1,1,1,18,1,18,18,39,18,1,18,18,39,18,39,18,39,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,10,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,1,1,25,25,1,25,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,1,25,1,1,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,
32,32,32,32,32,32,32,32,32, };
static unsigned short stb__consolas_7_latin_ext_a[560]={ 62,62,62,62,62,62,62,62,
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
//    height: STB_FONT_consolas_7_latin_ext_BITMAP_HEIGHT or STB_FONT_consolas_7_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_7_latin_ext(stb_fontchar font[STB_FONT_consolas_7_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_7_latin_ext_BITMAP_HEIGHT][STB_FONT_consolas_7_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_7_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_7_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_7_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_7_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_7_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_7_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_7_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_7_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_7_latin_ext_s[i] + stb__consolas_7_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_7_latin_ext_t[i] + stb__consolas_7_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__consolas_7_latin_ext_x[i];
            font[i].y0 = stb__consolas_7_latin_ext_y[i];
            font[i].x1 = stb__consolas_7_latin_ext_x[i] + stb__consolas_7_latin_ext_w[i];
            font[i].y1 = stb__consolas_7_latin_ext_y[i] + stb__consolas_7_latin_ext_h[i];
            font[i].advance_int = (stb__consolas_7_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_7_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_7_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_7_latin_ext_s[i] + stb__consolas_7_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_7_latin_ext_t[i] + stb__consolas_7_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_7_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__consolas_7_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__consolas_7_latin_ext_x[i] + stb__consolas_7_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__consolas_7_latin_ext_y[i] + stb__consolas_7_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__consolas_7_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_7_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_7_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_7_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_7_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_7_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_7_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_7_latin_ext_LINE_SPACING
#endif

