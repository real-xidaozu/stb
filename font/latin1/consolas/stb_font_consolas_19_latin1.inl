// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_19_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_19_latin1'.
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

#define STB_FONT_consolas_19_latin1_BITMAP_WIDTH         256
#define STB_FONT_consolas_19_latin1_BITMAP_HEIGHT        120
#define STB_FONT_consolas_19_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_consolas_19_latin1_FIRST_CHAR            32
#define STB_FONT_consolas_19_latin1_NUM_CHARS            224

#define STB_FONT_consolas_19_latin1_LINE_SPACING          12

static unsigned int stb__consolas_19_latin1_pixels[]={
    0x00006231,0x04400988,0x55550031,0x98054c05,0x42aaaa22,0x800e201a,
    0x00310008,0x443100c4,0x0401e802,0x40005540,0x02a600aa,0x18804550,
    0x809800a2,0x12e000aa,0x77b8ccc0,0x1f90fc8f,0x200ef880,0x003ee6f9,
    0xd109ddfb,0x4bf103ff,0xfb1feee9,0x805f505d,0x301effe9,0x5c0bfffd,
    0xfd80ffff,0x7c401f90,0x809df301,0x32001fd8,0x3bbee02f,0xd9fddb00,
    0x3f21fb05,0x880f9800,0x09b001fd,0x3ffffb22,0xfc8f77b9,0x7c401f90,
    0x2e7fa804,0x202ec00f,0x03fa02fc,0x0db10fcc,0x9fd403f2,0x77cc1fb8,
    0xfa86fc9a,0x3980999b,0x01f300e6,0x3b803cf2,0x4c019300,0xb8a0771c,
    0x1cc7302c,0x701b2620,0x7ffecc07,0x3fffe22f,0xf77b9fb9,0x00310000,
    0x801f704c,0x902f405d,0x20fcc05f,0x10dd00fa,0xfd89b05f,0x1f60fdc0,
    0x204c0260,0xa80cfeb9,0x031006de,0x0c400620,0x31001880,0x6fffe980,
    0x26130098,0x21bcfbef,0x3f57fffd,0x0d45eef7,0x203511a8,0x5555511a,
    0x55447dc5,0x13a02ec0,0x3e6027c4,0xf9817c41,0x27a82e44,0x44f884f8,
    0x427c04fb,0x3bbee3f9,0x019502ef,0x05fffe98,0x20bfffd3,0x305fffe9,
    0x260bfffd,0xf985fffe,0x7c4ff9ae,0x1fb3f984,0xffff03f1,0x5dee7eaf,
    0x7f30bf17,0x4fe617e2,0x25fffffa,0x2ffff9fb,0x209d0176,0x0fcc01fb,
    0x26d80be2,0x177732f8,0x740be61f,0x80f7fe45,0xf33f984f,0xff88172b,
    0x26bbe604,0x577cc6fb,0x77cc6fb9,0x7cc6fb9a,0x4c6fb9ae,0x46fb9aef,
    0x3f9f50fd,0xd9fcc27c,0xfe80f98f,0xf73f57ff,0x640fc9ee,0xf903f20f,
    0xff72f401,0x05d9ba27,0x807e81fc,0x017c41f9,0x7cdea1f9,0x3ea3f6fd,
    0x57d4dd01,0x84f84fe9,0x361f93f9,0x81bbea04,0xb0fdc0fd,0x361fb81f,
    0xfb0fdc0f,0x3f61fb81,0x4f88fdc0,0x4f8fe336,0x9df53f98,0x5ffff20f,
    0x4f77b9fa,0x262fc3f9,0x3a02fc3f,0x3f70bee5,0x01fa8176,0x03f300bf,
    0x47ea01dd,0x7d369d5c,0x9ba03f71,0x3e27dc7c,0x4db3f984,0x3efb603f,
    0xf884f881,0x9f109f14,0x53e213e2,0x14f884f8,0x269f109f,0xf2fcbe2f,
    0x7dc7f309,0xfffb03ff,0x14dee7ea,0xe82fa9ba,0xbd00bea6,0x4be607dc,
    0x01ffb85d,0x3f3009f1,0xf10ffb10,0x7cbe3367,0x40bea3f3,0xf907ee5f,
    0x93f984f8,0xbf880fcf,0x02f984f8,0x740be6bd,0x57a05f35,0x26bd02f9,
    0x3eabd02f,0x9f374f31,0xffb07f30,0x2a97303d,0x3ee07b9f,0x47ee0fb1,
    0x2e5e807d,0x5d97cc0f,0x880eda98,0x81f9803f,0x4f882bfb,0x5f11f37d,
    0x213e21f1,0x87fe23f9,0x2613e0fb,0x1f33f53f,0x43747ea0,0x2add01fa,
    0x3eadd01f,0x07eadd01,0xd01fab74,0xd2e47ead,0x1fcc27cd,0x403fce6c,
    0x2207b9fa,0xf104f8cf,0xbd009f19,0x47ea07dc,0xe81fc05d,0xf81f9805,
    0x5f4fe603,0x799f98fa,0x03f607f4,0x8bd39fd1,0xf13f984f,0xdb022f9f,
    0x07ea0fdc,0xd01fab74,0xb7407ead,0x2add01fa,0x3e6dd01f,0x9f2fc7d2,
    0x27d07f30,0x4fd401fb,0x7dfec07b,0x07eff601,0x40fb97a0,0x9d01766d,
    0x3e601f20,0xf7017c41,0x323e6fa5,0x77cc5c8f,0x2e03fdab,0x427c0eff,
    0x3ff663f9,0x993e22ff,0xf817cc3f,0x57e05f35,0x26bf02f9,0x3e6bf02f,
    0x467cbf02,0x27c7f30f,0xd97c1fcc,0x5cfd400f,0xdff30f77,0x006ff980,
    0x4cdfdcbd,0xd01762fc,0x3007ee09,0x202f883f,0x6f7cf67d,0xfea80fed,
    0xfe8802ef,0x17d42fc0,0x3ea04f6c,0x446f999b,0xf13f984f,0x3e27f309,
    0x9f13f984,0x13e27f30,0x6cfe8fe6,0xa85f83f6,0xd9f79d2f,0x71f7009f,
    0x17f41eef,0xe8017f40,0x3bfffee5,0x13a02ec1,0x3e6027cc,0xf8817c41,
    0x15129724,0x2000fc80,0x643ec1fb,0xfb04d80f,0x83ffffff,0xb07ec0fd,
    0x360fd81f,0xfb07ec0f,0x3f60fd81,0xff107ec0,0x7d87fb5b,0xffd90fc8,
    0x5f6005bd,0x1ba0f77b,0xbf003740,0x176007dc,0x0fdc0bd0,0x2f983f30,
    0x03d41fd0,0x733bf300,0x37dccd4c,0x7ed56fd4,0xbf107d04,0x87f75555,
    0x3fdabef9,0x7ed5f7cc,0x6d5f7cc3,0x55f7cc3f,0x5f7cc3fd,0xffa83fda,
    0xadfa82ef,0x07a84fda,0xa7e4d75c,0x5f90f77b,0x2005f900,0x003ee3fa,
    0x407b80bb,0x83f300fd,0x83fb81fb,0x3ee0004f,0xfff50eff,0x3faa01bf,
    0x20be03ff,0x30dd01fa,0x2605dffd,0xd302effe,0x3a605dff,0xfd302eff,
    0x23ea05df,0x7fff5400,0xd980b903,0x5dee3fff,0x409fd937,0x3604fec9,
    0x7dc6fdbc,0x15576c00,0x440677c4,0x3f2aa25f,0xf30bfb51,0x2ab7ea09,
    0x0662005b,0x0020004c,0xc81f602a,0x0800200f,0x00800200,0x009b0020,
    0x00088010,0xabddee02,0x6f5402de,0x1f76d402,0x3b200754,0x3b7104ee,
    0xeee98a60,0x2207bb1e,0x67764c04,0x00000001,0x00000000,0x00000000,
    0x00000000,0x20000000,0x0000f77b,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x02d56a00,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xaa800000,0x4002a600,0x83100098,0x550000aa,
    0x02886201,0x2a802aa0,0x0022a802,0x155002a6,0x300aa800,0x28862015,
    0x53000aa8,0x22886201,0x2aa00018,0x88001100,0x44031009,0x405f9001,
    0x2e00eefb,0x400effff,0x00fec45e,0xfd80bf20,0xf9001f90,0x67f76c05,
    0xcfeed82e,0x3bbee02e,0x007f6200,0xefb817e4,0xf90fd80e,0x401fd881,
    0xfd80eefb,0x07e61f90,0x440bf200,0xdf1003fe,0x4fffe981,0x64c00fd8,
    0x1dc72600,0xca9adfc8,0x5c07e601,0x00326003,0x4c01cc73,0x5971400c,
    0x202cb8a0,0x700771c9,0x20193007,0x730771c9,0x407701cc,0x730771c9,
    0x0017a1cc,0x33a20193,0x27c403f9,0x7e44efc4,0x04c07ec2,0x4c026098,
    0x20013e60,0x0026206c,0x988004c4,0x4c403300,0x804c0620,0x13100098,
    0x99999980,0x4cccccc0,0x4cccccc0,0x4cccccc0,0x26666620,0x26666209,
    0x26662099,0x03ea0999,0x33333310,0x00621881,0x883ee031,0x7c07ec4f,
    0x13e3f984,0x00fd8fe6,0xf881fc40,0x4ff8804f,0x904ff880,0xe83f605f,
    0x4417c43f,0xff8804ff,0x3fffe204,0x3ffe25ff,0x3fe25fff,0x3e25ffff,
    0x2a5fffff,0x26ffffff,0x6ffffffa,0x3fffffea,0x3ea01fc6,0x886fffff,
    0x54c401a9,0x17dc7c81,0x213e03f6,0x2613e3f9,0x20017a3f,0xddf500fb,
    0x00ddf500,0x3e20ddf5,0x7f43f986,0x7d417c47,0x6efa806e,0x26673e20,
    0x2673e209,0x273e2099,0x33e20999,0x26209999,0x22099fd9,0x2099fd99,
    0x099fd998,0x266203e4,0x7cc099fd,0xf980efef,0x9f20efef,0xf07c83fc,
    0x27c7f309,0x009f1fcc,0x5f6c09d0,0x7df6c01f,0x0fdf6c01,0x43742fb8,
    0x0be23fde,0xb007efb6,0x3e203f7d,0x201fc403,0x1fc403f8,0xf900f900,
    0x7c40f900,0x220f9002,0xf117e24f,0x2f92fc49,0x20f902f9,0x3e3f984f,
    0x9f13f984,0x101fa800,0x4409f17f,0x2204f8bf,0x3a04f8bf,0x33a0bea6,
    0xf10be26d,0x7c409f17,0x7f104f8b,0x4403f880,0x01fc403f,0x0f900f90,
    0x06d80f90,0x03f20f90,0x207e41f7,0x3eaf90fb,0x13e0f902,0x984f8fe6,
    0xb0017e3f,0x6e8fd40b,0x03747ea0,0xa81ba3f5,0x33a0dd3f,0xa85f12f9,
    0x7d40dd1f,0x0fe20dd1,0xf8807f10,0x001fc403,0x00f900f9,0x01fa80f9,
    0x55db07c8,0x76c3f955,0x91fcaaaa,0x320bfa2f,0x7f309f07,0xd1fcc27c,
    0x0be2001f,0x407ee6d8,0x6c07ee6d,0xfe807ee6,0x3a9d01fb,0x26d85f16,
    0x5cdb01fb,0xffff881f,0x3ffe24ff,0x3fe24fff,0x3e24ffff,0x904fffff,
    0x900f900f,0x9009d00f,0x3bbbfa0f,0x3bfa1eee,0xf91eeeee,0x1f21ff44,
    0xf1fcc27c,0x7d47f309,0x440d9004,0x220fe64f,0x220fe64f,0x980fe64f,
    0x553a05ff,0x3e22f8af,0x3e20fe64,0x3e20fe64,0x221aaaad,0x21aaaadf,
    0x1aaaadf8,0x2aaab7e2,0xf900f901,0xf700f900,0xfb07c801,0x3201f600,
    0x0a61fd87,0xf1fcc27c,0xfd87f309,0x7c1dbabe,0x266fea03,0x9bfa86f9,
    0xbfa86f99,0x6c06f999,0xde93a00f,0x26fea2f8,0xbfa86f99,0xf886f999,
    0x201fc403,0x1fc403f8,0xf900f900,0xf100f900,0xf907c807,0x805f9005,
    0x222f987c,0x5f50bf00,0x417d42fc,0x20deffeb,0x3ff600fb,0x6c1fffff,
    0x1fffffff,0x7fffffec,0xd01f201f,0xb17d7dc9,0x3fffffff,0xffffffd8,
    0x201fc41f,0x1fc403f8,0xc800fe20,0xc807c807,0xc80d9007,0x339ff107,
    0x9cff8853,0x4c5f2299,0x07fa1fd9,0xd83f21f6,0xf500fc87,0xf8813a03,
    0x3fbaaaad,0x2aaab7e2,0x2b7e23fb,0x203fbaaa,0x3e27407c,0x55bf12fe,
    0x7c47f755,0x3fbaaaad,0x3e201fc4,0x201fc403,0x1f2003f8,0x1f201f20,
    0xf9017cc0,0x7fffec40,0xffffd885,0x77fddf25,0x7d40ff42,0x544fdaad,
    0x04fdaadf,0x00fcc1b2,0xa9ba03f5,0x7d4dd01f,0x3e40dd01,0x5ff713a0,
    0x537407ea,0xf11ba03f,0x4435555b,0x21aaaadf,0x1aaaadf8,0x2aaab7e2,
    0x2bf6aa21,0x3f6aa22a,0x36aa22aa,0x2f402aaf,0x2abf6aa2,0x44002202,
    0x20080000,0x503fffea,0xc807fffd,0x7d80db03,0x03ec3f20,0xc81f61f9,
    0xe80f900f,0x7d97fc44,0x03ec3f20,0x7ffc41f9,0x3fe25fff,0x3e25ffff,
    0x225fffff,0x25ffffff,0x6ffffffa,0x3fffffea,0x3ffffea6,0x507d406f,
    0x0dffffff,0x00000000,0x00800200,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00880000,0x00019883,0x05db1011,0x20000000,0x03310018,0x04400440,
    0x01988000,0x44009880,0x22011009,0x13100019,0x00066000,0x05bd7100,
    0x14c30088,0x207e43f2,0x43644ffd,0x6d8004fc,0xc80f8bc8,0xfb81f90f,
    0x7e41c9cf,0x03ee1f90,0x44027e40,0x3fa203fe,0x273fee03,0x004fc81c,
    0xf8803be2,0x03fe880e,0xf88009f9,0x077fe20e,0x81babfc8,0xd01f90fc,
    0xb107fd9f,0x7f4d90bf,0x07e43f22,0x2a1f51f7,0x007f501f,0xf9cc86d8,
    0x1f90fc80,0x0efea9d8,0x70fc87e4,0x1fd4001f,0x07f39d10,0x207f39d1,
    0x00efea9d,0x9f1007f5,0xd104f880,0x3ea07f39,0x109f1003,0xb505ff75,
    0xf903dfff,0x5f303f21,0x2ee5c2fc,0x00ec87ea,0x89f8ae40,0x000c404e,
    0x0bb621b6,0x40000000,0x0c4000fb,0x440c4310,0x80000621,0x80188018,
    0x18862018,0x0c400620,0x6e40fe80,0xa80006fb,0x5d817a2f,0x4c4013a2,
    0xf98fb81a,0x54c406c8,0x36d54c01,0x5301554c,0x1554c055,0xfb94c14c,
    0x2980aa88,0x260a6298,0x401aa882,0x54c01aa8,0x2982982a,0x2602aa98,
    0x2aa202aa,0x00d54401,0xfd981fd4,0x406aa203,0x405f95f8,0x16a1b25d,
    0x41dfdff3,0x1f9bffe8,0x3bfbfe60,0x7ffff4c0,0x77ffffc6,0x77ffffc0,
    0x77ffffc0,0x2f903ee0,0x2ffff9fb,0xb9f207dc,0x3ee3e40f,0xfb81efff,
    0xff81efff,0x3ee0efff,0x3ffe3e40,0x7ffc0eff,0x7fdc0eff,0xffb81eff,
    0x3e601eff,0x7ffffcc2,0xeffffb80,0x02fefc81,0xb81f9aec,0x5f893e27,
    0x4409d098,0xf897e24f,0x4151b61d,0xf50545fa,0x97ea0a8b,0xfbbe40fb,
    0xfb8dd13f,0x81f73e40,0x4c33e67c,0x9867cc6f,0x3ea0a86f,0x8f903ee5,
    0x1517ea0a,0x19f32fd4,0x19f31be6,0x36661be6,0xf886fc47,0xf9867cc4,
    0x2a2ffc86,0x209d0881,0xf703f27b,0xc803b201,0xfc87dc0f,0x374036c1,
    0x37403740,0xf77c81f7,0x3ee1fb85,0x81f73e40,0x3ea1ba7c,0x0bea1ba2,
    0x40fb9ba0,0x806e807c,0x3ea1ba6e,0x8bea1ba2,0x3e42dff9,0x2a1ba3ec,
    0x3febf62f,0x3b202f98,0x576cf900,0x981fcaaa,0xed81a8af,0xd1fcaaaa,
    0x2a60db0d,0xd55306ea,0x9baaa60d,0xfbbe40fb,0x1f717cc0,0x903ee7c8,
    0x1fc427cf,0x207f109f,0x3ee6eaa9,0xaa983e40,0xdd55306e,0xf1fc427c,
    0x7cc7f109,0x3f70bd02,0x99fc427c,0x3f5df33f,0x20ccbe60,0xdddfd0fc,
    0x39d03ddd,0xefe87fdf,0xbf1eeeee,0xeefc8db0,0x777e46fe,0x777e46fe,
    0x903ee6fe,0x5f303eef,0xb9f207dc,0x3f8be40f,0x07f13f88,0xeefc87f1,
    0x903ee6fe,0xfeeefc8f,0x7f777e46,0x7f107f16,0x8fe20fe2,0x509f01f9,
    0x220fe23f,0x7dc3f53f,0x7dd3a07f,0x3ec3f20f,0x2bb1f700,0x7403ec7b,
    0x0be66d86,0x3617ccdb,0x4db0be66,0xfbbe40fb,0x1f70fd40,0x903ee7c8,
    0x17cc27cf,0x4c5f309f,0x1f736c2f,0xb0be67c8,0x9b617ccd,0x3e2f984f,
    0x2a22f984,0x3f70bf00,0xa97cc27c,0xb82fec3f,0x20fbf88f,0x005f90fc,
    0x3ccfa5f1,0x8fb00bf2,0xd11f66fb,0x9ba23ecd,0xf337447d,0x0fbbfcc3,
    0x987e636c,0xf987e67f,0x1f903f67,0x83f207ec,0xf337447d,0x8fb3fcc3,
    0xd11f66e8,0x3f207ecd,0x1f903f60,0xb03f6018,0x7e40fd8f,0xfb57fd10,
    0xb2f883ff,0x87e45f5b,0x2999cff8,0xd91db2f4,0x999cff88,0x3f2bbea2,
    0x2e6ff26d,0x26ff26ff,0x2ff26ffb,0x77c6ffb9,0x7f77efaa,0xdf05f933,
    0xef8fdf55,0x3e67efaa,0x4c4fc9ae,0x44fc9aef,0x6ffb9bfc,0x3f7d577c,
    0xdff737f9,0x7fdcdfe4,0x326bbe66,0x4d77cc4f,0x827e44fc,0x2fc9aef9,
    0x7e4d77cc,0x67ffec44,0xf97a0ff9,0x83f67fff,0x25ffffd8,0x3bfa20fb,
    0xffffd881,0x5cf7fdc5,0x2bbff626,0x3bff626b,0x3ff626ba,0x7f546bae,
    0xffb37baf,0x3faa03df,0x7f547baf,0x7f4c7baf,0xffd303ef,0xdffb107d,
    0xffea8d75,0x3ff627ba,0x3f626bae,0x74c6baef,0xfd303eff,0x07f707df,
    0x817fff4c,0x403effe9,0x4c07dc00,0x4403b20f,0x88004000,0x00800400,
    0x40020010,0x00400000,0x80020008,0x02001000,0x00080040,0x04008002,
    0x02000880,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x20088350,0x011014c1,0x11000006,
    0x0a600440,0x88000c00,0x81988009,0x20199999,0x00620018,0x99981310,
    0x05305301,0x0cc40333,0x4cccccc0,0x98133100,0x13301300,0xf3014400,
    0x6437f44f,0xb10ffe26,0xf90d90bf,0x32203f21,0xfd104ffe,0x70ffe207,
    0x263939ff,0x3fee001f,0xffb80eff,0xfff11fff,0xfe981fff,0x3fa604ff,
    0xef8805ff,0x07fffe20,0x44db03ee,0x903fffff,0x7ffc409f,0x7f542fff,
    0x213e3fff,0x3ffea3f9,0x06b800ef,0x83ee17a2,0x0ffe21fa,0x1fa8bb97,
    0x81f90fc8,0x809acff9,0x883f9ce8,0x754ec3ff,0x003f30ef,0x32a6b7f2,
    0x54d6fec1,0x36aaaa1c,0x4c2fea0f,0x9aef986e,0x13e206fb,0x5c0fdccc,
    0x37136c0f,0x2a03fd53,0x337f103f,0x56fcc133,0x213e1a99,0x13bf33f9,
    0x2aa20df5,0xefe8003e,0x05109d10,0x009d12ec,0x8800ee80,0x01440621,
    0x4c00fcc0,0x03fb804f,0x7f10fb80,0x7ec3f884,0x1880fdc0,0xfb81fa80,
    0x3ea036c0,0x7c406203,0x2007ec02,0xf93f984f,0xffb87d81,0x0f200efe,
    0x00364fe6,0xa81b25d8,0x1fa80aaa,0x01555500,0x83512980,0xb0d4c1f9,
    0x00df001f,0x9b5c3ee0,0x227b8ffe,0x544f884f,0x7d400aaa,0x36c0fb81,
    0x2aa07e60,0x02f880aa,0x13e007ec,0x217d4fe6,0xeb9fd45e,0xe893a06f,
    0x001f98ff,0x407e6bb0,0xc81ffff8,0xf1015537,0xb8003fff,0x31efffaf,
    0x3a2fd43f,0x003f8805,0x75361f70,0x261f308d,0x7c4bd02f,0x7d401fff,
    0x36c0fb81,0xff10db10,0x59f103ff,0x80bbea03,0xd13f984f,0xe83fb37f,
    0x207eafa6,0x9d0cc4e9,0x4e844000,0xfb03f500,0x405ffdff,0x7dc001fa,
    0x3e69f32f,0x09f0bf51,0x77645f30,0x743ee01e,0x8fc42f8b,0x20dd01fa,
    0x0fd401fa,0x21b607dc,0x5400efff,0xffff881f,0x3effa84f,0x43f984f8,
    0x4f81fffd,0x4c5f13f1,0x3b203efe,0x90032a00,0x07ea001d,0x0fd88bfa,
    0x76c03f50,0x2db0bee1,0x885f99f9,0x22fa804f,0x2e02fdca,0x85f17d0f,
    0x203f51f8,0x803f506e,0x22fb81fa,0xecaa86f9,0x007ea01f,0x2e09fb51,
    0x213e1efe,0x37bea3f9,0x5cfe21ef,0x00ed8fe6,0x441997cc,0x2be604ff,
    0x0fd402a8,0x817cc36c,0x97fe01fa,0xf9be40fb,0x017e05fc,0x0be60fe6,
    0x36b90fb8,0x261f319d,0x2a0bf02f,0x40fd401f,0xfdfbaefb,0xf5037402,
    0x01be2003,0x4c27cdf5,0x7cc9f53f,0xf13ea746,0xa74027c5,0x17f40ffb,
    0x13fba9d0,0x87c81fa8,0x03f502f9,0x81f72fdc,0x0bf9f37c,0x37c007f4,
    0x1f9017cc,0x477e4dee,0x2613e26b,0x803f503f,0xfefb81fa,0x6407e8af,
    0x8007ea07,0xf0fc807d,0x1f25f50b,0xf9fd87ee,0x037c1f71,0x3efe23ee,
    0x43ee0080,0x0fd40b90,0x07ee0fdc,0x7f300fd4,0x4df207dc,0xf504fa9f,
    0x985f9009,0x9f1fa02f,0x0fd85f10,0x1fa807ec,0xbdc0fd40,0x206e8000,
    0xbf1001fa,0x1f61f900,0x5c3f43f2,0x27ffe61f,0x827dc4fb,0x5f5bb2f8,
    0x2a17c400,0x407ea02f,0x05fb9aef,0x3a6207ea,0xf903ee0e,0x827dc7e6,
    0x1dbabefd,0x32ab7fa2,0xfb77b32f,0xa89cfa87,0xabef985f,0x07ea03fd,
    0x1f703f50,0xeb99a980,0x207ea01f,0x0eeb99a8,0x3f2aaaf6,0x36ab7ea4,
    0x2677ee4f,0xfff986fb,0x5bff903f,0xfffff2f4,0xd2f77754,0x441bfc8b,
    0x42acfcaa,0x883fffd8,0x22acfcaa,0x07dc0cfc,0xf90fcdf2,0x3bffae07,
    0xfffec80d,0x7fffd11d,0x0fbff660,0x82effe98,0x2acfcaa8,0x2b3f2aa2,
    0xf7003ee2,0x5103bfff,0x54559f95,0x740cffff,0xa83effff,0xfb83fffe,
    0xf880cfff,0x3db9800a,0x41f301f7,0xf75dddda,0x547fff81,0x07ffffff,
    0xffffa802,0xfb8027ff,0x41f9be40,0x800402fd,0x10004018,0x3ea00800,
    0x2a7fffff,0x27ffffff,0x098800ea,0x7ffffd40,0x4004c47f,0x20020018,
    0x0035c008,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x54400000,0x06203501,0x2aaaaa20,
    0x029aa981,0x10006201,0x94c11000,0x2a200aa8,0x026620aa,0x03103300,
    0x06201310,0x41999988,0x99999999,0x26666660,0x98803330,0x02620019,
    0x3000ccc4,0x4ccccc03,0x02601309,0x30bf11dd,0xfffe887f,0xffddf704,
    0x7fff4c9f,0xb81fe86f,0x00db000f,0x5d7ffae2,0x82ffff9f,0x365ffffc,
    0x201dffff,0x2e4fffe9,0x42fc400f,0x3ff604f8,0x3bbe27ff,0xf14eeeee,
    0x3ebfffff,0x541dffff,0x203fffff,0xff704ff8,0x3ea07bff,0x7fc43fff,
    0x09f5ffff,0x9ffc45f3,0x107e40fc,0x89f713df,0x88fea3f9,0x3a1b61df,
    0x000fb82f,0x2ff200dd,0x27ff7199,0x85fe46e8,0x2ea7f618,0x9df883fe,
    0x2afee5a8,0xd85f7009,0x3fdf100f,0x099a4433,0x4ce7c526,0x753bf099,
    0x4d7d45fd,0xdf502feb,0x2a67ee0d,0x467d42fc,0x37e22fc8,0x09f09999,
    0x34fc85f3,0x7dc5f87f,0x1f707ec0,0xb03f25f8,0x3ee0310d,0x3baaa200,
    0x09d02aaa,0x23f70bee,0x43ec04f8,0x007dc0fe,0x1bfffff7,0x017ccdd0,
    0x5220f9d7,0x22933ecb,0x3a13e03f,0x7c43f50f,0x03f7db05,0x746e81f7,
    0x13e26e86,0x42f984f8,0xfa9ba2fa,0x3f622f42,0x4f887ee2,0xaa9b61ba,
    0x88fb80aa,0x7fffd41a,0x2f987fff,0x2f981f70,0x87d803f5,0x203e43fa,
    0x0df710fb,0xd01ba7f5,0x11220f97,0x0fe2933f,0x53fa84f8,0xf885f83f,
    0x0fb84f8b,0x2e13e374,0x7c09f10f,0xd512f984,0x0fb1fb8d,0x1fff4c9f,
    0x1fd55df1,0xf8b6c2fc,0xafb81fff,0x6e80efff,0xf702f980,0x3f72f981,
    0x4f887d80,0x03ee03e4,0xf7fb03f9,0x3e47d403,0x49ae8488,0x427c07f1,
    0x5c3f54f8,0xdd1fa83f,0x17dc1f70,0x447ee17e,0x2613e04f,0x8819fb2f,
    0x7c44f8cf,0x49f1df73,0x40deedfa,0xfa86d85e,0xf32ffb81,0x3e60dd07,
    0x3fffffff,0x31fb81f7,0x7fffc07f,0xfec8afc7,0x07dc4ccc,0x3fe20bea,
    0xffcaec04,0xeca9226f,0xffff1498,0x7c13e9ff,0x9fdddf55,0x41fb9b60,
    0x83fffffb,0x47f662fc,0x2eeeeff8,0xffffffff,0xf7fb0025,0x4fdbf883,
    0xd806d93e,0x7d437dc7,0x36c2fb81,0xcaa88374,0xf70aaacf,0x037c7e81,
    0x5f855fd5,0x9999fd91,0x0fe40fb8,0x557fd553,0x2bf25f10,0x17c5222a,
    0x2ab7e293,0x3e09f1aa,0x0bf9bf55,0x43f993e2,0x4fdbabfb,0x77fffec4,
    0x999df10f,0x2aabbe39,0xf3002fba,0x8bffe0df,0x337f23f8,0x37ea0acc,
    0xfa86efc9,0x3e40fb81,0x17cc0374,0xfea9bfb8,0x5cdf7dc2,0x13e21f63,
    0x20fb80f9,0x7ffdc5fa,0x27c86fff,0x1629107c,0xf80fe293,0x3f54f884,
    0x2fea0fea,0x7dc6f999,0x5440fe40,0x13e27b89,0x22f984f8,0x05fd00db,
    0x43f503fa,0xfffeeef8,0x327bfee0,0xfb81fa86,0x03743e40,0xffb817cc,
    0xfd301eff,0x5c3ec7ff,0x2e03e42f,0x00effeef,0xffff01f2,0x409220ff,
    0x7c07f149,0x3f52fb84,0x3ff607ec,0x2e1fffff,0x4017d40f,0xf813e25e,
    0xff32f984,0xfb81ba09,0x21ba36c1,0x1b6084fa,0x03ee07ea,0x801f90f9,
    0x01f702f9,0x3ec0fd40,0x01f21be6,0x205799f7,0x3ccfecc9,0x3ed55fd4,
    0x4c1f5488,0x27c07f14,0x21fa9be6,0x2b7e23f9,0x2e3fbaaa,0x2007ec0f,
    0x813e20fc,0xf12f984f,0x405f907f,0x2fd9aef8,0x01fcc2fc,0x207ea1b6,
    0x4c3e40fb,0xf9829adf,0x4001f702,0x975fb06c,0xafda83df,0x1f70aaaa,
    0x9fd99300,0x7e46d879,0x419222aa,0x555bf149,0x36eb7e35,0xd07ea0ef,
    0x7407ea1f,0x3aeafee6,0x7e5d444f,0xf027c42f,0x0c45f309,0x1009fd93,
    0xfb05dffb,0x01df957b,0xf95516d8,0x207dc559,0xfffb707c,0x3ee05f30,
    0x6c0f2000,0x440befff,0xffffffff,0xc8001f71,0xfc85f107,0x3bbe27ff,
    0xf14eeeee,0x3ebfffff,0x540bdfff,0x7d9fd41f,0x7fdc3f20,0xefa82def,
    0x04f880bd,0x80be613e,0x08002dea,0x1ef76dc0,0xfff55c80,0x07dcffff,
    0x4c0101f2,0x001d502f,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x80000000,0x09999998,0x31026088,0x02601310,
    0x20660022,0x03331098,0x4cccccc4,0x09880661,0x88260131,0x00986201,
    0x80620262,0x99999999,0x31026200,0x44333333,0x80cc1301,0x0a600803,
    0xaaa88000,0x54c2aa20,0x206aa200,0x6ffffffa,0xf907e4d8,0x2a077441,
    0x806e83fe,0xb9ff41ff,0x6c3fffff,0x1fffffff,0x43f605f9,0x23fa86f8,
    0xfd9ee07b,0x7dc3f700,0x7fcc2fff,0x04ffffff,0xfffd1bfa,0x3fa3ffff,
    0x1fd17c43,0x3ea02fb8,0x6ec0f901,0xffffc800,0xf9ffff35,0xfff703fd,
    0x6ccc43df,0x13e8099f,0x360fc83f,0x3fbfa61f,0xff806e83,0x7dcffe64,
    0x2a5fdb99,0x0ffaaaaa,0x87f30df1,0x71ba22fb,0x5f53dc0f,0x9bfa9ba0,
    0x4ccc1fe9,0x700999fd,0xaaaa8ddf,0xffd0fdaa,0x37e62f88,0x3204fdfe,
    0x981f204f,0x2ff200ef,0x74462310,0xcf98bb2f,0x1f20df30,0x903e65f0,
    0xd70bee1f,0x0dd07f35,0x3727df88,0xfd81f73f,0xf70bee00,0x1fd06e85,
    0x01f507f2,0x885f89b2,0x13e6043f,0xbf8807c8,0x74bd006d,0x90be23fd,
    0x201ff9bf,0x03e402fd,0x3e207fa2,0x7b9f2004,0x417d4374,0xffff887c,
    0x3f27ffff,0x7cc03f98,0x7c406e83,0x29d5f1fa,0x817d40fb,0x54dd05f8,
    0xf39f302f,0x3201f509,0x3ee07ec5,0x9027c400,0x1b6db00f,0xdce87ea0,
    0x4bf0be26,0x0ff443fa,0xeefeeee8,0xa87fb02e,0xfdaa801f,0x427c7caa,
    0x307c83f8,0x33d935f5,0x4027cfe4,0x406e83f9,0xd7acd9f8,0x3f903ee9,
    0x7d403f60,0xefc80dd3,0xf71f980e,0xd0bea2ec,0x407f300d,0xd8fd407c,
    0x6745e806,0x4c5f12f9,0xdf327c3f,0x7f666401,0x3f201ccc,0xe8807ee4,
    0x6eeefeef,0x0fe20fe2,0x327981f2,0x006efc85,0x80dd07f3,0xd4dfa9f9,
    0x6f983ee9,0xfe805f70,0x7fc401fb,0x3fa3f302,0x25f889b1,0x0fd803f8,
    0x4f881f20,0x83f501b6,0x8be2dd4e,0xd127c4f9,0x01f2003f,0x0fea3fc8,
    0x01f70fb8,0x417cc27c,0x5c9ea07c,0x802fcfc8,0x406e83f9,0x3a3ff0f9,
    0xdffddf75,0x300bf101,0xff300bff,0x3e2be20b,0x4fb09d4e,0x17e400fb,
    0x46c81f20,0x7437406d,0x85f15f54,0x885f70ef,0x07c802fd,0x7c42fd88,
    0x1fc9b206,0x1f903f60,0xfd950f90,0x6459dd99,0x4c01fd8f,0x5406e83f,
    0xbaecd90f,0x3602bccf,0x01fb000f,0x205f9dd0,0x7d7bdbaf,0x01b65f50,
    0x0f9007f9,0x3a666fea,0x82fa819e,0x0be37a4e,0x01ffdffb,0x0f900ff2,
    0xf901ee98,0x3ea7737d,0x29aefeb9,0x7e4d77cc,0xd950f904,0x459bf99d,
    0x00ef88fc,0x01ba0fe6,0x5d7601f5,0x02fb800f,0x3ee01f20,0x3afe0dd2,
    0x883eaf8b,0x3203f8cf,0x20f9003f,0xfffffffc,0x9d06e87f,0xf517d7dc,
    0x40df7999,0x806205fb,0x75c00efa,0xdfb13fff,0x309ffd31,0x6407dffd,
    0x82f93607,0x40bf30fc,0x406e83f9,0x2edb00fa,0x02fc400f,0xbf301f20,
    0x7e7c27d4,0x3605fbd0,0x7f900fbf,0xa983e400,0x2afeaaaa,0x44e817d4,
    0x217a2fef,0x87aa02fa,0xaaaaaaaa,0x02001760,0x04004404,0xaafdaa88,
    0x903f2742,0x931fdc1f,0x2199dfb9,0x22aaaaee,0x2edb00fb,0x66fec00f,
    0xf901cccc,0x7ec0fe80,0xff737f41,0x41bfea05,0xcccccefb,0xd800f901,
    0x2740dd06,0x0088bfee,0xfffb0003,0x0003ffff,0x80000000,0x6ffffffa,
    0xc81f89f4,0xfa8fec0f,0xd1ffffff,0x21ffffff,0x7ddb207b,0x7ffffc00,
    0x0f902fff,0x37c41fdc,0x1ff88ff6,0x3207ff10,0x2fffffff,0x6d800f90,
    0x13a03fa8,0x00005ff1,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x4c000000,
    0x4c14c2aa,0x100d4c42,0x10a85555,0x26029815,0x5404cc42,0x2511a882,
    0x08802a29,0x55555510,0x1a80d443,0x9006a253,0x8095001b,0x2200c018,
    0x4c406200,0x40911c40,0x0c40aa2a,0x88154244,0x554c1100,0x3fe2aaaa,
    0x1f70efff,0x3bfe67c8,0x77fd40ef,0xf95f11ff,0x903dc9ff,0x0ffffccf,
    0x21fb0ff2,0xfdbffaf8,0x7f77441f,0x7ffffd43,0x2617e25f,0xfff5f73f,
    0x00bfe03d,0xfffd81f2,0x500ff5c2,0x1dffd30d,0x8877ffcc,0xf107f13f,
    0xfb113e29,0x52fcc5ff,0x207fa09f,0xffffb1fd,0xa82a1fff,0x7c81f75f,
    0x22fc49f1,0xddf1045f,0x07d43f21,0x5e8226d8,0x45f70fe8,0xf5ec8ef8,
    0x4555fc47,0x20fe403d,0xb87e40fc,0x209f32ff,0x20f90039,0xb0fd89fc,
    0x2a503fbf,0x2a6e2535,0x1fcc224f,0xb07ee3f7,0x4f6436cd,0x37ea0fc8,
    0xbbd504fa,0x00001fb0,0xf903eedd,0x21f703f2,0x3be204f8,0x8fccbe60,
    0x9511767b,0xf1bf10bd,0x3f74f889,0xbdabd93a,0x7f500f8d,0x24f87f30,
    0x0036c2fb,0x24e83e40,0x3f5132f9,0xfbdade98,0x4c44f884,0xdd36c1fb,
    0x81fb8fd4,0xf50be23f,0x7c57409f,0x88887e42,0xa9808888,0xc81f76ea,
    0x95555db7,0x05efec3f,0x44260fe2,0x93a3fd2f,0x505eabf9,0x25f10dff,
    0xa8e93a7b,0xf105b4bd,0x3f53740b,0x45f207dc,0xeeeeeeee,0xdffddd13,
    0xf997a7dd,0xfa80fd41,0x83fb00cf,0x36c1effa,0xfa97d4bd,0x0be64f81,
    0x9ae0bff5,0xfd9f20fb,0x90ffffff,0x2edfdddf,0xefebe40f,0x5c1eeeee,
    0x0fe24ffe,0x537e2fe0,0x2f45b22f,0x5f107fd0,0x23a4e9ee,0xd05b1eda,
    0xd8fdc01d,0x5f207dc6,0xccccccc8,0xfd99912c,0x47f25999,0x40fd40fc,
    0x443eeed9,0x9ba201fe,0xd81f70fb,0x2ff21b66,0x567d46ea,0x3a0fc45f,
    0x99998624,0x85f31999,0x7c81f76d,0xf93000fb,0x3a00fe29,0x1f8fadbc,
    0x4177bfe6,0x7c40fefc,0x7b274f72,0x81f1d395,0x67c401fc,0x207dc3f8,
    0x7c80007c,0x43fffd10,0x261afb98,0x55d8d9af,0x304335df,0x7c4fe6df,
    0x9f14f883,0x4c1bfd90,0x4b97ea4f,0x20000da8,0xf9b7447d,0x17e5fe61,
    0x7f16e800,0xf15dbb00,0x022301f9,0x11be2fea,0x24e9ee5f,0x89b71ae8,
    0x7fb003fa,0x640fb81f,0x32009507,0x7dc0cc07,0x5420ffff,0x7fffec26,
    0x3dfff70f,0x2a0388e2,0x71000662,0x00000550,0x3ee6ff20,0x3eabbe6f,
    0x339ff17e,0x4cd5c453,0x007f14fc,0x1ff61ff7,0x43999997,0x897ea5f9,
    0x2274f72f,0x4c3fdee9,0x02aaaaef,0x1f70bff5,0x05ff07c8,0x332e0f90,
    0x33311ccc,0x2216a033,0x26219999,0x00000019,0x00000000,0x5dffb100,
    0x57ff54d7,0x3fff627b,0x3fffe65f,0x200fe23f,0x71bea5fa,0x22399999,
    0x89fe40fe,0x8274f72f,0xffff7018,0x17fc0fff,0x41f207dc,0x029800db,
    0x03999997,0x00000000,0x00000000,0x40000000,0x11000800,0x00004c40,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x08822000,0x32000088,0x05dddddd,0x66440888,
    0x13fa62cc,0xfa8f6c53,0x77777770,0x00003777,0x00000000,0x00000000,
    0x00000000,0x00000000,0xf7000000,0x0fee1fe5,0x90fc87e4,0x0fd99999,
    0x6440ef88,0x33be3ccc,0x3eabb0df,0x7774d94f,0x2eeeeeee,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x0fd2fb80,0x43f20fe6,
    0x03dc00fc,0xf30009d1,0x4bfbbe63,0x00592ff8,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x747ea000,0x00002206,0x002207b8,
    0x37220c40,0x00000082,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x01b63f50,0x02980000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x18800000,0x00000066,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,
};

static signed short stb__consolas_19_latin1_x[224]={ 0,3,2,0,1,0,0,4,2,2,1,0,2,2,
3,1,0,1,1,1,0,1,1,1,1,0,3,2,1,1,1,2,0,0,1,0,1,1,1,0,1,1,1,1,
2,0,1,0,1,0,1,1,0,1,0,0,0,0,1,3,1,2,1,0,0,1,1,1,1,1,0,0,1,1,
1,1,1,0,1,0,1,1,1,1,0,1,0,0,0,0,1,1,4,2,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,1,0,0,0,
4,1,0,0,2,1,1,2,0,0,1,0,2,2,0,1,1,3,4,2,2,1,0,0,0,1,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,
0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,
 };
static signed short stb__consolas_19_latin1_y[224]={ 14,0,0,1,0,0,1,0,0,0,0,4,11,8,
11,0,1,1,1,1,1,1,1,1,1,1,4,4,3,6,3,0,0,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,16,0,4,0,4,0,4,0,4,0,0,
0,0,0,4,4,4,4,4,4,4,1,4,4,4,4,4,4,0,-2,0,7,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,14,4,0,1,2,1,
-2,0,0,1,1,5,8,8,0,1,0,2,0,0,0,4,0,7,14,0,1,5,0,0,0,4,-2,-2,-2,-2,
-2,-3,1,1,-2,-2,-2,-2,-2,-2,-2,-2,1,-2,-2,-2,-2,-2,-2,5,-1,-2,-2,-2,-2,-2,1,0,0,0,
0,0,0,0,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,0,0,0,0,0,0,0,
 };
static unsigned short stb__consolas_19_latin1_w[224]={ 0,4,7,11,9,11,11,3,7,6,8,10,5,6,
4,8,10,9,9,9,10,9,9,9,9,10,4,5,8,9,9,7,11,11,9,10,9,8,8,10,9,8,8,9,
8,10,9,10,9,11,9,9,10,9,11,11,11,11,9,5,9,6,9,11,7,8,9,8,8,9,10,10,8,9,
8,9,9,10,8,10,9,8,9,8,9,8,10,11,10,10,9,8,2,7,10,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,0,3,8,10,10,10,
2,9,9,11,7,9,9,6,10,8,8,10,7,6,9,9,9,4,3,7,7,9,11,11,11,7,11,11,11,11,
11,11,12,10,9,9,9,9,9,9,9,9,10,10,10,10,10,10,10,9,10,10,10,10,10,11,9,9,9,9,
9,9,9,9,11,8,10,10,10,10,10,10,10,10,10,9,10,10,10,10,10,10,10,9,9,9,9,10,9,10,
 };
static unsigned short stb__consolas_19_latin1_h[224]={ 0,15,6,13,17,15,14,6,18,18,9,10,7,2,
4,16,14,13,13,14,13,14,14,13,14,13,11,14,12,6,12,15,18,13,13,14,13,13,13,14,13,13,14,13,
13,13,13,14,13,17,13,14,13,14,13,13,13,13,13,18,16,18,7,2,5,11,15,11,15,11,14,14,14,14,
18,14,14,10,10,11,14,14,10,11,14,11,10,10,10,14,10,18,20,18,4,13,13,13,13,13,13,13,13,13,
13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,13,0,14,17,13,12,13,
20,17,5,14,10,8,5,2,10,4,8,12,9,9,5,14,17,4,3,9,10,8,14,14,14,14,16,16,16,16,
16,17,13,16,16,16,16,16,16,16,16,16,13,16,17,17,17,17,17,8,17,17,17,17,17,16,13,15,15,15,
15,15,15,15,11,13,15,15,15,15,14,14,14,14,15,14,15,15,15,15,15,10,14,15,15,15,15,18,18,18,
 };
static unsigned short stb__consolas_19_latin1_s[224]={ 105,248,1,10,236,12,228,242,63,86,169,
142,250,248,67,34,12,32,130,156,151,177,24,162,207,220,248,45,193,246,213,
198,93,198,210,71,178,169,231,82,240,1,93,22,42,51,172,114,62,105,188,
187,140,197,118,106,94,82,72,48,196,71,232,76,9,1,84,223,35,19,72,
23,53,43,29,61,136,79,122,244,83,34,38,29,62,10,111,48,68,1,101,
54,1,78,56,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,
158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,158,105,252,138,
113,182,134,4,117,17,102,60,203,27,248,90,47,213,202,178,186,37,146,246,
250,72,161,153,193,240,1,236,228,43,55,114,102,67,147,145,23,126,136,146,
156,166,206,176,186,102,91,159,170,181,192,203,222,214,225,1,12,127,79,124,
238,136,156,166,64,54,44,232,93,24,227,216,1,166,125,34,13,206,51,176,
187,114,125,217,131,217,94,146,104,74,18,38,7, };
static unsigned short stb__consolas_19_latin1_t[224]={ 19,22,112,86,1,40,40,100,1,1,100,
100,71,67,112,22,71,86,86,56,86,56,56,86,56,71,55,56,86,100,86,
40,1,71,71,56,71,71,71,56,71,86,56,86,86,86,86,56,86,1,71,
56,86,56,86,86,86,86,86,1,22,1,100,112,112,100,40,86,40,100,71,
71,71,71,1,56,56,100,100,86,71,71,100,100,71,100,100,100,100,71,100,
1,1,1,112,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,
71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,71,19,40,1,
71,86,71,1,1,112,56,100,100,112,67,100,112,100,86,100,100,112,56,1,
79,112,100,100,100,40,56,55,55,22,22,22,22,22,1,71,22,22,22,22,
22,22,22,22,22,71,22,1,1,1,1,1,100,1,1,22,22,1,22,71,
22,40,40,40,40,40,40,86,71,40,22,22,40,56,56,56,56,40,56,40,
40,40,40,40,100,56,40,40,40,40,1,1,1, };
static unsigned short stb__consolas_19_latin1_a[224]={ 167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,167,
167,167,167,167,167,167,167,167, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_19_latin1_BITMAP_HEIGHT or STB_FONT_consolas_19_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_19_latin1(stb_fontchar font[STB_FONT_consolas_19_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_19_latin1_BITMAP_HEIGHT][STB_FONT_consolas_19_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_19_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_19_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_19_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_19_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_19_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_19_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_19_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_19_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_19_latin1_s[i] + stb__consolas_19_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_19_latin1_t[i] + stb__consolas_19_latin1_h[i]) * recip_height;
            font[i].x0 = stb__consolas_19_latin1_x[i];
            font[i].y0 = stb__consolas_19_latin1_y[i];
            font[i].x1 = stb__consolas_19_latin1_x[i] + stb__consolas_19_latin1_w[i];
            font[i].y1 = stb__consolas_19_latin1_y[i] + stb__consolas_19_latin1_h[i];
            font[i].advance_int = (stb__consolas_19_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_19_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_19_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_19_latin1_s[i] + stb__consolas_19_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_19_latin1_t[i] + stb__consolas_19_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_19_latin1_x[i] - 0.5f;
            font[i].y0f = stb__consolas_19_latin1_y[i] - 0.5f;
            font[i].x1f = stb__consolas_19_latin1_x[i] + stb__consolas_19_latin1_w[i] + 0.5f;
            font[i].y1f = stb__consolas_19_latin1_y[i] + stb__consolas_19_latin1_h[i] + 0.5f;
            font[i].advance = stb__consolas_19_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_19_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_19_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_19_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_19_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_19_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_19_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_19_latin1_LINE_SPACING
#endif

