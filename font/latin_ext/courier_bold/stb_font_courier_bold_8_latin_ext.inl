// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_bold_8_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_bold_8_latin_ext'.
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

#define STB_FONT_courier_bold_8_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_courier_bold_8_latin_ext_BITMAP_HEIGHT         58
#define STB_FONT_courier_bold_8_latin_ext_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_bold_8_latin_ext_FIRST_CHAR            32
#define STB_FONT_courier_bold_8_latin_ext_NUM_CHARS            560

#define STB_FONT_courier_bold_8_latin_ext_LINE_SPACING           4

static unsigned int stb__courier_bold_8_latin_ext_pixels[]={
    0x4c1c0200,0x2044c282,0x2a811303,0x88280a98,0x5540cc0a,0x20aa8280,
    0x80aa8098,0x40981442,0x4401b818,0x22a0620b,0x821414c0,0x44c41429,
    0x4c1a8041,0x042214c2,0x22180cc2,0x220dc409,0x4c40cc1a,0x20a60530,
    0x3054c198,0x0cc0b983,0x8550a266,0x214c2899,0x21542899,0x20a819a8,
    0x33720998,0x21440c42,0x235e4c09,0x889d4098,0x98893398,0x20cc1cc0,
    0x0a98e248,0x233310aa,0x15442cd9,0x04d442aa,0x99c4b9b9,0x5d52c08b,
    0x04cc4750,0x5e4c1131,0x306a0336,0xa5ec4dbb,0xdb954bd8,0x57904cc4,
    0x7904cc4d,0x904cc4d5,0x04cc4d57,0x5e4cd579,0xc99aaf26,0x88f3663b,
    0x479b31dc,0x45dca824,0x21d37938,0x99b72a29,0x8f3663cd,0x5e4ce239,
    0xd9b90e66,0x86e4c492,0xd3791dc8,0x44a226cc,0x0b0dc2ec,0x26abc8e6,
    0x509269bc,0x8c835103,0x4c2b665d,0xc92690ad,0x92c2e4ba,0x2585c975,
    0x2c2e4bac,0x585c9759,0x32c2e092,0x509243b9,0x76564923,0x27112690,
    0x2914cb0b,0x49249249,0x049388ae,0xb25690b1,0x22350530,0x032e61bd,
    0x8aa0fe21,0x42e39875,0x0c86f625,0xbd307722,0x22249cc8,0x2695114a,
    0x724a64dd,0x5c929923,0x2e494c91,0x2e494c91,0x70ecac91,0x0d8dc923,
    0x248d4249,0xd9973664,0x91b9c44d,0x49bb314c,0x38924924,0x30ecace2,
    0xb35bed85,0xa8299c5b,0xd1b916e1,0x2e5dce21,0x336fdc32,0x2246e7dd,
    0x4e66cc5b,0x20cd83dd,0x336e2deb,0x54c59b72,0xd89b7623,0x89b7621c,
    0x9b7621cd,0x37621cd8,0xd9873626,0x1073625c,0x4c2dd885,0x885bb10c,
    0x9e43a882,0x83661dd8,0x8b7623a9,0x89622dd8,0x0dcb9b33,0xb937a598,
    0x8864c0dc,0x1c42882c,0x8288b031,0x88736228,0xd974882c,0x0a4cda8d,
    0x000ae000,0x00000000,0x06200000,0x8800dc40,0x00882a81,0x00015c08,
    0x17100000,0xa86e2000,0x4400881b,0x08818800,0x0881ba80,0x01f9be80,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x0a053000,0x8133026a,0x8a829819,
    0x4c381440,0x0ccc4042,0x33055411,0x40cc1881,0x5409a829,0x05c0cc09,
    0x20aa8098,0x884281a8,0x20aa8280,0x02044c29,0x2209a811,0x01800420,
    0x808882aa,0x381820aa,0x31288088,0x1044c413,0x0c4c4153,0x4d443351,
    0x9886e621,0x53054408,0xb9b046c1,0x8851064d,0x5325ec41,0x82983350,
    0x9b8180b8,0x2204c440,0x2a20660a,0x311a7360,0x2aa0a983,0x3cd88a60,
    0x754710aa,0x6c97d93c,0x2205cc40,0x8b3ae098,0x22361a98,0x98822221,
    0x5e47220a,0xc9a6f26a,0x9aaf26ab,0x2af26abc,0xbc9aaf26,0x4daf266a,
    0x459d36bc,0xd8962a9a,0x4c79b34b,0x479b30ad,0x33666dca,0xd99af263,
    0x9267543c,0xb5e4cd57,0x2f263cd9,0xda9676e6,0x44f7665e,0x279b33cd,
    0x79b32db8,0x59c4f362,0x0e745637,0x9cd89759,0xb9b24a66,0x9b0b3a6d,
    0x225d64d3,0xd896173a,0x172c2e1b,0x85cb0b96,0x2172c2e5,0xb0490925,
    0x6ccb0a60,0x5112490a,0x24d24929,0x49049249,0x42e59544,0x92490925,
    0x64bb3704,0x896625ca,0x556192db,0x456193cd,0x5d6b52db,0x5317e690,
    0x64b3b712,0x8aa6a69c,0x4cb3b705,0x23739892,0x246e2dc4,0x491b9237,
    0x248dc91b,0x3206491b,0x76c5cb80,0x94a88961,0x9259b724,0x24937664,
    0x24876564,0x37167544,0x49240c92,0x259cd80c,0x946c3dfb,0x7bb33cda,
    0x27bb31cc,0xca543cda,0x8972e4aa,0x2ecdc6dd,0x970a60a2,0x225d9b8b,
    0xd89cc6dd,0xb10b221c,0x10e6c439,0x0e6c439b,0x66c439b1,0x6cd33661,
    0x20c4144c,0x2259b71a,0xb11cc2dd,0x223a985b,0x973662dd,0x415c2dd8,
    0x33661cd8,0x6cc5bb14,0x40a1444c,0x88005deb,0x00510000,0x8b39b000,
    0x801ed818,0xe98059cd,0x006ea03e,0x00000000,0x03103000,0x80044000,
    0x2000002b,0x0000003b,0x00000188,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x840a6000,0x0aa826a0,
    0x40502814,0x26a0cc09,0x44102aa0,0x220c4099,0x835044c1,0x4c089808,
    0x14c1a882,0x0a602222,0x88310266,0x221c0aa1,0x21540841,0x44157060,
    0x506604c1,0x2a813503,0x2a044198,0x35115408,0x866a214c,0x0a61ccd9,
    0x202a2153,0x98089828,0x882aa21a,0x64c2a622,0x88b7b93c,0x39826621,
    0x42982aa2,0x26220a98,0x98826620,0x11a6f218,0x0c4c4313,0x314a8151,
    0x26099813,0x449bd309,0x0744ec19,0x304cc39b,0x530ee441,0x81981550,
    0x459990aa,0x983220ba,0x59702aa2,0x66ccb24b,0x3723b913,0xa8f3622c,
    0x3ba20ddc,0x26b7b91d,0x2b7b93cc,0x19934ddc,0xbdc9e64c,0x37279935,
    0x6479935b,0x92eb24ba,0x2b2e4bac,0x2ba2c2e5,0x4b5970e9,0xac9d42ea,
    0x4cf7664b,0x372163dd,0xd12c2e2c,0xd877225d,0x39911cc2,0xbd30ee44,
    0x7771dc88,0xed87722d,0x2aa79b30,0x1925e4c0,0x1ccb0c92,0x6dc47793,
    0x8877b762,0x19930beb,0x664d3772,0x2e679930,0x4d37721b,0x29bb90cc,
    0x9bb90cc9,0x24a6494c,0xa8bb1253,0x45dbc891,0x3188585d,0x22598925,
    0x9877ea59,0x9666e3bc,0x30e62efa,0x37663985,0x066c1cc2,0x259ac8e6,
    0x2191c439,0x5cc59d35,0x98b7624a,0xc98e63dd,0xd8f36a1d,0x376a0ded,
    0x2637730a,0x437733cc,0x99b7b239,0x237733cc,0x37733cc9,0xdd88f326,
    0xd89b7626,0x3621cc6d,0x22e75c1d,0x8c475839,0x146c6dd8,0x260c451b,
    0x0f6f61dc,0x3a63989b,0x2e3db12e,0x2a1cc5dc,0xb31cc3de,0x8a61cc59,
    0x92533dd9,0x30006adc,0x363725dd,0x3b3a0000,0x40dbd92e,0x09006dec,
    0x3206dec8,0x000006de,0x09107b60,0x1ed89595,0x7001b7ee,0x977aebbd,
    0x06c6e408,0x5dd31540,0x200e61cc,0x26fa2ee9,0x405dd30f,0x01952ee9,
    0x0006acc8,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x88880000,0x30261cc0,0x18850530,0xa82660a6,
    0x85104cc0,0x0a604c29,0x8080a851,0x808881b9,0x98044429,0x1350aa1a,
    0x81881150,0x260a2099,0x4c288282,0x08980981,0x300882a8,0x00810883,
    0x19819831,0x57905050,0x33166c4d,0x304d43a8,0x542c2881,0x4c45331d,
    0x22135109,0x550661aa,0x88a204c1,0x894645cd,0xda86dca9,0x260f3b60,
    0x3883511d,0x1441b988,0x815304cc,0x4d4140aa,0x5e982a60,0x503503a8,
    0x37906a05,0x36208d8d,0x4413314b,0x822620a9,0x2c2e0988,0x9e6cc336,
    0x79b33cd9,0x66ccf366,0x3dc886e3,0xadee4732,0xb7b95bdc,0x664cf326,
    0x32679933,0xbb82373c,0x9269310b,0x59545dc9,0xdcc97726,0xcd8b9b12,
    0x89736269,0x4b9b11dc,0xb9b11dc8,0xdc88ee44,0x991066c1,0x6445e983,
    0x222f4c1c,0x8b3a61bd,0x97590ad9,0x75925d64,0x3725d649,0x19398992,
    0x21958656,0x58656195,0x2291172c,0x219931ba,0x19930cc9,0x6ee53772,
    0x3729bb94,0xb899b14d,0x9bb3754a,0x2dea8b24,0xbac6a592,0x259db811,
    0x2e39811b,0x46e39811,0x50e61cc0,0x16ecc7bd,0x5bb3066c,0x85b819b0,
    0x534a8885,0x94c92992,0x9b124a64,0xd986ecc3,0x267bb33d,0x27bb33dd,
    0x98dc3dd9,0x4caa61cd,0x237731bb,0x79931bb9,0x664cf326,0x24c79933,
    0x534a95c2,0x7076e4c7,0x21db9305,0x13362b1a,0x66c4bb37,0x99b11cc4,
    0x13362398,0x5f439873,0x8bb971f9,0x372e3dea,0x911ef545,0x6dcb9705,
    0x44dbb12c,0x9b7626dd,0x51006dd8,0x20000000,0x6f640028,0x3b2dbd96,
    0x2000006d,0x111dcc08,0x03b800ae,0x20077b20,0xe98059cd,0x1774c02e,
    0x74cbba60,0xd003502e,0x7d001f37,0x006ea1f3,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x20000000,0x41541bb9,0x44219880,0x2ba81980,0x40981771,0x1c41cc2a,
    0x2804c475,0x40104054,0x01809819,0x0260a053,0x2883306a,0x01501888,
    0x1026206e,0x00b81103,0x150530a6,0x11010140,0x39851010,0x3b1dd4c0,
    0x2615dcc1,0x097590dc,0x11dbb835,0x9af26139,0x55913ac9,0x275510c8,
    0x20c442ea,0x2555c109,0x0cc0d453,0x204d41d4,0x64c2880a,0x4c42a625,
    0x440cc408,0x4c19882a,0x4dbb36bc,0x2720ecd9,0x4d44b300,0x80a80cc1,
    0x33662ac9,0xec879b32,0x14475911,0x21de8864,0x14c09abb,0x8bd31253,
    0x3bd11cca,0x4b7a2092,0x2624491a,0xeb82b62e,0x992eae2c,0x87322092,
    0x33221cc8,0xc8873221,0x9873221c,0x2b7b90fc,0x2f4c5acb,0x2f4c2f4c,
    0x4bb19092,0x3ceb8b0c,0xc9a97726,0x3a617a62,0x209cbb85,0x732493b8,
    0x896f2231,0x72562581,0x14ce1335,0x19b0dbd3,0x2b481c88,0x275730ec,
    0x206e38aa,0x2531d648,0xbb12ce44,0x2dd994cb,0xdd98b766,0xd98b7662,
    0x98b7662d,0x4199348a,0xb019b05d,0x6419b019,0xb124e640,0x24b2b8bb,
    0x3616554b,0x5c0cd80c,0x48a20abc,0x261bd892,0x3883b13c,0x57731e64,
    0x05306e5c,0x4720f7aa,0xb9b31dc9,0x19b16ec4,0x5cb7262c,0x1a7326df,
    0x5c1203a6,0x9772e5dc,0x372e5dcb,0xcb9772e5,0x4cf7725d,0x2a0e61bb,
    0x1ef543de,0xcd98f7aa,0xb105bd74,0x3263ced8,0x411710ed,0x6f543dea,
    0x221564c3,0x930b7622,0xac986e44,0x88000002,0x41f37d00,0x000002bb,
    0x00000066,0x00000000,0x3b200000,0x7d07b66d,0x7cdf41f3,0x803e6fa0,
    0x0005d402,0xf37d0ea0,0x007cdf41,0x98008000,0x0000000a,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x51026200,0x0cc19980,0x0220260a,
    0x310a2055,0x02808441,0x10dc4111,0x0804c437,0x260ccc41,0x05408442,
    0x44311022,0x2022219b,0x204d4182,0x1022622a,0x88804413,0x204420c0,
    0x08820808,0x409a8226,0x31004c08,0x3e60dc43,0xe8811c0d,0x8620a1de,
    0x0e6444a8,0x1cb98291,0x5edcb732,0x376044c5,0x750ea0dd,0x6e541754,
    0x44db9b0d,0x96b2e19a,0xa866c298,0x00dd45ed,0x41510544,0xa86ae0a9,
    0x96e643ae,0x2e6cc1db,0x44bac8ea,0x5cf3622a,0x88aa2daa,0xb1e6cc38,
    0x3bd97011,0x12d6c1d4,0xeb889959,0x6c45b10b,0xd98b3ae2,0x9932ea2d,
    0x563362db,0x37a65eea,0x30ef4e44,0x9d075477,0x263bdbb0,0x3aaf61b9,
    0x2d883720,0x5cac87aa,0x76cc01cc,0x3667db33,0x0560d13e,0x674d6336,
    0x5b12c322,0x8b62494c,0x92532db8,0x8b3ae2d8,0x26754b0c,0x07305f52,
    0x98b88b7d,0x982b76a2,0x925314c2,0x27225dcb,0xacae1cc5,0xc82c4ab9,
    0x90e60ddd,0x6ec3ae47,0xa83b60de,0x206e44de,0xfb83a229,0xb801cc3d,
    0x90ee1dc3,0xacae1d60,0x1eecc929,0x46dd88a6,0x44f36a29,0x5314c5dd,
    0xac3dd992,0x260adac5,0xb3027d43,0x99776743,0x27dd33ee,0x817069cc,
    0x49bb50e9,0xd5971dec,0x9800efd4,0x27db33ee,0x36006dfb,0xb0afa20e,
    0xa9f74c1d,0x3a6054df,0x2111113e,0x9bf34df9,0x274537e6,0xbd91b7ee,
    0x201a72e3,0x74c03ee9,0xee98003e,0x100d3993,0xeeda8d3d,0x0007dd32,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x03300000,0x054130aa,0x82a809a8,0x10206220,0x26011013,
    0x2a044440,0x21102621,0x10884cc0,0x44440844,0x31018441,0x13115433,
    0x440988a0,0x40884199,0x26620020,0x9884cc00,0x44006d40,0x04557308,
    0x22220422,0x21102220,0x08b98620,0xaa8260d4,0x5dc0a980,0x198f3262,
    0xcdc97362,0xd3073223,0x225acb8b,0xb90baa3b,0xb9eeccb9,0x16b2e5ac,
    0x56c1d35d,0x6e6d20e9,0x37255556,0xe987d42c,0x836faa4c,0x4df469cd,
    0x7b94b80f,0x3b9114cb,0x20c8b732,0x9f6cc0cb,0x45b12bd8,0x76744cea,
    0xbb0b3ae5,0x6446aa61,0xd88b622e,0xe98b3a62,0xc8b3a24d,0x5c5b14dd,
    0x32664c11,0x419b05bb,0x21c44bc9,0x4c44d985,0x42e42ec5,0x4dcc5dbc,
    0xc8553503,0xcd877931,0x1bb16760,0x6e459db8,0x9316d46c,0x9872e619,
    0xdd8ac6a3,0x4770f664,0xb0a63cd8,0x4cb7190d,0x530dd892,0x260fe235,
    0x125314c2,0x3326120b,0x4cd88a63,0xdcb96ae6,0x731ef545,0x3ac38895,
    0x51b032e6,0x206ec1cc,0x0cd85ceb,0x164298e6,0x77543b93,0x07b06fa2,
    0xcac8bb37,0x77316cc5,0x39872e63,0x49db2c6a,0x537e63d9,0x7dd32999,
    0xb5d1af72,0x89a7323b,0x9770c410,0xe99f74cb,0x54d5993e,0x0b7a61df,
    0xc807dd30,0x37d004de,0x99ab721f,0x4dbf72ed,0xbd70e8dc,0x5990f6cb,
    0xa84aca8d,0x5c7b60c4,0x1b1b92de,0x43fa9744,0x59cd83ea,0x5407cd74,
    0x14cdbd94,0x37b25dd3,0x00032e01,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x42208200,0x44400840,0x298a6080,0x08311cdc,0x1541a8a6,0x3044aaaa,
    0x5cd52211,0x55128a20,0x544a6155,0x4644131a,0x33322131,0x0000001c,
    0x00000000,0x00000000,0x70000000,0xeabd8999,0x261d5990,0xcb9324de,
    0x44b3263e,0x0daa9623,0xb71cc376,0xa826e144,0x5e4735aa,0x22cec150,
    0x0aaaa830,0x4111aa88,0x88861c89,0x00000008,0x00000000,0x00000000,
    0x20000000,0x6f545ddb,0x2160dec4,0x3617a64b,0x21d4790e,0x2513328a,
    0x1d42a608,0x98648062,0x00073301,0x00000000,0x00000000,0x00000000,
    0x00000000,0x44000000,0x2a2dc2be,0x2b6e01df,0x00000cc5,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_bold_8_latin_ext_x[560]={ 0,1,0,0,0,0,0,1,1,0,0,0,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,1,1,-1,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
0,-1,-1,0,0,0,0,0,0,0,-1,-1,0,0,0,1,0,0,0,-1,1,0,-1,0,0,0,0,0,0,0,
0,0,0,-1,0,0,-1,0,0,0,0,0,0,-1,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,
1,0,1,-1,0,0,-1,0,-1,-1,1,0,1,1,1,0,0,1,1,1,0,0,0,-1,0,0,-1,-1,-1,-1,
-1,-1,-1,0,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,-1,0,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static signed short stb__courier_bold_8_latin_ext_y[560]={ 5,0,0,0,0,0,1,0,0,0,0,0,4,2,
4,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,1,0,1,0,1,0,1,0,0,
0,0,0,1,1,1,1,1,1,1,0,1,1,1,1,1,1,0,0,0,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,1,0,0,1,0,
0,0,0,0,0,2,2,2,0,-1,-1,0,0,0,0,1,0,2,4,0,0,2,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
-1,0,-1,0,0,1,-1,0,-1,0,-1,0,-1,0,-1,0,0,0,-1,0,-1,0,-1,0,0,1,-1,0,-1,0,
-1,0,-1,0,0,0,-1,-1,0,0,-1,0,-1,0,-1,0,0,0,-1,1,0,0,-1,0,0,0,1,-1,-1,0,
0,0,0,0,0,0,0,-1,0,0,1,-1,0,0,0,1,-1,0,-1,0,-1,0,0,1,-1,0,0,1,-1,0,
-1,0,-1,0,0,1,-1,0,0,0,-1,0,0,0,-1,0,-1,0,-1,0,-1,0,-1,0,0,1,-1,0,-1,0,
-1,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,-1,0,-1,
0,-1,0,-1,-1,-1,-1,-1,-1,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-3,-2,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static unsigned short stb__courier_bold_8_latin_ext_w[560]={ 0,2,4,4,4,4,4,2,3,3,4,4,2,4,
2,4,4,4,4,4,4,4,4,4,4,4,2,2,5,5,5,4,4,6,5,4,4,4,5,5,5,4,5,5,
5,6,6,5,5,5,5,4,4,5,6,6,5,5,4,3,4,3,4,6,2,5,6,5,5,4,5,5,5,4,
4,5,4,6,5,4,6,5,5,4,5,5,5,6,5,5,4,3,2,3,4,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,2,4,4,4,5,
2,4,3,6,4,4,5,4,6,6,3,4,3,3,2,5,4,2,2,3,4,5,5,6,5,4,6,6,6,6,
6,6,6,4,4,4,4,4,4,4,4,4,5,6,5,5,5,5,5,4,5,5,5,5,5,5,5,4,5,5,
5,5,5,5,6,5,4,4,4,4,4,4,4,4,4,5,4,4,4,4,4,4,5,5,5,5,5,5,6,5,
6,5,6,5,6,5,4,5,4,5,4,5,4,5,4,5,5,5,4,4,4,4,4,4,5,4,4,4,5,5,
5,5,5,5,5,5,5,5,5,5,4,4,4,4,4,4,4,4,4,4,5,5,5,4,5,5,5,5,4,5,
4,5,4,5,4,5,4,6,5,6,5,6,5,6,4,4,5,4,5,4,5,4,6,6,5,5,5,5,5,5,
4,4,4,4,4,4,4,4,4,5,4,5,4,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,5,5,
5,4,4,4,4,4,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,5,5,4,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,5,4,4,5,
4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,6,5,6,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5, };
static unsigned short stb__courier_bold_8_latin_ext_h[560]={ 0,6,3,6,6,6,5,3,7,7,4,5,3,2,
2,6,6,5,5,6,5,6,6,6,6,6,5,5,5,4,5,6,6,5,5,6,5,5,5,6,5,5,6,5,
5,5,5,6,5,7,5,6,5,6,5,5,5,5,5,7,6,7,3,2,2,5,6,5,6,5,5,6,5,5,
7,5,5,4,4,5,6,6,4,5,6,5,4,4,4,6,4,7,7,7,2,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,6,6,5,4,5,
7,6,2,6,3,3,3,2,6,2,4,5,3,3,2,6,6,2,3,3,3,3,5,5,5,6,6,6,6,6,
6,6,5,7,6,6,6,6,6,6,6,6,5,6,7,7,7,7,7,4,6,7,7,7,7,6,5,6,6,6,
6,6,6,6,5,6,6,6,6,6,5,5,5,5,6,5,6,6,6,6,6,4,5,6,6,6,6,7,7,7,
6,6,6,6,6,5,7,6,7,6,7,6,7,6,6,6,5,6,6,6,6,6,6,6,6,6,6,6,7,7,
7,7,7,7,7,7,6,6,5,5,6,5,6,5,6,5,6,6,6,4,6,7,7,7,7,7,4,6,6,7,
7,5,5,5,5,5,5,6,5,7,6,6,5,5,6,6,7,6,7,6,7,6,5,5,6,5,7,6,6,5,
7,6,7,6,7,6,7,6,7,7,6,6,5,6,7,6,7,6,7,6,7,6,7,6,6,5,6,5,6,7,
6,6,5,6,5,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,5,5,6,5,5,5,
5,5,5,5,5,5,5,5,5,5,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,7,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,6,6,6,5,7,
6,7,6,7,7,7,7,7,7,7,7,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,8,8,6,6,7,6,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5, };
static unsigned short stb__courier_bold_8_latin_ext_s[560]={ 14,50,85,87,162,202,200,82,70,224,36,
185,90,115,112,218,213,76,132,223,143,197,161,156,208,146,252,124,174,1,205,
130,104,63,51,74,195,180,154,202,70,190,173,87,81,167,160,135,148,186,137,
127,127,156,117,110,104,98,93,141,192,131,54,132,129,57,91,45,98,35,29,
1,17,12,108,1,249,232,239,230,13,85,20,208,121,197,14,7,226,115,211,
163,167,176,124,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,14,253,141,
125,216,114,215,248,120,166,62,49,76,115,123,105,26,49,41,45,102,179,192,
99,59,67,71,93,240,7,43,151,109,116,67,60,53,185,14,251,42,212,217,
207,77,72,61,50,174,37,114,113,157,151,79,245,79,127,43,31,19,47,1,
37,31,25,19,13,7,1,95,242,237,232,227,222,26,21,120,40,197,31,187,
182,177,172,167,250,130,150,144,138,132,7,120,245,108,102,95,89,82,37,49,
66,54,55,144,44,133,31,26,20,54,7,203,249,244,239,234,229,223,218,213,
208,170,96,108,30,84,145,119,125,156,150,60,180,135,192,125,203,113,219,102,
97,92,221,81,180,192,198,209,218,30,44,251,228,234,168,136,228,79,89,84,
238,234,149,221,214,224,235,197,192,90,182,102,172,138,145,242,72,178,66,96,
69,75,23,25,184,20,167,85,177,74,187,65,59,227,232,102,202,37,208,25,
245,13,1,1,7,239,13,25,246,31,107,19,203,38,59,147,64,152,162,157,
162,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,130,141,141,140,
141,141,141,141,141,141,141,141,141,141,141,141,141,162,186,141,141,141,141,141,
141,141,141,141,141,141,141,141,135,213,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,118,107,
173,7,102,168,90,53,78,72,66,60,54,48,42,36,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,7,1,196,189,14,156,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,141,
141,141,141,141,141,141,141,141,141, };
static unsigned short stb__courier_bold_8_latin_ext_t[560]={ 9,18,51,18,24,24,45,51,10,1,51,
45,51,51,51,31,31,45,45,31,45,31,31,31,31,32,31,45,45,51,45,
32,32,45,45,32,45,45,45,31,45,45,31,45,45,45,45,32,45,1,45,
25,45,24,45,45,45,45,45,1,24,1,51,51,51,45,32,45,32,45,45,
25,45,45,1,45,39,45,45,39,25,32,51,39,25,39,51,51,45,25,45,
1,1,1,51,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,
39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,9,24,32,
39,45,39,1,24,51,31,51,51,51,51,32,51,51,39,51,51,51,31,31,
51,51,51,51,51,31,39,39,32,32,32,32,32,32,31,39,1,32,24,24,
24,25,25,25,25,39,25,10,1,1,1,10,45,32,10,10,10,10,32,39,
32,32,32,32,32,32,32,39,24,24,24,24,24,39,39,39,45,24,39,24,
24,24,24,24,45,39,25,25,25,25,10,10,1,25,25,25,25,25,39,10,
25,10,25,10,25,10,25,25,25,39,25,17,17,17,17,17,17,17,17,17,
17,1,10,10,1,1,1,1,1,17,18,39,39,18,39,18,39,18,39,18,
18,18,45,18,1,1,1,1,1,51,18,10,1,1,39,39,31,39,39,39,
10,31,10,10,10,39,39,10,10,10,10,10,10,10,18,39,39,17,39,1,
18,18,45,1,17,1,10,10,10,10,10,10,10,10,10,39,10,10,10,10,
10,10,18,10,18,1,18,18,31,18,39,18,1,18,18,39,18,39,10,39,
39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,18,39,39,18,
39,39,39,39,39,39,39,39,39,39,39,39,39,17,39,39,39,39,39,39,
39,39,39,39,39,39,39,39,1,39,39,39,39,39,39,39,39,39,39,39,
39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,18,18,
17,45,1,17,1,18,1,1,1,1,1,1,1,1,39,39,39,39,39,39,
39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,
39,39,39,1,1,17,17,1,10,39,39,39,39,39,39,39,39,39,39,39,
39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,
39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,
39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,
39,39,39,39,39,39,39,39,39, };
static unsigned short stb__courier_bold_8_latin_ext_a[560]={ 68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,68,
68,68,68,68,68,68,68,68, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_bold_8_latin_ext_BITMAP_HEIGHT or STB_FONT_courier_bold_8_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_bold_8_latin_ext(stb_fontchar font[STB_FONT_courier_bold_8_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_courier_bold_8_latin_ext_BITMAP_HEIGHT][STB_FONT_courier_bold_8_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_bold_8_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_bold_8_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_bold_8_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_bold_8_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_bold_8_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_bold_8_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_bold_8_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__courier_bold_8_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__courier_bold_8_latin_ext_s[i] + stb__courier_bold_8_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__courier_bold_8_latin_ext_t[i] + stb__courier_bold_8_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__courier_bold_8_latin_ext_x[i];
            font[i].y0 = stb__courier_bold_8_latin_ext_y[i];
            font[i].x1 = stb__courier_bold_8_latin_ext_x[i] + stb__courier_bold_8_latin_ext_w[i];
            font[i].y1 = stb__courier_bold_8_latin_ext_y[i] + stb__courier_bold_8_latin_ext_h[i];
            font[i].advance_int = (stb__courier_bold_8_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__courier_bold_8_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_bold_8_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_bold_8_latin_ext_s[i] + stb__courier_bold_8_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_bold_8_latin_ext_t[i] + stb__courier_bold_8_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_bold_8_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__courier_bold_8_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__courier_bold_8_latin_ext_x[i] + stb__courier_bold_8_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__courier_bold_8_latin_ext_y[i] + stb__courier_bold_8_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__courier_bold_8_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_bold_8_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_bold_8_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_bold_8_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_bold_8_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_bold_8_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_bold_8_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_bold_8_latin_ext_LINE_SPACING
#endif

