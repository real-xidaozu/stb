// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_bold_9_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_bold_9_latin_ext'.
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

#define STB_FONT_consolas_bold_9_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_consolas_bold_9_latin_ext_BITMAP_HEIGHT         72
#define STB_FONT_consolas_bold_9_latin_ext_BITMAP_HEIGHT_POW2   128

#define STB_FONT_consolas_bold_9_latin_ext_FIRST_CHAR            32
#define STB_FONT_consolas_bold_9_latin_ext_NUM_CHARS            560

#define STB_FONT_consolas_bold_9_latin_ext_LINE_SPACING           6

static unsigned int stb__consolas_bold_9_latin_ext_pixels[]={
    0x01306180,0xa886602a,0x02607300,0x4c054063,0x86a60980,0x03018289,
    0x260aa82a,0x81418828,0xa828a80a,0x23106440,0x2140ca09,0x428a8098,
    0x1128809a,0x80420660,0x14a0980a,0x11050a2a,0x320220c0,0x2f5cf3c4,
    0x337a1d54,0x03a20aa0,0x7b4c8b76,0x1dcd8390,0xd887322c,0x3321e643,
    0x7b51dcc3,0x13541644,0x9a83901f,0x2a1dcc0b,0x516d6a2c,0x2e2aa83b,
    0x205cd43c,0xb53e84cb,0x9e81f910,0x44c82a85,0x2064c58d,0xcb82546b,
    0x1c993f24,0x07b6ef3c,0x909f1bae,0x782cb85b,0xda87a34c,0x4b31952e,
    0xa8591ac9,0x46b262ed,0x76d4310a,0x1eda8ee2,0x0aa25551,0xa95c7b6a,
    0x2b8f6d43,0xb84c6275,0x57ba2752,0x16e4752b,0x4d11d4ae,0x20f8155a,
    0x76d4310a,0x95c62151,0x3a17b23a,0xa88ab6a0,0xcb87c42a,0x3beaf3c2,
    0xb9fe6dc0,0xd3b70edd,0xf930f545,0x2770f239,0xd7b199ea,0x4be7a6db,
    0x4667aa2c,0x2972f9e9,0x4333d53c,0x2133f33b,0x1f516ba8,0x3c84cfcc,
    0x84cfcc97,0x6d2a973c,0x9992e792,0x6dd2e797,0x25cf22e9,0x42ded4b3,
    0x99e52e0f,0x3297099f,0x6d52e793,0x3ea1d818,0x4d7512eb,0x85b70fb8,
    0x21ff98a7,0x1d75bdad,0x925cb69b,0x84f5c49d,0x9bdad41d,0x2d97bd1a,
    0x4590e9e9,0x3d31a9bd,0x43e3e21d,0x4ee1a9bd,0x1f1a604b,0x4b9e425c,
    0xa5cf212e,0x5cf25b4a,0x973cbc44,0x27925cb6,0x7545f34b,0x3e20f80f,
    0xf10970f8,0xa5cf21f1,0x1fa80cf9,0x4d312eb5,0x3d3510da,0x1ee4443c,
    0x7e4b5b5b,0xe96a5b1e,0x0f22d46a,0x4fa6b697,0x7b55cbde,0xd35b1643,
    0xbb06f6a7,0x71f4d6cb,0x46981327,0x4f21320f,0x4f21324b,0x64b6954b,
    0x79788973,0x25a96d2e,0x52cc973c,0xd81f09bb,0x6ec1325d,0xb325cf25,
    0x52a1e83f,0x83134c3c,0x779e2fdb,0x5f641bff,0x2973d43c,0xc83ed33c,
    0x5cb62d43,0x332fa775,0x323bdf31,0xf99dd6e2,0xb87ea1de,0xea9dc775,
    0xfd369810,0xc843aa5d,0x08754793,0xda54f279,0xf30f2792,0x94b9e4f2,
    0x223c9e47,0x4cba36a5,0x87ea2efe,0x0fd410ea,0x0b60f279,0x42f7d41d,
    0xd5b96e69,0x40dcf3c5,0xdd70eef8,0xb86fec47,0x01bd3fee,0xfd89aa5b,
    0x3c82593f,0xfd88b299,0xb932793f,0x71ffec45,0x7097fec7,0x7fec1d0b,
    0xd81ddd12,0x1ddd12ff,0x3bba23d0,0x3a27fd30,0x1bfb10ee,0x3a077744,
    0x5b828140,0x16e2ffd8,0x3ee1ddd1,0x951e20de,0xf9816e10,0x0079e2ee,
    0x23d0000d,0x1938805a,0x4c7d9100,0x07d70ced,0xb90ced98,0x00bb2001,
    0x07901bd5,0xe9800000,0x00000004,0xb04896a0,0xb9000dc8,0x85b00001,
    0x00dea839,0x0002cb00,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x0a880000,0x140a8828,0x10828194,
    0x42941330,0x20a8809a,0x03028098,0x4c0f7aa0,0x150eab70,0x76428a83,
    0xeb9d56e5,0x105443ee,0x2a0bd902,0x83a8e202,0x2208428a,0x2a20e605,
    0x9d400220,0x3260422c,0x851d4ae1,0x303500a8,0x2aa83509,0x03e20ed4,
    0x6ff445d7,0x99716364,0x43cb8350,0x21e642aa,0x3e76e4ec,0x53f92641,
    0x64c0c989,0xfc8636a0,0x13f314a9,0x50f541a8,0x0551031b,0x37667575,
    0xd703260a,0x0c983c45,0x22ee41a8,0x16b2e4ec,0x22cb85d7,0x0aaa973c,
    0xd8bd9055,0xb9d4ae7f,0x216e4752,0x2b261ac9,0x6497ff91,0x3216e42d,
    0x3216e42d,0x261e4c2d,0x83a76e1b,0x2bb323c9,0x5b8f7aa4,0xc833e675,
    0x71e24add,0x23c98eab,0x5c980cf9,0xd9856ecc,0x7ddd70ad,0x87884c62,
    0x21620fc8,0x4c621318,0xb981db70,0x64262621,0xb97b2973,0x8636a752,
    0x5cf21bea,0x6dd2e794,0x5f3d32e9,0x7dcbe7a6,0x5d3b74bf,0x6dcba76e,
    0x5d3b72e9,0x7ccba76e,0x4bafaa29,0x27e63eeb,0xb9376b22,0x53f91f9d,
    0xac8fecc9,0xf91e24ce,0x0a7e6953,0x6f543fb3,0x82b7661f,0x84fcc44b,
    0x81e25b4a,0x52a1e20f,0x5cb6952d,0x3afaa0fe,0x9e4b6952,0x3218dacb,
    0x833e6973,0x5cf20cda,0x96d2e794,0x21d3d34b,0x36e0e9e9,0x6d2e5b4b,
    0xa5cb6972,0x5cb6972d,0x9e45dd14,0x44f3974c,0x3e6b22ee,0x643a76e4,
    0x92d84add,0x23c49f55,0xdd14addc,0xeac8b605,0x25c25c4b,0x96d2a3c4,
    0x7883e078,0x52a5b4a8,0x64b7972d,0x96d2a993,0x19f3593c,0x3664b9e4,
    0x64bfd11f,0xa5cf2973,0x2f6ab52d,0x5c06f6a1,0x96d6a5b4,0x6d6a5b5a,
    0x2d4b6b52,0x3ca647e6,0x3f30f697,0xdd726cb2,0xba675647,0x3e590def,
    0x9d591e24,0xdf71f989,0x1e66dc1d,0x87be612e,0x12ead478,0x20f85fff,
    0x25d5a878,0x752e5d5a,0xad4f2993,0x21bdd12e,0x2e791fd9,0x90742d84,
    0x3c9e4f27,0x77ccf297,0x43bdf31d,0x9e52e790,0x652e794b,0xa5cf2973,
    0x44ddd53c,0x2a140eee,0x5c7b06ee,0x3eab279c,0x85028144,0xdd54faac,
    0xee88588d,0x20f7cc0e,0x77c47882,0x20f8142e,0x2eef8878,0x4285ddf1,
    0xdf10eee8,0x2d83445d,0x77dcf279,0x3ba22c0d,0x21ddd10e,0x2790dfd8,
    0xd932794c,0x1bfb10ee,0x6c437f62,0x1bfb10df,0x00037f62,0x65400488,
    0x2c9ed2e0,0x2442449f,0x27cb2244,0x000d0080,0x800f1091,0x8977f4c5,
    0x20002fff,0xd8800048,0x221bdf71,0x00000eee,0x676cc000,0x0019db30,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x80000000,0x05028189,0x43ddd30a,
    0x51032852,0x41404c41,0x8145409a,0x0a032609,0x176d4150,0x21440626,
    0x204d41c9,0x10808852,0x442828a8,0x28141eee,0x00328108,0x98040262,
    0x420c5429,0x40c06440,0x320082db,0x215542db,0x222aa858,0x22c6c1f9,
    0x5c1a81da,0x65c2c43c,0x264064c4,0x2aa85171,0x4cf54550,0x5c0b6f21,
    0x32e165c0,0x3f62c6c4,0x9307aa0e,0x3e22aa81,0x2207c419,0x6d42eb85,
    0x32e27641,0xdf85fd83,0x3a6064c1,0x0f416543,0x6545d3b7,0x64131885,
    0x3bba6910,0x8f12a591,0x3ba6952c,0x25ddd51e,0xdd51eee9,0x47bba65d,
    0x5932eeea,0x4ae12a17,0xda77442b,0x06e61a9b,0x5b70f7aa,0x0f541ea8,
    0x43731bae,0x3aa1eee8,0x982abe21,0x87bba21b,0x3bba21b9,0xee886e61,
    0xa87ae61e,0x16f5c0fb,0x1ea82ee2,0x72d85dc4,0x2a05dc49,0x5886c5b4,
    0xeb543f31,0x8f5aa3c1,0x2a621f98,0x443f311f,0x3f311fa9,0x998fd4c4,
    0x457b55af,0xceb8793c,0x2a7d35b0,0x4edc2ebe,0x43d3511f,0x327644ec,
    0x27a63d5d,0xc833f11e,0x42abe24e,0x3f11e9e9,0x88f4f4c3,0x3a7a619f,
    0x74c33f11,0x1f5b71ea,0xf12e9cc8,0x12764177,0x54b6177f,0xa8177f15,
    0x4fcec5b4,0x42e743c5,0x0785ce87,0x0f60f07b,0xf931ec1e,0x47efead9,
    0x5f43dadc,0x64eeb71d,0xe9db8993,0xae8bf6e0,0x27935746,0x27fdf73c,
    0x2ba0aaf8,0x3bee1a26,0x2155f13f,0x5f13fefb,0x4ffbee15,0x2790aaf8,
    0x903e3d1d,0xe82d52e7,0x52e16a6a,0xad40b53c,0x12fef62e,0x74c3f50f,
    0x207ea1ef,0x50f06a87,0xd1aa1e0d,0x25b5a8d1,0x3663dadc,0x7ffb11da,
    0x3ae1e532,0x99756e3e,0x87da61f6,0x212e5b4c,0x2d30aaf8,0x23fff10f,
    0x0aaf884b,0x155f1097,0x2abe212e,0x5747a990,0x4b9e40f8,0x43ed30d3,
    0x0dfd8869,0x777c40d3,0xf13abb22,0x11a20f10,0x01f11e0f,0x1e01f11e,
    0xedec81f1,0x9e4b6953,0x20fbb23c,0x20777442,0x3be679cb,0x27fdd72e,
    0xdd13feeb,0x88f7744d,0x43feeb86,0x47bba268,0x1eee8868,0x3ddd10d1,
    0x3bbe61a2,0xc81ddf51,0x3bf22e8b,0x647fdd70,0x90d7c0ef,0xb64001df,
    0x43dfd33f,0x788b6078,0xfb8f7f4c,0x3dfd33ff,0x74cfffee,0x7fff71ef,
    0x325b4a80,0x4eab4793,0x29700122,0x5a8f403d,0x40016a3d,0x23d1fff8,
    0x2016c45a,0x4401fff8,0x7c401fff,0x640001ff,0x51e803ef,0x00b2600b,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x11088098,0x07aa0310,0x40065021,0x44110098,
    0x01082200,0x01884c03,0x21008821,0x20180440,0x36a03109,0x5440981e,
    0x015114a0,0x301082a2,0x101510a0,0x5030a504,0x20302a20,0x220310a8,
    0x1320a809,0xc834436e,0x75c4ec84,0x3b20ed42,0x2d81e5c4,0xd0741772,
    0xc83cc8b3,0x2cf42644,0x9167a095,0xc83cc8bb,0x27e62644,0x0d426409,
    0x20551636,0x322cf41a,0x2a15543c,0xb1d56ec2,0x5507c4b1,0x3cc83505,
    0x222641a8,0x98e40fce,0xb05dc41b,0xae837303,0x3aa165c6,0x3aa165c1,
    0x97175cc1,0x98c4b505,0x8c426310,0xb8263109,0x30ab6a2c,0x4c1b9837,
    0x260dcc1b,0x65c12e1b,0xe8a54b22,0x3ddd31ee,0xb987bba6,0xdd30dcc1,
    0x47bba23d,0x3ba65bcd,0x7744f11e,0x43ddd11e,0x20f542cb,0x3a36a2cb,
    0x74f4c5c0,0x54177f11,0x98f4f4c5,0x3a6a21f6,0x9a893b21,0xe993b21e,
    0x3d3512ea,0x96d2a1d8,0x6d2a5b4a,0x544b6952,0x5d7f51e9,0x754bafaa,
    0x5d7d52eb,0x754bafaa,0x510992eb,0x8f5aa3d3,0x3e6219f8,0xe987e621,
    0x3d3d31e9,0x9f887e62,0x98876a21,0x33f13c1f,0x3510cfc4,0x5127643d,
    0x0f72a3d3,0x7fdf73f7,0x2e0e816a,0xfdd73fef,0x5d17edc7,0x3a2fdb8d,
    0x716cf26a,0x2a34c5fb,0x96d2a5b4,0x6d2a5b4a,0xad4bf6e2,0x6532794b,
    0xa64f2993,0x64f2993c,0xdb821d54,0xf8973a2f,0x4783c0aa,0xdf73fefb,
    0x57c4787f,0xf0732a0a,0x8557c4f0,0x36e0aaf8,0xb71aba2f,0x43af2a5f,
    0x1a612e79,0x3a12e4b8,0x9756eb51,0x756e1f69,0xa643ed32,0xc8bab72e,
    0xb52ead42,0x52ead4ba,0x2eadcbab,0xca64f295,0xa64f2993,0x64f2993c,
    0x97fec794,0x0fd45d5b,0x078155f1,0x04b84b8f,0x2155f11e,0x43c5bbd8,
    0x442abe22,0x3ab70aaf,0xadc3ed32,0x4532952e,0x1eee89bf,0x4d103bf2,
    0x2c81eee8,0x3ae5ddf3,0x5ddf33fe,0x7ccffbae,0x5ddf32ee,0x3bbe21a2,
    0x225ddf12,0xddf12eef,0x4cbbbe65,0x3bba25ef,0x221ddd10,0xddd10eee,
    0xd03bba21,0x222eef98,0x20f03447,0x88f77447,0x223c1eee,0x43ea9c86,
    0x86887c47,0x2eef9868,0x3e67fdd7,0x5d9952ee,0x20001e4c,0x012e002c,
    0x3d016a3d,0x25c0016a,0x00000000,0x00000000,0x8f100040,0xfd31fff8,
    0x07bfa63d,0x8f7f4c00,0x4c01fff8,0xff101efe,0x07ffe23f,0x0016a3d0,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0xa88e0040,0x5dc09a80,0x4c154aa2,0x84110280,
    0x2e620ae0,0x18a6f642,0x0842b988,0x308180cc,0x02621b98,0x2a038998,
    0x0082ee21,0x02202202,0xa8c47db1,0x20862140,0x6c421821,0x8e09885d,
    0x30773008,0x20415188,0x6eb84de8,0x1265c154,0x5cee3d35,0x172625c3,
    0x643d512e,0x71fbfa82,0x225c1979,0x36a1fbfa,0x9703f223,0x3a268d87,
    0x20db31ea,0xac44afc8,0x2177d10d,0x44db84fe,0x12ee45dc,0x6d2a1f11,
    0x56a83e21,0x5b9d56e7,0x1067a275,0x4a96259d,0x65c29f98,0x598ed2a3,
    0x36e2ce54,0xb87aa3fc,0x8fedc755,0x2e62773b,0x447f7aa2,0x515cc43b,
    0x1da54753,0x2e23b53b,0x711da543,0x5c42be07,0x3ae1dc43,0xf01a23ed,
    0x0b50f101,0x1dc433b5,0x57310ee2,0x6d2a5b98,0x9e987711,0x2362c6c5,
    0xb306fa25,0x115e5490,0x54a145bd,0x4d5663b4,0x6d6c0ef8,0xfc93b25b,
    0x476b54a9,0x2fea773b,0x277b591f,0x2fea0fa8,0x25f7f31f,0x2a7a3b4a,
    0x541f512d,0x03ea23b4,0x3ea219f3,0xda83ea20,0x81bb4408,0x6987880f,
    0x510fcf98,0x507d441f,0x75cc3f7f,0x5447ab51,0x3072660f,0x541c9839,
    0x5dfd71fb,0x83f7f53c,0xb111d1f9,0xbd98f56a,0x6c77db75,0x9aba5ada,
    0xbf34addc,0xa9dcee3d,0x3332e3b4,0x369507c3,0xa54b2b31,0xf0755b1d,
    0x7c1da541,0x07c07e40,0x3ddb107c,0x0f83eb44,0x1df90788,0x03e0ed66,
    0x03b4a83e,0x07bbe25b,0x21bb981f,0x2ee61bc9,0x21662e81,0xe98ed2a7,
    0x52beb66d,0xfd34ddfa,0xc87ea7a1,0x3ed33cbe,0x8899d590,0x547b6ee6,
    0x37ba23b4,0x369507c0,0xd10b2b31,0xf17ffa63,0x203e0501,0x0f80f80f,
    0x203442c8,0x1a07880f,0x01f076b3,0x51da541f,0x3e1a0bdd,0x2b16d6c0,
    0x4cb6b63a,0x3c2cc4fe,0xb8707695,0x30953ede,0x3bbaa7bb,0x5c3bbe24,
    0xf5593fee,0x4a805b09,0x7f542c3b,0x4c76952e,0x803c8595,0x1222efea,
    0x3aa5dfd5,0x5dfd52ef,0x950bbfaa,0x2a077f5c,0x7fc42efe,0x6d660c2f,
    0x2a5dfd51,0x36952efe,0x2a5b0021,0xb5392efe,0x64fe2727,0x4c023da9,
    0x0ed2a585,0x2f8fa891,0x5d1b3073,0x2a3d0d00,0x0013e595,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x4c000000,0x313b20dc,0x10980603,0x40988573,0x36e1edc3,
    0x21300843,0x5dcc3aa8,0x2eea0ea0,0x2a370421,0xbb317b22,0x36a1dcc3,
    0x5cbbb12d,0x42a1d42d,0x5c663528,0x2a573ddd,0x9882a312,0x0731dcc0,
    0x1b986e75,0x8b885828,0x22122e0b,0x2036a3dd,0x15d11c4c,0xf911dad4,
    0x4b80e881,0x754bafea,0x6d43e62c,0x775572d8,0x125c0f54,0x2ba65b9f,
    0x217bb51e,0x3aa1f9d9,0xda9dcb21,0x4267e618,0x27aa29f9,0x6dde6219,
    0x17bb52e9,0xde99e52e,0x211f311e,0x2950e8e8,0x219bb11d,0x3bea29f9,
    0x2dfffd0d,0x43c1ebea,0x2beb228f,0xb83d5d14,0x81db30ce,0x5c3e66ea,
    0x3b3a22bd,0x777107c0,0x542eee21,0x20076974,0x95b4faac,0x42eee2b1,
    0x45a23aa8,0x6cc76790,0x4d3d30ad,0x5cb23aa8,0x25c19f33,0x17916f44,
    0x25b78815,0x215bb34b,0x3d10f8f8,0x2e0fd41f,0xc8ed2a3e,0x5bd139ca,
    0x3b73da54,0xaa5cf25b,0x3bf12efe,0x7d35dfb4,0x41dbe85d,0x7034f40e,
    0x33a25d5b,0x97107c0e,0x43f2e21f,0x207a794a,0x52b3b648,0x32e2b3bd,
    0x25b9f10f,0x23d3c868,0x2f665eea,0x64b73e21,0x8fecc772,0x6c7e604c,
    0xdbc43d9a,0x6c1dcb52,0x8875625d,0x33f224fd,0x55c7ab50,0xa8fcc3ab,
    0x3b3ae5b4,0x8f0f2992,0xe98f587c,0x36b660e9,0xd3970741,0x4f2b3141,
    0x40f8794b,0x517442e8,0x440f4bdf,0x64f2b71f,0x8ba24ac9,0x21a21168,
    0x9911eef8,0x88ef7cc1,0x1e4ee116,0x4c0ea96c,0x1dd6e6de,0x23ca5da6,
    0x221f984b,0x223c0fff,0xddf10afa,0xe9933223,0xb93bea6d,0x37ba2594,
    0x75c3c1c0,0x3d9d73dd,0x0741ff64,0x3e69fdd9,0x74c3bb60,0x3607c0ed,
    0x42543d83,0xd10e981e,0x06e6c4bd,0x0a06887b,0x477e61d8,0x21a2793c,
    0xdf70eee8,0x117fe41b,0x33ffd88d,0x37f627fd,0x5b877e60,0x23c2a954,
    0x0000afa8,0x52e12a04,0x7775402c,0x100fffe2,0x9f56893b,0xd10fffe6,
    0x3aa04000,0x3fff32ef,0x1cc7ffe6,0x0005c0f4,0x223fff30,0x0dc09106,
    0x44337660,0x08000006,0x32000000,0x0000000c,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x3332e000,0xb9837663,0x882e6e61,0x85bb50bb,
    0x8e4e62bb,0x23ec8849,0x1ddda858,0xddd98fb2,0x9dce6371,0x1ca4492b,
    0x4f776e93,0x3766552a,0x4c377663,0x2a0643dd,0x1652a534,0x443b3122,
    0x5bb70ddd,0xbb316ed4,0x886eec47,0x2e6aa352,0x5c4a2150,0x207710bb,
    0x311d5440,0x312cb857,0xae9276b2,0x4c7aba20,0x77d15af9,0x44ba72e1,
    0xb5951e9a,0x7cd442cc,0xf3310f10,0x447a32e3,0x3ad51fa9,0x361f3f11,
    0xa5cf2b10,0x27708f98,0x43f3b53b,0x3a76a0f9,0x9fb87aa2,0x47d3f73a,
    0x127641e9,0x74de433d,0x2a5d3972,0x33d11e8c,0xf9b2decc,0x89e52e99,
    0x1f510fcb,0x9f116cc4,0x87efea5b,0x299b95ca,0x435f14ba,0xf933edeb,
    0x37616adb,0x47f6e4b9,0x4d660eda,0x07887c42,0x2d8cc9aa,0x9173a1ec,
    0xac746c7f,0x5c783d6a,0xd3b53dbd,0x3ca54781,0xadcb87cc,0x2679b993,
    0x2269e81f,0xa5cb219f,0x5b54b9dd,0x98abe21d,0x27a360fe,0x441f1f14,
    0x3220f82e,0xa845a24f,0xb2df43b4,0x7d529395,0xe8236a3c,0x6ec34c68,
    0x476b54b9,0x65660fea,0x40f11ec6,0x8bb7622e,0x5c1fa86a,0x92faf62f,
    0x6dc7879f,0x07dd53db,0x20edea8f,0x33aae2e8,0x5c93f593,0x887d660e,
    0xa5cb24cf,0x7b54b9dd,0x98efe25d,0x27a363dd,0x07b17764,0x0ddc883e,
    0x876950d1,0x397db2aa,0xed887923,0x47bbb91e,0xd1770efc,0x547b7e65,
    0x6c1665bc,0x06983c44,0x403a21d1,0xc87d7c47,0x13764eae,0x54ee771e,
    0x6d47878c,0x555c1d80,0x89331b3f,0x4ffbee5a,0x2e8ac868,0x52a5d177,
    0x1b30d13c,0x927a365d,0x3ffe62f9,0x385dfd51,0x1da54344,0x644cceee,
    0xfff94ccc,0xfb800005,0x5d4a803e,0x7d43ffe6,0x5fff12ff,0x8bbe616c,
    0x23c3fffb,0x7db29b4c,0x71e0bee3,0x3da54ee7,0x12a3dfd3,0x367f2b80,
    0x51d80930,0x3bf21a2b,0xfa8fbee3,0x3fff10de,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x29800000,0x20210033,0x00cc5883,0x43db8a14,0x06206c41,
    0x3aa388e2,0x831041ee,0x308c10a8,0x218c3999,0x110980c1,0xbdb34111,
    0x00000000,0x00000000,0x00000000,0xd5f10000,0xe986cec1,0x4383c0e9,
    0x4b3b13da,0x35a5888e,0x744bc8fb,0xf98fc46b,0xdb872221,0xbecc8f23,
    0x088963a4,0x7ccf34fc,0xdddd25c1,0x0000204b,0x00000000,0x00000000,
    0x00000000,0x2b662fa8,0xfd917d44,0x4fbbb27d,0x476b23ea,0x2fa4afad,
    0x47693345,0x074c68e8,0x46000440,0x3baa00b9,0x479a3a1e,0x00000002,
    0x00000000,0x00000000,0x00000000,0x3d17b600,0x83afa21d,0x705440f8,
    0xb9a7a299,0x86e63ede,0x2db804fb,0x0000005c,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x1111f56e,0x885818c4,0x822204c6,
    0x2ee2f8fa,0x00002623,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__consolas_bold_9_latin_ext_x[560]={ 0,1,0,0,0,0,0,1,1,1,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
1,0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,-2,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,-1,0,
0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static signed short stb__consolas_bold_9_latin_ext_y[560]={ 6,-1,-1,0,-1,-1,-1,-1,-1,-1,-1,1,4,3,
4,-1,0,0,0,0,0,0,0,0,0,0,1,1,1,2,1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,-1,0,6,-1,1,-1,1,-1,1,-1,1,-1,-1,
-1,-1,-1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,-1,-2,-1,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,1,-1,0,0,0,
-2,-1,-1,0,0,1,3,3,-1,-1,-1,0,-1,-1,-1,1,-1,2,6,-1,0,1,-1,-1,-1,1,-2,-2,-2,-2,
-2,-2,0,0,-2,-2,-2,-2,-2,-2,-2,-2,0,-2,-2,-2,-2,-2,-2,1,-1,-2,-2,-2,-2,-2,0,-1,-1,-1,
-1,-1,-1,-1,1,1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,-1,-1,
-2,-1,-2,-1,0,1,-2,-1,-2,-1,-2,-1,-2,-1,-2,-1,0,-1,-2,-1,-2,-1,-2,-1,0,1,-2,-1,-2,-1,
-2,-1,-2,-1,0,-1,-2,-2,0,-1,-2,-1,-2,-1,-2,-1,0,-1,-2,1,0,-1,-2,-1,0,-1,1,-2,-2,0,
-1,-1,-1,0,-1,0,-1,-2,-1,0,1,-2,-1,-1,0,1,-2,-1,-2,-1,-2,-1,0,1,-2,-1,0,1,-2,-1,
-2,-1,-2,-1,0,1,-2,-1,0,0,-2,-1,0,0,-2,-1,-2,-1,-2,-1,-2,-1,-2,-1,0,1,-2,-1,-2,-1,
-2,-2,-1,-2,-1,-2,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-3,-3,-2,-1,-2,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static unsigned short stb__consolas_bold_9_latin_ext_w[560]={ 0,3,4,5,5,5,6,3,3,3,5,5,4,3,
3,5,5,5,5,5,5,5,5,5,5,5,3,4,5,5,5,4,5,5,5,5,5,5,5,5,5,5,4,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,3,5,3,5,5,4,5,5,5,5,5,5,5,5,5,
4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,2,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,3,5,5,5,5,
2,5,4,5,4,5,5,3,5,4,5,5,3,3,5,5,5,3,3,3,5,5,5,5,5,4,5,5,5,5,
5,5,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,5,5,5,5,5,5,5,
5,7,6,5,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,5,5,6,5,5,5,6,5,
5,5,5,5,5,5,5,5,5,5,5,6,5,5,5,5,5,5,5,5,5,5,6,6,5,5,5,5,5,5,
5,5,5,5,5,5,5,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,6,5,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5, };
static unsigned short stb__consolas_bold_9_latin_ext_h[560]={ 0,8,3,6,9,8,8,3,9,9,5,5,4,2,
3,8,7,6,6,7,6,7,7,6,7,6,6,7,6,3,6,8,9,6,6,7,6,6,6,7,6,6,7,6,
6,6,6,7,6,8,6,7,6,7,6,6,6,6,6,9,8,9,4,2,3,6,8,6,8,6,7,7,7,7,
9,7,7,5,5,6,7,7,5,6,7,6,5,5,5,7,5,9,10,9,3,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,7,9,6,6,6,
10,9,3,7,5,5,3,2,6,3,4,6,5,5,3,7,9,3,2,5,5,5,7,7,7,7,8,8,8,8,
8,8,6,8,8,8,8,8,8,8,8,8,6,8,9,9,9,9,9,5,8,9,9,9,9,8,6,8,8,8,
8,8,8,8,6,7,8,8,8,8,7,7,7,7,8,7,8,8,8,8,8,5,7,8,8,8,8,9,9,9,
8,8,8,8,8,7,9,8,9,8,9,8,9,8,8,8,6,8,8,8,8,8,8,8,8,7,8,8,9,9,
9,9,9,9,8,9,8,8,6,7,8,7,8,7,8,7,8,9,8,5,7,9,9,9,8,9,5,8,8,8,
9,7,7,6,7,6,7,8,7,8,7,8,7,7,8,7,9,8,9,8,9,8,7,6,8,7,8,7,8,7,
9,8,9,8,8,7,9,8,8,8,8,8,6,7,9,8,9,8,9,8,9,8,9,8,8,7,8,7,8,9,
8,8,7,8,7,8,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,9,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,9,10,8,8,9,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,8,7,8,8,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6, };
static unsigned short stb__consolas_bold_9_latin_ext_s[560]={ 251,211,111,226,13,199,1,116,50,54,229,
19,69,140,74,67,47,239,55,174,245,210,1,67,7,73,251,42,157,105,139,
251,64,163,187,113,175,193,169,125,115,127,131,43,61,151,145,136,133,241,121,
107,109,101,103,97,91,85,79,76,13,104,57,130,89,37,103,25,55,13,216,
89,226,186,114,250,13,205,241,202,31,77,235,184,142,172,211,41,1,148,217,
186,7,233,94,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,251,222,19,
7,154,166,10,26,100,53,247,7,78,140,178,84,63,208,252,31,124,244,55,
120,136,53,47,35,204,198,192,251,14,233,155,125,131,229,232,139,193,221,215,
157,163,169,187,205,31,20,32,73,85,67,61,13,8,7,25,31,221,151,190,
245,239,145,227,61,97,119,19,144,19,1,181,175,80,50,104,110,137,168,133,
127,121,115,109,25,44,91,85,79,73,215,239,203,49,43,37,31,25,26,209,
7,138,247,125,235,108,223,216,209,181,203,197,191,185,179,173,167,161,116,149,
143,98,86,80,49,58,43,99,70,86,80,196,150,62,162,50,156,38,92,26,
119,14,223,32,150,162,245,232,191,199,214,208,202,197,136,129,49,122,214,98,
152,38,140,86,128,56,62,115,68,79,97,37,238,173,105,74,220,112,65,103,
71,121,95,13,109,1,91,164,119,227,158,146,184,190,177,160,83,180,220,167,
226,156,196,144,244,131,1,250,180,8,238,20,92,32,44,25,56,19,68,59,
37,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,44,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,38,1,92,74,19,170,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,134,232,146,184,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1, };
static unsigned short stb__consolas_bold_9_latin_ext_t[560]={ 10,31,64,49,1,31,40,64,1,1,57,
64,64,64,64,31,49,49,57,40,49,40,49,57,49,57,49,49,57,64,57,
1,1,57,57,49,57,57,57,49,57,57,49,57,57,57,57,49,57,22,57,
49,57,49,57,57,57,57,57,1,31,1,64,64,64,57,31,57,31,57,40,
49,40,40,1,40,49,57,57,49,49,49,57,49,49,49,57,64,64,49,57,
1,1,1,64,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,10,40,11,
57,49,49,1,1,64,49,57,64,64,64,49,64,64,49,57,64,64,40,11,
64,64,64,64,64,40,40,40,31,40,31,22,22,22,22,49,31,31,31,31,
31,31,31,31,31,57,40,1,11,11,11,11,64,40,12,11,11,1,31,49,
31,31,31,31,31,31,22,57,40,31,31,31,31,40,40,40,40,22,40,31,
31,31,31,31,64,40,31,31,31,31,1,1,1,31,31,31,31,31,40,1,
31,1,22,1,22,1,22,22,22,57,22,22,22,22,22,22,22,22,40,22,
22,1,1,1,11,1,11,22,1,22,22,49,40,22,40,22,40,22,40,22,
1,22,57,40,1,1,1,11,1,57,11,11,11,1,40,40,57,40,49,40,
11,40,11,40,11,40,40,11,40,11,11,11,11,1,22,40,49,22,49,11,
49,11,49,11,11,12,11,11,49,1,11,11,11,11,11,49,49,1,11,1,
11,1,11,1,11,1,22,11,40,22,40,22,1,22,22,49,22,49,22,49,
49,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,1,
57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,1,1,22,22,1,11,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,57,57,57,57,57,57,57,57,57,57,11,40,11,11,57,57,57,
57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,57,
57,57,57,57,57,57,57,57,57, };
static unsigned short stb__consolas_bold_9_latin_ext_a[560]={ 79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_bold_9_latin_ext_BITMAP_HEIGHT or STB_FONT_consolas_bold_9_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_bold_9_latin_ext(stb_fontchar font[STB_FONT_consolas_bold_9_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_bold_9_latin_ext_BITMAP_HEIGHT][STB_FONT_consolas_bold_9_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_bold_9_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_bold_9_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_bold_9_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_bold_9_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_bold_9_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_bold_9_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_bold_9_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_bold_9_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_bold_9_latin_ext_s[i] + stb__consolas_bold_9_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_bold_9_latin_ext_t[i] + stb__consolas_bold_9_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__consolas_bold_9_latin_ext_x[i];
            font[i].y0 = stb__consolas_bold_9_latin_ext_y[i];
            font[i].x1 = stb__consolas_bold_9_latin_ext_x[i] + stb__consolas_bold_9_latin_ext_w[i];
            font[i].y1 = stb__consolas_bold_9_latin_ext_y[i] + stb__consolas_bold_9_latin_ext_h[i];
            font[i].advance_int = (stb__consolas_bold_9_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_bold_9_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_bold_9_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_bold_9_latin_ext_s[i] + stb__consolas_bold_9_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_bold_9_latin_ext_t[i] + stb__consolas_bold_9_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_bold_9_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__consolas_bold_9_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__consolas_bold_9_latin_ext_x[i] + stb__consolas_bold_9_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__consolas_bold_9_latin_ext_y[i] + stb__consolas_bold_9_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__consolas_bold_9_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_bold_9_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_bold_9_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_bold_9_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_bold_9_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_bold_9_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_bold_9_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_bold_9_latin_ext_LINE_SPACING
#endif

