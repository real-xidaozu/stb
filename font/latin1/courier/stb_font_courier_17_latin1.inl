// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_17_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_17_latin1'.
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

#define STB_FONT_courier_17_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_17_latin1_BITMAP_HEIGHT         76
#define STB_FONT_courier_17_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_courier_17_latin1_FIRST_CHAR            32
#define STB_FONT_courier_17_latin1_NUM_CHARS            224

#define STB_FONT_courier_17_latin1_LINE_SPACING           8

static unsigned int stb__courier_17_latin1_pixels[]={
    0x20006200,0x20051028,0x0006600a,0x006a0070,0x10280007,0x01500e02,
    0x0103a95c,0x804c4144,0x05014402,0x204cc054,0x00144010,0x440a200e,
    0x0ea032cb,0x64c69a20,0x80322000,0x501dc04a,0x01700597,0x02b80193,
    0x100901b1,0x89481959,0x1b102ceb,0x07501020,0x0eea0362,0x91019591,
    0x01959101,0x41ad81b1,0x01dc0574,0x06c401c8,0x85b88644,0x208028a8,
    0x06000b80,0x018804c0,0x048028a2,0x09800062,0x10a80350,0x88649485,
    0x33261406,0x02439952,0x2a1c4015,0x54050510,0x12140510,0x04c048ae,
    0x80a00260,0x1770480c,0x35305540,0x2055cc5c,0x106a60aa,0x2f220379,
    0x80379101,0x54b3261a,0x555531cc,0xcca9664c,0x9664c121,0x49291cca,
    0x99999104,0x0e205c59,0x910cc889,0xcc89c419,0x9912cccc,0x33221999,
    0x99910ccc,0x91a12199,0x4c099930,0x999104cc,0x80245999,0x64c04cc9,
    0xccb83620,0x83261da9,0x6ccf20d8,0x41d99e41,0x2c03b33c,0x988e205c,
    0x2205c499,0x40b80dc3,0x37725238,0x5c710e20,0x26121c40,0x88e20dc3,
    0x20241c43,0x26242404,0x05570244,0x87102ab8,0x57000e38,0x214c4805,
    0x2624584b,0x29960a62,0x4160a658,0x1c40b82a,0x1c40b890,0x2205c122,
    0x1e540523,0x40b8e0e2,0x8dc12238,0x0e238838,0x8090120e,0x321dc484,
    0x29012900,0x24707104,0x26025200,0x1206e123,0x5c0e2473,0x81c6e071,
    0x8170581b,0x81712038,0x0b80b838,0x370091c4,0x0b8199c4,0xa405b1c4,
    0x99c47104,0x80901201,0x2a15c484,0x20173885,0x27101738,0x1000e819,
    0x269002e7,0x48483b83,0x25304873,0x4c125304,0x40b814c2,0x81712038,
    0x0b848838,0x14ca91c4,0x2dce8832,0x121c40b8,0x47101e98,0x1202dce8,
    0x44848090,0x10b8243a,0x41c42e07,0x4982dce8,0x3885c244,0xeb825cc0,
    0x97305712,0x824aa090,0x90aa092a,0x80e205c0,0x40e205c4,0x8e205c0c,
    0x32f32694,0xa8199c42,0x901214c1,0x26711c40,0x80901201,0x122cc484,
    0xd82d556c,0x33885aaa,0x32efaa03,0x05aaad80,0x973703c8,0x541e4019,
    0xb0350d81,0x983606a1,0x05306a03,0x05306a24,0x298350e2,0x3882c252,
    0x90712238,0x88e20480,0x24048383,0x83612120,0xb999b984,0x5cccdcc1,
    0xc81c1c41,0x73337300,0x02e04803,0x98910480,0x44931224,0x803224c4,
    0x11201c48,0x22240389,0x242521c4,0x6d448388,0x240482bb,0x241c4710,
    0x09012024,0x24247509,0x44482448,0x03988483,0x03881209,0x01c4002e,
    0x9109b791,0xb79109b7,0xda803889,0x216202bb,0x4c02bbda,0x215ded43,
    0xd9103073,0x020b9999,0xcecb8498,0xec8965c3,0x9915cccc,0x3322199d,
    0xd9910cce,0x70736199,0x219d706e,0x19d73ec8,0x7644fb22,0xa885cccc,
    0x910ceb80,0x1cdcb87d,0x2e04cda8,0x00401cdc,0x00004004,0x19995008,
    0x20100040,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x44000000,0x062018cc,0x068acc04,0x14000575,0x5002a000,
    0x002a0151,0x400a00a2,0x31593028,0x2a570280,0x02a05103,0x3a95c050,
    0x28008018,0x2a202880,0xacc01500,0x31991068,0x02b88880,0x01907795,
    0x40738041,0x80f83cca,0x910392c9,0x805c5c03,0x032601c8,0x200dac88,
    0x326300c9,0x81959101,0x8064c040,0xcac881c8,0x26e04080,0x21e6dc03,
    0x9300cac8,0x0ee6f201,0x02080722,0x4015c444,0x4c501bc8,0x5e4424c0,
    0x24017101,0x96447817,0x900c03d9,0x01806012,0x20300c18,0x0732a2ca,
    0x33322183,0x1800c0cc,0x99910c18,0x44665999,0x85539502,0x040180c1,
    0x99301812,0x02664c09,0x4c1d99e4,0xc83604cc,0xba883b33,0x205c7101,
    0x479105c7,0x202aa1a8,0x205cc094,0x882aa1a8,0x4c02aa1a,0x220da80b,
    0x24017303,0x2e201710,0x71017100,0x02e2e388,0x220b8a88,0x375101ba,
    0x37511200,0x5c02ab80,0x160a602a,0x32b8155c,0x44dc4b05,0x4d8b883a,
    0x12b12468,0x910dc473,0x64459d9d,0x11cc4b8a,0x2e239837,0x25c56441,
    0x44388eaa,0x0904b8ac,0x7912e2f2,0xb8bc8971,0x2a1c1c44,0x33221b88,
    0x13713cca,0xa89b8875,0x445b5103,0x5203a89b,0x0e04a404,0x504a40dc,
    0x900dc0e9,0x9624c710,0x105c3238,0x09481a87,0x0e219817,0x0d438835,
    0x4543302e,0x40b8710b,0x41a84819,0x52983529,0x4ce22983,0xb82bb881,
    0x00902540,0x20164c09,0x402e7104,0x41201738,0x80b9c429,0xb8a60949,
    0x43886ccc,0x86e90e2a,0x986a1c44,0x360adada,0x224ccccc,0x50e20d43,
    0xcccccd83,0x438a42a4,0x84cccccd,0x41290484,0xce892094,0x0b98cc2d,
    0x332e5824,0x6cccb86c,0x332e1b80,0x0e21706c,0x0903885c,0x0e2170aa,
    0x72a824ea,0x44388483,0x890e7203,0xb310d438,0x880383b3,0x50e20d43,
    0x50a80383,0x20038715,0x41290484,0x33892094,0x0e1ca203,0x2e241b94,
    0xb94c0241,0xaaad8241,0x0b555b05,0x5b03606a,0x2a590b55,0x58890d81,
    0x186a7388,0x9206e2d4,0x309481d9,0x36648105,0x30766481,0x19054105,
    0x48082987,0x298d4298,0x0d4298d4,0x30987071,0x242a0d43,0x45889162,
    0x58892408,0x1b999b98,0x0dcccdcc,0x73126244,0x26837333,0x59524c48,
    0xb6449b57,0xd87e64bb,0x7701cbca,0x8b88b799,0x5b779503,0x85bccbb8,
    0xa85bccbb,0x82a2dbbc,0xbbca83c8,0x7950482d,0x2cbca859,0x22165e54,
    0x83ab8483,0x32a2aabb,0x32a4daba,0x3624daba,0x2b2a2cbd,0x48244dab,
    0x79104824,0xa920909b,0x826de443,0x30404000,0x20040041,0x044028a8,
    0x80020010,0x916ec408,0x32204407,0x0080ccec,0x32202004,0x105cccce,
    0x20020080,0x00401000,0x3b2219d7,0x32219d73,0x75c0203e,0x0e7d910c,
    0x00000008,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x2600a800,0x300d401c,0x02666033,
    0x000c4130,0x13331015,0x4cc42a60,0x06050199,0x21d000c0,0x2203501d,
    0x5700011b,0x9805112a,0x01a81ccc,0x01550d44,0x1ccc980e,0x2f260130,
    0x28bc9828,0xb303a95c,0x52c88595,0x2c9ba81b,0x88cccdc4,0x200b9ccc,
    0x003263b8,0xad859593,0x4e7442aa,0x19555771,0x95164e54,0x04009500,
    0x2e17e201,0x0905c98b,0xb81dc040,0x44c7910c,0x711cc029,0x32e03903,
    0xcbb87910,0x30393182,0x20100726,0x7102e2c3,0x110e2438,0x88039cb2,
    0x912005c3,0x01b10241,0x22448901,0x20407003,0x4c001ba8,0x98090382,
    0x5502a00b,0x986e3573,0x50e2081b,0x25500883,0x311b9aa9,0x00dd4414,
    0x02e20171,0x2090dc38,0x26588a24,0x1ce1b03c,0x21c4dd44,0x4481b88b,
    0x02c81229,0x1c489120,0x3220e3b8,0x0ea26e22,0x12001c04,0x225c5644,
    0x4ca582aa,0x2e154588,0xa8350e23,0x2213582a,0x20aaa588,0xc83a89b8,
    0x45e44b8b,0x8d42984b,0x46a17038,0x0644e5bc,0x6c439d2e,0x65c3bc9a,
    0x7160ca9c,0xb0e6eec7,0x42980551,0x21c3b8bb,0x32a1c1d9,0x81704800,
    0x7665c00b,0x3302e3cc,0x792424cc,0x26710a45,0x06a1c40c,0x40a90933,
    0x24012664,0x06a5306a,0x14c1a853,0x298a9209,0xa8750d49,0x640d874b,
    0x93242dc3,0x92049573,0x12049acc,0xaa87b3a2,0x2a393b9a,0x2abac9aa,
    0x5c36665c,0x90283884,0x33333360,0x22a48484,0x6455cd22,0xb3244393,
    0x81521203,0x99970484,0x4129048d,0x486a14c4,0x4a445490,0x383885cc,
    0x5c398487,0x4c544482,0x30eca603,0x0b161205,0x70aaa193,0x1b8e1119,
    0xca803224,0x20901bbb,0x27212003,0xa8735138,0x7445550c,0x0905bccb,
    0x262e6e39,0x241b8483,0x8904a412,0x70ea1c38,0x0dc99545,0x73838ab8,
    0x1dc3a858,0x54039024,0x85309091,0x4750d429,0x206e28b8,0x48b11229,
    0x20900700,0x90480829,0x8aa24c33,0x02e229b8,0x210c8240,0x88909048,
    0x4c6a14c5,0x712c0d42,0x88397b30,0x9c126004,0x70f60e43,0x4950388d,
    0x54532419,0x24480b81,0x500eeaa0,0xdabaca85,0x442a86e4,0x9500c039,
    0x20905b77,0x00cdadd8,0x0711dd54,0xadd88240,0x950900cd,0xca89b575,
    0x65e542cb,0x01b7b302,0x872042f6,0x4e050260,0xe9ebdc83,0x797b5b52,
    0x6443ebb8,0x5e5c1cbd,0x2f260903,0x4097001c,0x40083acb,0x5440bcca,
    0xcccccb80,0xcca81103,0x00302cce,0x54028770,0x302ccecc,0x333b32a0,
    0x40080042,0x5dc01000,0x6ec43cba,0x2eeae62c,0x0e465440,0x20080044,
    0x00400800,0x00000100,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x81c86c00,0x09999999,0x80c05038,0x0bcc9829,
    0x64c1bc88,0x1039952c,0x0d4c1550,0x440cb2e2,0xc9819bcb,0x30382ccc,
    0x22006201,0x26209acb,0x1a8dcc00,0x01573153,0x22ea0088,0x400260a8,
    0x2c428bc9,0x910cc88d,0x5e664419,0x80820301,0x21206008,0x41da81f9,
    0x8962c9bc,0x41d99e44,0x9911c40b,0x6c41930b,0x2dc43220,0x406a8362,
    0x06a0d104,0x43200e4c,0x416aa2e8,0x0ccc9ac8,0x3b539971,0x9112ef20,
    0x2215b933,0x3263003b,0x0e602081,0x2a217037,0x3511fdc4,0x40110554,
    0x400574c1,0x90a61ac8,0x414c6a04,0x10e205c5,0x90a62412,0x280c8901,
    0x32a00240,0x00d42aab,0x04819853,0x25c3c817,0x0900d42c,0xa803881d,
    0x55502b99,0x70398dc0,0x03222a81,0x110dc473,0xf31770c0,0x80351700,
    0x40e1900b,0x07102e1b,0x9091cc12,0x24001200,0x55c41554,0xa98d4199,
    0x90480242,0x481b8730,0x20555ed4,0x4dc40b84,0x319d302b,0x4809330b,
    0x02405c09,0x0886a1c4,0x120c4860,0x48806a71,0x4c121da8,0x207102e2,
    0x1c1cd204,0x09000480,0x806a0933,0xb881791a,0x120900bc,0x890770ee,
    0x240999c9,0x22f6206c,0x05c48859,0x2bae6048,0x22cddc81,0x50e20624,
    0x26300443,0x1a922c02,0x12120910,0x38817154,0x825cc090,0x66449004,
    0x2409071d,0x2e6a01a8,0x481c8802,0x0f661930,0x20ae25d7,0xea8ea00b,
    0x102e2440,0x40901a87,0x17019d99,0x1c42f490,0x8600886a,0x9c99a044,
    0x00c882b9,0x41b03501,0x04814c1a,0x800e81e4,0x02424906,0xda806a09,
    0x12120304,0x438bcb88,0x700ccb9b,0xaacc9801,0x106a1c40,0x40901a87,
    0x1702adaa,0x203f3388,0x00887664,0x43bcc986,0x132aaa27,0x48828091,
    0x0712224c,0x49812024,0x920ea244,0x0480e20c,0x24cd4053,0x1206a164,
    0x005c3880,0x05c000b8,0x388350e2,0x480480d4,0x5c3205c0,0x2f32ee04,
    0x48180225,0x930d40f0,0x441fdc08,0x7b504dbc,0x71024057,0x0cbbea80,
    0x23cacea8,0x200bbbc8,0x8f2ef204,0xbac8731a,0x400903cb,0xb8005c38,
    0x22162000,0x5d910d43,0xecca9762,0x6764c2cc,0xcccdd881,0x880200a0,
    0x19999999,0x36e0b048,0xb9999b0d,0x80040183,0x99d99100,0x007372e1,
    0x80620022,0x9d995008,0xda811059,0x0105bd11,0x0599d995,0xcda96e64,
    0x333b2604,0x0ccc980c,0xdd996e44,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0xccc88000,0x19952ccc,0x665cb326,0x32279910,0x32a02ccc,0x3333320c,
    0x9999914c,0x00b332a1,0x93000000,0x33322099,0x219910cc,0x19910cc8,
    0x665c3322,0x9911cccc,0x32a59999,0x2cb80bcc,0x6665c995,0x6666440b,
    0x2a1e5401,0x44732a2c,0x419914cc,0xca80cccc,0x2e216441,0x41790180,
    0x41224124,0x20b31c44,0x90924904,0xb50002e0,0x800f2120,0x243882ab,
    0x398370e6,0x8a6120dc,0x2171c438,0x2a1c43b8,0x88391241,0xa94c16a3,
    0x87106d41,0x1c40e438,0xc8b91320,0x0fee4b8b,0x49241753,0x38837124,
    0x910a61c4,0x12124920,0x3016665c,0xd9824059,0x71094802,0x388dc0dc,
    0x120e6370,0x23838866,0x50e2240b,0x1c448483,0x550120a6,0x44e21c47,
    0xc807100c,0x0d49910b,0x2e0644a6,0x954828b8,0x0b891123,0x0640e1c4,
    0x82414914,0x7911260b,0x1ca80900,0x4202e710,0x20252048,0x81c9049c,
    0x81703338,0x906a1c44,0x2e1c4350,0x22a00a81,0x8b88710b,0x900e200c,
    0x04922e71,0x0d974809,0x24252329,0x3f33a212,0x0374ab84,0x81704809,
    0x5c01b70b,0x203ccecc,0x0710b84b,0x007a6024,0x333201f1,0x05b9d105,
    0x88793357,0x241dccce,0x975b114c,0x019bb905,0x221c5215,0x0e200ddd,
    0x124a5290,0x1b5b1024,0x84a52905,0x87103529,0x04aaa449,0x81704809,
    0x20032e25,0xd80cb804,0x43705aaa,0x77700900,0x27103920,0x0aabb819,
    0x120d4388,0xd99c8866,0x50a81200,0x91588715,0x4810e201,0x429925b3,
    0x5543b31a,0x39b860c9,0x82520737,0xd920b838,0x70480901,0x91039757,
    0x32a04807,0x73337301,0x40e23983,0x82b95404,0x23838804,0x2a1c400b,
    0x8e224241,0x54071048,0x4710e320,0x0b871048,0x79512292,0x491fdc59,
    0x31ca920b,0x40e6e059,0x66545838,0x240481db,0x98019ab8,0x5930902d,
    0x24490480,0x910240e2,0x440240c8,0x1002e483,0x26241a87,0x20e61c43,
    0x4415140b,0x0321c43c,0x824170e2,0xeb820104,0x25cccea9,0xe880f469,
    0xcccec880,0x32e0101c,0x3b3223ce,0x599b50cc,0x28181400,0x910ceb80,
    0x33336a7d,0x1e765c3c,0x764433a6,0x10399d71,0x2b9999d9,0xc882ccda,
    0x2e1bb52e,0x6443ccce,0x9d71e44e,0x37625999,0x4ec88f22,0xcddc8b62,
    0x19d70dcc,0x0000fb22,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x20000000,0x57101ba8,0x00b980e2,
    0x2a882371,0x37510554,0x1550d441,0x23710120,0x5442a60c,0x05446a21,
    0x410aaaaa,0x26713300,0x2208000b,0x45411010,0x55440ab8,0x14415510,
    0x1c0a8818,0x2620810e,0x07b70620,0x33332a02,0x886e64cc,0x89b880bb,
    0xcca8a83a,0x5c564448,0x2e4c5dc4,0x20d881b1,0x260ea8ac,0x01406e23,
    0x985f5179,0x4c45b10d,0x32239cac,0x98e45a99,0xbd9be984,0x7700b848,
    0x66644362,0x22f660cc,0x885dc449,0x871510bb,0x4c38a84a,0xfd6f8394,
    0x4cdd17d4,0x01e98373,0x12a95520,0x20240121,0x205c330e,0x48705319,
    0x10624496,0x5c001a87,0x5260eb20,0x0c05b01c,0x16a5b019,0x17192492,
    0x0e8a5c11,0x44848864,0x7024480b,0x260ea070,0x4db4e81e,0x545f11f9,
    0x0ca44552,0x2a912900,0x999705bc,0xcecdc88d,0x333364cc,0x2a0074cc,
    0x4c299d99,0x21c41ccc,0x33332e1a,0x091c923c,0x004807a6,0x6b974039,
    0xd9324924,0x7cd7217b,0x21c24481,0x0910b80a,0x5c40e02e,0x9ec25640,
    0x35c3e25b,0x44322eec,0x546a9004,0x06e16692,0x38160d89,0x5c4005c0,
    0x2200ac8c,0x0350e21c,0x82457480,0x201204ac,0x6c3a602b,0x22249243,
    0x3d874c4c,0x2a1c2448,0x88173880,0x50887013,0x5c498e41,0x07668752,
    0x00260c40,0x2e61b986,0x162242aa,0x4c117449,0x05071082,0x83713299,
    0x03b3242a,0x0a62da80,0x04824432,0x6c431154,0x92490790,0x0d985348,
    0x4cccc85b,0x94805438,0x22155530,0x20d542ba,0x08200040,0x00000000,
    0xb5759500,0x6665e449,0x5de541db,0x2eef2a2d,0xb8b52d81,0xbb84cabc,
    0x20d05bcc,0x443cbccb,0x21db31de,0x443cceca,0x362dccce,0x23d70550,
    0x0104792d,0x40986491,0x223b9118,0x003b304d,0x00000000,0x00000000,
    0x0c004000,0x04011006,0x08030000,0x04510100,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x99910000,
    0x36619999,0x91288151,0x22000c41,0xbbbbbbbb,0x2eeeeee1,0x3332a3bb,
    0x000002cc,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x27f70007,0x2e1910c8,0x2695933f,0x888ea572,0x4c088888,0x19999999,
    0x02666662,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x4a620000,0xbbbbbbb8,0x0c0c6020,0x0001e441,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x44151000,0x00088888,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_17_latin1_x[224]={ 0,3,1,1,1,1,1,3,4,2,0,1,2,1,
3,1,1,1,1,1,1,1,2,1,1,2,3,2,0,0,0,0,1,0,0,0,1,0,1,0,0,1,1,0,
0,0,0,0,1,0,0,1,1,0,0,0,0,0,1,0,0,0,1,0,3,1,0,1,0,0,1,0,0,1,
1,1,1,0,0,1,0,0,1,1,1,0,0,0,0,1,1,0,4,0,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,3,1,0,1,0,
4,1,2,0,0,0,0,1,0,-1,2,1,2,2,3,0,1,3,3,2,2,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,1,1,1,-1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1,
1,1,1,1,0,1,0,0,0,0,1,1,1,1,0,0,1,1,1,1,1,1,0,0,0,0,0,1,0,1,
 };
static signed short stb__courier_17_latin1_y[224]={ 12,2,2,2,2,2,4,2,2,2,2,3,9,7,
10,1,2,2,2,2,2,2,2,2,2,2,5,5,3,6,3,3,2,3,3,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,2,1,2,2,15,2,5,2,5,2,5,2,5,2,2,
2,2,2,5,5,5,5,5,5,5,3,5,5,5,5,5,5,2,2,2,6,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,12,5,2,3,4,3,
2,2,2,3,2,5,7,7,3,1,1,2,2,2,2,5,2,6,11,2,2,5,2,2,2,5,0,0,0,1,
1,0,3,3,0,0,0,1,0,0,0,1,3,1,0,0,0,1,1,5,2,0,0,0,1,0,3,2,2,2,
2,3,3,2,5,5,2,2,2,3,2,2,2,3,2,3,2,2,2,3,3,4,5,2,2,2,3,2,2,2,
 };
static unsigned short stb__courier_17_latin1_w[224]={ 0,3,7,7,7,7,7,3,3,3,6,7,4,7,
3,7,7,7,7,7,7,7,6,7,7,6,3,4,8,9,8,6,7,9,9,9,8,8,8,9,9,7,8,9,
9,9,9,8,8,9,9,7,7,9,9,9,9,9,7,3,6,3,7,10,3,8,9,8,9,8,8,9,9,7,
6,8,7,9,9,7,9,9,8,7,7,9,9,9,9,8,7,4,1,4,7,9,9,9,9,9,9,9,9,9,
9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,0,3,7,8,7,9,
1,7,5,9,5,8,8,7,9,11,5,7,5,5,3,9,7,3,3,5,5,9,9,10,9,6,9,9,9,9,
9,9,9,9,8,8,8,8,7,7,7,7,9,9,8,8,8,8,8,7,9,9,9,9,9,9,8,8,8,8,
8,8,8,8,9,8,8,8,8,8,7,7,7,7,8,9,7,7,7,7,7,7,9,9,9,9,9,8,9,8,
 };
static unsigned short stb__courier_17_latin1_h[224]={ 0,11,6,11,12,11,9,6,12,12,7,9,6,2,
3,13,11,10,10,11,10,11,11,11,11,11,8,9,9,4,9,10,11,9,9,10,9,9,9,10,9,9,10,9,
9,9,9,10,9,11,9,10,9,10,9,9,9,9,9,12,13,12,5,2,3,8,11,8,11,8,10,10,10,10,
13,10,10,7,7,8,10,10,7,8,10,8,7,8,7,10,7,12,12,12,3,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,0,10,10,9,7,9,
12,11,3,10,5,7,5,2,10,2,5,10,6,6,3,10,11,3,4,6,5,7,10,10,10,10,12,12,12,11,
11,12,9,12,12,12,12,11,12,12,12,11,9,11,13,13,13,12,12,6,11,13,13,13,12,12,9,11,11,11,
11,10,10,11,8,10,11,11,11,10,10,10,10,9,11,9,11,11,11,10,10,8,8,11,11,11,10,13,13,13,
 };
static unsigned short stb__courier_17_latin1_s[224]={ 253,51,201,75,112,181,41,209,195,20,131,
83,213,68,15,56,1,75,41,216,33,70,78,85,93,63,251,249,74,5,91,
49,19,100,31,92,175,147,138,102,165,57,112,213,223,233,203,56,156,9,184,
146,49,65,21,11,128,118,110,191,91,154,224,45,19,1,53,29,43,20,182,
191,201,121,74,137,154,121,155,243,172,162,94,48,129,56,165,38,84,83,103,
139,108,199,31,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,
11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,253,29,21,
194,147,229,110,27,39,210,247,138,232,68,172,56,218,147,175,187,23,192,35,
27,1,181,241,111,101,111,182,131,204,214,10,243,233,243,1,233,120,224,158,
172,183,167,175,140,239,121,29,38,47,1,24,193,55,64,81,98,129,144,65,
42,224,207,198,228,122,33,10,138,83,112,131,155,164,202,220,221,189,211,156,
148,164,237,245,66,74,65,92,102,1,20,10,1, };
static unsigned short stb__courier_17_latin1_t[224]={ 1,15,61,15,1,15,51,61,1,15,61,
51,61,70,70,1,28,40,40,15,40,28,28,28,28,28,51,40,51,70,51,
40,28,51,51,40,51,51,51,40,51,51,40,51,51,51,51,40,51,28,51,
40,51,40,51,51,51,51,51,1,1,1,61,70,70,61,28,61,28,61,40,
40,40,40,1,40,40,61,61,51,40,40,61,61,40,61,61,61,61,40,61,
1,1,1,70,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,
40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,40,1,40,40,
51,61,40,1,28,70,28,61,61,61,70,28,70,61,28,61,61,70,28,28,
70,70,61,61,61,28,28,28,28,1,1,15,15,15,1,51,1,1,1,1,
15,1,1,1,15,40,15,1,1,1,15,15,61,15,1,1,1,1,1,51,
15,15,15,15,28,28,15,61,28,15,15,15,28,28,28,28,40,15,40,15,
15,15,28,28,61,61,15,15,15,40,1,1,1, };
static unsigned short stb__courier_17_latin1_a[224]={ 144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,144,
144,144,144,144,144,144,144,144, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_17_latin1_BITMAP_HEIGHT or STB_FONT_courier_17_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_17_latin1(stb_fontchar font[STB_FONT_courier_17_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_17_latin1_BITMAP_HEIGHT][STB_FONT_courier_17_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_17_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_17_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_17_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_17_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_17_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_17_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_17_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_17_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_17_latin1_s[i] + stb__courier_17_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_17_latin1_t[i] + stb__courier_17_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_17_latin1_x[i];
            font[i].y0 = stb__courier_17_latin1_y[i];
            font[i].x1 = stb__courier_17_latin1_x[i] + stb__courier_17_latin1_w[i];
            font[i].y1 = stb__courier_17_latin1_y[i] + stb__courier_17_latin1_h[i];
            font[i].advance_int = (stb__courier_17_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_17_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_17_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_17_latin1_s[i] + stb__courier_17_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_17_latin1_t[i] + stb__courier_17_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_17_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_17_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_17_latin1_x[i] + stb__courier_17_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_17_latin1_y[i] + stb__courier_17_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_17_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_17_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_17_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_17_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_17_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_17_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_17_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_17_latin1_LINE_SPACING
#endif

