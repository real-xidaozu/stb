// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_25_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_25_latin1'.
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

#define STB_FONT_courier_25_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_25_latin1_BITMAP_HEIGHT        140
#define STB_FONT_courier_25_latin1_BITMAP_HEIGHT_POW2   256

#define STB_FONT_courier_25_latin1_FIRST_CHAR            32
#define STB_FONT_courier_25_latin1_NUM_CHARS            224

#define STB_FONT_courier_25_latin1_LINE_SPACING          12

static unsigned int stb__courier_25_latin1_pixels[]={
    0x08080100,0x0000cc88,0x000801aa,0x00010008,0x00040000,0x00000022,
    0x00020000,0x20004000,0x000003d8,0x1800401c,0x405c8006,0x510be25e,
    0x3540003d,0x64003d80,0x8007b004,0x2e0000ea,0x0ef2a005,0x80013600,
    0x03d801e8,0xd003d100,0x32ba6003,0xd83ea00d,0x1e806805,0x6c01a680,
    0x05419804,0x220001d8,0x001ec402,0x09b00136,0x8000ea80,0x0924004c,
    0x075df440,0x400ba600,0x74c004d8,0x805d1001,0x881aa1e8,0xf9101543,
    0x5d10157d,0x3201a680,0x3b000003,0x2e800000,0x8001ec00,0x034c004c,
    0x2e000f20,0x3d10049a,0xe880074c,0x003c8001,0xd88001d1,0x00000002,
    0x1fb9974c,0xd3405b10,0x55510000,0x1d815530,0x53015973,0x00055555,
    0x00000000,0x80000000,0x0000002a,0x00000000,0xdb500000,0x9db50039,
    0x0e40ec03,0x11a2d000,0x15530555,0xb7033b62,0xbed9d85d,0x665c1fea,
    0x33326ccc,0x0333321c,0x20073b6a,0x3201ceda,0x33321ccc,0x6666540c,
    0x99995001,0x3332a003,0xcccc801c,0xa84ccccc,0x4c01cccc,0x2ccccccc,
    0x33333332,0x31cd84cc,0x98e6c0b9,0x9300d05c,0x85999999,0xed88b158,
    0x1176dc0c,0x7ec1640d,0x6800e983,0x99826b66,0x931cd81f,0xc98e6c0b,
    0x4135b305,0x99881f99,0x331005bd,0x26200b7b,0xa9805bd9,0x6999999d,
    0x05bd9988,0x4cf4ccc4,0x2676a609,0x1e469999,0x703c84b8,0x44019709,
    0x0999e999,0xdfddfdd5,0x2c81a21d,0xb06882c8,0x3401e40d,0x3c868036,
    0x20790970,0x3401b04b,0x4000db40,0xb68001b6,0x34093001,0xd0006da0,
    0x4d024c01,0xd30f4069,0xdeb81e80,0x3007401b,0x416412a9,0x590d1068,
    0x06880f60,0x8d006c68,0xd30f4069,0x00d81e80,0x0ea9501a,0x00754a80,
    0x9803aa54,0x54a81604,0x30074007,0x80392c09,0x7900723c,0xd02ed440,
    0x03aa5401,0x640590d1,0x02d81a22,0x1b1a01a2,0x90072340,0x0f200e47,
    0x6c068036,0x8ec00d11,0x44760068,0x01449806,0x400d11d8,0x0512600e,
    0x74b3003a,0xb802cc00,0x73101d03,0x32039739,0x4d101a22,0xb81b602c,
    0x006c6805,0x2cc00e8d,0xd859801d,0x46881a00,0x6468801c,0x0e468801,
    0x80689260,0xe800e468,0x06892600,0x0069a00d,0x0598044d,0xddddb01d,
    0x4d107ddd,0x68ac802c,0x74417ec0,0x006c6801,0x34d0068d,0x200d8680,
    0x0930ea06,0x80498750,0x26024c3a,0xa806ffff,0x0e8024c3,0x1bfffe60,
    0x0d344034,0xc825cd10,0x95c01d02,0x3456401c,0x402ce880,0xfd9aeead,
    0x00d8d002,0x4d100d1a,0x0d868806,0x99ad81a0,0x56c00e99,0x400e9999,
    0x0e9999ad,0x80689260,0x0e9999ad,0x92600e80,0xb801b068,0x49700364,
    0x5da9adeb,0x91c803a0,0x02ce8803,0x47601b20,0x2000bdca,0xd8d006c6,
    0x01b25c00,0x200d84b8,0xddddf106,0x77c405dd,0x202eeeee,0xeeeeeef8,
    0x80512602,0xeeeeeef8,0x2600e802,0x403b8144,0x7b00ee3d,0x0e7dc44c,
    0xb1d803a0,0x800d9001,0x001d803c,0x88164680,0x8f601dc6,0x641ec03b,
    0x0ae0d102,0x205702c4,0x440ae058,0x3a812605,0x8058815c,0xa812600e,
    0x074403a3,0x0074403a,0xd803a00d,0x079001d0,0x1d803440,0x26254000,
    0x01d09506,0x201d03a2,0x506980e8,0x01b01a09,0x1a01b01a,0x812601b0,
    0x0360343a,0x024c01d0,0x220f4c75,0x441e980e,0xe803400e,0x40343a00,
    0x01dc0068,0x260001d8,0x260bd82d,0x441e980e,0x441e980e,0x982f600e,
    0x5404980e,0x1d404983,0x40ea024c,0x498ea049,0x03a01d40,0x10ea0498,
    0x403bb9bd,0x01ddcde8,0x401d0058,0x00ee0061,0x0bdfddb1,0x02f77f4c,
    0x017f776c,0x4019b9fb,0x01ddcde8,0x077737a2,0x03373f60,0xf313fff2,
    0x7ffe4dff,0x937ffcc4,0xff989fff,0x7ffff46f,0xf93fffff,0xfff989ff,
    0x3ffffea6,0x3fffa4ff,0x03ffffff,0x4c400131,0xffa80000,0x004fffff,
    0x2f7f76c4,0x02666660,0x00133330,0x22001331,0x004c4001,0x88001310,
    0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,0x00999998,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00005d10,0x2282e880,0x80001ccc,0x9100280a,
    0x119bd730,0xb8174403,0x300092cc,0x200c0003,0x0a2ec882,0x08000000,
    0x30011000,0x70000059,0xa8000019,0xfa804dae,0xaea81760,0xaaf8744d,
    0x0bb07d41,0x401a0754,0x4c4edc2c,0x5d503dec,0x2b75509b,0x0332002c,
    0x5c5d83ea,0x1570d304,0x3ea09dd9,0x3e981360,0x98005d00,0x0374801e,
    0xf9807d30,0x00ec404f,0x809906d4,0xda815438,0x0d0e9320,0x300aa1c4,
    0x34400e89,0x41fc412e,0x4c1320da,0x1a200d15,0x22154388,0x8803d80f,
    0x0550e201,0x201767ae,0x3d3003e8,0x00a67300,0xb80bb3d7,0x00ba201c,
    0x00000000,0x000343a0,0x003a2c40,0x1dc06879,0x592cc000,0x0000b300,
    0x201f1136,0x0001ceda,0x004b8970,0x00e8805b,0xb80332e0,0x100025c4,
    0x9999003d,0x90666643,0x66643999,0x9999930c,0x0343a599,0x00399995,
    0x2200e8b1,0x32001cc6,0xcccccccc,0x01665984,0x33332166,0x4c4ccccc,
    0x1cd82647,0x99930b93,0x00059999,0x00000000,0x20000000,0x135b3000,
    0x3660fccc,0x87e6609a,0x999e9998,0x9881a1d0,0x58805bd9,0xc8770074,
    0x4ed4c002,0x98699999,0x16600ec5,0x266676a6,0x3e2f8699,0x89703c82,
    0x999e9998,0x01bcb980,0x200b2e62,0x2201bcb9,0x4c402cb9,0x428802cb,
    0x664c2ccb,0x41a00d84,0x1d01a00d,0xb401a1d0,0x162c400d,0x001c81d0,
    0x261a0498,0x16602cc5,0x9b0d024c,0x80d307e6,0x4403a01e,0x84fcacfd,
    0x1ebabce9,0xfcacfd88,0xbabce984,0xabce981e,0x112a01eb,0x1ea88199,
    0x6c1a00d8,0x01d01a00,0x52a01a1d,0x000f803a,0x00039095,0x2cc2c093,
    0x20770074,0x57216049,0x6401c87a,0x26c03a03,0x0d1003c8,0x400f209b,
    0x21a20068,0x0e882ec8,0x401b01d8,0x03401b06,0x0343a03a,0xb80688ec,
    0xb80e802f,0x14498003,0x412a1660,0x0512607e,0x1d0f76b8,0x03a05980,
    0x00f881a6,0x1034c1b0,0x0036001f,0x00ba60d8,0x3604b8b5,0x006c1a00,
    0x0e80e80d,0x0e46880d,0x12a00ba0,0x24c002cc,0xd05980d1,0x2605b101,
    0x2b901a24,0x0d00687a,0x556dc074,0x42daaaaa,0x0eccecc8,0x2aaaab6e,
    0x66442daa,0xc880ecce,0x320eccec,0x1a25b001,0xd83401b0,0x01d01a00,
    0x87501a1d,0x09162049,0x202c807a,0x7fffcc49,0x4a82cc06,0x3fe60b30,
    0x9a6c06ff,0x3440340f,0x99b701d0,0x43999999,0xea99acfa,0x333336e0,
    0x3ea1cccc,0x40ea99ac,0xea99acfa,0x8e8801a0,0xd006c01d,0x40680360,
    0x80d0e80e,0x0e9999ad,0x4c0e8b10,0x4c1f4405,0x0d124c1e,0x203a0598,
    0x34493059,0x20fc4fa0,0xd025c00d,0xe800b501,0x02d41b00,0x206c03a0,
    0x1641b00e,0x804ea848,0x06c1a00d,0xe80e80d0,0x777c40d0,0xb102eeee,
    0x400ec0e8,0x0decdec8,0x26014498,0x1660ee05,0xf880a24c,0x80770f60,
    0x2203a03d,0x2095001e,0x007a20e8,0x20e88254,0x441d104a,0x0e83541e,
    0x0d102c80,0x203440b2,0x40d0e80e,0x220b102b,0x00d30745,0x24c013b0,
    0x20598750,0x93059868,0x98b91d40,0x1d100e87,0x2e980740,0x261a2c88,
    0x4174c0fe,0x3a61a2c8,0x7f4c340f,0x6f6f6cc0,0xd3001d01,0x834c12a0,
    0x7407404a,0x360340d0,0x90744980,0x80970005,0xb30ea049,0x82c42c80,
    0x1f8ea049,0x20f4c2e8,0x007400e8,0x5dd9bfd3,0x8decdea8,0x6ff4c5fd,
    0x6f542eec,0x25fd8dec,0xd8decdea,0xe801885f,0x4c17b000,0x982f600e,
    0x7407400e,0x049833f0,0xd0b621d4,0x2e001a21,0x812600c8,0x80b5313a,
    0x4982d868,0xa82d4ea0,0xddcde886,0x8800e801,0x00998019,0x26006620,
    0x01330009,0x000e8000,0x003373f6,0x203373f6,0xfffffffa,0xc9f77494,
    0x7fcc4fff,0xa920b66f,0x02c98001,0x3ffffffa,0x9ddb3fff,0x2c883700,
    0x3ffffffa,0x40173fff,0xa8026204,0x4fffffff,0x00000000,0x00000000,
    0x10003a00,0x00310003,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x7e400000,0x0006ffff,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x91000400,0x1100145b,0xa8800200,0x401ccccb,0x98000008,
    0x0003cccc,0x805bfb30,0x45d91000,0x80110002,0x0003deca,0x20000040,
    0x00040809,0x6c402200,0x5d101511,0x3b22ae00,0x03d3004e,0xc8805d10,
    0x01d99cbe,0x74c00f4c,0x999bc803,0x01f4c049,0x40b663d3,0x8ab802e8,
    0x98004eec,0x4c77201e,0x7fb100db,0x4002e81c,0x1d13deca,0x417a0fb8,
    0x3d1003e9,0x37e4fe60,0x88003e88,0x003d3001,0x4bb01ec4,0x1e98090c,
    0x05d9eb80,0xd70240e6,0x10760bb3,0x001ec40d,0x3a600062,0x35412e01,
    0x3feb89b8,0x32009b10,0x1eeea89d,0x540cc288,0x2600dc9e,0x4cbe201e,
    0x4c16c02d,0xcccc82cc,0x0000e881,0x643f105b,0x00744090,0x4c12e25c,
    0x712a0102,0x01d0598b,0x332a02d8,0x744001cc,0x5d01a200,0x0f200200,
    0x01b60970,0x05a8b500,0x05f1003a,0x3f662000,0x004f4cc0,0x1f100000,
    0x00004864,0x01ec9800,0x883b8000,0x4c40000e,0x00005bd9,0x835c02b8,
    0x0001bcb8,0x5bb50688,0x006f2e20,0x05f00000,0x40379710,0x220d05bc,
    0x2a602cb9,0x3e0d5441,0x71024323,0xcb880379,0x0f23981b,0xaa883530,
    0xeeda8721,0x01bcb980,0x530036d0,0x361aa883,0x7dc3c401,0xa984fcad,
    0x4c15c02a,0xdfb86a8e,0xaa984fca,0x01554c02,0xdfb8287e,0xb3904fca,
    0x79d30d03,0xbb703d75,0x7cc4dc98,0x7dc12192,0xf704fcad,0x3989f95b,
    0x5db816cc,0x23926e4c,0x6c41b0e8,0x404fcacf,0xdb80754a,0x1d26e4c5,
    0x06d41d00,0xf9971322,0x3a20ec01,0x40da8f10,0x7e65c4c8,0x03f32e00,
    0xda83a1f8,0x4e426440,0x22006868,0x1260b306,0x4243b6e2,0x226440da,
    0x226440da,0x980ca83b,0xb8e49305,0x904d8362,0x0688ec07,0x6c930598,
    0x07e27800,0x401b01f8,0x43a16c0e,0x407e01f8,0x401b000d,0x0fc43a0e,
    0x771c83f0,0x406c0068,0xc8093059,0x201f8890,0x7c03f11f,0x36206d41,
    0x24982cc0,0x986c751c,0x2203e206,0x16600e46,0xa803924c,0x07901a66,
    0x321d8036,0x901a6684,0x6c003607,0x31f83a00,0x0e43c80d,0xcc88341d,
    0x5980ecce,0x90c80930,0x99e40698,0x6441e406,0x41661c43,0x9be87249,
    0x5555b71d,0x7505b555,0x82cc0498,0x99012a49,0x412a0254,0x2d4f200d,
    0x95012a68,0x06c00360,0x0951f810,0x950e44a8,0x4d67d434,0x05980ea9,
    0x890c8093,0x4aa5404a,0x1b302540,0x30598571,0x372a1e49,0x99999b72,
    0x35b03999,0x4c01d333,0x01e89305,0x6c06983a,0x75401b03,0x264a80e8,
    0x0d81ec06,0x22001b00,0x3d80d32f,0x434760e4,0xb301b00e,0x21901260,
    0x4f6034c4,0x401ec069,0x305981dd,0x2d402d49,0x7777c400,0x16602eee,
    0x107a224c,0x2205d05d,0xe801b00f,0x740e881e,0x3601f102,0x2001b000,
    0x440ba2f8,0x5a60e40f,0x0e882546,0x80970588,0x205d090c,0x440ba0f8,
    0x81c4020f,0x3c497058,0x2000f440,0x440b102b,0xdb109705,0x3a603db9,
    0x1b01ed42,0x220bfd80,0x542e982e,0x4003603d,0x227d500d,0xb50ba63f,
    0xd7903907,0x01fd30d0,0x809f9036,0x85d3090c,0x2174c3da,0x4c05c3da,
    0x9f903603,0x261444c8,0x342c882e,0x40d80360,0x19d104fc,0xfd9fd300,
    0x2e00d805,0x1edcfd8c,0x3fb3fa60,0xd8006c02,0x3e2df900,0x7f67f4c2,
    0xdd103902,0x1bd9bd50,0xb9d30bfb,0x330bf37f,0x9813b119,0x302fecfe,
    0x705fd9fd,0x01b73335,0x4dfee74c,0x7ee7645f,0xecdfe983,0x2a024c2e,
    0x3f73a603,0x7fcc5f9b,0x206cbcee,0xfffb01a8,0x2c1fffff,0xa8800262,
    0xfffffb01,0x3ff61fff,0x20ffffff,0x1a88020a,0x50bfffa0,0x0004cc0f,
    0x2aa20066,0x100aa89a,0x06a20035,0x01aaaa98,0x54400660,0x90198801,
    0xff989fff,0x400cc06f,0x177311aa,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x83530000,0xec881aa8,0x17b7101c,0x333332e0,0x0ceca803,
    0x99999997,0x8800d405,0xbda804c2,0x039b9100,0x0004c980,0x40801010,
    0x982aa880,0x00e540aa,0x50001991,0x46aa1597,0x59730aa8,0x40040401,
    0x6dc0a801,0x2226e4c5,0x6c2ea8ae,0xd84da89d,0x202aaaab,0x36189be9,
    0x4caaaaab,0x01eccea8,0x0676f5c4,0x0baa2fa6,0x00b6a73a,0xfb106a98,
    0x2a4f81c7,0x6c1f501f,0x20676c45,0x5c762edb,0x003d5102,0x7ed5fec4,
    0x3d933ce9,0x03fd57db,0x402f997a,0x4c3fec06,0x42c89305,0x0740a268,
    0x1e980036,0x415c02e0,0xc881660e,0x1d80eace,0x06c25468,0x44dc1a00,
    0x41503feb,0x330a2028,0x31640d10,0x00ec0485,0x0fd307b0,0x03a60ff6,
    0x68015066,0x2607ff40,0x83c49305,0x6c3b802c,0x003d1000,0x21660740,
    0x5983300d,0x362c82c4,0x34004981,0x00000100,0x34416400,0x1d80906a,
    0x3dc0f300,0x00f206d8,0x64c06800,0x49305981,0xb009505a,0x77000d83,
    0x4c2c4000,0x54c40584,0xc8344771,0x730581a2,0x4c41a159,0x5cc402cb,
    0xbcb9802c,0x0b21a201,0x36015436,0x77059731,0x03d83c40,0x441a99a2,
    0xeed981aa,0x166000bc,0x2609724c,0x3616e205,0x1901ceca,0x4c1dc000,
    0x5c03d714,0x46aefcef,0x07a3cc3d,0x2b3f61e6,0xce9868ee,0xe981ebab,
    0x881ebabc,0x04fcacfd,0x710688b2,0x36054459,0x1eeabfc9,0xb07880ee,
    0xbb734405,0x65c4dc98,0x98007e61,0x815c9305,0x05ff9858,0x0db317bb,
    0x0077baad,0xc8a4c06c,0x41db80de,0x3b620eea,0x425c0edc,0x260f20ed,
    0x01a2007e,0x904d8688,0x02c9a207,0xd82cca88,0xd50f983e,0x06d83dc0,
    0x260b316e,0x4c1b8344,0x97059809,0x1058815c,0x0e4007b3,0x16cc76ba,
    0x424c1a20,0x403e20ea,0x2fb621f9,0x99cd81ed,0x40f11cae,0x006c007c,
    0x1034c1b0,0x1a2b201f,0x401cca88,0x2e93607d,0x5fb07e88,0x05983d10,
    0xa8025493,0x40f981ff,0x4c0ae4fc,0x3003c805,0x2c40ee8b,0x824c0ea0,
    0x7d012e4a,0x103a2174,0x543639b7,0x6441e604,0x880eccec,0x20eccecc,
    0xaaaaaadb,0x59d102da,0x00887320,0x22698136,0x6afc9aee,0xb35dd5b0,
    0x260b305f,0x7e400ea4,0xfb9dd304,0x40eabf37,0x0068804a,0x0360591e,
    0x409301d8,0x25700b26,0x20077059,0x50f00b26,0x1d53359f,0xa99acfa8,
    0x33336e0e,0x201ccccc,0x2ef2006c,0x86805b04,0x20d0bdcb,0x017b951d,
    0x1a24c166,0x59807fc0,0xc82cc033,0x2600d003,0x00d81dc6,0x9a04981a,
    0x3a8ec04a,0x49500930,0x3a1e605a,0x00e81b00,0x0002d41b,0x30d400f2,
    0x2d409b05,0x00760d00,0x91260b30,0xf98e4419,0xe8016602,0x3b800e80,
    0x34c4c802,0x40950344,0x12c47149,0x689a201d,0x0e880390,0x23ec03e2,
    0x541d104a,0x7441d104,0x00d10001,0x07ec2424,0x41a003d8,0x82c4001d,
    0xddeea84b,0x0b301722,0xd92e2dc0,0x3723541c,0x1dc07540,0x00e40791,
    0xa8773493,0x3217440e,0x3aa03543,0x2e21da81,0xfe98686d,0x07f4c340,
    0x0b220ba6,0x455001dc,0x21dcd829,0x834005c8,0x40d8001d,0x203a04fc,
    0x00244008,0x2e17b3ae,0xa81efcef,0x200efcde,0x3404fdec,0x3ae5ffd0,
    0xcdfa80cd,0xdeb881ed,0x76e6c0ce,0x37baa00c,0x7549fd4f,0x5fd8decd,
    0x237b37aa,0x6ff4c5fd,0x3b622eec,0x32005efe,0x4ffd44cc,0x004fdefa,
    0x269dfdd5,0x2005eefe,0xf9bfdce9,0x00000d05,0x88013100,0x00988009,
    0x00000260,0x04c40044,0x004c0180,0x99800620,0x00133000,0x33300cc4,
    0x08800133,0x00026600,0x4cc13333,0x19800099,0x00001600,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x54000000,0x205511bc,0x00bdddb8,0x00000b51,0x000736e0,0x05eeedc4,
    0x08080100,0x09665440,0x260016a2,0xaaaaaaab,0x803983aa,0x97002dc9,
    0x16f6dc41,0x119bd730,0xb9800503,0x20188add,0x3ccccccb,0x20a80798,
    0xadebbee8,0x20ed40ce,0x059a83d9,0x38ff6200,0x5000b0cc,0x003d983b,
    0xd83ea01d,0x2eafaa06,0x0b351eed,0x4a001300,0x5c07dec8,0x202eb8ad,
    0x42fe1ed9,0x89db86c9,0x2c43dec9,0x5115d700,0x4cc407db,0x79809ae9,
    0x05d3fec0,0x809509f7,0x4000b04a,0x03feb89b,0x0950006c,0x00e804a8,
    0xd3019851,0x0585f301,0x25000980,0x3540d0a9,0x3b3d0344,0x12e1c834,
    0x01621fc4,0x007b0354,0x8051006c,0x206a8ffe,0x7732c44f,0x16072377,
    0x20080140,0xb11402fc,0xc82eab26,0x00007401,0xb07203d8,0x004c5100,
    0x05c0d028,0x3b4a82c8,0x01a59804,0x2baea277,0x00e82aaa,0x00d80062,
    0x3b8e4400,0x24391320,0x4058586e,0x4c6a23e9,0x0ec402cb,0x1c391754,
    0x00e80b0e,0x1f00aaa6,0x75c05800,0x81400261,0xd0750006,0x52600761,
    0x33220039,0x20ccccce,0x6c000049,0x002aa980,0x589701e4,0x0b0b0066,
    0x37660f64,0x405daadc,0xb037622a,0x33162438,0x13333d33,0x8807e65c,
    0xd1058006,0x50009819,0x074001a0,0x4c01d8f2,0x1000591e,0x0005700b,
    0xccb80d80,0x81aa000f,0x90072c4e,0x9867a661,0x213e603e,0x96a2b21d,
    0xab8b02ea,0xd98641cb,0xeeeefeee,0x07c01b02,0x219e9980,0x009809eb,
    0x2001a050,0x0763443d,0x0390f6cc,0x3900b100,0x00d80000,0x07a00074,
    0x0d4b13ea,0xaaaaa960,0x85d50dc8,0xba895059,0x3aa1bb11,0x03227161,
    0xb000e80b,0x46026c01,0xce9aaaaa,0x0263cbc8,0x40068140,0x0ec2d83c,
    0x001c82d8,0x81c80588,0x0a1ccccc,0x007400d8,0x56f4c393,0x8644adda,
    0x40b04448,0x0af622ea,0xb81260b3,0xc86f622e,0x405890e0,0x401b000e,
    0x174c0be8,0x64171ec8,0x40a00131,0x260f6006,0x01901d85,0x0b100077,
    0x95550770,0x0d81621b,0xffd00740,0x952cdb81,0x2e7663a8,0x37620ea5,
    0x2615c6c0,0x9d109305,0x9d4371b0,0x1d4e61c8,0x06c003a0,0x3737f620,
    0x403e981c,0x0a00130d,0xb03d8034,0x5bd9999b,0x4002cc00,0x40498058,
    0x0e81623a,0xffb00740,0x07212a00,0x2c82c413,0x598573a8,0x703b0930,
    0x313906e7,0xe8058883,0x2001b000,0x036200d8,0x8004c390,0x07b00d02,
    0x6cccccc4,0x0164000a,0xd0058893,0x0b11d403,0x003a0122,0x20b20013,
    0x01b503d8,0x45dccf80,0x40093059,0x6c44eccf,0x9001b503,0x70006c00,
    0x0ec40009,0x68140026,0x4000ba20,0x105fb81d,0xb03d307d,0x17445301,
    0x20fa23b8,0x000e801d,0x5c01d500,0x003dcbcd,0x82cc2b80,0x03700049,
    0x0f72f36e,0x006c0000,0x00064544,0x004c06cc,0x3a20d028,0x1d805302,
    0x9100ffd8,0x201bd9bd,0x0cedcde9,0x7666f6c4,0xcddeb80c,0x9801d002,
    0x3bbb6209,0x0131000d,0xc976e000,0x3fee0fff,0x02f5c005,0xff300262,
    0x7fffffff,0x3ffffff6,0x039500ff,0x37333e00,0x55555732,0x3ea75555,
    0x14ffffff,0xffffffff,0x0bfff609,0x26600151,0x00151000,0x04c006a6,
    0x3fffff60,0x3fea0fff,0x0000cc42,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00037e40,0x44000b2e,
    0xcc851ceb,0x333321cc,0x02aae200,0x65c09997,0xceb88003,0x201cc981,
    0x0b32e3cc,0x66449993,0x9301bccc,0xccca8799,0x98599972,0x33224ccc,
    0xcccccccc,0x33333320,0x8f333200,0xb880ccca,0x9999009b,0x32e01599,
    0x22664c2c,0xceda81ff,0x00132a01,0x3b262b72,0x304d6cc5,0x37a203f3,
    0x55544cbb,0x00b7500e,0x83d717d0,0xbb505db8,0x22066c41,0x4cfcc1ea,
    0x6c41eca9,0x74cc409a,0x88139710,0x5e4c1da9,0x1d999999,0x006676a6,
    0x5c413b53,0xdbbe981e,0x3335b300,0x17d105d7,0x3e61ea88,0xb931cd85,
    0x220024c0,0x01b0b906,0x80057034,0x0016200e,0xba808893,0x8859e80d,
    0x0d01d80e,0x805703a2,0x32034458,0x0e407702,0x09300126,0x007201b5,
    0x81e881d8,0x5c1e80e8,0x4b81e41f,0x3a800930,0x401b0910,0x3a001a06,
    0x70016200,0x12aea005,0x16a0b1b3,0x95034097,0x98ba23a8,0x81a01c84,
    0xf307203b,0x4c05bfff,0x07a02dc4,0x0d101d80,0x9b079166,0x40f40698,
    0x40597349,0x006c0048,0xaafaa88d,0x007401aa,0x055544b1,0xd3a801cc,
    0xb02c4ec1,0x80d01a25,0x49b724c6,0x9504983a,0x80311dc0,0x9835c449,
    0x12a01324,0x07201d80,0x0105aa5c,0x983c8039,0x04daadcc,0x06c00732,
    0xcfcc98d0,0x07403ccc,0x67744b10,0x75006882,0x058b44ee,0xd00763a2,
    0xd9621c80,0x8340ae69,0x4a8ee00d,0x83b824c0,0x74009b49,0x5c03b000,
    0x003af603,0x42cc00e8,0x201d83f9,0xb01bdeb8,0x00d03401,0x72c401d0,
    0xdfdd701d,0x2d1d407d,0x2660b12b,0x1a019dec,0x2d344390,0x0ae0391d,
    0xfffb80b1,0xd024c04f,0x07f9bb30,0x0ea5ce98,0x8dfffffd,0x80be203a,
    0x3401a3ba,0x004a82cc,0x01b05d51,0xd000d034,0x05cac401,0x47500390,
    0x541626ac,0x00aabeaa,0x9b41c80d,0x44036754,0x8ee015c6,0x8824c04a,
    0x7b12f986,0x5d2c8740,0x03a80760,0x6fc81b36,0x261a201a,0x88009504,
    0x81a00d86,0x200e8006,0x32005de8,0x3e23a801,0x03a01623,0x2d0d01a0,
    0x803ab12c,0x8ee01a0d,0x4424c018,0x1d84982d,0x167a2588,0x407201d8,
    0x3ee0974b,0x09700365,0x0e12a093,0x102c81b0,0x7400340d,0x0b6be200,
    0x1d400740,0x9910b102,0x203999f9,0x2361a206,0x501a3a0e,0x0ee01269,
    0xb755b300,0x2212605d,0x02fa8d06,0xd3068076,0x24fa83c8,0x4c1ec03b,
    0x03f09504,0x541a61a2,0x3a001a04,0x02d96200,0x2a188344,0x7402c403,
    0x07a06800,0x0d591ab2,0x2e0072d0,0x556cc003,0xd824c01a,0x07ea2c81,
    0x107901d8,0xf983d01d,0x0e880743,0xf0950498,0xb02d883d,0xd0074c17,
    0x4401d000,0x05b016c5,0x4403a8b2,0x6800e805,0x7b702da8,0xac805d98,
    0x80077006,0x824c0049,0xdddd8859,0x983b06f9,0x2205b04c,0xd30be20e,
    0x9300e883,0x3a7612a0,0x6c03dece,0x3400cdcf,0xb1007400,0xffe82e88,
    0x2e4fffff,0x7fcc4fff,0xffff986f,0xffff882f,0x3ea01cef,0xf9804f81,
    0x7fffc403,0x7fff406f,0x3ffa01ff,0x883fe85f,0xffffe801,0xbffd02df,
    0x361fffb8,0xddcde880,0x41fffb01,0x3100fffd,0x200c4001,0xfffffffb,
    0x7ffffec2,0x8bfb0fff,0x0002fffa,0x00000000,0x00000000,0x00000000,
    0x00000000,0x40000000,0x00000098,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x6666664c,0x33262ccc,0x912ccccc,0x45999999,0x664c2ccb,0x66666644,
    0x33224ccc,0x98b3321c,0xcccc82cc,0x99999931,0x66645999,0x9900bccc,
    0x2a059999,0x202ccccc,0x0acccccc,0x1cccca80,0x20004800,0x000592c8,
    0x32e20100,0x32e6201b,0x2cca8802,0x32ef2601,0x2624b999,0x30999e99,
    0x7933333b,0x2a206644,0x4ced4c1e,0x6d469999,0x8836e609,0x74cc0fd9,
    0xd3337709,0x54c95333,0x0eda999d,0x5ccced4c,0x4f4cc44e,0x276a6009,
    0x4404eb99,0x8005bd99,0x3eb8000e,0x10007b62,0x21a61597,0x84fcadfb,
    0x1ebabce9,0xdb757d50,0x0ea3603d,0x4c074093,0x0e886884,0x409301d8,
    0x049824c6,0x771a0b79,0x12624c68,0xc824c1d4,0x24c00d01,0x36d002c8,
    0x00074000,0x3a6019d5,0xadfb800d,0x6d40edeb,0x88026440,0xf980e986,
    0x930ead02,0x424c0740,0x4b8b501e,0x4c581260,0x27209304,0x21dc681d,
    0x812624c6,0x0b104986,0x1049801a,0x0ea9500d,0xb3001d00,0x33aa001b,
    0xe981b700,0x3f00fc46,0x07b03600,0x3aa4c0e4,0x101d0041,0x96c03c83,
    0x0a24c068,0x20930498,0x5468689c,0x93122342,0x81261620,0x24c00d06,
    0x11d80588,0x200e800d,0x70001ec8,0x4c0f887d,0x01a62d8e,0xcecc8879,
    0x0007c0ec,0x01b3a95c,0x0b3001d0,0x803b1d10,0x4981a249,0x5c720930,
    0x40340343,0x40f54449,0x1a097049,0x2e884980,0x40723440,0xeefeeee9,
    0x005f73ee,0x2a3db100,0x25a8f4c5,0xf525404a,0x41d53359,0x21d00068,
    0xe800feea,0x80074400,0xff9804ea,0x3fe606ff,0x904fffff,0xd00d0743,
    0xfffff300,0x9892609f,0x400d00ec,0x1deccce9,0x024c3a80,0x333d3333,
    0x00176443,0x1dc5d910,0xd33443d3,0x403a3d80,0x20007c0d,0x1b3b99e8,
    0x2d801d00,0x4c007400,0x04981a24,0x4a872093,0x2601a01a,0x4c0eb884,
    0x402deeef,0x2aba6006,0x35b002fb,0x2001d333,0x0f64400e,0x2a0fae00,
    0x44b83d16,0x2a1f102e,0x4d81d104,0x3bbaa0c0,0x0074003e,0x0e8070b5,
    0x30144980,0x0e412609,0x03403476,0x9895024c,0x1a068004,0x402e8893,
    0xeeeeeef8,0x2001d002,0x75400dd9,0x3d5d100c,0x42e983f0,0x74c343da,
    0x205f440f,0x750e42e9,0x88074050,0x0740680e,0x475024c0,0x32093049,
    0x6806b4c1,0x23404980,0x20680049,0x0f4424c6,0x01620570,0x3aa00074,
    0x00674c0c,0x13661fd4,0x17f67f4c,0x46f66f54,0x6fec45fd,0x54681cdc,
    0x403a0683,0x0e80d01d,0x8ea04980,0x32093049,0x6806bc81,0x16604980,
    0x40d00093,0x069824c6,0xd001b01a,0xc8f5c000,0x97d1001d,0x1007fd9d,
    0x01330035,0xb1004c40,0x3a0683a8,0x01a04b80,0x4093001d,0x24c1263a,
    0x06e881c8,0x30498068,0x8004983d,0x40931a06,0x5404982c,0x40000803,
    0x1c800108,0x000000cc,0xff900000,0x3fffffa7,0x3fffea7f,0xfffb4fff,
    0xf90fffff,0x3a0dffff,0xffffffff,0x45fff93f,0x3fa0fffe,0xc83d42ff,
    0xe86fffff,0xdfffffff,0x7fffff41,0xfffff501,0x7f4fffff,0x26f885ff,
    0x7cc4fffc,0x000006ff,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x201bcb98,0x9810aca8,0x40d5441a,0x02e61cb8,0x55540aaa,0xaa880a00,
    0x531aaaaa,0x01ca8ee3,0x0dc43551,0xa8802202,0x2a059731,0x5554c2aa,
    0xa9855510,0x40c0400a,0x10459018,0x3322000b,0x05e5c40b,0x00000b51,
    0xcacfd880,0xbabeb84f,0x22edc3ed,0x5ed44dc9,0x2daebaea,0x32033b62,
    0x05f101ed,0x333333a6,0x95bbb53f,0x301d5999,0x32fb27b9,0x0ea83aa5,
    0x55b9bb30,0xcdec88bb,0x4c73f2e0,0x3bae0cfd,0x09b0f602,0x3b3a2095,
    0x0741eced,0x1621506c,0x59a9621b,0x885bdb30,0xd801deed,0x82c47904,
    0x9305983c,0x0747f880,0x402b80b1,0x12e12601,0x9527c1d5,0x021f6540,
    0x8075c1d7,0xa81d84f9,0x0f60b303,0x93a201d3,0x409505d8,0x2616e0db,
    0x5880f60e,0x22161a04,0x4405910d,0xf1034c05,0x02203e21,0x4024c166,
    0x89a25c4e,0x0000362f,0x43a85a83,0xfa81620d,0x643f9002,0x9505981f,
    0x900ec1a0,0x74403aa9,0x37b17a25,0x6c1b7195,0xb3d30681,0x900fe407,
    0x88390b05,0x036f6545,0x2aaaab6e,0x37ea2daa,0x416600ab,0xecdca849,
    0x6c5baaab,0x00349b50,0x1d41a600,0x2a058836,0xb0fec003,0x9305983f,
    0x00d10ae0,0x3a201bb9,0x7103ba26,0x6837dffb,0x13e603b0,0x0b203a20,
    0x9620e42c,0xb80d11cc,0xcccccccd,0xdeca881c,0x49305980,0xce99ade9,
    0x95c3cccc,0xe98b169d,0xeeeeeeee,0x7500e983,0xa81620d8,0x337cc003,
    0x930598df,0x00591a20,0x17ec09f5,0x1ee807f9,0x6c0d03b0,0x21c800ec,
    0x221601d8,0x2268b20d,0x002d406c,0x05985b80,0x1740ec93,0xacb464c0,
    0x9999983a,0x74409999,0x41b0ea00,0x800ea058,0x03ba25f8,0xc81260b3,
    0x656a01a1,0xfc87f604,0x20d37901,0x209911da,0xac81d33d,0x267a25a8,
    0x067a6239,0xda87bbb5,0x2205fbed,0x201b001e,0x97058868,0x802f40e4,
    0x039b33ae,0x703d1000,0x588361d4,0x74400ea0,0x2cc17a25,0x55660498,
    0x16e2dc03,0x07f20fc8,0x3a225cb5,0x42ebeedb,0x51074c3d,0xaaaa8837,
    0x40aaaaa2,0x26000400,0xbb2c882e,0x206c0b20,0xfb16a4fc,0x3a12e23f,
    0x0003ba0d,0x75340b60,0xa81620d8,0x5d89d003,0x024c1660,0x5b803a36,
    0x075c0b70,0x20c0c1d7,0x0c58821c,0x00000098,0x98000000,0x22eecdfe,
    0x4edcdcbd,0x2ff73a60,0x3b3ae5f9,0x04fdf9db,0x8806c8d9,0xffff501e,
    0x3ff2dfff,0x37c47f64,0x3ffffbb6,0x025c3b86,0x7dc1fff9,0x813ea05f,
    0x3f60fffd,0xa89700ef,0x00000004,0x00000000,0x33100000,0x98002600,
    0x98098801,0x36000000,0x00000001,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x50000000,0x99884cc0,0xbbbbbb70,
    0x8007bbbb,0x555554c0,0x6442aaaa,0x675c1101,0x0204c040,0xeeee8204,
    0x2a1eeeee,0xaaaaaaaa,0x3ba0aaaa,0xeeeeeeee,0x000005ee,0x00000000,
    0x00000000,0x50000000,0x553fe09d,0x111111ff,0x49311111,0x4481dfc8,
    0xbbbbbbba,0x07ff43bb,0xeaadc7a2,0x3fec1d30,0x741f70ba,0x55555555,
    0x2eee2155,0xbbbbbbbb,0x444441bb,0x00888888,0x00000000,0x00000000,
    0x00000000,0x5b1d3000,0x3fe67fd0,0x9b244000,0x00770f73,0xe98ffb00,
    0x3dbd30e1,0x3620ffe8,0x00330a23,0x00000000,0x00000000,0x00000000,
    0x00000000,0x87a20000,0xf897ec1e,0xf1488007,0x191512d8,0x22222222,
    0x20980888,0x203000d8,0x003901c8,0x00000000,0x00000000,0x00000000,
    0x00000000,0x36000000,0x3f907442,0xa440037c,0x37516c78,0x6eeeeee4,
    0x00005ddd,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x04a80000,0xbd07dc95,0x6ec91000,0x000006ca,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x350e2000,0xeb882000,
    0x0000000b,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_25_latin1_x[224]={ 0,5,2,2,2,2,2,5,6,3,0,1,3,2,
4,2,2,2,1,2,2,2,2,2,2,2,4,3,0,1,0,0,2,0,0,1,1,0,1,1,1,2,1,0,
1,0,0,0,1,1,0,1,1,0,0,0,0,1,2,0,0,0,2,0,4,1,0,1,1,1,2,1,0,2,
1,2,2,0,1,1,0,1,1,2,1,0,0,0,1,1,2,0,6,0,2,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,5,2,1,2,1,
6,1,3,0,0,0,0,2,0,-1,3,1,3,3,4,0,1,4,4,4,3,1,0,0,0,0,0,0,0,0,
0,0,0,1,0,0,0,0,2,2,2,2,-1,0,0,0,0,0,0,2,0,0,0,0,0,1,1,0,1,1,
1,1,1,1,0,1,1,1,1,1,2,2,2,2,1,1,1,1,1,1,1,1,1,0,0,0,0,1,0,1,
 };
static signed short stb__courier_25_latin1_y[224]={ 18,4,4,3,3,4,6,4,4,4,4,6,14,11,
15,3,4,4,4,4,4,4,4,4,4,4,8,8,6,9,6,5,4,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,3,4,4,23,3,8,4,8,4,8,4,8,4,4,
4,4,4,8,8,8,8,8,8,8,5,8,8,8,8,8,8,4,4,4,10,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,18,8,3,5,7,5,
4,4,4,5,3,8,11,11,5,2,1,4,4,4,3,8,4,9,17,4,3,8,4,4,4,8,0,0,0,2,
1,0,5,5,0,0,1,1,0,0,1,1,5,2,0,0,1,2,1,7,4,0,0,1,1,0,5,4,3,3,
3,4,4,3,8,8,3,3,3,4,3,3,3,4,4,4,3,3,3,4,4,6,7,3,3,3,4,3,4,4,
 };
static unsigned short stb__courier_25_latin1_w[224]={ 0,3,9,10,9,10,10,4,5,4,9,11,5,10,
5,9,9,9,10,10,9,10,10,9,9,10,5,6,11,12,11,8,9,14,12,11,12,12,12,12,12,9,12,13,
11,14,13,12,12,12,14,11,11,13,14,13,13,12,10,4,9,4,9,15,5,11,12,11,12,11,11,12,13,10,
8,11,10,14,11,11,12,12,12,10,11,12,13,13,12,12,9,5,2,5,10,12,12,12,12,12,12,12,12,12,
12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,12,0,3,9,11,10,12,
2,11,7,14,8,11,12,10,14,15,7,11,7,7,5,12,11,5,5,6,8,12,14,14,14,8,14,14,14,14,
14,14,14,11,12,12,12,12,9,9,9,9,13,13,12,12,12,12,12,9,13,13,13,13,13,12,12,12,11,11,
11,11,11,11,13,11,11,11,11,11,10,10,10,10,11,11,11,11,11,11,11,11,12,12,12,12,12,12,12,12,
 };
static unsigned short stb__courier_25_latin1_h[224]={ 0,15,7,17,18,15,13,7,17,17,9,12,8,2,
4,17,15,14,14,15,14,15,15,15,15,15,11,13,12,5,12,14,16,13,13,14,13,13,13,14,13,13,14,13,
13,13,13,14,13,16,13,14,13,14,13,13,13,13,13,17,17,17,7,2,4,11,15,11,15,11,14,15,14,14,
19,14,14,10,10,11,15,15,10,11,14,11,10,11,10,15,10,17,17,17,4,14,14,14,14,14,14,14,14,14,
14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,14,0,15,15,13,9,13,
17,16,3,14,8,10,7,2,14,2,7,14,8,8,4,15,16,4,5,8,8,10,14,14,14,15,18,18,18,16,
17,18,13,17,18,18,17,17,18,18,17,17,13,16,19,19,18,17,18,9,15,19,19,18,18,18,13,15,16,16,
16,15,15,16,11,14,16,16,16,15,15,15,15,14,15,14,16,16,16,15,15,11,12,16,16,16,15,20,19,19,
 };
static unsigned short stb__courier_25_latin1_s[224]={ 245,247,11,245,225,175,211,250,158,153,179,
170,250,104,61,84,14,149,159,24,170,35,46,57,92,102,250,248,182,48,194,
180,113,155,102,189,129,50,171,213,63,16,226,197,128,101,76,1,115,163,140,
28,90,40,156,142,236,37,26,55,124,119,1,131,90,231,186,243,113,1,54,
1,14,239,40,77,66,87,128,219,212,199,102,13,201,24,140,51,154,162,77,
134,52,75,73,136,136,136,136,136,136,136,136,136,136,136,136,136,136,136,136,
136,136,136,136,136,136,136,136,136,136,136,136,136,136,136,136,136,245,251,238,
89,189,116,81,88,96,14,242,167,21,104,71,115,34,86,218,210,67,1,52,
84,42,226,233,115,29,121,56,247,161,103,133,135,60,118,1,94,186,148,106,
140,235,176,42,177,222,13,76,63,199,164,212,200,199,89,49,14,28,1,184,
67,199,27,235,126,138,223,37,109,123,211,187,150,188,236,225,98,80,44,1,
64,76,176,213,65,206,39,150,100,225,1,27,14, };
static unsigned short stb__courier_25_latin1_t[224]={ 19,41,131,1,1,58,89,95,21,21,119,
105,86,131,131,21,58,74,74,58,74,58,58,58,58,58,74,58,105,131,105,
74,41,105,105,74,89,105,89,74,105,105,74,89,105,89,105,90,105,41,105,
89,105,89,89,89,89,105,105,21,21,21,131,131,131,105,58,105,58,119,89,
74,89,74,1,89,89,119,119,105,58,58,119,119,74,119,119,119,119,58,119,
21,21,21,131,74,74,74,74,74,74,74,74,74,74,74,74,74,74,74,74,
74,74,74,74,74,74,74,74,74,74,74,74,74,74,74,74,74,19,41,58,
89,119,89,21,41,131,74,119,119,131,131,74,131,131,74,119,119,131,58,41,
131,131,119,119,119,74,74,74,21,1,1,1,41,21,1,105,21,1,1,21,
21,1,1,21,21,89,41,1,1,1,21,1,119,41,1,1,21,21,22,89,
58,21,41,21,58,58,21,119,74,41,21,21,58,41,41,41,74,58,74,41,
41,41,41,41,119,105,41,41,41,58,1,1,1, };
static unsigned short stb__courier_25_latin1_a[224]={ 212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,212,
212,212,212,212,212,212,212,212, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_25_latin1_BITMAP_HEIGHT or STB_FONT_courier_25_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_25_latin1(stb_fontchar font[STB_FONT_courier_25_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_25_latin1_BITMAP_HEIGHT][STB_FONT_courier_25_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_25_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_25_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_25_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_25_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_25_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_25_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_25_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_25_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_25_latin1_s[i] + stb__courier_25_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_25_latin1_t[i] + stb__courier_25_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_25_latin1_x[i];
            font[i].y0 = stb__courier_25_latin1_y[i];
            font[i].x1 = stb__courier_25_latin1_x[i] + stb__courier_25_latin1_w[i];
            font[i].y1 = stb__courier_25_latin1_y[i] + stb__courier_25_latin1_h[i];
            font[i].advance_int = (stb__courier_25_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_25_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_25_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_25_latin1_s[i] + stb__courier_25_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_25_latin1_t[i] + stb__courier_25_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_25_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_25_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_25_latin1_x[i] + stb__courier_25_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_25_latin1_y[i] + stb__courier_25_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_25_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_25_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_25_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_25_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_25_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_25_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_25_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_25_latin1_LINE_SPACING
#endif

