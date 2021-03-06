// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_17_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_17_latin1'.
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

#define STB_FONT_arial_17_latin1_BITMAP_WIDTH         256
#define STB_FONT_arial_17_latin1_BITMAP_HEIGHT         94
#define STB_FONT_arial_17_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_arial_17_latin1_FIRST_CHAR            32
#define STB_FONT_arial_17_latin1_NUM_CHARS            224

#define STB_FONT_arial_17_latin1_LINE_SPACING          11

static unsigned int stb__arial_17_latin1_pixels[]={
    0x00000000,0x00000000,0x0761fc40,0x30f53f10,0x01ddddd7,0xa80f41cc,
    0x01c88004,0x76c07910,0x0003dd95,0x2a003910,0x000e5404,0x80221100,
    0x220e604b,0x2993d12c,0x701d82fc,0x544019fd,0x201cdfec,0xefdb85fa,
    0x2647601c,0x2017c2e4,0x7cc498c8,0x00bfbbff,0x440720ae,0x035c002f,
    0x3e07dbb0,0x103f311b,0xd700f53f,0xf980be00,0x3ab900fb,0x3b7ba603,
    0x98bbd700,0x9ae2effd,0xf714c9c8,0x13f50b30,0x2b7e609d,0xd02fba88,
    0xa9bfc819,0x324980fd,0x005f0084,0x89fffd80,0x0007400f,0x02a000cc,
    0x81445440,0x440fc42f,0x1500288a,0x94c02880,0x06a5301a,0x54033188,
    0x27320a88,0x2102a7bc,0x0ec1e24c,0xf8849972,0x3e0be601,0x2ec0fdc1,
    0x16e990f4,0x6ff5fc76,0x747616e1,0x80f89fff,0x1e81ffeb,0x02dffeb8,
    0x016fff5c,0x20b7ffae,0x5c0fc42f,0x3c82dffe,0x5c0f2970,0x652e0794,
    0xfd709703,0x22dc05bf,0x219499f8,0x224cbc5b,0x7cc6b80f,0x6ccba204,
    0x8799e8df,0x1882741f,0x7cd32354,0x8bff9ea0,0x541f30fc,0x227ffee7,
    0x754fdc0f,0x3f617c0f,0xb03fcaad,0x07f955bf,0x3f2ab7f6,0x07e217c3,
    0x7f955bfb,0x3ab904e8,0x413ab904,0x17209d5c,0x7f955bfb,0x26be1b20,
    0x647c6c84,0x07c407c4,0x9703dfd5,0x9fee2fe2,0x5f03e21e,0x93226400,
    0x44f9363e,0x24d8fa4f,0x0f89ffc8,0x41c9d9f4,0x2a07ea2f,0x540fd42f,
    0x540fd42f,0x3f10be2f,0x17d40fd4,0x2757209d,0x3209d5c8,0xa97209d5,
    0xc82fa81f,0xc84dfc86,0x3a2647c6,0x23e23f02,0xd96c3fd8,0x4c793745,
    0xd000fcc7,0x45ae3b87,0x4b90be1f,0xf103f16b,0x8fc41f13,0x04e8be06,
    0x6c09d176,0x4bb02745,0x9d0fc42f,0x209d2ec0,0x57209d5c,0x13ab904e,
    0x6c09d2e4,0xfb506c85,0x3f13647f,0xf82e9899,0x22fb8f52,0x24d83f0f,
    0x5f05d52d,0x22017c00,0x217c6b9f,0x1ae7e25c,0x220f89f8,0x4be0499f,
    0x89ae02f8,0xf89ae02f,0x42f9ae02,0x405f11f8,0xae413a6b,0x13ab904e,
    0xb904eae4,0x86b80be2,0x3ef2606c,0x64fc4d92,0x17c1f4c4,0x78ae41bd,
    0x3e2e81f3,0x09d03d70,0x802f8366,0x227c3dcd,0x01ee6c4e,0xae81f13f,
    0x32f85b2c,0x987d403f,0x4c3ea01f,0x7c3ea01f,0x1f98fc42,0x82743ea0,
    0x57209d5c,0x13ab904e,0x201f9ae4,0x8c3640fa,0x99b29b49,0x41744caf,
    0x4bfa21f8,0x87e27e2e,0x6a89b1fa,0x46d80fb8,0x3ea1543d,0xfb977c0f,
    0xf007fd40,0xeec81f13,0x897c0fb8,0xf89ee03f,0x3f89ee03,0x442f9ee0,
    0x5c07f11f,0xdaec1367,0x4136bb04,0x57609b5d,0x21ee03f8,0xa4c7cc6c,
    0x57ccd93e,0x2603e24c,0xd87ff707,0x5ff53bd3,0xb07881d9,0x83f9315d,
    0x2fc2644c,0x80f7fe7c,0x7c4fc05f,0x82dffc80,0x5c81ba2f,0xe8b90374,
    0x42f97206,0xc81ba1f8,0xca6c1725,0x41729b05,0x9360b94d,0x3217206e,
    0xfac9df86,0x657ccd90,0x1aa03e24,0x8adc5e88,0x8cff9cfd,0x6440fc08,
    0x6a81dffe,0x7c17c264,0x402f8012,0xbb80f89f,0x1fb87e00,0x0fdc2f98,
    0x07ee17cc,0x442f8be6,0x2607ee1f,0xf103ee2f,0x7f103ee7,0x27f103ee,
    0x71fc40fb,0x905f303f,0x5dffd30d,0x224c8364,0x15c2e80f,0x00de81f3,
    0x807e17cc,0x87e200e9,0x7c1ae64c,0x4035cc02,0x0d80f89f,0x9f903e60,
    0x3209fb33,0x04fd99cf,0x9fb339f9,0x20fc42f8,0x4fd99cfc,0x75cd6f44,
    0x735bd10e,0x2b7a21dd,0xbd10eeb9,0xc81dd735,0x04fd99cf,0x6424c0d9,
    0x43dc9906,0xf70fb869,0x4435dd10,0x03e83fca,0x4b501ae2,0x203ff14c,
    0x07fe202f,0x203e27e0,0x5c13f206,0x5c03dffd,0x5c03dffd,0xff83dffd,
    0xb703ffb7,0x36607bff,0x6cc0dfff,0x6cc0dfff,0x6cc0dfff,0xb700dfff,
    0x36407bff,0x20d90510,0x3b07f94c,0x80bfff20,0xceffffda,0xd10bf700,
    0x321d007f,0x02000024,0x08800000,0x00800080,0x00000080,0x10008001,
    0x00400200,0x00000010,0x30088440,0x18800100,0x00402200,0x00022110,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x0c980000,0x800e4400,0x884003c8,0x5c02c800,0x0059000c,
    0x10008000,0x04000039,0x00726001,0x00000000,0x00000000,0x80200000,
    0x00136000,0x76ec00d7,0xeeee8803,0x5007d401,0x1d500d9f,0x0f53f100,
    0x5c013220,0x02fa7406,0xaf8dbfd7,0x541721f9,0xd504efed,0x6dc05dff,
    0x9e202cff,0x4efe443c,0x077fae2c,0x3a16fed4,0x6ffedc01,0x1bc80e9a,
    0x15000a00,0x0a22a200,0x400cc620,0x0a8d4019,0xa88004c0,0x75300288,
    0xa802a001,0x54260151,0x20544540,0xa99bfb82,0x5567d46e,0xadfc82fc,
    0x4d302fca,0x74cf6c1e,0xb915f73f,0x1f715f10,0x5bf901e4,0x3203ff93,
    0x00bb002a,0x2ec005d8,0xec817600,0x90eeeeee,0x1ddddddd,0x01ec036e,
    0x0df00176,0x77777764,0xddddd90e,0x5c1721dd,0x516e16e4,0x6c5f103f,
    0x07dc6d84,0xf25c0fdc,0x7f30fcc1,0x4c87a976,0x2e0b31ec,0x817f441f,
    0x3fd50028,0x007faa00,0xa800ff54,0x55bb01fe,0x56ec5555,0x3e22aaaa,
    0x2a00fc85,0xfd5001fe,0x2aab7603,0x2ab762aa,0x13fa2aaa,0x6c86c972,
    0x6c1302ec,0x01f41885,0x777f6c9d,0xf0f51efe,0xe84d8fa7,0x4e80f804,
    0x6c45ebe8,0x66c03eff,0xb99b005c,0x01733600,0x4d82e66c,0xf5004d80,
    0x36017cc5,0x99b005cc,0x3601360b,0x41fee804,0x1b21b25c,0x7fcc007f,
    0x403f101c,0x26ba626c,0x3e1ea1db,0x203e67d3,0xf82d806c,0x747ca6c2,
    0x101fb89d,0x8801f53f,0x4400fa9f,0x4400fa9f,0x4d80fa9f,0x36004d80,
    0xf880bd0f,0x7c400fa9,0x04d80fa9,0xdbe804d8,0x90d92e46,0x32e17c4d,
    0x7f6443cc,0x803e60cf,0x0793c47b,0x3e9fcc3f,0xfffc81f5,0xf989701f,
    0x20fa9321,0x6b817c0b,0x7cd700fe,0x07f35c03,0x360fe6b8,0x2099999d,
    0x099999dd,0x00fbcf88,0xb807f35c,0x27760fe6,0x37609999,0x3a099999,
    0xc9724f8b,0x21fc6c86,0x2206eeec,0x807e26fb,0x03d34c6c,0x27fd55db,
    0xf10bf63e,0x7c468803,0xa86b8b71,0x7d02fedb,0xc8fa0364,0x0d91f406,
    0x361b23e8,0x24ffffff,0x4ffffffd,0xd005ff50,0x8fa03647,0xffffd86c,
    0x3fff64ff,0x54fa4fff,0x4364b91f,0xd702ec6c,0x87e60322,0xfe97603e,
    0x41ffffff,0x7d2f9dea,0x03e62fb8,0xd57f03a0,0xacfe8bb0,0xabf982f8,
    0x7f301fca,0x2603f955,0x01fcaabf,0x3f9557f3,0x04d804d8,0xf9805e80,
    0x301fcaab,0x83f9557f,0x804d804d,0x92e5b63e,0x2fb8d90d,0x441fcd90,
    0xad83f20f,0x6996c1fa,0x7d1f8188,0x802dcb90,0x2077dc3c,0x883ea2f9,
    0xeeefc82f,0xddf905fe,0x3f20bfdd,0x905feeee,0x8bfddddf,0x004d804d,
    0xefc804d8,0xf905feee,0xd8bfdddd,0xe804d804,0xc9733e23,0xcfb86c86,
    0x324fda99,0x85ea99bf,0x5ffb9cfd,0x3a0971e8,0x4df4f913,0x9f53e88f,
    0xb5033357,0xd98aef98,0xd897cc3f,0xfb82f83f,0x0fb82f80,0x80fb82f8,
    0x360fb82f,0x8004d804,0xb82f804d,0xfb82f80f,0x13601360,0xbdf50fa0,
    0xb8364364,0xb81dfffd,0x2e04fffe,0x24fcdffe,0x7540f278,0x64fa1eff,
    0x99d90cff,0x89e0dffd,0x3dfffc9e,0x9b7fff90,0x3f880fa8,0x1fc407d4,
    0x0fe203ea,0x47f101f5,0x999999dd,0x33333bb0,0x50136013,0xa87f101f,
    0x363f880f,0x0999999d,0x333333bb,0x97f60fa1,0x0806c86c,0x40800200,
    0x80110448,0x10010008,0x01060403,0x81760040,0xd902ec6c,0xb1b205d8,
    0xffb3640b,0x365fffff,0x2fffffff,0x05d809b0,0x640bb1b2,0x3fffff66,
    0xffffb2ff,0x20fa5fff,0x321b25f8,0x00000006,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x74000000,0x200ba01f,0xb836c06d,0x3f883bac,0x20eab2a0,0x7401f8be,
    0x003c8592,0x4004eda8,0x83443ed9,0x20b503d8,0x01cefdb8,0x073bf6e2,
    0x05bffd70,0x81cefdb8,0xb1c9dfd8,0x6c43bfd5,0x885a80de,0x7c09703d,
    0x00efe440,0x3201f5b9,0x3007cc01,0xbb5d101f,0x7441e601,0x92b81dda,
    0x87d2f801,0x06ff644d,0x117aafe6,0x1d2d8bfd,0x1ef441e4,0x5f440744,
    0xd103d510,0x407aa217,0x3fcaadfd,0xfb537f90,0xfe99ed81,0x1f917ff2,
    0x3a216ca6,0x4c1ef440,0x37216606,0x4c2606b8,0x08801300,0x80000440,
    0x40000000,0x24d87d2f,0x746d8aec,0x9ec87e23,0xd12d87c0,0x82d83b80,
    0x11aaa9e8,0xca8f443d,0x7d41e88a,0x7dc2fa81,0x87e25d81,0x4f89f2f9,
    0x80b6076c,0x900f443b,0x03e67d07,0x40fbff62,0xdffb101f,0x817fb507,
    0x443effd8,0x5c43effd,0x75c40bfe,0xe97c00bf,0x22f8a6c3,0xe81f10c8,
    0xd8f41323,0x43b80592,0x2fa7505b,0x9d4b33da,0x8b35b9dc,0x9d17604e,
    0xf87a8620,0xc85c85f2,0x877016e4,0x640f403c,0x3bd05d9f,0x0fa83f71,
    0x3f713bd0,0x23e45764,0x21fb89de,0x21fb89de,0x6c7c9aed,0x7c07c9ae,
    0xf34e89d2,0x3607cc01,0xc81dffb4,0x700d37ad,0x1d8074c7,0x36696a1d,
    0x44d0c789,0x5f1ae02f,0x4be1e600,0x9dbae42f,0xb801d33d,0x0f1016a3,
    0x817027fc,0xb80fe62f,0xe85d17c0,0x5c5f02e2,0x42f997c0,0x2f85f32f,
    0x3e2f4be0,0x3d401f34,0x01dd8ae4,0x0c4b6175,0x1887a2a8,0x20deee9a,
    0xd8166d0d,0x7d403f30,0x7c003f30,0x227cbe62,0x1e8b2e4e,0x744aa062,
    0x10950310,0xba809fdb,0x07f32fed,0x25fdb750,0x4feeeef9,0x217f6dd4,
    0xf52fedba,0x321eab90,0x57f4be05,0x88be4fb8,0x49b0f31d,0x2ad3004c,
    0x126405de,0xa8e8ecbd,0x51a3b345,0x203f89a1,0x90017c7b,0x3e5fb13b,
    0x6401f72e,0x5b017a24,0x2c83f372,0xbbfa8dd8,0x7c567f46,0x9fd00b92,
    0x2fe65f15,0x3fa2aaaa,0x3fa2f8ac,0x0f52f8ac,0x5721eab9,0xfde97c08,
    0x27724def,0xb03e26c8,0x2d802647,0x34c0765b,0x1d3b97b6,0x2772ccf2,
    0x8b36b9cc,0x9d17206e,0xfb883660,0xff9f2fcf,0x3634c03d,0x0a92e05e,
    0x3e207c3d,0xfa8ffee1,0x22ecbe20,0xf883ea7b,0x2a350be2,0x7d4be20f,
    0x41f8be20,0x29d07e4e,0x9f47e27a,0x3bff7100,0x9917c2f8,0xc87cd300,
    0x3320e883,0x42e7a25a,0x3a21e8c8,0x3d117931,0x2f981fb8,0x036c07dc,
    0x8012f97c,0x16b320e8,0x32e4074c,0xfe85f10d,0x7ec4be61,0x8fa65f33,
    0x47fb12f9,0x263f51ec,0x267fb12f,0x6c7fb12f,0x361fb89d,0xf11fb89d,
    0x0fa1f937,0x9eb81ec0,0x402646d8,0x40ec762d,0x3fbbe63d,0xe982ba22,
    0x260ae882,0x339f902e,0x2bb609fb,0xf801fc98,0x8f6005f2,0xe82feef9,
    0x12e27441,0x7fdc4f6c,0x2ffff20f,0x33bf6e4d,0x6dfffe40,0x0fbfae24,
    0x49b7fff9,0x24dbfffc,0x442efeb8,0x75c2efeb,0x400fa2ff,0xbfd502e8,
    0x34c04c83,0x16a1b7aa,0xeec885a8,0x3b2201ce,0x6dc01cee,0x32203dff,
    0xf001dffe,0x16e00be5,0xe83c85a8,0x203b1cce,0xe89effb8,0x80080083,
    0x00801000,0x10010008,0x36000080,0x9900804f,0x01881980,0x00044015,
    0x00800000,0x00000080,0x40440150,0x21333302,0x00001001,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x7401fa80,0x3f17d01f,
    0x8be836c0,0x102fa81f,0x983ddddd,0xad881ced,0x203fd03b,0x81e44eda,
    0xeda8004b,0x07616e0b,0xb303f17d,0x013a207d,0x81fe817a,0x800c401e,
    0x2ec0b71d,0x39ddddb0,0x802fb6a0,0xb89701e8,0x03eb7205,0x4c03226e,
    0x1913700f,0x67cc16e0,0x2fea1ccc,0x5fc886c9,0xb81f5b90,0x13a5eaae,
    0x9fd712e4,0x5d9bfa83,0xb87a83e6,0x5fdc0c89,0x01f305da,0xadd80754,
    0x36017c0e,0x0ea5f004,0xde80ff54,0x5c2fdaaa,0x3607d9be,0x184fb81f,
    0x0004c260,0x20000110,0x4e80b701,0x3e6b20ec,0xf8130980,0x82743e62,
    0x3227b25c,0x0f99360f,0x8004d8fa,0x440be23e,0x09802200,0x6c02f813,
    0xb005f004,0x213a0b99,0x0be17c5d,0xfd887fae,0x02ff6a4e,0x2a02ff6a,
    0x75c40bfd,0x7fec40bf,0x5ff5c43e,0xf880a640,0x5edd9800,0x005ff5c4,
    0xb904e9ee,0x6c7d0be2,0x16b83e64,0x8ec1e83f,0x3d1ec0f9,0x3b07a1d8,
    0xaf8760f4,0x3ff21efc,0x7df7e445,0x7d4fc402,0x44d84e80,0x4fcc4e81,
    0x53232a1f,0x647c8aec,0x7647c8ae,0x576c7c8a,0x44ef47c9,0x26bb61fb,
    0x77f7747c,0x33fa7e62,0x7ed5f641,0x1f26bb61,0x09d1fdcc,0x23e81972,
    0x443ebde9,0x41f86b9f,0x4f83f12f,0x0fc5f07e,0x17c1f8be,0x21f917ff,
    0x4f6c1ce8,0x35c02fe9,0x555bd07f,0x1fa801d9,0xc80fc574,0x3a2e85d4,
    0xe85d1742,0x22f85f32,0x2f997c0b,0x9119f17c,0x26fbea1f,0x4fe1747c,
    0x5c17c2f9,0x6413a2fe,0xd883ee05,0xdcd82fef,0xb17c1f83,0x1f97ee1b,
    0x2f83f17c,0x27c5f07e,0x7c44d93e,0x7d00be61,0x7fff4364,0x3e600dff,
    0x01f8a644,0xddddf399,0x3bbbe69f,0xdddf34fe,0x321ea9fd,0x97f6dd45,
    0x7405c87a,0x32f87f53,0x0f55d81f,0xd97cc0b9,0x3ee0bb04,0x85f327c1,
    0x41f80ffa,0x37ff662f,0x45f07e4c,0x83f17c1f,0x4bb0be2f,0x97c3d44d,
    0x555fcc3a,0x262741fc,0xa89f306d,0x3203f10e,0xaaaabf9c,0x55557f32,
    0x2aaafe65,0x4b90f52a,0x52f8acfe,0x5c80b90f,0xf55d81f3,0x321eab90,
    0x05ca6c05,0x983f309b,0x2fc26c0f,0x4417c1f8,0x3e0fc7b0,0x7c5f07e2,
    0xc85f17c1,0xf0f51364,0xddf91b25,0x84e8bfdd,0x41fd41f9,0x4efeeeee,
    0x1a85f4c8,0x17c350be,0xa741f86a,0xf8be20fa,0x41f8a741,0x3e85f13f,
    0x3e2f83f1,0x41f8a741,0xf881f73e,0x0f886a83,0xf817c1f4,0x40c8be22,
    0x2f88be2f,0x3e2f88be,0x43f8be22,0x3f11362f,0x2f8b17cc,0x213a0fb8,
    0x40fea1fa,0x1cfbaaaa,0x2a3d94c8,0x7d47b21f,0x0fd47b21,0x23f713bb,
    0x47fb12f9,0x21fb89dd,0x20fc88dd,0x743f70ec,0x6ec7c89d,0x3761fb89,
    0xbd10fc88,0x301dd735,0x7dc37605,0xde81ae60,0x3722fd88,0x46f45c88,
    0x237a2fd8,0x237a2fd8,0x2bfe2fd8,0x20ee47b8,0x72fd89dd,0x7c407d45,
    0x2e6673a3,0x2673e26e,0x03f10099,0x77f5c532,0x1f7f5c43,0x10fbfae2,
    0xfc85dfd7,0x2e24dbff,0x7e442efe,0xefea81ef,0x0e7fec42,0x10bbfae2,
    0xd983bff9,0x9500dfff,0x8b7ff220,0x3e601ff8,0x3622ebff,0x7fcc0dff,
    0x3fe62ebf,0x3fe62ebf,0x36be2ebf,0x23fd41df,0x02eaefd8,0xfd3640bb,
    0x5c19dfff,0x04ffffff,0x213203f1,0x00800800,0x08004008,0x80080080,
    0x00800800,0x807c8008,0x00400100,0x04004004,0x00080040,0x00000010,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0xddddd000,0x4036e9dd,0x3bbbb23d,0x5c1720ce,0x643f17f4,
    0x902deeee,0x3a61d509,0xd94eeeee,0x21dddddd,0x3eeeeeec,0x2000ec7a,
    0xeeeeeeed,0x91723b0e,0xb05bdddd,0x441ec403,0x3b212e2d,0x407b34c0,
    0x25d702ed,0x322ea83d,0x9703c803,0x49ac996e,0xa8bd07ea,0x14fbaaaa,
    0x741f90bf,0x26fbaaad,0x395c84fe,0x556f4191,0x1f985fcb,0x99991274,
    0x2ab769f9,0x2bb62aaa,0x47e1aaaa,0x2fea002f,0x0aaaaaee,0x5bd1f639,
    0x2f8bf955,0x17a0fdc0,0xc87df0f7,0x5fe813a6,0x513a7fd0,0xd804e87f,
    0xe9b2b904,0x32dc2eca,0x46e8801d,0xd0be62fa,0x3ba5f309,0x7402e41f,
    0x6c83f984,0x4d9003ee,0x805d804d,0x74005f1f,0x3ec00bb4,0xf8fe613a,
    0xd90ed802,0x3aa1f881,0x09d1f45b,0x3a607ef4,0x1fd49d3e,0x16666774,
    0x6cae4136,0x00110c00,0x21fb01fb,0xf884e85e,0x5c8db7d2,0x6c13a12a,
    0x3f8af886,0x09b0fcc0,0x23f00bb0,0x2a09b12f,0x1d80bb0f,0xd904e8d9,
    0x4177dd7c,0xd01facf8,0xf13ce647,0xd7d02743,0x9d3ecc85,0x67740bea,
    0x1365fdcc,0xb3b6cae4,0x2a4a87df,0x880fe404,0x4e80fbcf,0x3e2fa7b8,
    0xe86b9724,0x3ae0f704,0x6c4e806b,0x2099999d,0x409999dd,0x81765f1f,
    0x2667764e,0x2364be09,0x7fcf704e,0xfa80fc8a,0x2e93203f,0x09d1ea3f,
    0x27a2ddf4,0x09f59d3e,0xd8fd4274,0x5eaaaaad,0x2e2ffed9,0x06b9ae0f,
    0xff500bea,0x3bbbfa05,0x7d4fa3ff,0x7435cb91,0x6541f504,0x304ceffc,
    0xffffd81f,0x3fff64ff,0xaf8fc5ff,0xd87ea05d,0x3e5fffff,0x7fffcb72,
    0x1fc3ea4f,0x03fa05f1,0x361f16a8,0x204e8b94,0x2d30f9be,0x1fbfdd3e,
    0x4be213a0,0xfeeeeefd,0x5f17ed95,0x220d735c,0x40bd004f,0x41acccee,
    0x72e5b63e,0x1ee09d0d,0x555fb553,0x01361760,0x7c7e0176,0x2bba03ff,
    0x97c05eaa,0x7b82745a,0xd905d0be,0x5c7c40dd,0x3a1f5ae5,0xc974fa04,
    0x74bfa7d3,0x1f509d05,0x6cae4136,0x9ae2f85f,0x005e886b,0x804e8136,
    0x9733e23e,0xd904e86b,0xaafdaa98,0x4d82f882,0x1f805d80,0xf303f5bf,
    0x80bfdddd,0x04e8952f,0x0ba17cd9,0x407f35f5,0x23e23dae,0x7d02740f,
    0xd3e87d6e,0x6f41fcc9,0x365fdbaa,0x7db2b904,0x5cd717c2,0x2000ed86,
    0x2013a04d,0x72f7d43e,0x7f109d0d,0xccfdcca8,0x09b07a84,0x23f00bb0,
    0x0bb0db2f,0x022f80bb,0x7c7f109d,0x49f11742,0x3f9901fb,0x04e86be8,
    0xd357ccfa,0x83f713a7,0x43ceeefe,0x5b2b904d,0x4d717c2f,0x4cd7dc6b,
    0x09b00999,0x41f40274,0x3a1ae5fd,0x0efba99d,0x0d701ae0,0x26666776,
    0x3f00bb09,0xf31fc4be,0x3333bb03,0x21d4be13,0x6fba99de,0x6d8ba17c,
    0x7fa80ed8,0x9ce84fc8,0x747d0999,0x4274fa3f,0x2013a0ee,0x5b2b904d,
    0x4d717c2f,0x7fffec6b,0x09b06fff,0x41f40274,0x3a1ae5f8,0x00beffff,
    0x4172035c,0xfffffffd,0x23f00bb2,0x36c7ea2f,0xffffffd8,0xfd1b25f2,
    0xf817dfff,0x81fb9742,0x85f885f8,0xfffe82fa,0x7dc7d6ff,0x44274fa0,
    0x36013a5f,0x7db2b904,0x5cd717c2,0x00000006,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x13200000,0x3bbb24b8,0x775c2dee,0x745eeeee,0x4000001f,0x00000000,
    0x00011000,0x5555555c,0x00000001,0x20000000,0x44b8ec1e,0x74c791e8,
    0x70f4d2e1,0x7777754b,0x260142a6,0x5d56e150,0x747f00fa,0x2fdbaaad,
    0x2b3eaaa6,0x83ebb22a,0xebaeffd8,0xffc982df,0x6ff640ec,0x1f7fec40,
    0x2213ffea,0xd700bfeb,0x105fed40,0x9aa00c01,0x3b8ba8d8,0xd53dfb3b,
    0x77ecec9f,0x8877d743,0x7c1f802d,0x735c1f32,0x47d1fe4d,0x4c43f36d,
    0x56e4f999,0xd51f304c,0x07f6c9d4,0xe82741f5,0x84c0be05,0x32233a09,
    0x20fb8aff,0x45fa8cf9,0x746d8aec,0xf11fb89d,0xed87f315,0x0d707c9a,
    0x89f22bb2,0x3f220600,0x7f7fec3e,0xfb35ff1f,0x3fe5f33b,0x3fe0fb8b,
    0x05ffdc3b,0x7d17c1f8,0x3a1f31f4,0x7441f15d,0x42f403fc,0xae81f8ae,
    0x365602f8,0x6c13a2ec,0x4a80be05,0x87f305c4,0xfdc9764d,0x06445f10,
    0x3f32f817,0xf85f3044,0x33d93312,0x44ba1741,0xdfd98600,0xf3d4b902,
    0x29b17d47,0x07f17c5f,0x7c1cfda8,0x22d717c1,0x4fc57c0f,0x0df30d57,
    0x8fa80ed8,0x2edb20eb,0x887e6570,0x2e62742f,0xb80be02f,0xdfdb7306,
    0x9fcddddd,0x03e63f5a,0x8bfb6ea0,0x3d41cefd,0xffffaae4,0xdddf35ff,
    0x180229fd,0x2e801df1,0x1e62f8fc,0x45f0beb9,0x8fd3002f,0x1f117c1f,
    0x2b5990b7,0xffa83d9e,0x2601f900,0x5760fa9f,0xb8fa004d,0xfffffe86,
    0x7017c02d,0xf359db0d,0x7c555557,0x31f88e9a,0xacfe801f,0x7f5cc2f8,
    0x21721ea3,0xaabf986b,0x0c0112aa,0x32017df7,0x317c3e64,0xf85f5c8f,
    0xf7100be2,0x3e22f87d,0x54175ec2,0x81f993ce,0xfb85daf8,0x2174fa01,
    0x001f8af8,0x6f41f4d7,0xf803fa99,0x1f51ae02,0xe8aa17cc,0x7c1f71ed,
    0x07d47622,0xf70e25f1,0x5c2741f8,0x11a85f06,0x7f540c01,0x7e6fe41c,
    0x23cc5f0f,0x22f85f5c,0x5bfb302f,0x3f6237a0,0xff03fd42,0x57a1bea3,
    0x26fea2f8,0x2ddaa199,0x9d4b7698,0x3e27e23a,0x1fd44e80,0x46b80be0,
    0x3ddd11f9,0x54fb87ea,0xc89dc8bd,0x7ec4be66,0x17627f13,0x03f713bb,
    0x547b20d7,0x00c0111f,0x5d7ccf93,0x4c5f4dad,0x7c2fae47,0x33e20be2,
    0x5fffcc00,0x3604f82e,0x1f713e27,0xfffd87dc,0x2a151fff,0xc8542a00,
    0x5bcd8d96,0x03f909d0,0x90d7017c,0x3ff25dff,0x77f6dc3e,0x6ff5c40b,
    0x6dfffe41,0x037ffaa4,0x445dfd71,0x20999999,0x223efeb8,0x00200600,
    0x323cc5f0,0x3e2f85f5,0x00800102,0x00000000,0x00000000,0x13a05dd3,
    0x02f81ba2,0x010081ae,0x8010008a,0x01000800,0xbffffff5,0x266a2020,
    0x00019999,0x00000000,0x00000000,0x00000000,0x3f400000,0x0fea09d0,
    0x00d7017c,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x03c40000,0x0620014c,0x08000003,
    0xc8800000,0x224ccccc,0x84cccccc,0x8e9874c1,0x20893a4d,0xb8220ab8,
    0x2599930e,0xccccccc8,0xfffff12c,0x6d6e9fff,0x00000004,0x00000000,
    0xf1000000,0x3ae0d900,0x7d47ee1d,0xeed8f622,0x3037b622,0x83bdb05f,
    0x21dd982b,0x4cccccc8,0x37333322,0x1f307447,0xf893a3e6,0x3fbe6d90,
    0x3f11fcdf,0x551eeed4,0x03555555,0x00aa7300,0x00000000,0x00000000,
    0x403c4000,0x5a8d9808,0xd11fdfe4,0x3344e27b,0x8bd90b65,0x33269739,
    0x005960dc,0x9ae1e200,0x9b1f10f9,0x88cca608,0x00043dda,0x00000000,
    0x00000000,0x00000000,0xffff1000,0x7ffd4fff,0x7c775fff,0x3b827ec0,
    0xdb0fdd91,0x40fc7c41,0x3df512e8,0x55551658,0x4f100555,0x5a343ee8,
    0x0000002b,0x00000000,0x00000000,0x00000000,0xa9980000,0x2662199f,
    0x29519999,0x0fefd468,0x788cb9dc,0x4cadc990,0x372e174c,0xf10eecc2,
    0x00ffffff,0x000008d1,0x00000000,0x00000000,0x00000000,0x00000000,
    0x5c03c400,0x23ece885,0xb83f93fa,0x21fb7d53,0x4be3d9db,0x357f30f8,
    0x0000088c,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x2a01e200,0x87306a03,0x2330cc0b,0x6a8b2a09,0x2bbba96c,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000003,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,
};

static signed short stb__arial_17_latin1_x[224]={ 0,1,0,0,0,0,0,0,0,0,0,0,1,0,
1,0,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,-1,1,0,1,1,1,0,1,1,0,1,
1,1,1,0,1,0,1,0,0,1,0,0,0,0,0,1,0,0,0,-1,0,0,0,0,0,0,0,0,1,1,
-1,1,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,-1,
1,0,0,0,0,0,0,0,0,-1,0,0,0,0,1,1,0,1,0,0,0,1,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,1,1,1,1,0,1,-1,0,-1,1,0,0,0,0,0,1,0,1,1,1,1,0,1,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,-1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
 };
static signed short stb__arial_17_latin1_y[224]={ 13,2,2,1,1,1,1,2,1,1,1,4,11,8,
11,1,2,2,2,2,2,2,2,2,2,2,5,5,3,5,3,1,1,2,2,1,2,2,2,1,2,2,2,2,
2,2,2,1,2,1,2,1,2,2,2,2,2,2,2,2,1,2,1,15,2,4,2,4,2,4,1,4,2,2,
2,2,2,4,4,4,4,4,4,4,2,5,5,5,5,5,5,1,1,1,6,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,13,5,2,1,3,2,
1,1,2,1,1,5,5,8,1,0,1,3,1,1,2,5,2,6,12,1,1,5,1,1,1,5,-1,-1,-1,-1,
-1,-1,2,1,-1,-1,-1,-1,-1,-1,-1,-1,2,-1,-1,-1,-1,-1,-1,4,1,-1,-1,-1,-1,-1,2,1,2,2,
2,2,2,1,4,4,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,4,4,2,2,2,2,2,2,2,
 };
static unsigned short stb__arial_17_latin1_w[224]={ 0,2,5,9,8,13,10,3,5,5,6,9,2,5,
2,5,8,5,8,8,8,8,8,8,8,8,2,2,9,9,9,8,15,12,9,11,10,9,8,11,9,2,7,10,
7,11,9,12,9,12,10,10,9,9,11,15,11,11,9,3,5,4,7,10,4,8,8,8,8,8,5,8,7,2,
4,7,3,11,7,8,7,8,6,8,5,8,8,11,8,8,8,5,2,5,9,9,9,9,9,9,9,9,9,9,
9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,0,3,8,9,8,10,
2,8,5,12,6,8,9,5,12,10,6,8,5,5,4,7,9,2,5,4,6,7,13,13,13,8,12,12,12,12,
12,12,15,11,9,9,9,9,4,3,6,5,12,9,12,12,12,12,12,7,12,9,9,9,9,11,9,8,8,8,
8,8,8,8,13,8,8,8,8,8,4,4,6,5,8,7,8,8,8,8,8,8,9,8,8,8,8,8,7,8,
 };
static unsigned short stb__arial_17_latin1_h[224]={ 0,11,4,13,14,13,13,4,16,16,6,8,5,2,
2,13,12,11,11,12,11,12,12,11,12,12,8,11,9,5,9,12,16,11,11,13,11,11,11,13,11,11,12,11,
11,11,11,13,11,13,11,13,11,12,11,11,11,11,11,15,13,15,7,2,3,10,12,10,12,10,12,13,11,11,
15,11,11,9,9,10,13,13,9,10,12,9,8,8,8,12,8,16,16,16,3,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,0,12,15,13,9,11,
16,16,2,13,7,8,5,2,13,2,6,10,7,7,3,12,15,3,5,7,7,8,13,13,13,12,14,14,14,14,
14,14,11,16,14,14,14,14,14,14,14,14,11,14,15,15,15,15,15,7,13,15,15,15,15,14,11,13,12,12,
12,12,12,13,10,12,12,12,12,12,11,11,11,11,12,11,12,12,12,12,12,7,10,12,12,12,12,15,15,15,
 };
static unsigned short stb__arial_17_latin1_s[224]={ 252,82,111,188,239,1,131,107,59,10,67,
1,253,140,253,125,239,250,232,91,241,55,64,23,119,146,250,206,129,81,175,
110,25,209,222,68,1,32,42,152,175,185,214,154,134,142,238,55,228,175,13,
164,24,100,1,118,106,216,206,157,226,161,53,157,117,74,182,65,197,110,248,
198,98,79,113,55,51,148,160,92,89,80,168,83,191,185,194,203,215,128,224,
41,1,4,125,119,119,119,119,119,119,119,119,119,119,119,119,119,119,119,119,
119,119,119,119,119,119,119,119,119,119,119,119,119,119,119,119,119,252,252,104,
216,139,12,65,16,168,42,40,241,91,140,29,146,74,101,61,47,135,222,94,
122,101,35,20,233,15,111,97,151,1,14,27,40,85,98,63,47,111,53,63,
121,147,248,232,141,85,131,118,131,144,219,166,27,232,179,189,199,209,73,165,
207,187,160,142,178,37,245,41,230,1,169,10,19,196,201,34,248,73,188,46,
28,82,196,205,11,55,155,164,173,137,68,77,85, };
static unsigned short stb__arial_17_latin1_t[224]={ 14,60,84,18,1,33,33,84,1,1,84,
84,72,84,78,33,33,47,47,47,47,47,47,60,47,47,72,47,72,84,72,
47,1,47,47,33,60,60,60,18,60,60,33,60,60,60,59,33,59,18,72,
18,72,47,72,60,60,59,59,1,18,1,84,84,84,72,47,72,47,72,33,
18,60,60,1,60,60,72,72,72,33,33,72,72,47,72,72,72,72,47,72,
1,1,1,84,72,72,72,72,72,72,72,72,72,72,72,72,72,72,72,72,
72,72,72,72,72,72,72,72,72,72,72,72,72,72,72,72,72,14,1,1,
18,72,60,1,1,84,33,84,72,84,84,33,84,84,72,84,84,84,33,1,
84,84,84,84,72,33,33,33,33,18,18,18,18,18,18,60,1,18,18,18,
18,18,1,1,18,60,18,1,1,1,1,1,84,18,1,1,1,1,18,60,
18,33,33,33,33,47,18,72,33,47,33,47,47,60,60,72,59,47,60,47,
47,47,33,33,84,72,47,47,47,47,1,1,1, };
static unsigned short stb__arial_17_latin1_a[224]={ 68,68,86,135,135,216,162,46,
81,81,95,142,68,81,68,68,135,135,135,135,135,135,135,135,
135,135,68,68,142,142,142,135,247,162,162,176,176,162,149,189,
176,68,122,162,135,203,176,189,162,189,176,162,149,176,162,230,
162,162,149,68,68,68,114,135,81,135,135,122,135,135,68,135,
135,54,54,122,54,203,135,135,135,135,81,122,68,135,122,176,
122,122,122,81,63,81,142,183,183,183,183,183,183,183,183,183,
183,183,183,183,183,183,183,183,183,183,183,183,183,183,183,183,
183,183,183,183,183,183,183,183,68,81,135,135,135,135,63,135,
81,179,90,135,142,81,179,134,97,134,81,81,81,140,131,68,
81,81,89,135,203,203,203,149,162,162,162,162,162,162,243,176,
162,162,162,162,68,68,68,68,176,176,189,189,189,189,189,142,
189,176,176,176,176,162,162,149,135,135,135,135,135,135,216,122,
135,135,135,135,68,68,68,68,135,135,135,135,135,135,135,134,
149,135,135,135,135,122,135,122, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_17_latin1_BITMAP_HEIGHT or STB_FONT_arial_17_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_17_latin1(stb_fontchar font[STB_FONT_arial_17_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_arial_17_latin1_BITMAP_HEIGHT][STB_FONT_arial_17_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_17_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_17_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_17_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_17_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_17_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_17_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_17_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__arial_17_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__arial_17_latin1_s[i] + stb__arial_17_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__arial_17_latin1_t[i] + stb__arial_17_latin1_h[i]) * recip_height;
            font[i].x0 = stb__arial_17_latin1_x[i];
            font[i].y0 = stb__arial_17_latin1_y[i];
            font[i].x1 = stb__arial_17_latin1_x[i] + stb__arial_17_latin1_w[i];
            font[i].y1 = stb__arial_17_latin1_y[i] + stb__arial_17_latin1_h[i];
            font[i].advance_int = (stb__arial_17_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__arial_17_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_17_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_17_latin1_s[i] + stb__arial_17_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_17_latin1_t[i] + stb__arial_17_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_17_latin1_x[i] - 0.5f;
            font[i].y0f = stb__arial_17_latin1_y[i] - 0.5f;
            font[i].x1f = stb__arial_17_latin1_x[i] + stb__arial_17_latin1_w[i] + 0.5f;
            font[i].y1f = stb__arial_17_latin1_y[i] + stb__arial_17_latin1_h[i] + 0.5f;
            font[i].advance = stb__arial_17_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_17_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_17_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_17_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_17_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_17_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_17_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_17_latin1_LINE_SPACING
#endif

