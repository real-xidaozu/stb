// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_12_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_12_latin1'.
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

#define STB_FONT_consolas_12_latin1_BITMAP_WIDTH         256
#define STB_FONT_consolas_12_latin1_BITMAP_HEIGHT         58
#define STB_FONT_consolas_12_latin1_BITMAP_HEIGHT_POW2    64

#define STB_FONT_consolas_12_latin1_FIRST_CHAR            32
#define STB_FONT_consolas_12_latin1_NUM_CHARS            224

#define STB_FONT_consolas_12_latin1_LINE_SPACING           8

static unsigned int stb__consolas_12_latin1_pixels[]={
    0x1088e271,0x30600980,0x98e0aaa0,0x981aa881,0x15100c40,0x0f722010,
    0x838806dc,0x2200c198,0x00da8099,0x400d981b,0x00db80da,0x157b306e,
    0x32550440,0x95406cc0,0x3004220c,0x02110101,0x58804406,0x00fa5cb1,
    0x1e3d4079,0x9932157c,0x1265444c,0x0744997b,0x33205fc4,0x44d9be82,
    0x875038b8,0x0760cbe9,0x2236ffdc,0x836e440b,0x202e2029,0xeb8838b8,
    0x201dc60d,0x9814662c,0x4b851982,0xd887901f,0x20fa5c3d,0x3620decb,
    0x00b15881,0x07810010,0x41a0d30f,0x20d83a4a,0xb904a86a,0x43e25a83,
    0x3bae2429,0x425412e1,0x5368eff9,0x0feefa48,0xb9107b91,0x887b9107,
    0x3220aebe,0x911a203d,0x9a42987b,0x20200242,0x80000308,0x2ab15880,
    0x224a9624,0x3e2f76c5,0x5b0f0eea,0x3aa541e0,0x41d85755,0xc819504a,
    0x3c4a8f43,0x7d41597b,0x7cc0e80c,0x789568ef,0x7d1eb2b5,0xd9be89b3,
    0x326cdf44,0x366fa1ad,0x9be87704,0x2af12a4d,0x1bff73c4,0xf706ffdc,
    0x4732c1bf,0x3ee0dffb,0xac5620df,0x7c4970f8,0xf1e20970,0x3e23d6a9,
    0x29501d00,0x43aebd9c,0xed815c3b,0x547a1e42,0x41b68bc4,0x5c0eb8e8,
    0x568efe83,0x75a79789,0xb53c4b50,0x3c4b53c4,0x44b51bb6,0x12d41d07,
    0x255e254f,0x208f209e,0x9e3c823c,0x823c824a,0x3209623c,0x3b3c83b3,
    0xb44f1e20,0x7d3034c7,0xb1b1d4a8,0x17a59875,0x12e2d744,0x22f12a1f,
    0xb50f88d6,0x8bb88688,0x37978956,0x3a1e47a9,0x791e8791,0x8f7dc1e8,
    0x12a0f43c,0x8951e879,0x54c78957,0x22654c4c,0x4a9e4ca9,0x2a62654c,
    0x74c1624c,0x068e9868,0x7b44f1e2,0x503b03c4,0x2b2b2ba9,0x20b62d42,
    0x87cc1f4b,0x74f12a5b,0x4a9ea86a,0x55a202c8,0xf2bcbbc4,0x323d0f21,
    0x743c8f43,0x3cad5d41,0x790760f4,0x578951e8,0x32af6789,0xd932af64,
    0x4a9e4cab,0xbd932af6,0x145624ca,0x1ef40f7a,0x52e78f10,0x20f00e87,
    0xb99b3d4a,0x41d44b81,0xefb85b1d,0x27896a0d,0x74c1efd8,0x2205980f,
    0xe9bc4b56,0x3e25cb76,0x970f8970,0x2eae10f8,0x220f8975,0xa87c4b86,
    0xf12d5e25,0x4d14c9a2,0xd264d14c,0x99345361,0x5624c9a2,0xb807dc58,
    0xdf1e200f,0x0f21e1bd,0x7394a83c,0xa83d0373,0x2f667c44,0xb7344344,
    0x807c0498,0x9a2b500d,0x837bee5b,0x74cb70e9,0xb874cb70,0x437ffa65,
    0x2c8b70e9,0x44b70e98,0xb73456e6,0xdb26776c,0x6776c99d,0xd92fbae4,
    0x3bb64cee,0x22c5624c,0x3012e04b,0xd10f078d,0x552a0f01,0x2542dc02,
    0x03eaab6e,0xeeb8bbf2,0x6641d40e,0xda92a05d,0x3bbae1ec,0xefb80ea0,
    0x06f7dc0d,0x36037bee,0x40defb80,0x037bee06,0x75c1ddd7,0x000000ee,
    0x58800000,0x203b26b1,0xbb880ec9,0x2af83c2e,0x889b334c,0x959914ca,
    0x17d00e98,0x0005b076,0x0d4c04c0,0x002a6040,0x00000008,0x01000280,
    0x00000000,0x00000000,0x05358ac4,0x06aa014c,0x0415540a,0x83551033,
    0x4c0080a9,0x00000000,0x00000000,0x00000000,0x00000000,0x5ddddc00,
    0x0099931b,0x28800000,0x00000051,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x55400000,0x3311aaaa,0x00000003,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x102a2018,0xcb804021,0x04c00440,0x411006d4,0x8060abd9,
    0x0db8192a,0x06cc1b50,0x6dc0c954,0x0221b500,0x2020b72a,0x92a82209,
    0x80abd981,0x036a00db,0x036601b3,0x80088022,0x20000300,0xdd101009,
    0x075ee43d,0xdd883e97,0x6c439d83,0x2e20f201,0x2e325400,0x0a3303c3,
    0x17107171,0x0a330530,0x17107171,0x26772354,0xcb8f7622,0x4660e88e,
    0x71077182,0x402e2071,0x220a6029,0x803b101d,0x40decb86,0x0f203fea,
    0xb750f762,0x400b6785,0x01930308,0x20dc0802,0x3229501b,0x332078e0,
    0x333322cc,0xc8b33322,0x332e2ccc,0x8b332e2c,0x4d32cccb,0xb0c22078,
    0x95059571,0x54032a01,0x2019500c,0xcccb80ca,0x4c040082,0x7c000eee,
    0x44020688,0x0ffd9830,0xdb316ed1,0x06f6cc1b,0x6cc1bff7,0x37b660de,
    0x2634cd50,0x49f34efd,0x983babe6,0x3aa609ea,0x827aa609,0x2ba09ea9,
    0x266ba099,0x4c266ba0,0x265816a6,0x2095bb73,0x05db02ed,0x176c0bb6,
    0x9ae82ed8,0x037fa609,0xc8e89ccb,0x06ff4c5c,0x3a616e7a,0x6ff4c0df,
    0x689e47a0,0xe92e1d0f,0x47904970,0xb874970e,0x3a16cb64,0x43b66952,
    0x262d53e6,0x1a60d306,0xe80f434c,0x4d303d01,0x24a9e05a,0xb5d101d0,
    0xd10b5d10,0x0b5d10b5,0x03d0b5d1,0x4f16e1d1,0x13da954a,0x9f716e1d,
    0x896e1d10,0x9966b70e,0xe9936d16,0x55d36baa,0x34ca98d7,0x3a6d755d,
    0x27a66baa,0x269534c6,0xd13cd3cc,0x20d30698,0x7d0d3069,0x555f4155,
    0x4c2aafa0,0x2a781e25,0x2e0d5644,0x1f4b81f4,0x4b81f4b8,0x81f4b81f,
    0x8950aabe,0x32a953c7,0x9e254f49,0x2a78dce9,0x578953c4,0x3668b4cb,
    0x25555f34,0x362aaaf9,0x55f34cab,0x2aabe655,0x96a0fe42,0xd1d1934a,
    0x0698d13c,0x4c1a60d3,0x20aabe86,0x2fa0aabe,0xce8910aa,0x4c953c10,
    0x4761ecbd,0x42d8ec2d,0xb1d85b1d,0xe85b1d85,0x78950aab,0x33a2953c,
    0x4f12a5a9,0x254bbb3c,0xe8bc4a9e,0x789a2970,0x03f103f1,0x1f8a64d1,
    0x1a601f88,0x4d3a23e2,0x973cd794,0x20d30698,0x3d0d3069,0x40f407a0,
    0x277ec428,0xd8e9361d,0xd99f12b8,0x2f667c4b,0x44bd99f1,0x3e25eccf,
    0x40f45ecc,0x0e8b50e9,0x0777d49b,0x4c96a1d3,0xa874c7f1,0x72d43a65,
    0x23a21bdd,0x3bbea3ee,0xd8fbbea3,0x3bea4cee,0x0fbbea3e,0x2fbf20d3,
    0xe9ba2934,0x834c0dee,0x260d3069,0x03d01e86,0x221ea07a,0x74beeb86,
    0x6dc37aa5,0x5b70faaa,0x2b6e1f55,0x55b70faa,0x2ab6e1f5,0x5c07a0fa,
    0x775c0dee,0xeb81264b,0x3fba20de,0x37bae1fc,0x006f75c0,0x00000000,
    0x0034c000,0xb006d926,0x7f6c7dfd,0x8fbfb63e,0x3ba3efed,0x3bbba2ee,
    0x00bbbba2,0x6c000073,0x6c1d96c1,0x3b2d83b2,0x2d83b2d8,0x000bbbba,
    0x00000440,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x20060000,0x18042209,0x9106665c,
    0x2201107b,0xb1740bdc,0x0b76e1d4,0xb950b72a,0x2e1ee447,0x98080ccc,
    0x22098220,0x980e5c40,0x8d504220,0x20303dc8,0x441510fa,0xddc88240,
    0x532c4951,0xed880348,0x3bbb664e,0x0cc43300,0xea87756c,0x7902fd88,
    0x7b81f4b8,0x2ba0cd74,0x40ec43d9,0x05c4c8af,0x2666254f,0x8a67721f,
    0x3d1399dd,0x7ccc4971,0xec8f7620,0x4bb21d12,0x26fa60e8,0xfa5c3c80,
    0xd9be8710,0x306f65c4,0x0e8a644b,0x099bf83c,0x4a92e1f1,0x4ba00fbc,
    0x416c3e4a,0xf970cce8,0x2cd6a9f0,0x000207e2,0x96603a04,0x21f0106a,
    0x54f05c4b,0x83c47604,0x5b539069,0x8441f03b,0x642c9641,0x400e8592,
    0x5a8e2000,0xd88001e2,0x77f5c594,0x9e40f33e,0x3ef12a1d,0xf254d300,
    0x80ee0b21,0xb01a2787,0x74c732c3,0xd17b20df,0xdca54399,0x7542f647,
    0x4f0ec0dc,0x2a4ba84a,0x46629705,0xf0550e8e,0x5642f641,0x449ac849,
    0x320ccbe8,0x445ec85e,0x6c3d0f25,0x36600dfb,0x360f049c,0x468e982e,
    0x790fbc4a,0x774952d4,0x3c05905e,0x3260d33c,0x3a2953c6,0x988f0b70,
    0x27db72eb,0xdbd30f07,0x0f833a61,0x23d9509b,0x32a7905a,0x41d4b1d7,
    0x03a0780f,0x4cf4c0e8,0x31e0785b,0xf87a1e4d,0x422d4793,0x6d40f00e,
    0x2a1ef40e,0x44c8fbc4,0x3a29d168,0xbddfd500,0x9a64f0f0,0x4a9e0f24,
    0x20787895,0x1e23f54b,0xadc3e23c,0xeaeef82d,0x41e2b501,0x6c6de24b,
    0x80f82cad,0x90535907,0xf1344355,0x9a63c0f0,0x54f07c4b,0x35907e64,
    0x8b700f05,0xf12d40fb,0x6764133e,0x0ffbba4b,0xef8780b2,0x2e1f70de,
    0x2552a781,0x12d81e1e,0x23c12e1f,0x4265aa69,0xcd8f2007,0xbc47e210,
    0xf309a25a,0x3a3661e0,0x075c6cc5,0x81e16a1f,0x21d334c7,0x44953c5b,
    0x17a3660f,0xb8b7007a,0x7d6e6884,0xaa5400ea,0x80b21e25,0x01300787,
    0x874d361d,0x776c785a,0x806f7543,0x11eeec87,0x3a03c7bd,0x775c44ee,
    0xb97bba64,0x3fba0dde,0x9b1d0f02,0x45a8741d,0x0780eeea,0xefb8d31e,
    0x2a953c0d,0x766c741d,0xf9a77540,0x1d930dee,0x7c3bbae0,0x9a5406b8,
    0x2c85cabf,0x7401e1e0,0x24beeb83,0x3b60deeb,0x400024ef,0x2004efed,
    0x00000a29,0xed800000,0x2ea574ef,0x3be6570e,0x9dfdb001,0x28a77f6c,
    0x40953c00,0x001d752b,0xf0002980,0x21881721,0x05901aa8,0x0149dfdb,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x80000000,0x0ccc8801,0x0810e6d4,
    0x12439810,0x7f640599,0x5554c122,0x40b3263a,0x40222ccc,0x33262dc8,
    0xb89504cc,0x06542ccc,0x665c1538,0x00b3322c,0x9e6664c3,0x373cccc8,
    0x244731b8,0x8370a815,0xc8b3321a,0x37262ccc,0xca890a62,0x0c455240,
    0x837d900f,0x1d3299e9,0x88b10b53,0x4f44970e,0x412642ea,0x95ce1bcf,
    0x5d53b50b,0xd54ea9f8,0x2d89e881,0x3033d531,0x099ad8fd,0x1b58176c,
    0x3f04cd74,0x43ae05d5,0x265b9998,0x4cd54d99,0x323c8f46,0x744c8e41,
    0x4cb667e0,0x267209ea,0xb3c4b51e,0xe8bc41fb,0xe8079a60,0xd903b82c,
    0x50b103fb,0x33441d1b,0x55f00f8b,0x0bbb8e7d,0x99e24c95,0x25a87a66,
    0x3d034c5a,0x5d101d8f,0xefefea8b,0x3c9e03d1,0x40ec05c8,0x16cb60e9,
    0x8591a7aa,0x234cd31d,0x406992e7,0x33c4b53c,0x1e8f883e,0x1bf7f34c,
    0x10accba8,0xb1e83399,0x2f7f74c5,0x15d70bba,0x99e01f1e,0xa85e5c76,
    0x45b9e3c4,0x34cd32e8,0x479dc1a6,0x52e099ad,0x746a4c0f,0x2a7e0aab,
    0x26026c1e,0x9e983d06,0xab83fb06,0xb8f41b69,0x306dd7c3,0x5d51e80d,
    0x441f0f75,0x3e2882df,0xcc8e8793,0x899dd30a,0x0b10791e,0x75c35f95,
    0x81ec1f0a,0x72b9daa7,0x7c1f12a1,0x07540eec,0x698bbdd9,0x9bb1e688,
    0x42d8ec39,0xaabe8d3a,0x2a0bb3e0,0x2e0b600e,0x3203f904,0x4f65dc1f,
    0x7c0e9e46,0x81a62eca,0x2eabaa4c,0x3be20f87,0x992a7802,0x03b82dae,
    0xb101f7b9,0x4435d750,0xdfb11e66,0x3975d7c5,0x2a4a85c3,0x2e404fc7,
    0xb0d312a0,0x3619f99b,0x5eccf881,0xe9bfbbb2,0x4c1a6f01,0xe986981e,
    0x3a60d300,0x5d75d46a,0x3c3474c6,0x5b834cd3,0x1f0f12d4,0x0c0f47c4,
    0xb599254f,0x5d107705,0x32020999,0x4da22cfd,0xcf86884d,0x0b864e0a,
    0x0f0fa695,0x81d3012e,0xfbaa9869,0x5b703b0a,0x4ce41f55,0x36780f44,
    0x2d81d102,0x41a602e8,0x67547b2e,0x83ce86e8,0xb86996e7,0x21e25a85,
    0x0755e20f,0x14a9e1f9,0xea8f764d,0x28514eee,0x993bbba2,0x3fe209ea,
    0x0f07303e,0x4373332e,0x0783effa,0x980ded80,0x40ec7806,0x33916c1d,
    0x22eeee89,0x69801a67,0x47ffffa8,0x3e25c869,0x21b63f30,0xdfef80fc,
    0x227dfdb0,0x4b56ffff,0x5bfffe78,0x24997278,0x000012a7,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x264981a8,0x00383224,0xe9837bae,0x9a0100de,
    0x9d7dd54a,0xb30ded88,0x2eec81dd,0x449b5d75,0x777741dc,0x2f604c42,
    0x1c8390de,0xb3934495,0x5a87443d,0x20301128,0x29862282,0x18940d44,
    0x026216dc,0x980930b5,0x27999910,0x81088318,0x3f505909,0x1a4f99f6,
    0x13c820b1,0x1ea16e1d,0xb4c2953c,0xda5c3a1d,0xdb849901,0x344468f9,
    0x2f2e0e88,0xc9e4fe1c,0x53c43632,0x22cc6ec9,0xacc0e8db,0xd50a421d,
    0x23d1990f,0x32e25dc9,0x77345644,0x3af6a1d1,0x59b03ea0,0x33330f20,
    0x971e36a1,0x2c9d883e,0x26d8ccb8,0x588d0ed9,0x25532e60,0x2a780c1e,
    0x4b6faea4,0xd76baae9,0xbb80f815,0x366c4d58,0x2f2e21e8,0x774a9e49,
    0x3a5b1af5,0xed828761,0x5c4b8e82,0x41e11ddc,0x4c5a81fd,0x93b8e83c,
    0x1c8ec763,0x41a751a2,0x9e666440,0x880078da,0xabeab82c,0x5a79930e,
    0x6c4cfdca,0x78954cab,0xf133332a,0xaeacca54,0x5555d30a,0x01d0fe4c,
    0xca9ab157,0x54c3c86b,0x2953c95c,0x4c69ccca,0x2006c68d,0x599d81fc,
    0x43c1f644,0x07544de8,0x36b31ae6,0x65cd7d51,0x583b70e9,0x4ccc012a,
    0x000a3119,0xb5d5c164,0xd1d1930e,0x8867aa62,0xa8745326,0x06666625,
    0x4c6d361d,0x6401f887,0x22ae0f23,0x541898d5,0x4b9bc885,0x3bb14a9e,
    0xd879d0bb,0x03a76a00,0xc8b8aed1,0x417f7319,0x37ea791d,0xd8d9710c,
    0x5414c598,0x0000000b,0x05900000,0x4c365159,0x0588d794,0x75c99ddb,
    0x703980de,0x33aa97dd,0x3bea0dea,0x41dddd3d,0x1572eec8,0x1eeeb9ab,
    0xc993bbbe,0x7c953c4c,0x81f709d3,0x2e1d300d,0x54438005,0x5551002a,
    0xd7000d44,0x000003dd,0x316a9bb1,0x33332603,0x90590b13,0x22931d85,
    0x0001c46e,0x00005980,0x00022020,0x00000000,0x00000000,0x00000000,
    0x00000000,0x543f2000,0x2621d4de,0x90534b99,0xb0769ddd,0x006d9263,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x3ee35000,0x00012604,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__consolas_12_latin1_x[224]={ 0,2,1,0,0,0,0,2,1,1,0,0,1,1,
2,0,0,0,0,0,0,1,0,0,0,0,2,1,0,0,1,1,0,0,0,0,0,1,1,0,0,1,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,1,0,0,0,0,0,0,0,0,0,0,0,1,
0,1,1,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,
2,0,0,0,1,0,0,1,0,0,1,0,1,1,0,0,0,2,2,1,1,0,0,0,0,1,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__consolas_12_latin1_y[224]={ 8,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,1,6,4,
6,-1,0,0,0,0,0,0,0,0,0,0,2,2,1,3,1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,0,9,-1,2,-1,2,-1,2,-1,2,-1,-1,
-1,-1,-1,2,2,2,2,2,2,2,0,2,2,2,2,2,2,-1,-2,-1,3,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,2,-1,0,0,0,
-2,-1,-1,0,0,2,4,4,-1,0,-1,0,-1,-1,-1,2,-1,3,8,-1,0,2,-1,-1,-1,2,-2,-2,-2,-2,
-2,-3,0,0,-2,-2,-2,-2,-2,-2,-2,-2,0,-2,-2,-2,-2,-2,-2,2,-1,-2,-2,-2,-2,-2,0,-1,-1,-1,
-1,-1,-1,-1,2,2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,-1,-1,
 };
static unsigned short stb__consolas_12_latin1_w[224]={ 0,3,5,7,6,7,7,2,5,4,6,7,4,5,
3,6,7,6,6,6,7,5,6,6,6,6,3,4,6,6,5,5,7,7,6,6,7,5,5,6,6,5,5,7,
5,7,6,7,6,7,7,6,7,6,7,7,7,7,6,3,6,4,6,7,4,6,6,6,6,6,7,7,6,5,
6,6,5,7,6,7,6,6,6,5,6,6,7,7,7,7,6,6,2,5,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,3,6,6,7,7,
2,6,6,7,5,6,6,5,6,5,5,6,5,5,6,7,6,3,2,5,5,6,7,7,7,4,7,7,7,7,
7,7,8,6,6,6,6,6,6,6,6,6,7,6,7,7,7,7,7,6,7,6,6,6,6,7,6,6,6,6,
6,6,6,6,7,6,6,6,6,6,6,6,6,6,6,6,7,7,7,7,7,7,7,6,6,6,6,7,6,7,
 };
static unsigned short stb__consolas_12_latin1_h[224]={ 0,10,4,8,11,10,10,4,12,12,6,7,5,2,
3,11,9,8,8,9,8,9,9,8,9,8,7,9,8,4,8,10,12,8,8,9,8,8,8,9,8,8,9,8,
8,8,8,9,8,11,8,9,8,9,8,8,8,8,8,12,11,12,5,2,4,7,10,7,10,7,9,9,9,9,
12,9,9,6,6,7,9,9,6,7,9,7,6,6,6,9,6,12,13,12,3,8,8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,0,9,11,8,8,8,
13,11,4,9,6,6,3,2,6,3,5,8,6,6,4,9,11,3,2,6,6,6,9,9,9,9,10,10,10,10,
10,11,8,10,10,10,10,10,10,10,10,10,8,10,11,11,11,11,11,6,11,11,11,11,11,10,8,10,10,10,
10,10,10,10,7,8,10,10,10,10,9,9,9,9,10,9,10,10,10,10,10,7,10,10,10,10,10,12,12,12,
 };
static unsigned short stb__consolas_12_latin1_s[224]={ 254,128,238,135,168,146,232,252,41,66,161,
22,212,220,230,183,34,237,223,69,113,28,127,164,49,98,252,167,157,231,92,
1,58,127,210,76,77,143,121,83,230,217,98,244,1,7,15,152,85,86,149,
187,105,202,202,194,186,178,171,37,115,53,217,212,251,30,72,81,58,68,231,
223,1,22,23,209,239,88,116,37,245,216,139,75,180,53,131,123,146,194,102,
71,1,47,234,69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,
69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,69,254,148,101,
17,24,39,4,108,244,90,96,154,242,220,109,224,206,32,181,187,224,61,122,
252,249,168,200,193,111,119,172,56,186,178,170,162,154,78,8,132,194,121,114,
107,100,93,86,79,47,65,144,152,160,175,190,174,136,198,129,94,205,50,62,
8,247,219,226,240,212,29,60,55,36,43,22,15,42,134,104,141,1,160,201,
240,248,224,14,45,216,209,7,139,233,15,30,7, };
static unsigned short stb__consolas_12_latin1_t[224]={ 1,15,47,37,1,15,15,37,1,1,47,
47,47,12,52,1,26,37,37,26,37,26,26,37,26,37,26,26,37,47,37,
26,1,37,37,26,37,37,37,26,37,37,26,37,47,47,47,26,37,1,37,
26,37,26,37,37,37,37,37,1,1,1,47,12,47,47,15,47,15,47,26,
26,37,26,1,26,26,47,47,47,26,26,47,47,26,47,47,47,47,26,47,
1,1,1,52,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,
37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,37,1,26,1,
37,37,37,1,1,47,26,47,47,52,12,47,52,47,37,47,47,47,26,1,
42,52,47,47,47,26,26,26,26,15,15,15,15,15,1,37,15,15,15,15,
15,15,15,15,15,37,15,1,1,1,1,1,47,1,1,1,1,1,15,37,
15,1,1,1,1,1,15,47,37,15,15,15,15,26,26,26,26,15,26,15,
15,15,15,26,47,15,15,26,15,1,1,1,1, };
static unsigned short stb__consolas_12_latin1_a[224]={ 106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,106,
106,106,106,106,106,106,106,106, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_12_latin1_BITMAP_HEIGHT or STB_FONT_consolas_12_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_12_latin1(stb_fontchar font[STB_FONT_consolas_12_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_12_latin1_BITMAP_HEIGHT][STB_FONT_consolas_12_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_12_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_12_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_12_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_12_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_12_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_12_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_12_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_12_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_12_latin1_s[i] + stb__consolas_12_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_12_latin1_t[i] + stb__consolas_12_latin1_h[i]) * recip_height;
            font[i].x0 = stb__consolas_12_latin1_x[i];
            font[i].y0 = stb__consolas_12_latin1_y[i];
            font[i].x1 = stb__consolas_12_latin1_x[i] + stb__consolas_12_latin1_w[i];
            font[i].y1 = stb__consolas_12_latin1_y[i] + stb__consolas_12_latin1_h[i];
            font[i].advance_int = (stb__consolas_12_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_12_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_12_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_12_latin1_s[i] + stb__consolas_12_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_12_latin1_t[i] + stb__consolas_12_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_12_latin1_x[i] - 0.5f;
            font[i].y0f = stb__consolas_12_latin1_y[i] - 0.5f;
            font[i].x1f = stb__consolas_12_latin1_x[i] + stb__consolas_12_latin1_w[i] + 0.5f;
            font[i].y1f = stb__consolas_12_latin1_y[i] + stb__consolas_12_latin1_h[i] + 0.5f;
            font[i].advance = stb__consolas_12_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_12_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_12_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_12_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_12_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_12_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_12_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_12_latin1_LINE_SPACING
#endif

