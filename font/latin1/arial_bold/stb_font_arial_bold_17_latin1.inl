// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_arial_bold_17_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_arial_bold_17_latin1'.
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

#define STB_FONT_arial_bold_17_latin1_BITMAP_WIDTH         256
#define STB_FONT_arial_bold_17_latin1_BITMAP_HEIGHT         96
#define STB_FONT_arial_bold_17_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_arial_bold_17_latin1_FIRST_CHAR            32
#define STB_FONT_arial_bold_17_latin1_NUM_CHARS            224

#define STB_FONT_arial_bold_17_latin1_LINE_SPACING          11

static unsigned int stb__arial_bold_17_latin1_pixels[]={
    0x00000000,0x00000000,0xa8000000,0x00ed8551,0x1db13bb6,0x50003b60,
    0x37a6007d,0x02615000,0x802a6530,0x1bb004ea,0x7641f5c0,0x7776dc5e,
    0x5c0001ee,0x8bf9802e,0xcfec885f,0x981df100,0x705f101f,0x7d817dfd,
    0x9bffb730,0xd9ff4403,0x3e01bf97,0x00ff8fd5,0x1ff13bfa,0xd0013e20,
    0x3f7a200b,0xfeffc804,0x7dc7e400,0x2007e401,0x37e602fb,0x73ff642f,
    0x5fffffff,0x3600bb20,0xe8ae9806,0x6fcdfc84,0x17a01d90,0x77ff43ec,
    0x21f61fff,0xebaacefb,0x25dfb02f,0x209fd77d,0x0ff8551a,0x98001fa0,
    0x002a2002,0x0054c544,0x2006a22e,0x50015329,0x5401a801,0xe9fe0552,
    0x03f9dfff,0x2a201636,0x5fd00000,0x802202ee,0x227cc1fc,0xdfb12efb,
    0x807ee3ec,0x6c7e82fa,0x3db17e67,0xd5ff4ea8,0xd83f419f,0xeffeb80e,
    0x77ff5c03,0x77ff5c03,0x77ff5c03,0x77ff5c03,0x7541ed83,0x4ea83db4,
    0x44ea83db,0x37fffa7f,0x17fa03f9,0x7777776c,0xd117640e,0xc82ffb8b,
    0xf317a22e,0x7fc1fc89,0x4fb0dc43,0x95dd72fb,0x8fd0d93d,0xfd1be27d,
    0xfff5fa83,0x83f4dfdb,0x7fff40ff,0xffd05fff,0x3a0bffff,0x05ffffff,
    0xbffffffd,0x3fffffa0,0x2a0ff45f,0xfa83fd5f,0x5fa83fd5,0xbfff73fc,
    0x3fe607f3,0xffffe80f,0x2fd40fff,0xfffd8bf5,0xfa97ea0d,0x07ec6f85,
    0xfb003ff1,0xeadfb9f4,0x7c0f88ff,0xd1be3ec7,0xff5fa83f,0x07e8ff47,
    0x977e41ff,0x7e42ffb8,0x85ff712e,0xff712efc,0x712efc85,0x2efc85ff,
    0x7f45ff71,0x1feafd41,0x41feafd4,0x913fc5fa,0x207f3bff,0xfe83fffc,
    0x6c3fe001,0x3eafea2f,0x6c3fe0ef,0x3fc7e82f,0xae401fe6,0x7d4df1f8,
    0x45f98be6,0xfd0ff47d,0x3ff5fa83,0xf07ea7dc,0x641ffc1f,0x641ffc6f,
    0x641ffc6f,0x641ffc6f,0x641ffc6f,0xf507fa6f,0xbf507fab,0x8bf507fa,
    0xf9df887f,0x6faff883,0x32001fe8,0x7dc7f8bf,0x7e4bfd15,0x3fb07f8b,
    0x1ff11be2,0x5f57a800,0x70f8a7cc,0x547d83ff,0xa83fd2ff,0x7dc3ff5f,
    0x43fe0fd4,0x7fa81ff8,0x3ea07fe2,0x2a07fe27,0x207fe27f,0x07fe27fa,
    0x41fe9fea,0xa83fd5fa,0xfa83fd5f,0x6fc43fc5,0xd5fb83f9,0xccdfe85f,
    0x5bf303cc,0x23ff989f,0x3eb7e66f,0x3e23fb04,0x7441ff86,0x87f2d703,
    0x7e4b73fb,0x3e63ec1e,0xfa83fd2f,0x8fec7ff5,0x261ff07e,0x21ff107f,
    0x1ff107f9,0x7fc41fe6,0x3e20ff30,0x220ff30f,0xa83fd0ff,0xfa83fd5f,
    0x5fa83fd5,0x4efc43fc,0xf92fe83f,0xfffffe8b,0x3fbfa05f,0xfaeffa81,
    0x80ff7f44,0x7e437c7e,0x4a97f61e,0x745f71f3,0x7dc2f99f,0x87fa3ec5,
    0xfafdc1fe,0x3a7fddff,0x3e61ff07,0x30ffa81f,0x1ff503ff,0x3ea07fe6,
    0x503ff30f,0x07fe61ff,0x0ff43fea,0x20ff57ee,0xb83fd5fb,0x7c43fc5f,
    0x7fcc3f9d,0x3a0ffcab,0x009999bf,0xe981bfee,0x6ffb86ff,0x10fd1be0,
    0x1fffdffd,0xdf15f3ec,0x0bfbffb7,0x6f8fb1be,0x53ee17ec,0x21cffbff,
    0x7c1ff07e,0x7c7fc83f,0x7c7fc83f,0x7c7fc83f,0x7c7fc83f,0x367fc83f,
    0xfda7dc2f,0x2fda7dc2,0x21fe27dc,0x643f9df8,0x3fffffff,0xf10007fa,
    0x1ff9007f,0xf103ff88,0xc881fc89,0x3ec1cfff,0x32bb6abb,0x7f8113df,
    0xd8bf13ec,0xffa7f45f,0x3e0fd010,0xf5177e47,0x22efc87f,0x77e43ffa,
    0xf90ffea2,0x21ffd45d,0x3fea2efc,0x9fd17f63,0x29fd17f6,0x227f45fd,
    0xf9df887f,0x66667fc3,0x007fa6fd,0x3201ff10,0xff10bf64,0xf107ea01,
    0x40676407,0x003ba27d,0x6c7e83f9,0xff317e27,0x3e1fffbf,0x4f3fa00f,
    0x7f447fea,0x886fffef,0x6fffeffe,0xffeffe88,0xeffe886f,0xfe886fff,
    0x4c6fffef,0x0fffdfff,0xfffbfff3,0x3f7ffe61,0x0ff950ff,0x547f3bf1,
    0xd2ff886f,0x3ddddddf,0x205feb98,0x30ffbdfc,0x2ec0bfd7,0x82f806d8,
    0x5e7f447d,0x81feca99,0x2afb2dfd,0xffea84fd,0x803fe1ef,0x5ff95ffe,
    0x13ffff20,0x09ffff90,0x04ffffc8,0x027fffe4,0x413ffff2,0x41efffea,
    0x41efffea,0x21efffea,0xdf887ffd,0x40ff63f9,0xffffd5fc,0xff985fff,
    0x3ff2200e,0x03bfe62e,0x1f980fc4,0xfb05eea8,0xdffdb710,0x3fe6017b,
    0x03bf2fb3,0x30000030,0x10002200,0x00088001,0x02200044,0x00300180,
    0x00000006,0x00980000,0x40098040,0x0004c018,0x00880188,0x11188440,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00049800,0x20076c40,0x115105e8,0x805d9035,0x04ea8048,
    0x275413a6,0x1a8176c0,0x51288055,0x2207d900,0x2288350a,0x000dd802,
    0x00800000,0x00000000,0x7dc40000,0xffd701df,0x3776c07d,0x7d403f20,
    0x6e884f8a,0x77402540,0xc803b600,0x3f7f200f,0x06fa7c40,0x20277ffc,
    0xfa81fdfa,0x7ff44f8b,0x017d406e,0x309f17f5,0x7f5c07ff,0x880fb9ce,
    0x03fc80ef,0x2e05bfd9,0x077c403f,0x3bf20fb8,0xfffe86ff,0x8a885fff,
    0x806a00a8,0x101a88a8,0x4401d805,0x4005400a,0x2a26a01a,0x40551a81,
    0xa8015338,0x21510351,0x00a8a41a,0x2ba600cc,0xfbde83e8,0xfffffe81,
    0x01d903ff,0x677dc36c,0x701f207f,0x3e36c01f,0x321ccdae,0x7ff712ef,
    0x7777776c,0xdddddb0e,0x3bbb61dd,0x76c0eeee,0x41ffed41,0x44eb85ec,
    0x13b601ed,0x76c03db0,0x009db004,0x3db013b6,0x13a61f6c,0x2000276c,
    0xfc813098,0x40ffee2e,0xfd818008,0x00c03fd1,0xf89f0022,0x07ff05ae,
    0x7fff4df9,0xffd0ffff,0x3a1fffff,0x0fffffff,0xdff70ffc,0x2ff887ff,
    0x3ff07fe6,0x803ffe60,0xfff301ff,0x0fff9801,0x007ffcc0,0x07ff43ff,
    0xfff30bf3,0x05f75401,0x3e05f754,0x1bfbe23f,0x2a02fbaa,0x23fa0bee,
    0xfed886f9,0x77f6c43e,0x7ec2f883,0x0ffc40ef,0x03fd3fd4,0x7f401fe8,
    0x743ff001,0xb83dcc8f,0x3e13f66f,0x7fff901f,0xfc80ffc0,0x7fe403ff,
    0x7ffe403f,0xfe87fe03,0x3217e65f,0xdf903fff,0x77e41ffb,0x3ff10ffd,
    0x91fe7ba2,0x641ffbdf,0xff0ffdef,0xbfb07f91,0x6fec3ff9,0x07d41ffc,
    0x993fff22,0x21ff107f,0x0ff401fe,0x7c007fa0,0x03adf11f,0x1ff59fd0,
    0xff103ff0,0x0ffc0df5,0x037d7fc4,0x40df5ff1,0x206faff8,0x3fffa1ff,
    0xff88bf32,0x5cff06fa,0x4fb9fe4f,0x44774ff3,0xfb9fe0ff,0xf4fb9fe4,
    0x550bf91f,0x645517e4,0xd503642f,0x07fe65ff,0xcdfe9fe2,0x37fa3ccc,
    0x3fa3cccc,0xf83ccccd,0x0b3df31f,0x05fdff30,0x57ee07fe,0x03ff02fe,
    0x40bfabf7,0x205fd5fb,0x205fd5fb,0x3f3fa1ff,0x5fb8bf36,0xcef985fd,
    0x9df35fdc,0x3fe2bfb9,0x1ff50fd8,0x3f733be6,0xfb99df35,0x3fa23feb,
    0x3ffeca84,0x21fff654,0x9da8984e,0x9c4ffe5f,0x3fffa6fb,0x3ffa5fff,
    0x3fa5ffff,0xf85fffff,0x26f7fe1f,0x17ff205f,0x2fe81ff8,0x07fe0bf9,
    0x82fe4bfa,0x20bf92fe,0x20bf92fe,0x3a3fa1ff,0x7f45f9cf,0xefa8bf92,
    0xdf53cccc,0x7ec79999,0xa9ff21fe,0x53ccccef,0x279999df,0x25ff30ff,
    0x3fcbdfe8,0x7f97bfd1,0x37e617c4,0x3f23f9da,0x3ffefa9e,0x26666ffa,
    0x2666ffa0,0x266ffa09,0x21ff8099,0x02fedffc,0xff807fe2,0x655ffcc1,
    0x41ff80ff,0xffcabff9,0x655ffcc0,0x5ffcc0ff,0xff80ffca,0x3fe63fa1,
    0x2ffe65fb,0x3e20ffca,0x37c42a66,0x17fdc153,0x37c47ff3,0x99be2153,
    0x7dc1ff0a,0x9fe4bf55,0xa8ff25fa,0xeeefd80f,0x3bffa20f,0x3fa0fffe,
    0x200ff401,0x3ff001fe,0x803effc8,0x07fe00ff,0xfffffff9,0xfc83ff07,
    0x43ffffff,0xfffffffc,0x7ffffe43,0x21ff83ff,0xbfff90fe,0x7fffffe4,
    0x75eff43f,0x3af7fa1f,0x37ffee1f,0xdfe86ffe,0x37fa1feb,0xb1ff1feb,
    0x3fe25fdb,0xff13ffbb,0x3e47ff77,0x81dffc88,0xfeefffc8,0xe803fd2f,
    0x00ff401f,0x06541ff8,0x7c01ff00,0x6667fc1f,0x1ff86fdc,0x6e6667fc,
    0x6667fc6f,0x67fc6fdc,0xf86fdccc,0x7c43fa1f,0x333fe5ff,0x6c46fdcc,
    0x7ec42eff,0x2f3e62ef,0xb104fffd,0xfd885dff,0x2e3fe2ef,0x77fe44ff,
    0x3bff25fb,0x5017a5fb,0xeb82200b,0xdddddfd0,0x3bbbfa3d,0xddfd1eee,
    0xff83dddd,0x3e000ec1,0xa87fe00f,0x42ff886f,0x21bea1ff,0x0df52ff8,
    0x1bea5ff1,0x3ff0bfe2,0xbff507f4,0x3fe21bea,0x20100102,0x00200082,
    0x01004002,0x2004c010,0xfd000029,0x25ffffff,0xfffffffe,0xffffffd2,
    0x341ff85f,0xf007fc00,0xc81fec3f,0xfb0ffc5f,0x7ed7f207,0x3f6bf903,
    0xff8bf903,0xbfb03fa1,0x2fe40ff6,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x01440000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x7c400000,0x3ffae04f,0x3e7f303e,
    0x26079d05,0xfd70bf2f,0x03ff605b,0x5407e5fa,0x261eb9de,0xfdb7406f,
    0x17dfd700,0xf885fd88,0x6984e880,0x0d309d10,0x41677f5c,0x07d43eea,
    0x00cfec88,0x7e401fe2,0x3aa04e83,0xfc81ebcf,0x07bfb302,0x3a0bebba,
    0x85ffffff,0x3609d2e9,0xf11f703b,0xffdffb87,0x42f57d40,0xfc81d75d,
    0x4c2fffcf,0x7657602f,0xffeffe80,0x0be3261f,0x09ff307b,0x09ff303d,
    0x3bfee03d,0x5e7c1ffe,0xfc813a0f,0x7cc04fbc,0xc81fc402,0xffbff706,
    0x703f885f,0x305fd9ff,0x5df90261,0x000bfee2,0xfd988288,0x87f43fb9,
    0x188443fb,0x221fd000,0x000882ff,0xd8977dc0,0x260ff86f,0xa89b1106,
    0xa89b1105,0xfb87fa05,0x4be6be65,0x47fa00fa,0x4008807e,0x203ea018,
    0x85ff11fe,0x4c3fa018,0x77f6c43d,0x7e41ffc3,0x1f7f6c46,0xe8fbfb62,
    0x1fffffff,0x41db01fe,0x6c1db0ed,0xfe8df30e,0x076c1db2,0x3e0b7f6a,
    0x220dc43f,0xb00ba4e8,0x3600fc49,0xfe807e24,0x7c43310c,0x809d1faa,
    0x205fcefc,0xb502dfda,0x85f105bf,0xd97f47f8,0x7c43b60e,0xfcdfd806,
    0x503ff11f,0xfcdfd8ff,0x3f37f61f,0xd5bf751f,0x2bfa215f,0x3a0ff809,
    0x7f41ff1f,0x2fe8df31,0x70ff41ff,0x44bffbff,0xbfa801ff,0x9b00b53f,
    0x926c0264,0xdfffa809,0x57eee80b,0xfff8801f,0x3f7fee04,0x7effdc5f,
    0x7c44f85f,0x0ff97f46,0x037cc7fa,0x265f9154,0x41ff107f,0x2a8bf22a,
    0xf2f98bf2,0x4ffffe8b,0x47fa0ff8,0xf87fa0ff,0x3e5ff31f,0xff87fa0f,
    0x3fcc3fa1,0x0f459500,0x3e257033,0x44ae0310,0x3aa0660f,0x5c42ffff,
    0x440c9d0b,0xf013fffd,0xff07f43f,0x1b607f43,0x97fc43fa,0xe87fa0ff,
    0x950bf30f,0x3fe67ffd,0x540ffa81,0x6543ffec,0x7fb53ffe,0x32a15bf7,
    0x0ff81aef,0xd07fc7fa,0x7f7fe43f,0x741ff2ff,0xfc8df31f,0x0001ff13,
    0x405f892e,0x80ddf93d,0x9817e23d,0x2a00ffeb,0x20eff98f,0xfbffacfe,
    0x7f91be65,0x87f91be6,0x67fdc0fb,0x41ff2fff,0x33fee1fe,0x37fa22fe,
    0x0ffe3fcb,0xdfe89ff2,0xbfd13fcb,0x3ffa7f97,0x2e1fffff,0xf83fe03f,
    0x7fc1ff1f,0x7ec67641,0x8ffc1ff1,0xf27dc6f9,0x203e883f,0x817ba0f8,
    0x07e66e69,0x997ba34c,0x201fe84c,0x44fed94e,0x8ffff27f,0x9a7dc6f9,
    0x2627dc6f,0x67fdc42f,0x7c1ff2fd,0x1f7f541f,0x23fc97ea,0x3fea2efc,
    0x3fc97ea3,0x89fe4bf5,0x219fd9ef,0x3fa00ee8,0x3fa3ff11,0x4d43ff11,
    0x8ff43fa0,0x87fe1ff8,0x87bf20fe,0xd8f205fd,0x10ba05cc,0x9b1740bd,
    0x222fe8b9,0x21f501ff,0x1fe2bd4e,0x1ff83ffd,0x21ff83fa,0x804f80fe,
    0x223fd2fd,0x84ec81ff,0x3ffbbff8,0x3ffbffa2,0x5dffc46f,0x77ff13ff,
    0x6d3e27ff,0xeffffd86,0x3afbf65e,0xd7dfb1ff,0x56fec3ff,0x2fbf66fc,
    0x3ff21ffe,0x7f445fec,0x300fffef,0x17ff7ccd,0x817a2354,0x3ffbe66a,
    0x3f7bfee2,0x5d93a06f,0x7677ec7f,0x3f22ffff,0x7e45fecf,0xdb05fecf,
    0x3f65fb00,0x101ffebe,0x7dff903f,0xffff90bf,0x2fbff209,0x2fbff25f,
    0x17e5f35f,0x3ffb73ea,0x36fffa26,0xb7ffd11f,0x7ffecc3f,0x2fffa21e,
    0x77f5c1fd,0xfffc880b,0x330b601c,0xe83d01b9,0x41e81eef,0x6dc0ec99,
    0x3ea04fff,0x887fbea0,0xfc9dfffd,0x05f7f5c0,0x805f7f5c,0x12fd807b,
    0x83fb7ffd,0x00404eeb,0x00200110,0x0130c402,0x08008040,0x00802200,
    0x00080020,0x1440cc05,0x102aaaa2,0x0200cc05,0x00a20aa0,0x80040103,
    0x00018800,0x00000002,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x5b910000,
    0x0bbbbba0,0xe8873b66,0xdb01ba25,0x4c07d501,0x2000d9cd,0x2000beda,
    0x1f542deb,0x0000fb6a,0x20b5b910,0x8004aadc,0xd97a22ec,0x507b600e,
    0x71ec809d,0xdffda85d,0xdfd7100b,0x0ffd8039,0x067f4eec,0x1cefeb88,
    0x8bfdff50,0x43fffff9,0x10ffeff9,0x203fc4df,0x04fa81ff,0x2617f2f6,
    0x7f7fdc5f,0x3f617e46,0x93ee5fff,0x4c5ffffd,0x22fea3ff,0x82ffa84f,
    0x982fdbe9,0x3ea0adfc,0x0ff97ea5,0xbf507fa0,0x7f92fd80,0x7ff7ffdc,
    0x731ce885,0x3abea05f,0x7f6fffc5,0x731ce886,0x3a3fd05f,0x2673ea1f,
    0xfb9fec09,0x3fc4df12,0x26207fe0,0x436c0000,0xd83fb0ff,0x0ff9fe26,
    0x45be2131,0x3ef7a1ff,0x87d15d31,0x0006e8c9,0x8dfdbff5,0x7c5fb0ff,
    0x507fa00f,0x12fd80bf,0x42ffee13,0x2fa22ff9,0x05f32aaa,0x7ff06211,
    0x27d10ff4,0x443f32b9,0xfc8ff27f,0x01ff101a,0x07f89be2,0x27cc0ffc,
    0x305bfb50,0x81fd9fe0,0xf83fe081,0x9fec9f51,0x40013098,0x444fdec9,
    0x7f43efed,0xbfc87f61,0x64ffc7f8,0x507fa0cf,0xdaeea8bf,0x309fb02f,
    0xcdfa5c15,0xfb50b54e,0x2e1ff85b,0x67d52e4f,0x37ccb55e,0x7ffec9f7,
    0x7dffcc3f,0xf89fe21d,0x6c0ffc07,0xfbff703f,0x540ed8bf,0xed84fdef,
    0x223fea80,0x7ecbf32f,0x76c076c4,0x7ff7fd40,0x3f37f60f,0x7f90a61f,
    0x227d6fcc,0x26fedfff,0x92fd41fe,0x05fff9ff,0x96c007fe,0x71e2d71f,
    0x7cbffbff,0x2d93ee1f,0x53c4a25f,0xff2fdcdf,0x7d45ff7b,0xf11ffcef,
    0xf01fea3f,0x206fd83f,0xe83fa1ff,0x7fff440f,0xfc80fe83,0xfe8be62f,
    0x7f45ffbb,0x7ec0fe80,0x1545ff12,0x7fd405f9,0x20ff7f40,0x747fa3ff,
    0xfd2fd41f,0x260bfe21,0x3bbb20ff,0x7777c3e5,0x21ff87a1,0x6c7ff0fe,
    0x07e23e1f,0x2e6f98f4,0x4bf5044f,0x27f51ff9,0x7ffcfff8,0xdf90ffc0,
    0xf91be601,0x3fe07f47,0x7f42fd8a,0x2a5fb100,0x37bfa63f,0x7407f44f,
    0xf91fe20f,0x3ffeca89,0xf703ff50,0x641ff0df,0xfb83fd3f,0x2fe8df35,
    0xe87fe7f9,0x7c7a6fff,0x4c3e0eca,0xff9fe46f,0x8f47fddf,0x987c512e,
    0x980ff27f,0xf89fe26f,0xfbfbdf16,0x1ff0dccf,0x09883fe2,0x24fb8df3,
    0xa97e60fe,0x5007f45f,0x4613eebf,0x407f43fc,0x91fe60fe,0x2f7fa27f,
    0x1ff883fc,0xff07ff10,0x2fd9fdc3,0x46f9a7dc,0x3a7f92fe,0x326f984f,
    0x34d3a3f4,0xf4fb8df3,0xc839ff7f,0x2abb7d74,0x2fd87fc6,0x227dcfd1,
    0x227f52fe,0x53ee016f,0x363fc7f9,0xfe87fe2f,0x7f883fa0,0x21fd0fee,
    0x5cff26f9,0x7f49915f,0x7f407f41,0x1fd0ff40,0x83fc97ea,0x3fe204f9,
    0x3fa3ff80,0x4fe8bfb1,0x17fc43fa,0x90bfee5b,0x8657ccdf,0x7fc2e9c9,
    0x87fc3fa1,0x3265f300,0x7e42e88b,0x77e46fde,0x7fdc1ffc,0x0df11ffd,
    0x4ffeff88,0x37ee77dc,0x17fb3ff2,0xcefc81fd,0xb07f40ff,0x321ffbdf,
    0x3fb7fa5f,0xfe80fe86,0x7f67fdc0,0x3eeffe25,0x9809883f,0xfff05feb,
    0x7fccffbb,0x320fffdf,0x72fffcff,0xfdfffc8d,0x85fcc5ff,0xffc83ea8,
    0x03fe5fec,0x5442fe60,0x19fd503e,0x02fffc88,0x7c45bff7,0x5ffda806,
    0x01bffb50,0xe817dfd7,0x6ffe440f,0x3220fe82,0x97f21cff,0xe80dffd9,
    0xa80fe80f,0x7e40befd,0xfa85fbef,0x00eff985,0x839ff5ff,0x41efffea,
    0x2fccffb8,0x3fff6e01,0xfdfb302d,0x77f5c05b,0x4003fe0b,0x02dfffd9,
    0x10008008,0x00020000,0x07f40100,0x807f4010,0x3a004000,0x200fe80f,
    0xfa800800,0x08001305,0x00000180,0x000c0008,0x06000002,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x2604c000,0x3b60d9cd,0x3603eeee,0xc83eeeee,0x6c3ba22e,
    0x41deeeee,0x361db3eb,0x17e6000e,0x003b61db,0xd802fb6a,0xd818804e,
    0x0eeeeeee,0xeeedbfc4,0x3b203eee,0xeeeeeeee,0xed803db1,0x1eda74c1,
    0x9dddddd3,0x3bbbbbae,0xeb83db5e,0xddddd11e,0x00f649dd,0xf917fec4,
    0x45fcbd83,0x6ffffffe,0xffffffd0,0x3f26f98d,0x3fffffa5,0x753f21ff,
    0x2001ff0f,0x87f45fe8,0x7fdc00fe,0xfff307fe,0x740fd801,0x0fffffff,
    0xfffebfec,0xff304fff,0xfffffffd,0xfd007fa3,0x3ff6fa83,0x3fffffea,
    0xffffff95,0xfb8bfaff,0x3fffe22f,0x0bfa5fff,0xe833bee0,0x0ff4001f,
    0x3fd07fd3,0x3fa1ff4c,0x3fa1ff8a,0x9f927ec1,0x007fc3fa,0x7405ffc8,
    0xd87fc00f,0x3fffc83f,0x3fa07ec0,0xbfff5401,0x3f2002fe,0x7f406f9b,
    0x7f43deee,0x1ffb7d41,0x3fd33331,0x5fd0bf70,0x3200bfea,0x00bfa1ff,
    0xdff90ff2,0x3bf67b69,0xff507fa2,0x7fa83fd0,0x22fdf7d4,0x91fe41fe,
    0x7fc3fa7f,0xdf507db0,0xfd0ed8bf,0x5443df73,0xff113ee2,0xd5530df5,
    0x07fa557f,0x3aff7db0,0x1ff1002f,0xffe80df3,0x3fa5ffff,0x1ffb7d41,
    0x3ee07f50,0xffaafe85,0x42ffa803,0x7fe402fe,0x53bff25e,0x0ffdcfff,
    0x47f883fd,0xf109bfe9,0x3ffa621f,0x337fa1af,0x3ee0efdc,0x23fe1fd3,
    0x9ef885fc,0xfe87f45f,0x7407fdcf,0xfeafdc2f,0x7ffffe42,0x999bfd7f,
    0xd7f89479,0x2055559f,0x99ff34fc,0x50ff4799,0x337fa1ff,0x3ff6fdcc,
    0x5fb81ba0,0x06ffcfe8,0xfe84ff98,0x2f7fe402,0x23ff87fa,0x883fd1ff,
    0x3fffe1ff,0x7e47fe4f,0x3a7fffff,0x44ffffff,0x3e1fd2fa,0xfc80efcf,
    0x87f45f99,0x407fe3fe,0x92fe86fd,0xfecca8bf,0xffffd4cc,0x2ff10bff,
    0x86fffffe,0xfff30ff8,0x0ff4dfff,0x7fff4bfa,0x3ff6ffff,0x7dc07f70,
    0xfffffe85,0x417fa202,0x2fc802fe,0x87fe1fe8,0x883fd1fe,0x2ffa60ff,
    0x261ff309,0x22abffaa,0xfda99bfe,0x87f47e65,0xfa85ffff,0x0fe8bf34,
    0x40ff43fd,0x7fcc0efd,0xb00ffcab,0x99bfe81f,0xd7f88099,0x7055559f,
    0x3df955df,0x0ff41333,0x2ffa3ff3,0xff6fb999,0x5c01ff03,0xbbffe85f,
    0x1dfb00ff,0x3200bfa0,0x3e1fe82f,0x7f47fa0f,0x7f43fcc1,0x9953fd41,
    0x7f499bff,0xf887fc41,0x3bfe1fd0,0x7ffec1fe,0x1fd0ffff,0x41fe83fa,
    0xffc80efc,0xb03fffff,0x001fe81f,0x00bfaff1,0x3ffffffe,0x7ffff406,
    0x507fa5ff,0xf107fedf,0xe85fb80b,0x3217fa4f,0x0bfa01ff,0x3f60bf20,
    0x1fe83fe1,0x27f443fd,0x9fd10ff4,0x7fffffe4,0xff507fa7,0x3e1fd0c1,
    0x7646fa9f,0xd0effeee,0xfe83fa1f,0x7c03bee1,0x6fdccccf,0x03fd0550,
    0x17f5fe20,0x2aabbee0,0x7ff406fc,0x3fa0ceef,0x1ffb7d41,0x3ee01fd4,
    0x3ea2fe85,0x00bfea2f,0x5f9005fd,0x3fe7bfb0,0x77f47fa0,0xfd06ffee,
    0x01fffddd,0x3bfa07fa,0x2e5ffeee,0x3fe1fd3f,0x7cc07fb0,0x0fe87f45,
    0x7ffc47fa,0x0df55fff,0x3ff25ff1,0xdfd7ffff,0x883ddddd,0xe805fd7f,
    0x777fcc3f,0x03fd2eee,0xb7d41fe8,0x017e41ff,0x0bfa17ee,0x3ffa1dfb,
    0x3a6eeeee,0x44eeeeef,0x5ffa82fc,0xe8ff41ff,0x00ceffff,0x19dffffd,
    0x7f40ff40,0x5c4effff,0x3fe1fd3f,0x2601ff30,0xfe87f45f,0x7fdc7fa0,
    0x7fb5ffff,0x7fe57f20,0xffd7ffff,0x885fffff,0x5405fd7f,0xffff987f,
    0x03fd3fff,0xb7d41fe8,0x00fec1ff,0x0bfa17ee,0x3ffa9ff3,0x3a7fffff,
    0x46ffffff,0x000202fc,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x3a600000,0xc8bb620e,0xb0fba22e,
    0x4c1f641d,0xd30fb65e,0xd90bbb69,0x3bbbb67d,0x77776c3e,0x800002de,
    0x00000000,0x2e000000,0x81aaaaaa,0x026000aa,0xb0000000,0x08876c1d,
    0xeeeeea80,0x3ae17b26,0xdf92fec4,0x3fea4fc8,0xdf71fe26,0x7ff49f90,
    0x7ffd7e60,0x753ffe25,0x26ffffff,0xfffffffe,0x02dfda83,0x45d9df93,
    0xfccffec8,0xbeea80df,0x83dfd980,0x4c3efed8,0x0222dffd,0x801fe818,
    0x237a0fda,0x4ffc8dfc,0x8bbf67b6,0x3fe6fadd,0x6fcc7fa0,0x3fbbaa01,
    0x98bfe27f,0x57fc41ff,0x37d41ff9,0x3ea1fffb,0x3e07fc45,0x997ffa1f,
    0x54ffff5f,0x43fd4fff,0x83fd0ffa,0x6ffdc6fc,0x67fd45ff,0x66fe47fe,
    0x0efcdfff,0x83ff7bf2,0x42fecffb,0x21ffcdfd,0x10ffbbee,0x076c0c01,
    0x0effeb88,0x3ffb3ffe,0xfff1ffce,0x3fe1ffb9,0xe83fe5ef,0x5dffd11f,
    0x5c1ffa80,0x5c13f66f,0xf884feff,0x64bf3fe7,0x263fe83f,0x97fff46f,
    0x3fbff5f9,0x7f53f7f2,0x1fe97f41,0x87fe37d4,0x647f60fe,0xfc8a63ff,
    0x27f8fee6,0x4c3fa4fb,0x5f91543d,0x10ccbbe6,0xaaa98c01,0xff912aaa,
    0x23ff039f,0x27fb0ffa,0x7c7fe3ff,0x3a0ff83f,0x7ffecc1f,0xd02ff984,
    0x401ff59f,0xfd00effe,0x29f5bf33,0x26fb81fe,0x7e7f44fc,0x2ffebf36,
    0x29f7fd3f,0x47fea1fe,0xfeaa9bfe,0x7f91be63,0x7df5dbe2,0x77ff6545,
    0xdf34fdcc,0x3e2bfb99,0xffd95006,0x0e7ffec7,0xffc8c011,0xff37ffff,
    0xf30ff809,0x1ff9fe4d,0x40ffc7fa,0x407fe0ff,0x3e20ffd8,0x3bfe603f,
    0x27fdc02f,0x17f77fb0,0x7c41fedf,0xfe83ff1f,0xf5f9cfe8,0x7bf1bf3f,
    0x3ffffa9f,0x3fffa5ff,0x3e60cfff,0xdf9a7dc6,0x3a4fa8fa,0xccefcbef,
    0x99df53cc,0x01be6799,0x7f97bfd1,0x8ffff5c4,0x66546008,0xfd14cccc,
    0x99fe05df,0x7fcfee5f,0x07fc7fa0,0x1ff88ff4,0x877ff5c4,0xfc804fe8,
    0x7ffc405f,0xfb9f700f,0x81bebfa3,0xe86f9cfd,0x5fbff98f,0x7f5fd1ff,
    0x3bbfa9f7,0x667f43ee,0x43ff04ff,0x3fff10fe,0x937cc7f6,0xf8854cdf,
    0x0fe82a66,0x92fd4bf3,0x644aa27f,0x40c0114f,0xffb300aa,0xf33fc19f,
    0x0ff9fdcb,0x407fc7fa,0x1ffebefd,0x83bfff91,0x1eeeeffd,0x6c01ff88,
    0xf305fdef,0x7f7e4ffd,0x3f3bea04,0xff90fe83,0x3f23febf,0xfd4fb9fe,
    0xf11fe803,0xd9ff909f,0xebefc8bf,0x2effe26f,0x1ffbdfff,0x87faf7fa,
    0x22fecffb,0x3ffbbff8,0x3fd77ff1,0xfe818022,0x07fe4401,0xf72fccff,
    0x1fe83fe7,0xffd101ff,0x3fe63fb7,0xffffb00c,0x03fe03ff,0xff89ffa8,
    0x4cbfff03,0x7fc02fff,0x10fe80ff,0x23febfff,0x29f77ffa,0x0ff401fe,
    0xfd703ff5,0x76f4417d,0x7f5c0bef,0x2effd9cf,0x4177fec4,0xfc83efea,
    0x36a5fbef,0x80223dff,0x1000cb81,0xbf33fc17,0x20ff9fdc,0x401ff1fe,
    0x0000a600,0xf8807fc0,0x203fee4f,0x7ffc3ffd,0x82ffe400,0x57fea0fe,
    0x75ff88ff,0xd007fa9f,0x206fd83f,0x08008600,0x10010010,0x20200100,
    0x999999a8,0x00000001,0x00000000,0x3fe00000,0xfd0df900,0xd81ff70b,
    0x2ff9806f,0x5fd81fd0,0x5cffa1ff,0xe803fd4f,0x027fc41f,0x00000000,
    0x00000000,0x00000000,0x00000000,0x20000000,0x000000ff,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x02620000,0x37aa0404,0x17649d90,0x887643b6,0x4a8fa66e,0x547d50ec,
    0x46a00a89,0x0100001a,0xa8000000,0x1fffffff,0xfffffa80,0xe98221ff,
    0x198b7666,0x3b2dd104,0x993b2022,0x08fffee2,0xaaaa8102,0x0000aaaa,
    0x4c17dc00,0x44ebccbf,0x20ff9cfd,0xb97ea5fa,0x323ff53f,0x7ed3fa2f,
    0x8ed93ee5,0xf93f706e,0xffb27441,0x220ff207,0x0efe45fd,0x37f621ec,
    0xffffff50,0x5177543f,0x3fffffff,0x57f987fc,0x5fdfffff,0xb7f88ff4,
    0x261be25f,0x3ee1fd0f,0x3e1fd3ff,0x7ffc4fb6,0x003fffff,0x417dc000,
    0x3ffffff9,0x417fffc4,0x445fb0ff,0x3a7ffb5f,0x3fffa20f,0xf982620e,
    0x67cc4f9c,0x53fe64f9,0xf887c8c8,0x2f8c987f,0x5dcdb5f5,0xd1b51cbd,
    0xf55f0009,0x7fc3f900,0x272edf30,0xf30dffda,0x45fb7f85,0x49dd92f9,
    0xe82220dc,0x01729b0f,0x22000000,0x0aacfdaa,0x07fa6bfa,0x7e413fea,
    0x8fe86f8b,0x85f9eedf,0x9000fff9,0x7f43fb5f,0x36220fe9,0x70ffd914,
    0x3fe07fbf,0x547eadb0,0x7cc1cffc,0x99999932,0x01f9e619,0xf8f10fe4,
    0x74044005,0x20881f76,0x00000000,0x54000000,0x1fffffff,0xb83fa9be,
    0x7df106ff,0x7f7f907f,0xfb05f9f9,0x3ee009ff,0x3fd12fcb,0x7e5360df,
    0x477c47c8,0x74e8886f,0xfec83ead,0xff51fd41,0x743fffff,0x1fc806dd,
    0x000000fa,0x00000000,0x00000000,0x9bfd9930,0x6c4ffc19,0x7f7fc42f,
    0x01fffb04,0xff53fff3,0xe9efd81f,0x46fc404f,0x7d67cc5f,0xfbf74d83,
    0x5f93fb8f,0xf89fdfd4,0x2e7a24fe,0x44b3bea4,0x09999999,0x22002ee2,
    0x3bba20c1,0x003eeeee,0x00000000,0x00000000,0x220bee00,0x42fffffe,
    0x81ff9bfe,0x3fe05ffa,0xd90bff17,0x4fb8fa21,0x203f63f2,0x540fd8fc,
    0xdb0a2662,0x59517a61,0x65400350,0x000002cc,0x2eeee000,0x0001bbbb,
    0x00000000,0x00000000,0x3e60bee0,0x325fcedd,0x7c1bf26f,0xe97f202f,
    0xfb81003f,0x500d46a4,0x00001513,0x00000000,0x00000000,0x00000000,
    0x00000000,0x20000000,0x010300a9,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__arial_bold_17_latin1_x[224]={ 0,1,0,0,0,0,0,0,0,0,0,0,0,0,
1,-1,0,1,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,1,1,1,0,1,1,0,1,
1,1,1,0,1,0,1,0,0,1,-1,0,0,-1,0,1,-1,0,0,-1,0,0,1,0,0,0,0,0,1,1,
-1,1,1,0,1,0,1,0,1,0,0,1,0,0,0,0,0,0,1,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,
1,0,0,-1,0,0,0,0,-1,-1,0,0,0,0,1,0,-1,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,1,1,1,1,-1,0,-1,-1,-1,1,0,0,0,0,0,0,0,1,1,1,1,-1,1,1,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,1,0,0,0,0,0,0,0,1,1,1,1,0,1,0,
 };
static signed short stb__arial_bold_17_latin1_y[224]={ 13,2,2,1,1,1,1,2,1,1,1,3,10,8,
10,1,2,2,2,2,2,2,2,2,2,2,5,5,3,5,3,1,1,2,2,1,2,2,2,1,2,2,2,2,
2,2,2,1,2,1,2,1,2,2,2,2,2,2,2,2,1,2,1,14,1,4,2,4,2,4,1,4,2,2,
2,2,2,4,4,4,4,4,4,4,2,5,5,5,5,5,5,1,1,1,6,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,13,5,2,1,3,2,
1,1,1,1,1,5,5,8,1,0,1,2,1,1,1,5,2,6,13,1,1,5,1,1,1,5,-1,-1,-1,-1,
-1,-1,2,1,-1,-1,-1,-1,-1,-1,-1,-1,2,-1,-1,-1,-1,-1,-1,4,1,-1,-1,-1,-1,-1,2,1,1,1,
1,2,1,1,4,4,1,1,1,1,1,1,1,1,2,2,1,1,1,2,1,3,4,1,1,1,1,1,2,1,
 };
static unsigned short stb__arial_bold_17_latin1_w[224]={ 0,3,7,9,8,13,11,3,5,5,6,9,4,5,
3,6,8,5,8,8,9,9,8,8,8,8,3,3,9,9,9,9,15,11,10,11,10,9,8,11,9,3,8,10,
8,11,9,12,9,12,10,10,9,9,12,15,11,12,10,4,6,4,9,10,4,8,8,9,9,8,6,9,8,3,
5,8,3,13,8,9,8,9,6,8,5,8,9,12,9,9,8,6,2,6,9,9,9,9,9,9,9,9,9,9,
9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,0,3,9,9,9,9,
2,8,6,13,6,8,9,5,13,10,6,8,5,5,4,9,10,3,5,4,6,8,13,13,13,9,11,11,11,11,
11,11,16,11,9,9,9,9,5,5,6,6,12,9,12,12,12,12,12,9,12,9,9,9,9,12,9,8,8,8,
8,8,8,8,13,9,8,8,8,8,5,5,6,6,9,8,9,9,9,9,9,8,9,8,8,8,8,9,8,9,
 };
static unsigned short stb__arial_bold_17_latin1_h[224]={ 0,11,4,13,14,13,13,4,16,16,7,9,6,3,
3,13,12,11,11,12,11,12,12,11,12,12,8,11,9,6,9,12,16,11,11,13,11,11,11,13,11,11,12,11,
11,11,11,13,11,14,11,13,11,12,11,11,11,11,11,15,13,15,7,3,4,10,12,10,12,10,12,13,11,11,
15,11,11,9,9,10,13,13,9,10,12,9,8,8,8,12,8,16,16,16,4,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,0,12,14,13,9,11,
16,16,3,13,7,8,6,3,13,2,6,11,7,7,4,12,14,3,4,7,7,8,13,13,13,12,14,14,14,14,
14,14,11,16,14,14,14,14,14,14,14,14,11,14,15,15,15,15,15,8,13,15,15,15,15,14,11,13,13,13,
13,12,13,13,10,13,13,13,13,13,12,12,12,12,12,11,13,13,13,12,13,9,10,13,13,13,13,16,15,16,
 };
static unsigned short stb__arial_bold_17_latin1_s[224]={ 253,68,198,41,1,173,187,179,36,30,134,
14,174,221,227,248,60,148,108,148,85,69,79,204,133,161,77,252,188,147,237,
203,57,117,57,108,23,138,154,1,190,200,98,223,245,65,55,10,77,10,87,
162,213,232,42,26,14,1,234,109,219,215,111,238,206,151,223,141,242,132,1,
79,99,95,114,76,72,198,212,98,37,226,221,160,8,228,44,54,34,213,247,
73,80,83,183,169,169,169,169,169,169,169,169,169,169,169,169,169,169,169,169,
169,169,169,169,169,169,169,169,169,169,169,169,169,169,169,169,169,253,157,59,
51,24,47,54,11,231,46,104,90,164,221,13,179,157,129,141,121,193,88,220,
217,211,99,127,81,148,134,120,107,88,160,131,119,107,231,163,42,243,33,23,
43,53,82,100,143,34,150,120,133,146,159,172,67,190,185,195,205,90,69,180,
221,230,239,1,194,23,32,118,245,212,203,181,172,142,127,170,177,184,14,199,
209,27,117,98,179,108,89,236,61,70,20,100,1, };
static unsigned short stb__arial_bold_17_latin1_t[224]={ 1,61,85,33,18,33,33,85,1,1,85,
85,85,85,85,18,47,61,61,47,61,47,47,61,47,47,85,47,73,85,73,
47,1,61,61,33,61,61,61,47,61,61,47,61,61,73,73,33,73,18,73,
33,61,47,73,73,73,74,61,1,33,1,85,85,85,73,47,73,47,73,61,
33,61,61,1,61,61,73,73,73,47,33,73,73,61,73,85,85,85,47,73,
1,1,1,85,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,
73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,73,1,47,18,
33,85,61,1,1,85,47,85,85,85,85,47,90,85,61,85,85,85,47,1,
85,85,85,85,85,33,33,33,47,18,18,18,18,18,1,61,1,1,18,18,
18,18,18,18,18,61,18,1,1,1,1,1,85,18,1,1,1,1,18,61,
18,18,18,33,47,33,33,73,33,18,18,18,18,47,47,47,47,47,61,33,
33,47,47,33,73,73,33,33,33,33,1,1,1, };
static unsigned short stb__arial_bold_17_latin1_a[224]={ 68,81,115,135,135,216,176,58,
81,81,95,142,68,81,68,68,135,135,135,135,135,135,135,135,
135,135,81,81,142,142,142,149,237,176,176,176,176,162,149,189,
176,68,135,176,149,203,176,189,162,189,176,162,149,176,162,230,
162,162,149,81,68,81,142,135,81,135,149,135,149,135,81,149,
149,68,68,135,68,216,149,149,149,149,95,135,81,149,135,189,
135,135,122,95,68,95,142,183,183,183,183,183,183,183,183,183,
183,183,183,183,183,183,183,183,183,183,183,183,183,183,183,183,
183,183,183,183,183,183,183,183,68,81,135,135,135,135,68,135,
81,179,90,135,142,81,179,134,97,134,81,81,81,140,135,68,
81,81,89,135,203,203,203,149,176,176,176,176,176,176,243,176,
162,162,162,162,68,68,68,68,176,176,189,189,189,189,189,142,
189,176,176,176,176,162,162,149,135,135,135,135,135,135,216,135,
135,135,135,135,68,68,68,68,149,149,149,149,149,149,149,134,
149,149,149,149,149,135,149,135, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_arial_bold_17_latin1_BITMAP_HEIGHT or STB_FONT_arial_bold_17_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_arial_bold_17_latin1(stb_fontchar font[STB_FONT_arial_bold_17_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_arial_bold_17_latin1_BITMAP_HEIGHT][STB_FONT_arial_bold_17_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__arial_bold_17_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_arial_bold_17_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_arial_bold_17_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_arial_bold_17_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_arial_bold_17_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_arial_bold_17_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__arial_bold_17_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__arial_bold_17_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__arial_bold_17_latin1_s[i] + stb__arial_bold_17_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__arial_bold_17_latin1_t[i] + stb__arial_bold_17_latin1_h[i]) * recip_height;
            font[i].x0 = stb__arial_bold_17_latin1_x[i];
            font[i].y0 = stb__arial_bold_17_latin1_y[i];
            font[i].x1 = stb__arial_bold_17_latin1_x[i] + stb__arial_bold_17_latin1_w[i];
            font[i].y1 = stb__arial_bold_17_latin1_y[i] + stb__arial_bold_17_latin1_h[i];
            font[i].advance_int = (stb__arial_bold_17_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__arial_bold_17_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__arial_bold_17_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__arial_bold_17_latin1_s[i] + stb__arial_bold_17_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__arial_bold_17_latin1_t[i] + stb__arial_bold_17_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__arial_bold_17_latin1_x[i] - 0.5f;
            font[i].y0f = stb__arial_bold_17_latin1_y[i] - 0.5f;
            font[i].x1f = stb__arial_bold_17_latin1_x[i] + stb__arial_bold_17_latin1_w[i] + 0.5f;
            font[i].y1f = stb__arial_bold_17_latin1_y[i] + stb__arial_bold_17_latin1_h[i] + 0.5f;
            font[i].advance = stb__arial_bold_17_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_arial_bold_17_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_arial_bold_17_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_arial_bold_17_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_arial_bold_17_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_arial_bold_17_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_arial_bold_17_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_arial_bold_17_latin1_LINE_SPACING
#endif

