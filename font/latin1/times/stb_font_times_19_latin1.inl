// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_19_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_19_latin1'.
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

#define STB_FONT_times_19_latin1_BITMAP_WIDTH         256
#define STB_FONT_times_19_latin1_BITMAP_HEIGHT        108
#define STB_FONT_times_19_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_times_19_latin1_FIRST_CHAR            32
#define STB_FONT_times_19_latin1_NUM_CHARS            224

#define STB_FONT_times_19_latin1_LINE_SPACING          12

static unsigned int stb__times_19_latin1_pixels[]={
    0x00000000,0x00000000,0x00100000,0x04c881dc,0x2aa202a0,0x20d442aa,
    0x95018204,0x0114c099,0x26019993,0x74400acb,0x80001880,0x24000009,
    0x7f003500,0x4004f800,0x1fe8005d,0x8005f300,0xb6c804fb,0x980fc40d,
    0x8839004e,0x20d9cffe,0x8824392a,0x4c82f8bf,0x1df7e440,0x5bb107e0,
    0x6c405d51,0x3e601d40,0xd002a802,0x1ee2403f,0x016a02fc,0xd1000b30,
    0x05aab800,0xd88012a0,0x994c01e8,0x9b006a02,0xffb07700,0x321b127f,
    0x150a8123,0x71180990,0x221f8019,0x002f983f,0x025400ec,0x555c00d8,
    0x20b61205,0x4001405f,0x00620002,0x28006618,0x00050600,0x026c0040,
    0x3ffe03e2,0x904d893f,0x40565cc0,0xacb9804c,0x0fb0fc00,0x5f0007ec,
    0x2cc00a00,0x09019860,0xb9813a0a,0xaaaa80ac,0xa8555542,0x55542aaa,
    0x1597300a,0x01597300,0xaa855555,0x439950aa,0x439950ca,0x6c66c0ca,
    0xff82d41d,0x4f8893ff,0x89dd8848,0x102642fc,0x05f913bb,0x205f88fc,
    0x40da82fb,0x0018803f,0x803100be,0x82aaaa64,0x89dd883d,0x04fc82fc,
    0x04fc81d7,0x3bb101d7,0x36205f91,0xc82fc89d,0xd81d704f,0x51b61d46,
    0xfd79bb07,0xffc81e43,0x5fba893f,0x220fa224,0x7441322f,0x3f02f883,
    0x4fa813e6,0x0b60fdc4,0x4e8016e0,0x31202dc0,0x442d81df,0x4c2f883e,
    0xf309302f,0x3a212605,0x7442f883,0x7cc2f883,0x3f309302,0xc87e6064,
    0x8fe25d80,0x4fb6e03e,0x32f44e64,0x43f607d8,0x6c0fb04c,0x7f51f80f,
    0x7cc27cc0,0x0fe802c1,0xfe80bb00,0x217e1200,0xfb03ec1c,0x48817cc1,
    0x09102f98,0xb07ec0fb,0xf307ec0f,0xaec12205,0x122bb048,0x7c5ba26c,
    0x64938802,0x2fc03e21,0x41325f50,0x20bea05f,0x4c09f11f,0x531f882f,
    0x013f2a00,0x9f9503e4,0x5c27c240,0x5f502fc1,0x848817cc,0xf09102f9,
    0xbf17d40b,0x5f317d40,0x47cc1220,0x371f301b,0x22b91360,0x4938802f,
    0x7cc06c5b,0x2653e604,0x9f3027cc,0x502fc3f0,0x5447e20f,0x07d8d800,
    0x6c6c0d90,0x213e1207,0x9813e60a,0x440be64f,0x9102f984,0x3e604f98,
    0x7cc09f34,0x2440be64,0xce80b9d0,0x45b13605,0x4938803f,0x8a588ee8,
    0x53e604fa,0x204fa84c,0x2e1f84f9,0x220bb01f,0x5220341f,0x04d802f9,
    0x240be691,0x27d4027c,0x17cc9f30,0x02f98488,0x204fa891,0x409f54f9,
    0x40be64f9,0x00fea048,0x236c07f5,0x2200f60f,0x44ee8893,0xf9813e64,
    0x09f30993,0x20fc1fcc,0x806dc0dd,0x901741f8,0x0f403741,0x241ba0c8,
    0xf30dc27c,0xf31fcc09,0x3e60e605,0x4f987302,0x27ccfe60,0x17cc7f30,
    0x80340398,0x65676c06,0x9c402dc2,0x2246e884,0x647ea06f,0x7d40df04,
    0xcfb81f81,0x0fc403eb,0x557440be,0x83c01fda,0x1fdaaae8,0x4f84f848,
    0x43f5037c,0x105502f8,0x3e0aa05f,0x6f87ea06,0x2f887ea0,0x02440550,
    0x23360244,0x71003a00,0x48ba2112,0x25d80fdc,0x203f704c,0x2203f05d,
    0x878806fd,0x3335701f,0x82d409f3,0x4f9999ab,0x8084f848,0xf0bb01fb,
    0x27c06e09,0x01fb81b8,0xb01fb8bb,0x06e09f0b,0x00c800c8,0x024c026c,
    0x5c7e24e2,0x70376121,0xbb02641d,0x3f00eb81,0x4c05fc80,0x20b01d85,
    0x201b00fc,0x8481f905,0x0376004f,0x81f701d7,0x303ee059,0x2e06ec0b,
    0x5c0dd80e,0x4c0fb80e,0x203efa85,0x5d803efa,0x9c405500,0x121c4dc4,
    0x067de7dc,0x7dc06772,0x4c40cfbc,0xdc8801f9,0x20aa7622,0xf303b839,
    0x0ee03709,0x3e1227cc,0x5e7dc005,0x33b200cf,0x76400ccb,0x5c00ccbc,
    0x200cfbcf,0x00cfbcfb,0x0332f3b2,0x59100b22,0x00599500,0x83944022,
    0x0c403808,0x88055530,0x02aaa201,0x05dc3100,0x41dfa860,0x030cffc8,
    0x3220efd4,0x64c70cff,0x44000bff,0x00044001,0x0c400044,0x10006200,
    0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x30000000,0x20035577,0x0188aca8,0x00000000,0x00000000,
    0x031008a2,0x10880000,0x01004001,0x08004510,0x20020002,0x00104020,
    0x20790097,0x2e120020,0x6c03980b,0x105f931c,0x04e8007f,0xf8005fb0,
    0x4c1f9804,0x77e4406f,0xb002c03b,0x6db6c00d,0x56dc1200,0x77df9100,
    0x5f17f100,0x80af2200,0xf80fb8fa,0x36603f8c,0x403e203d,0x15407f4f,
    0x207100ae,0x2607b05d,0x40166005,0x260069ba,0x3b059005,0xcb88c079,
    0xe800ec00,0x0cc66000,0x4ecc2980,0x71180fbb,0x542a0019,0x81235000,
    0x42a05128,0x00c8e00a,0x1b8dc037,0x20077120,0x8807e40a,0x0a800a03,
    0x800c4500,0x8220a002,0x540aaa22,0x804d82aa,0x55554019,0x80555542,
    0xc9456c0b,0x20006200,0x1cc80018,0x42aaaa60,0xaaaaaaa9,0x00040002,
    0x5c24c900,0xe8514bbb,0xaaa98406,0x54c2aaaa,0x42aaaaaa,0xaaaaaaa9,
    0x4c018802,0x5530aaaa,0x1fe44155,0x43f80db8,0x5542aaaa,0xb827e42a,
    0x0fe5c40e,0x0044a2fe,0x0b7000b7,0xf300b700,0x99cf981d,0xcb880ea9,
    0x41997502,0x019712c9,0x47615c55,0x5f88e2f8,0x2673e600,0x67cc0ea9,
    0x4c0ea999,0x0ea999cf,0x7cc02dc0,0x8077cc0e,0xd04982ff,0x3a0df905,
    0x9817cc0d,0x7ecc7444,0x400aff60,0x7f4000fe,0x007f4000,0x984f82fc,
    0x43e89541,0x5d83f24a,0x1b1207e6,0x238f3264,0x27c004f9,0x4c27c0cc,
    0x01984f81,0x2fc007f4,0x3fb605f8,0x03a81cc1,0x260d01fd,0x5c89102f,
    0x5fc81919,0x004fca80,0xa8013f2a,0x04f804fc,0x2676009f,0xf10fc6d9,
    0x03f12e47,0xb83e2689,0x05f88a25,0x9f0027c0,0x40027c00,0x4f804fca,
    0x7c6c09f0,0x3980e60e,0x80dc5f98,0xd89102f9,0x0efb8073,0x801f6360,
    0x36007d8d,0x04f807d8,0x7c40989f,0x3e619999,0x44b92f40,0x4910d41f,
    0x0b8fe25b,0x13e0036c,0x1313e013,0x801313e0,0x4f807d8d,0xf9ac09f0,
    0x02a80e65,0x981225f7,0xce89102f,0x7fe4401a,0x05f34880,0x00be6910,
    0x2017cd22,0x5339f04f,0x201f981b,0xb93642fa,0x96120fc4,0x1c47ee3d,
    0xf8500fdc,0xf00da99c,0x201b5339,0x00da99cf,0x2017cd22,0x2c09f04f,
    0x5c0e69f5,0x06c77402,0x12205f30,0x440c49d9,0x20c83f8a,0x3a0c806e,
    0x1ba0c806,0x2b7e09f0,0x43f80eaa,0xc93627c2,0x90907e25,0x3e2ebb21,
    0xfd811398,0xaadf8381,0x55bf00ea,0x2b7e01d5,0x83200eaa,0xf827c06e,
    0x35f91604,0xf300ba07,0x02f9805d,0x99dfa873,0x4d944a23,0x7ed55744,
    0x2aaba201,0x2ba201fd,0x3e01fdaa,0x80989f04,0x643a9dfc,0x27b87e0e,
    0x2a06a2fb,0x0e5c7912,0x333bf20b,0x04c4f80b,0xf804c4f8,0xae8804c4,
    0x3e01fdaa,0x42c09f04,0x07d03bfd,0x5f100fb0,0x3ff60aa0,0xe945620d,
    0x4cccd5c0,0x266ae04f,0x2ae04f99,0x204f9999,0x2009f04f,0xfb04ffc8,
    0xdff883b7,0x64091df9,0xc8059000,0xf0027c02,0x0027c009,0x9f333357,
    0x04f827c0,0x40ffa216,0x007c804d,0x5206e09f,0x5997db00,0x403f20b0,
    0x1601f905,0x04f807e4,0x8000a09f,0x08104008,0x0ee00640,0x09f01b20,
    0x41413e0a,0x20b0504f,0x209f00fc,0x7cc1a04f,0xf9003b03,0xb303ee00,
    0x0e600530,0x84f981dc,0x709f303b,0x7c13e607,0x09309f05,0x00000000,
    0x32e61bc8,0x404c8802,0x4f84984f,0x984f8498,0x4f981dc4,0x217e0bf0,
    0x3a80bfc9,0x0fb00488,0x665e7640,0x40400380,0x7e441dfa,0x83bf50cf,
    0xf50cffc8,0xcffc883b,0x217ff930,0xdcccffc9,0x3333221f,0x0003cccc,
    0x77730000,0x30044005,0xfb999ff9,0x667fe4c3,0x3f261fdc,0x21fdcccf,
    0x7e441dfa,0x7ff930cf,0x02fff261,0x00110200,0x0039ff71,0x00020044,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x570530b8,
    0x59100c40,0x4500e440,0x203c8828,0x00820209,0x0e4c0993,0xb8805910,
    0x019500bc,0x07220104,0x0282ee60,0x4406e601,0x19805c41,0x028805c4,
    0xc9801ba8,0x0395018a,0x043101cc,0x4d6c16ec,0x06a80b05,0x299602dc,
    0xda81fcc8,0x47d42acf,0x053480fb,0x816e0264,0x740d70f8,0x5f17f102,
    0xbd8816e0,0xf03bda88,0x906aa989,0x0b00f981,0x003201f3,0x2203b15b,
    0x886ea8ae,0x327905ce,0x23aefd82,0x7cc1ebc8,0x00dc0f88,0x90090032,
    0x244e20dc,0x3884c98c,0x032ea071,0x20190090,0x4407e27b,0x005c2e04,
    0x2a0fe209,0x2603702f,0x01d02a83,0x2603a037,0x07734c03,0x170d112e,
    0x7c4d50aa,0x10edc460,0x7cf507cc,0x00200e62,0x02c73002,0x08000000,
    0xd9000000,0x001007cc,0xb07d8000,0x260101fb,0x1d02446e,0x203a0488,
    0x03a7b805,0x400242f4,0x2001fc4e,0x5e26edb8,0x220160f8,0xdbb882cb,
    0x666ee542,0x36ee20ce,0x82dbb882,0xb882dbb8,0x597102db,0x19712c98,
    0x109b15c8,0x2e205b77,0x1997502c,0x54642fc4,0x0ec0282f,0x12074019,
    0x800c81d0,0xaa8adbfa,0x0419f90a,0x3e0665d4,0x32ea2f42,0x7ec56a0c,
    0x0c96a761,0x43e89540,0x4901f52d,0x1f52d848,0xd81f52d8,0x52d81f52,
    0x7d12a81f,0x907e65d8,0x4b60bf6b,0xe89540fa,0x21f92543,0xf98dc4f9,
    0x48888384,0x541d00aa,0x07307401,0xfc83fe20,0xa817ff41,0x17cc3f24,
    0x3f24a9b6,0x21fc45b0,0x1ba8e61a,0x236cccec,0x4b03f10d,0x3f10d829,
    0xd83f10d8,0x10d83f10,0xd999d83f,0x83f12e46,0x1b0fea5c,0x333b07e2,
    0x3e21f8db,0x31d49f53,0xb982b8bf,0x44731221,0x2ee2911a,0x4c586a20,
    0x23fcd883,0x1dff702c,0x54fe21f8,0x43f36c1f,0x740f8bf8,0x3a972406,
    0x33333f10,0x443f9710,0x81ac99d9,0xb881fcb8,0xfcb881fc,0x21fcb881,
    0x419999f8,0xb907e25c,0xfcb885e8,0x26667e21,0x2bd03e61,0xfa8935f8,
    0x0c801a23,0x70c81362,0x10dc0d71,0xfd0ea89b,0xfd880911,0x5e81f30f,
    0xf35e85f1,0x41fade81,0x2f83206d,0x5007e67b,0x64c3f11b,0x20aaeaac,
    0x541f88da,0x6d41f88d,0x46d41f88,0x007e61f8,0x320fc4b9,0x236a3e45,
    0x807e61f8,0xff3642fa,0x743f70b1,0xac873004,0x0d105504,0xe89590e6,
    0x20337e63,0x5f53fb81,0x9f0fa6c8,0x3ed90bea,0x42a826c2,0x21fc991f,
    0x0fc43e22,0x0f88586e,0x887c43f1,0x7c43e21f,0x0fc43e21,0x25c850fe,
    0x2e2e41f8,0x0fc43e25,0x44f850fe,0x2037ea4d,0x4b8be25e,0x8498b8b0,
    0x16037048,0x1fcc9317,0x412117f2,0x49b13e3f,0x89f17c5c,0x81f8d94d,
    0x45d2e848,0x263a9dfc,0x2415f71f,0x2e3f3091,0x2e3f30af,0x2e3f30af,
    0x2e3f30af,0x277f20af,0x5f73dc3a,0x45959dc8,0x415f71f9,0x643a9dfc,
    0x0bd07e0e,0x51fc41d5,0x66c4390b,0x4c0642ed,0x66c43701,0x43df12ed,
    0xd298cfec,0x07647985,0x5a874c3f,0x223f0764,0x1901dbdb,0xc88d3b50,
    0x9dfd84ff,0x20532c4f,0x6c4f9dfd,0x7ec4f9df,0x6fec4f9d,0x7fe444f9,
    0xf9dff884,0x5d1bd31d,0x9f3bfb05,0xb04ffc88,0xbba83b7f,0xc80cdabd,
    0x0398550e,0x97055126,0x30244595,0x0defea89,0x6eecdff9,0xbfd81ccb,
    0x0cbea81d,0x101dbfd8,0x00a60180,0x01040080,0x08008008,0x20000080,
    0x01000020,0x08044000,0x55cc00c4,0x20c40180,0x98555501,0x04406200,
    0x00982044,0x20040044,0x00000008,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x54010400,0x0164400c,
    0x55550571,0x80aaaa85,0x2600aaa9,0x1595101b,0x55555440,0xb8805d42,
    0x0aca8803,0x22015cc0,0xaa831cca,0x2aaa88aa,0xb980aaa2,0xaaaa80ac,
    0x80555442,0x155441ba,0x4c02aaa8,0x32a2004c,0x36a0188a,0x41fd3e02,
    0x35405de8,0x81ff9b30,0x01d704fc,0x101ffff1,0x885dc07b,0xffff904a,
    0x25c3629f,0x40b62762,0x209510bb,0xb903f50c,0x3213f263,0x261fe63f,
    0x89dd880e,0x05fc82fc,0x747203f5,0xb81fe441,0x9d32740d,0x64c73600,
    0x05f5102f,0x0b81b8dc,0x50064037,0x0be61fc4,0x400b824c,0x2ab201f8,
    0x0361222a,0x41f0f239,0x8321e63d,0x7c44a9aa,0x20b917a0,0x6c3f8859,
    0x3e883987,0x2fc42f88,0x5cd504a8,0x9305ff01,0x804d8570,0x4407b05d,
    0x0000002f,0x985d0002,0xb109102f,0x85c07d00,0x4712e99f,0x3e2ecd00,
    0x5c3f07e0,0x17911b88,0xb9b61f87,0x3740e01f,0xb0190bea,0x3207ec0f,
    0xb700c80f,0x307fb600,0x90136007,0xf00e201f,0x0665d405,0x832e2593,
    0x019712c9,0x817cc2c4,0x0bffb848,0xf8e00fb8,0x2a01cd71,0x31e4fea4,
    0x5ce4d85f,0x3e807282,0x7dc001fa,0x20b13ea1,0x10bea05f,0x3205889f,
    0x1df1b005,0x66c141cc,0x03741cd9,0x5f779302,0x20fc92a0,0xbb07e65d,
    0x2e980fcc,0x09102f98,0xe83ff731,0x8a63fdae,0x00cc7b1f,0x82efb839,
    0xd29af44f,0x5a80cc01,0x4ccc17e2,0x3363f881,0x13e60e67,0x47d84f98,
    0xaeda881b,0x25f9ac02,0x76c0b839,0xbf11febb,0x5f735400,0x23f887e0,
    0xb907e25c,0x75c40fc4,0x8817cc3f,0x3e274404,0xf054bea3,0x202885f9,
    0x40dfd886,0x2a7f32fc,0x0a200f98,0x209f506c,0x2db02ff9,0x0192f9c8,
    0x27cc09f5,0x220b17d4,0x2c02afda,0x320e69f5,0x4cfe26c1,0x88f6004f,
    0x740f982f,0x41f89725,0xb007e25c,0x7302f98f,0x3e61f300,0x3e28a7c2,
    0xa80546b9,0x37d46c44,0x88fd5ed4,0x405407d2,0xb037c429,0x8d4fd40d,
    0x13e60b5e,0x2dd03f98,0x8035c039,0x41cd7e45,0x5b626c2c,0x3f1005f8,
    0x42fa82f8,0x1f89726c,0x803f12e4,0xa817c479,0x3e21f002,0x8fc72ec2,
    0x41c80e4d,0xd807ea3c,0x8c45a9c6,0x81f60503,0x92e7c06d,0x037c075f,
    0x27ee03f5,0x802d400d,0xd83bfd85,0xd9ae26c3,0xf83f5006,0x24d89f02,
    0xb907e25c,0x16600fc4,0x400dc13e,0x8f627468,0xe88cfa9a,0x3a1a029b,
    0x0e881ec2,0x2bbc98d4,0x7d402053,0xfc80db03,0xb803fe64,0x440bb01f,
    0x1dc404df,0x7f442c02,0x226c4e83,0x2807ee4d,0x902f89f1,0x4f70fc1d,
    0xf73dc2fb,0x5c0e4185,0x0a82cc0f,0x7c1f5072,0x02980d40,0x1b16e126,
    0x06a03d10,0x2017014c,0x406d82fc,0x402f41fa,0x0075c0dd,0xdb9807f2,
    0x0d04aace,0xb17e0fe6,0x3f607c49,0x98f6c381,0x36ff602f,0x7ceffc41,
    0x277fe21d,0xb9df11df,0x65e76403,0x3bbfd00c,0x4076b2a0,0x02bbabba,
    0xaabb8164,0x2005d4c2,0x02bbabba,0xdea80fe2,0x6802dcab,0x9f7002b8,
    0xd10019f7,0xfe8baa80,0x05fe4c1e,0x2a2fc1d4,0xf901cbce,0xc881799d,
    0x201dfbef,0x40104008,0x20004020,0x40010008,0x08006000,0x00010080,
    0x20008006,0x00040019,0x08001880,0x00004080,0x04406e02,0x08800880,
    0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x35555100,0x15554c12,0xaaa98590,0xaa9809aa,
    0xb88009aa,0x55554c3c,0x65401aaa,0x54c32a1c,0x0009aaaa,0x2ee20062,
    0x2aa61dd8,0x4c2aaaaa,0x2aaa2aaa,0x0d5554c2,0x5b8836a0,0x0e887700,
    0x54c016e2,0xb980aabb,0x006aa63d,0x2a885551,0x43fd00e0,0x80bf500b,
    0xa9dfa86a,0xadfa83ec,0x4a81deba,0x339f513e,0x6d848b95,0x2b7ea1d4,
    0xb801eeb9,0xbcde9805,0x273e61fe,0x7d40ea99,0xfa81fcc5,0x07dc400e,
    0x07e00db1,0x02ecc1b1,0x815db34c,0x7d45f359,0x2a27ec06,0x3aa1ffdf,
    0x0e23ec07,0x05c01fc4,0x87f30fe2,0x41fc83f8,0x7f10aa1e,0x7cc2dc70,
    0x07f10321,0x0fe803f9,0x0fe25d80,0xf883309f,0x13e016c3,0x1b207cc0,
    0x5c800aa0,0x41ee4d80,0x5ff1024c,0x490bfe20,0x203d45e8,0xdf10487c,
    0x202017bb,0x3f86e83f,0x403c4fd0,0x3bee03f8,0x048aec2c,0xa81fa07f,
    0x44d804fc,0x88027c6e,0x3e00b23f,0xc81f3004,0x64000806,0x1aa6d805,
    0xdd9101ec,0x0887ef20,0x80f507dc,0xf880b87c,0x6d43fd13,0x85f83f80,
    0x263f703f,0x11fc401f,0x1f305c83,0x5c0fe037,0x0fb1b01f,0x7c5c89b0,
    0x9fc404c4,0x009f002d,0x5cd903e6,0x2a06d42c,0x7646e40d,0x85b1f982,
    0x882cefc9,0x56c41fac,0x2a35401f,0x1c43e407,0x29f31fc4,0x9cf80fb8,
    0x3f80eea9,0x21fc7f30,0x64ce7c42,0xb9d02e42,0x1339f310,0x9a441fcc,
    0x3626c02f,0x6d4ce7c2,0x02dcf880,0x7cc013e0,0x883b3640,0x03ee20fb,
    0x01f737d9,0x1f401557,0x3717e910,0x43d803f5,0x483e407a,0x9be23f88,
    0xbadf80f9,0x03f80cfd,0x467e4bf3,0x556fc41b,0xf502e42d,0x55bf7307,
    0x06427cc5,0x7c6d80dd,0x75556fc0,0x0efdf880,0x26009f00,0x0647640f,
    0x07cc0f98,0x5c1f89b2,0x01f4019c,0x5587ee91,0x542c403f,0x0b83e407,
    0x49f51fc4,0x4c3f80f9,0xf503f86f,0x41ffe447,0x172143f8,0x503f80d0,
    0xaaae887f,0x33b601fd,0x4c4f82ca,0xefabf880,0x3004f800,0x02eec81f,
    0x81f303e6,0xf507e25c,0x7d07ffff,0x74f8a440,0x0c807ea5,0x836407a8,
    0x5ce7c438,0x7c07cc5f,0x1fc2fc83,0x01b81fc8,0x05c807f1,0x207f0122,
    0x4cd5c1fc,0x33604f99,0x4013e008,0x01df33f8,0x1f3004f8,0x300fcec8,
    0x640f981f,0x4c2e17c5,0x203e85a9,0xa963f248,0x2a03701f,0x8902e407,
    0x981aadf8,0xfc83f80f,0x2fc41fc1,0x07f107b8,0x019036b8,0x85f883f8,
    0x3601f905,0x8504f804,0x03be63f8,0xf98704f8,0x306db640,0x640f981f,
    0x20d317c5,0x92203e83,0x07ea3ef8,0x43d410aa,0x0dc07b5a,0x1f9809f1,
    0x1be61fc4,0x0de987f1,0x9f104b88,0xf50ef980,0x43f8807d,0x81dc0de9,
    0x00bb04f9,0xf889309f,0x440f7d44,0x7cc4984f,0x85f8b641,0x20fcc1f9,
    0xf98be26c,0xe81cbabd,0x8f916204,0x4ce542fa,0x503ea3b9,0x3388099f,
    0x32207dfb,0xbdfb30cf,0xfd987db9,0x202cccde,0x5dfb3008,0x402c8800,
    0xdccdefd9,0x441dfa82,0x32a0cffc,0x9ff9301c,0x6cc3fb99,0x3ffea2ef,
    0xddffb31c,0x7e443fdd,0x365fd50c,0x19f911df,0x75433f22,0x20dfb8af,
    0xb882cca8,0x7ecc0bef,0x7f54930b,0xfffff52d,0x06ff6a3f,0x00020011,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x2aaaa600,0x2aa1aaaa,0x2635511a,
    0x9809aaaa,0x2aaaa61c,0x2a010019,0x21881ccc,0xaaaaa980,0x2aaaa1aa,
    0x53155542,0x55543555,0x42aaaa62,0x5402aaaa,0x42aaaa61,0xaaaaaaa8,
    0x8571262a,0xaaaaaaaa,0x80001d33,0x71002000,0x32e205b7,0x30797102,
    0xea805977,0x25b999df,0x2a25c6f8,0x744fbadf,0x5d6fd46c,0x9d5e80ee,
    0x82fa86cc,0xcc83aefd,0x41feaaaa,0x81bd06fc,0x83f84ffa,0x04fb85fa,
    0x3be61fcc,0x3f6abaa0,0xd1ea7baa,0xe98c0189,0x246e64c0,0x005c0090,
    0x5503ea5b,0x7c950fa2,0xb80752c4,0x7dc384fa,0x47f10360,0x8aa153fa,
    0x217e23f8,0x116c351a,0x3b71085f,0x209f5070,0x260680fe,0xf881d46f,
    0x6c02f983,0x0545f83f,0xd1ea38f9,0x300c0189,0x0900fdcb,0x21b005c0,
    0x4ccec1f8,0x4550f46d,0x2b00a2f8,0x13f8804f,0x7c47f109,0x7e87f006,
    0x5f03e200,0xdf102000,0x06e2fcc0,0x81627f50,0x02f983f8,0x13e0fe32,
    0xf5047c81,0x0600c4e8,0x80fee3f8,0x1002e004,0x4fc43f97,0x01e21999,
    0x550077f2,0x5b20513e,0x223f880c,0x3e036a4f,0x6d41be23,0x45f03ea0,
    0x02ec8cb8,0x7dc01fd8,0x3f600912,0x0fe200d9,0xf9d40be6,0x3e404f83,
    0x0c4e8f50,0xb8fcc060,0x801206d9,0x2236a00b,0x9807e61f,0x2ffa801f,
    0xb99df960,0x2095f306,0x447f23f8,0xb33f80fb,0x41f7103d,0xd317c3f8,
    0x401f93bd,0x1dd003fa,0x3fe2001b,0x4c1fc401,0x0fe4882f,0x40f9013e,
    0x0313a0fa,0x555f5018,0xecccb9b2,0x9950cccc,0x239999d9,0xf83f10f8,
    0x450fe143,0x2e0db108,0x1aeab7e1,0x99bff999,0x5ed6fc45,0x6fc07cc1,
    0x07cc04fd,0x217d4bb6,0x4407e26c,0x3be6005f,0x01fe4002,0x33333be2,
    0x3e0c82fd,0x3e404f83,0x33ae3f50,0x8e630061,0x81363df8,0x4c02e004,
    0x6415f71f,0x7e43a9df,0x99621b8c,0xfcccd885,0x40f701c4,0x07cc03f8,
    0x200fd9fc,0x77ecc0f9,0x3e2e42f9,0x8001fb02,0x6e4c007d,0x20fe201f,
    0x4cdd42f9,0x027c1cf9,0xefea81f2,0x30063fb9,0x7c7d8ff6,0x0b801201,
    0x13e77f60,0x9109ff91,0xacf887ff,0x27c1b81c,0x33f73320,0x00fe22cc,
    0x227f01f3,0x403e605e,0xf8b90be0,0x8002fb82,0x4562007c,0x20fe206f,
    0x7ffec2f9,0x027c7fff,0x41ab81f2,0x398600c0,0x05b7bb91,0x002e0048,
    0x00400001,0x7c244022,0x40f70504,0x07cc03f8,0x207f31fc,0x42f800f9,
    0x3e617c5c,0x07c80705,0x04fa8360,0x05f307f1,0x809f07f0,0x200f207c,
    0x86170c01,0xb9997008,0x2a019999,0x00000000,0xf883b000,0x07b82b84,
    0x3f3013e2,0x17dc4f88,0x3e200fcc,0xd0be2e42,0xd80b101d,0xfb03b007,
    0xf309f105,0xbf07f007,0x9d00fc80,0x33333500,0x0002a533,0x00000000,
    0x22000000,0xff930cfc,0xd50fd999,0xefd9819f,0x219f9103,0x360befd9,
    0x19f911cf,0xea85e540,0x91dfb8af,0xfd9999df,0x33fee209,0x987fd501,
    0xfb30bffe,0x3bf6a15d,0xf931fc02,0xfeb8817f,0x0001a81c,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x0ccba800,0x6556de44,0x5c4b262d,
    0xa8732a0c,0x9117950c,0x19865c59,0x3710002a,0x006e3850,0x530a86cc,
    0x000002a1,0x91ece5c4,0x22199999,0x4c2ec8cb,0x441972cc,0xb33ec8cb,
    0x1016603b,0x1702e603,0x05cc0dcc,0x35102a62,0x0298d470,0x3f24a8a6,
    0x8a7dcbe0,0x1f99762f,0xbd0aa3e4,0xd85707d4,0x66440160,0x88ae4a81,
    0x874c02db,0x4dcaced8,0x740b10ea,0x797dd301,0x265e88e2,0x40fc9dee,
    0xd98392fa,0x9abfb8be,0x2b4ccc6d,0xd5530b90,0xfaa987cc,0xc8b26ee0,
    0x1e522698,0x36d7a3f3,0x43f3e455,0x7cc363f8,0x9724e99a,0x90fcc1f8,
    0x917c4f50,0x816e1d30,0x1d100cd9,0x0bda81aa,0x42a81b00,0x0a80363b,
    0xdb041b20,0x07e26c81,0x3640abf2,0x7dc7a8fe,0x5541fcca,0x0e87302a,
    0x989120d8,0x134cee7a,0x52e5361f,0xe81f308f,0x4d7edc45,0xf8972099,
    0x20715d81,0x0e6dd52f,0xda87f2ec,0xf99f4403,0x01cc9802,0x5dc24122,
    0x2e40000d,0x17207ee0,0xc81ba05f,0x81f31f46,0x2cb03ed8,0x103a36c4,
    0x15724489,0x3c68adcf,0x05a8ee59,0x2a6c85f5,0x3201f98d,0x3ea07e25,
    0x32b900b8,0xd900b9f9,0x02eb97a1,0x03f52f88,0x2a8075c0,0x709d1090,
    0x99999999,0x5f302e41,0x205f1720,0xe8d902fd,0xafb83e63,0x986e0edc,
    0x10743b03,0x43937707,0x3d11fabe,0x546a4855,0x44f80312,0x3e23f14d,
    0x7c4b9143,0x4c097d01,0x2099d2af,0x701d51f8,0x326a807b,0x016dc405,
    0x3621c42c,0x640003b8,0x208bd105,0x4dc17c5c,0x746c80fc,0x99a83e63,
    0x32122176,0x21d12110,0x5443aad8,0x01828c40,0xc8002041,0x8fcc7e0e,
    0x21b8aef8,0x5c0bee7b,0xf537401f,0x00d8b203,0x2b8066d4,0x07326076,
    0xd88b61c4,0x407706c1,0x6c1b201c,0xf8b904c6,0x90bd1d42,0x03e63f8d,
    0x220261a6,0x2b983731,0x00017775,0x40000000,0x7f41dbfd,0x43ffe8bd,
    0x1df9dff8,0x23b80688,0x0d471068,0x90199300,0x017b3244,0xb7951fa8,
    0x0261b39b,0xd500b80a,0xccdfb87f,0x15fd50ec,0x4bea3bf7,0xfd30dfd8,
    0x933bf717,0x0000019f,0x00000000,0x11000000,0x10020440,0x40002004,
    0x44000000,0x2000c000,0x00008020,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x5555554c,0xa98aa0aa,0x0aaaaaaa,
    0x044b8722,0x0882c981,0x2e200053,0x000003bb,0x00000000,0x00000000,
    0x00000000,0x00000000,0x40000000,0xaaaaaaa9,0x4c47fe1b,0x09999999,
    0x2a1d116e,0x3730fa8f,0x649359b7,0x37777627,0xddd33ddd,0x0000000d,
    0x00000000,0x00000000,0x00000000,0x00000000,0x80000000,0x0006a219,
    0x27129824,0x2ee60638,0x00000040,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x19800000,0x99999724,0x10043999,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000140,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__times_19_latin1_x[224]={ 0,1,1,0,0,0,0,0,0,0,1,0,0,0,
1,0,0,2,0,0,0,0,0,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,-1,0,0,-1,0,0,0,0,0,0,0,
-2,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,2,1,1,0,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,0,1,1,0,0,0,
1,1,0,0,-1,0,0,0,0,-1,0,0,0,0,1,1,-1,1,1,1,0,0,1,1,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
 };
static signed short stb__times_19_latin1_y[224]={ 15,3,3,3,2,3,3,3,3,3,3,4,13,10,
13,3,3,3,3,3,3,3,3,3,3,3,7,7,5,7,5,3,3,3,3,3,3,3,3,3,3,3,3,3,
3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,17,3,7,3,7,3,7,3,7,3,3,
3,3,3,7,7,7,7,7,7,7,4,7,7,7,7,7,7,3,3,3,9,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,15,6,3,3,5,3,
3,3,3,3,3,7,7,10,3,2,3,4,3,3,3,7,3,8,14,3,3,7,3,3,3,6,-1,-1,-1,0,
0,0,3,3,-1,-1,-1,0,-1,-1,-1,0,3,0,-1,-1,-1,0,0,5,3,-1,-1,-1,0,-1,3,3,3,3,
3,3,3,3,7,7,3,3,3,3,3,3,3,3,3,3,3,3,3,3,3,5,6,3,3,3,3,3,3,3,
 };
static unsigned short stb__times_19_latin1_w[224]={ 0,3,5,9,8,14,13,3,6,6,7,10,4,6,
3,5,8,5,8,8,8,8,8,8,7,8,3,3,10,10,10,7,16,13,11,11,12,11,9,13,13,6,7,13,
11,15,14,12,9,12,12,8,11,13,13,17,13,13,11,5,5,5,8,10,4,8,9,8,9,8,8,9,9,5,
6,9,5,14,9,8,9,9,6,7,5,9,9,13,9,9,8,6,2,6,10,9,9,9,9,9,9,9,9,9,
9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,0,3,7,9,9,9,
2,7,6,13,6,9,10,6,13,10,6,10,5,5,4,9,9,3,4,3,6,9,12,12,13,7,13,13,13,13,
13,13,16,11,11,11,11,11,6,6,6,6,12,14,12,12,12,12,12,8,12,13,13,13,13,13,9,9,8,8,
8,8,8,8,11,8,8,8,8,8,5,5,5,5,8,9,8,8,8,8,8,10,9,9,9,9,9,9,9,9,
 };
static unsigned short stb__times_19_latin1_h[224]={ 0,13,6,13,15,13,13,6,16,16,8,10,5,2,
3,13,13,12,12,13,12,13,13,13,13,13,9,11,9,5,9,13,16,12,12,13,12,12,12,13,12,12,13,12,
12,12,13,13,12,16,12,13,12,13,13,13,12,12,12,16,13,16,7,2,4,9,13,9,13,9,12,12,12,12,
16,12,12,8,8,9,12,12,8,9,12,9,9,9,8,12,8,16,16,16,3,11,11,11,11,11,11,11,11,11,
11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,11,0,13,16,13,9,12,
16,16,3,13,6,9,5,2,13,1,6,10,7,7,4,12,16,3,5,7,6,9,13,13,13,13,16,16,16,15,
15,15,12,16,16,16,16,15,16,16,16,15,12,16,17,17,17,16,16,8,13,17,17,17,16,16,12,13,13,13,
13,13,13,13,9,12,13,13,13,13,12,12,12,12,13,12,13,13,13,13,13,8,10,13,13,13,13,16,16,16,
 };
static unsigned short stb__times_19_latin1_s[224]={ 254,250,241,43,152,10,206,237,112,219,183,
210,12,71,56,250,238,248,239,30,137,53,62,85,94,102,98,185,66,17,87,
125,1,104,31,231,43,128,65,133,123,146,1,140,154,223,202,165,28,178,44,
220,153,39,178,147,109,95,83,153,9,172,191,60,33,221,221,239,243,230,214,
204,194,188,191,172,166,168,148,1,118,63,132,248,75,22,32,42,158,81,139,
198,240,109,45,175,175,175,175,175,175,175,175,175,175,175,175,175,175,175,175,
175,175,175,175,175,175,175,175,175,175,175,175,175,175,175,175,175,254,217,144,
192,102,18,137,129,38,111,223,77,1,71,71,222,216,199,210,200,28,165,119,
252,247,206,230,56,193,180,166,158,205,66,226,161,175,189,1,18,30,42,54,
210,243,80,87,203,91,94,55,1,42,159,140,112,145,28,14,68,130,116,15,
108,118,34,53,62,71,80,10,56,89,25,222,127,25,182,38,57,1,73,136,
231,229,247,1,121,189,98,20,10,240,92,102,82, };
static unsigned short stb__times_19_latin1_t[224]={ 1,1,91,36,19,36,36,91,1,1,91,
78,101,101,101,19,36,64,64,50,78,50,50,50,50,50,91,78,91,101,91,
50,19,64,64,50,64,64,64,50,78,78,64,64,64,64,50,50,78,1,78,
36,78,50,50,50,78,78,78,1,64,1,91,101,101,78,50,78,50,78,64,
64,64,64,1,64,64,91,91,91,64,78,91,78,64,91,91,91,91,64,91,
1,1,19,101,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,
78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,78,1,50,19,
50,91,78,1,1,101,50,91,91,101,101,50,33,91,78,91,91,101,78,1,
91,91,91,91,91,36,36,36,36,1,19,1,19,19,19,78,19,19,19,19,
19,1,19,19,19,64,19,1,1,1,1,1,91,36,1,1,1,19,19,64,
36,36,36,36,36,36,36,91,64,36,36,19,36,64,64,78,78,36,78,36,
19,36,36,50,91,78,36,50,50,19,1,1,1, };
static unsigned short stb__times_19_latin1_a[224]={ 69,91,112,137,137,229,214,49,
91,91,137,155,69,91,69,76,137,137,137,137,137,137,137,137,
137,137,76,76,155,155,155,122,253,198,183,183,198,168,153,198,
198,91,107,198,168,244,198,198,153,198,183,153,168,198,198,259,
198,198,168,91,76,91,129,137,91,122,137,122,137,122,91,137,
137,76,76,137,76,214,137,137,137,137,91,107,76,137,137,198,
137,137,122,132,55,132,149,214,214,214,214,214,214,214,214,214,
214,214,214,214,214,214,214,214,214,214,214,214,214,214,214,214,
214,214,214,214,214,214,214,214,69,91,137,137,137,137,55,137,
91,209,76,137,155,91,209,137,110,151,82,82,91,158,124,69,
91,82,85,137,206,206,206,122,198,198,198,198,198,198,244,183,
168,168,168,168,91,91,91,91,198,198,198,198,198,198,198,155,
198,198,198,198,198,198,153,137,122,122,122,122,122,122,183,122,
122,122,122,122,76,76,76,76,137,137,137,137,137,137,137,151,
137,137,137,137,137,137,137,137, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_19_latin1_BITMAP_HEIGHT or STB_FONT_times_19_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_19_latin1(stb_fontchar font[STB_FONT_times_19_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_times_19_latin1_BITMAP_HEIGHT][STB_FONT_times_19_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_19_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_19_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_19_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_19_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_19_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_19_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_19_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__times_19_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__times_19_latin1_s[i] + stb__times_19_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__times_19_latin1_t[i] + stb__times_19_latin1_h[i]) * recip_height;
            font[i].x0 = stb__times_19_latin1_x[i];
            font[i].y0 = stb__times_19_latin1_y[i];
            font[i].x1 = stb__times_19_latin1_x[i] + stb__times_19_latin1_w[i];
            font[i].y1 = stb__times_19_latin1_y[i] + stb__times_19_latin1_h[i];
            font[i].advance_int = (stb__times_19_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__times_19_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_19_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_19_latin1_s[i] + stb__times_19_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_19_latin1_t[i] + stb__times_19_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_19_latin1_x[i] - 0.5f;
            font[i].y0f = stb__times_19_latin1_y[i] - 0.5f;
            font[i].x1f = stb__times_19_latin1_x[i] + stb__times_19_latin1_w[i] + 0.5f;
            font[i].y1f = stb__times_19_latin1_y[i] + stb__times_19_latin1_h[i] + 0.5f;
            font[i].advance = stb__times_19_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_19_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_19_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_19_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_19_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_19_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_19_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_19_latin1_LINE_SPACING
#endif

