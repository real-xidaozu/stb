// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_11_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_11_latin1'.
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

#define STB_FONT_courier_11_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_11_latin1_BITMAP_HEIGHT         42
#define STB_FONT_courier_11_latin1_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_11_latin1_FIRST_CHAR            32
#define STB_FONT_courier_11_latin1_NUM_CHARS            224

#define STB_FONT_courier_11_latin1_LINE_SPACING           5

static unsigned int stb__courier_11_latin1_pixels[]={
    0x80401100,0x0180c000,0x01804406,0x02008088,0x00001004,0x00010053,
    0x54020100,0x0260c43b,0x40003018,0x2aa20100,0xa80c02a1,0x73826000,
    0x05284c60,0x22881c05,0x00a80989,0x98535033,0x2e0980a9,0x80cc1541,
    0x20ddc41a,0x4409981a,0x804540bb,0x40bb881a,0x01a80bb8,0x38373033,
    0x201502a8,0x80bb8828,0x4503501a,0x202a0e24,0x985281a8,0x51066130,
    0x260dcc26,0x44110c1b,0x17317309,0x4c2e62e6,0x2e60b98b,0x82e62e61,
    0x5506a1b9,0x08808844,0x04422314,0x062110c6,0x4010735b,0x20080200,
    0x2198d408,0x55cc0984,0x0aaae62a,0x9804c026,0x4c9004c0,0x0dd41713,
    0x4c260dd4,0x22628330,0x4c6a331a,0x3305c2e1,0x0a285147,0x86635145,
    0x2331a8a2,0x44b32a0a,0x2aaa8713,0x713886a6,0x27119a88,0x54131c38,
    0x155542aa,0x53506a6a,0x0a1a9a83,0x35330e27,0x21450a28,0x54cc1a99,
    0x050d4cc1,0xa8289c48,0x90985502,0x4e141448,0x40a131c2,0x851428a2,
    0x451c28a2,0x982670a2,0x2228a0bb,0x228a20a1,0x28a0cd42,0x450c452c,
    0xaab98a18,0x992aae64,0x470a4aab,0x4a155444,0x55103281,0x442aa885,
    0x480a22aa,0x829983a8,0x0984c299,0x21421431,0x04d43853,0x51428a28,
    0x51c28a28,0x73038514,0x0c451417,0x28a28a45,0xb8514318,0x228621aa,
    0x10188a18,0x21406203,0x70a288e3,0x88557055,0x88a288a2,0x875750a2,
    0x99b81a83,0x1314cdc2,0x9850cc26,0x21c29c28,0x0a38a039,0x0a28e147,
    0x4e1451c7,0x550a622b,0x0d554197,0xcbaa8571,0x7550ccc0,0x55501419,
    0x541aaa83,0x1d5543aa,0xaa88eaaa,0xa9b88cc4,0x31418a0c,0x88654dc4,
    0x3710ca9b,0x54188195,0x99b80980,0x131ccdc3,0x40a854a2,0x224aa889,
    0x200984aa,0x5506aaa2,0x21aaa835,0x55544aa8,0x8812aa21,0x13000018,
    0x64c00000,0x01000001,0x08001004,0x25564c04,0x01095593,0x0cc01004,
    0xb82f2602,0x44ee5913,0x0282102c,0x072a2000,0x000006ea,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x30000000,0x00000310,0x13530180,0x00083790,0x80a50000,
    0x4c09a980,0x04c4c0aa,0x2210aaae,0x0019aa80,0x9800a502,0x4c0d442a,
    0x8a510098,0x2154033a,0x8088001c,0x044000c1,0x01502ea2,0xa8aea02a,
    0x215531aa,0x0e6a0ba9,0x0c4440c4,0x980998b2,0x08803301,0x18849aa8,
    0x040b894c,0x510c4544,0x216270e2,0x8841c40b,0x14a15540,0x08151333,
    0x504431b8,0x8a389c0e,0x13130bb9,0x88282a66,0x2604c4c2,0x2a28a0a9,
    0x4c1ba81b,0x0ca29401,0x4cc0dd45,0x025d541a,0x8861885c,0x26618861,
    0x9a81141a,0x5428641a,0x0c4e41a9,0x4dc2628a,0x81102220,0x80887128,
    0x18c4649a,0x85c06a6a,0x260c4a0b,0x9c514260,0x35751aba,0x55d46aea,
    0x4c555731,0x448e2aab,0x9b85502a,0xa986440a,0xa855351b,0x222aa882,
    0x999870e0,0x1154e22a,0x55510a67,0x21431028,0x050c452a,0x28a28315,
    0x05c43115,0x214502e2,0x465140b8,0x2aae632a,0x4284c263,0x518850e2,
    0x2604c514,0x502604c0,0x55c28a14,0x2660a663,0x28828dc2,0x14aa5535,
    0x8a288533,0x880a8608,0x37312a8b,0x2a2e2253,0x2aa14512,0x54286229,
    0x82862298,0x65d64188,0x260a3710,0x05140980,0x44ca2813,0x11311889,
    0x81350541,0x8a288662,0x302628a2,0x204c0981,0x48065032,0x3370a66e,
    0x14a05145,0x9b8aa2e5,0x32a6e229,0x228666a0,0x4314cca0,0x894cca18,
    0x0c40ca9b,0x54a0d554,0x440d5542,0xac881418,0x0980981a,0x26065d54,
    0x98aa7260,0x15554199,0x2141cc35,0x450d5543,0x04c098a3,0xab813026,
    0x54c2ab82,0x70e66e0b,0x22ab8733,0x35531aab,0x7337042e,0x35530000,
    0x37307310,0x4c007310,0x24326000,0x18515100,0x2bba8010,0x5400aeea,
    0x100002bb,0x730260a8,0x2ab66098,0x82ea6170,0x02604c09,0x45062813,
    0x644ee041,0x00b22772,0xb855c002,0x00005913,0x00000000,0x00000000,
    0x00000000,0x00000000,0x80983951,0x2a009802,0x237951bc,0x37951bca,
    0xc992ab26,0x000004aa,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x44155400,0x00d44088,0x98029a88,
    0x0401001a,0xaac85554,0xa8855503,0x2155441a,0xb98b9820,0x07100530,
    0x54c04201,0x2202211b,0x408841aa,0x4110102a,0x201c1cc0,0x29822101,
    0x982e2710,0x110040aa,0x40ba8020,0x26608888,0x50ae0a98,0x31987501,
    0x35055543,0x28050301,0x8a188cf6,0x864451c4,0x09428a0b,0x2e0a0a10,
    0x4c500ca9,0x471439ac,0x04a0c99a,0x4550d4d4,0x088c0c0b,0x87128818,
    0x4512808a,0x54d408b8,0x551ccd41,0x8551ec93,0x11846600,0x18198885,
    0x44a18e14,0x2ae209ab,0x1302aea2,0x2018cc04,0x21426009,0x853390a2,
    0x2044399b,0x1c280e09,0x82605413,0x50c40543,0x81829aa8,0x5dd44571,
    0x9ac85142,0x4dcc2a82,0x50eaae61,0x20822855,0x33004298,0x09867318,
    0x20a14185,0x01140619,0x2a0a850a,0x2aa280a0,0x28a04d40,0x48261324,
    0x243105c4,0x82921411,0x124312a8,0x0a188175,0x30305555,0x51406019,
    0x17930a28,0x08898828,0x200a3884,0x18022a9b,0x0dca3133,0x42830aa2,
    0x140614c3,0x0588a140,0x06298144,0x2428a0e6,0x130904c3,0x82229aa8,
    0x860d55c2,0x310a6aa2,0x3706aaa0,0x71303055,0x65d54060,0x55cc28a0,
    0x2aaa8140,0x355154e4,0x288a9ec5,0x43333002,0x04422ba9,0x98755106,
    0x2229b881,0x86aae0ab,0x81b06a09,0x4dd43aba,0xaaa80983,0x70aa7261,
    0x00983935,0x0505370a,0x140aaae2,0x0000eab6,0x22715dd4,0x0555510c,
    0x83223220,0x0d6543b8,0x2e000008,0x22263913,0x4d400018,0x020ddd41,
    0x01055591,0x00800003,0x65440802,0x80400000,0x2ea22bba,0x01b98080,
    0x00037300,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xaba80000,0x220aae61,0x0555cc10,0x2a624401,
    0x400d5c09,0x00410208,0x04440842,0x102eaea2,0x22017501,0x55573088,
    0x2e60aab8,0xaa800b89,0x42e2711a,0x4aa17138,0x2e2551a8,0x446aeea1,
    0x2ae6388b,0x0555c002,0x85c4a610,0x55446a1a,0x21aaab80,0x22501852,
    0x82aee622,0x3502a8a2,0x2a982888,0x22322298,0x426ae60c,0x2eeae298,
    0x18a6b222,0x1a998263,0x4a9a82a8,0x50e28514,0x4ca06066,0x44e144a1,
    0x884c44a2,0x8a3310a1,0x4c1450a2,0x2a20a180,0x47314320,0x2140220c,
    0x54060222,0x55dd4450,0x2a0622a2,0xac886622,0x38870c29,0x10382894,
    0x209898c3,0x102308a2,0x42988555,0x4541b898,0x1550c281,0x54142060,
    0xa8987702,0x8a85142a,0x2144541a,0x30c00512,0x4aa06a21,0x826a6262,
    0x10315008,0x2ca81817,0x5c0a99c5,0x71b882aa,0x430a2851,0x98853109,
    0x43710502,0x51413131,0x21451030,0x4e622a9b,0x214155c2,0x7510e722,
    0x03502857,0x555310ae,0x55c09898,0x21d55c2b,0x555444ab,0x550d54c2,
    0x518a62a0,0xa8044135,0x0181303a,0x59955145,0x15411143,0x0a286eaa,
    0x70085553,0x88159505,0x4a6a66e0,0x0c0c88c8,0x50654dc4,0x1aad8511,
    0x82628314,0x13030312,0x3130130a,0xa82a9b81,0x14319a82,0x01051285,
    0x941a8806,0x04c4462a,0x40286211,0x986eea09,0x41040aac,0x02a2aac9,
    0x88c88e44,0x0006b20c,0x80000000,0x77000bb9,0x93004722,0x55644955,
    0x20dc7262,0x263aac80,0x645260bb,0x15424560,0x44eb2aaa,0x3930c88c,
    0x5901106a,0x0c98cc03,0x22571dc9,0x2b21babb,0x002bba81,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0xaa800000,0x44104029,0x00100088,
    0x8540020a,0x5d555420,0x2aaa2080,0x64b2020a,0x300352ba,0x2a098983,
    0x5532aaaa,0x00000555,0x00000000,0x00000000,0x00000000,0x88a8a66a,
    0x731910e1,0x738954dc,0x86a0a998,0x45531aca,0xa89a23b8,0x4f61300b,
    0x13333119,0x72b8446a,0x5c46a575,0x0ae263bb,0x00000000,0x00000000,
    0x00000000,0x00000000,0x450e6ae0,0x4415c062,0x286464c2,0xb8266631,
    0xa998e6e2,0x202b8550,0x08888008,0x44c2a130,0x00000009,0x00000000,
    0x00000000,0x00000000,0x40000000,0x555c49aa,0x075106a2,0xa8917507,
    0x98611861,0xa810d42a,0x00000188,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x200a26a0,0x36236608,0x4a275590,0x00000003,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,
};

static signed short stb__courier_11_latin1_x[224]={ 0,2,1,0,1,0,1,2,2,1,0,0,1,0,
2,1,1,1,0,0,1,0,1,1,1,1,2,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,2,0,0,0,0,0,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,2,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,2,1,0,0,0,
2,0,1,0,0,0,0,0,0,-1,1,0,1,1,2,0,0,2,2,1,1,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,1,-1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__courier_11_latin1_y[224]={ 8,1,2,1,1,1,2,2,2,2,2,2,6,4,
6,1,1,1,1,1,2,2,1,2,1,1,3,3,2,4,2,2,1,2,2,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,2,1,10,1,3,2,3,2,3,2,3,2,1,
1,2,2,3,3,3,3,3,3,3,2,3,3,3,3,3,3,2,2,2,4,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,3,1,2,3,2,
2,2,2,2,1,3,5,4,2,1,0,2,1,1,1,3,2,4,7,1,1,3,1,1,1,3,0,0,0,1,
0,0,2,2,0,0,0,0,0,0,0,0,2,1,0,0,0,1,0,3,2,0,0,0,0,0,2,2,1,1,
1,2,2,1,3,3,1,1,1,2,1,1,1,2,2,2,1,1,1,2,2,2,3,1,1,1,2,1,2,2,
 };
static unsigned short stb__courier_11_latin1_w[224]={ 0,2,4,5,4,5,4,2,3,3,4,6,3,5,
2,4,4,4,5,5,4,5,4,4,4,4,2,3,5,6,5,4,4,6,6,6,6,6,6,6,6,4,6,6,
6,6,6,5,6,6,6,5,6,6,6,6,6,6,4,2,4,2,4,7,2,6,6,6,6,6,5,6,6,5,
4,6,5,6,6,6,6,6,6,5,6,6,6,6,6,6,4,2,2,2,5,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,2,4,6,5,6,
2,6,4,6,4,5,6,5,6,7,4,6,4,4,2,6,6,2,2,4,4,6,6,6,6,4,6,6,6,6,
6,6,6,6,6,6,6,6,4,4,4,4,7,6,5,5,5,5,5,4,6,6,6,6,6,6,6,5,6,6,
6,6,6,6,6,6,6,6,6,6,5,5,5,5,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
 };
static unsigned short stb__courier_11_latin1_h[224]={ 0,8,3,8,8,8,7,3,8,8,4,6,4,2,
3,8,8,7,7,8,6,7,8,7,8,8,6,7,6,3,6,7,8,6,6,7,6,6,6,7,6,6,7,6,
6,6,6,7,6,8,6,7,6,7,6,6,6,6,6,8,8,8,4,1,3,6,7,6,7,6,6,7,6,7,
9,6,6,5,5,6,7,7,5,6,7,6,5,6,5,7,5,8,8,8,2,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,7,7,6,5,6,
8,7,1,7,4,5,3,2,7,1,4,6,5,5,3,7,7,2,3,5,4,5,7,7,7,7,8,8,8,7,
8,8,6,8,8,8,8,8,8,8,8,8,6,7,9,9,9,8,9,4,7,9,9,9,9,8,6,7,8,8,
8,7,7,8,6,7,8,8,8,7,7,7,7,6,7,6,8,8,8,7,7,6,6,8,8,8,7,9,8,8,
 };
static unsigned short stb__courier_11_latin1_s[224]={ 112,65,100,68,88,100,22,97,161,214,47,
50,62,108,78,248,26,34,45,89,198,63,84,69,95,65,253,74,125,84,192,
78,100,15,185,83,36,29,152,90,97,165,138,43,145,138,131,39,118,16,104,
152,1,104,83,76,69,62,57,23,11,8,42,133,81,8,111,246,118,233,227,
131,213,125,20,192,186,241,248,172,145,158,229,240,51,206,222,179,18,97,25,
242,239,245,114,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,112,253,58,
165,7,220,253,27,120,15,52,1,71,108,239,125,57,199,236,217,91,194,187,
105,94,13,37,30,145,138,131,126,77,70,105,1,232,225,90,207,179,172,58,
51,46,41,36,31,170,173,59,7,46,155,1,66,201,39,32,52,25,218,210,
233,200,193,186,112,152,165,178,159,148,141,134,246,208,214,227,159,119,203,81,
120,127,166,180,111,22,74,93,106,220,13,113,1, };
static unsigned short stb__courier_11_latin1_t[224]={ 18,1,35,1,1,1,20,35,1,1,35,
28,35,35,35,1,11,20,20,10,27,20,10,20,10,10,20,20,28,35,27,
20,10,28,27,20,28,28,28,20,28,27,20,28,28,28,28,20,28,11,28,
20,28,20,28,28,28,28,28,11,11,11,35,35,35,28,20,20,20,20,20,
20,20,20,1,20,20,27,27,20,20,20,27,20,20,20,27,20,35,20,35,
1,1,1,35,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,
20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,18,10,20,
20,35,20,1,20,35,20,35,35,35,35,10,35,35,20,27,27,35,10,10,
35,35,35,35,35,10,10,10,10,10,10,10,20,1,1,28,1,1,1,11,
11,11,11,11,11,27,10,1,1,1,1,1,35,10,1,1,1,1,1,27,
10,1,1,1,10,10,1,27,10,1,1,1,10,10,10,10,28,10,27,1,
1,1,10,10,28,28,1,1,1,10,1,1,11, };
static unsigned short stb__courier_11_latin1_a[224]={ 93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,93,
93,93,93,93,93,93,93,93, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_11_latin1_BITMAP_HEIGHT or STB_FONT_courier_11_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_11_latin1(stb_fontchar font[STB_FONT_courier_11_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_11_latin1_BITMAP_HEIGHT][STB_FONT_courier_11_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_11_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_11_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_11_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_11_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_11_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_11_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_11_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_11_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_11_latin1_s[i] + stb__courier_11_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_11_latin1_t[i] + stb__courier_11_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_11_latin1_x[i];
            font[i].y0 = stb__courier_11_latin1_y[i];
            font[i].x1 = stb__courier_11_latin1_x[i] + stb__courier_11_latin1_w[i];
            font[i].y1 = stb__courier_11_latin1_y[i] + stb__courier_11_latin1_h[i];
            font[i].advance_int = (stb__courier_11_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_11_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_11_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_11_latin1_s[i] + stb__courier_11_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_11_latin1_t[i] + stb__courier_11_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_11_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_11_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_11_latin1_x[i] + stb__courier_11_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_11_latin1_y[i] + stb__courier_11_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_11_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_11_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_11_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_11_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_11_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_11_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_11_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_11_latin1_LINE_SPACING
#endif

