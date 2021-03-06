// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_bold_10_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_bold_10_latin1'.
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

#define STB_FONT_courier_bold_10_latin1_BITMAP_WIDTH         256
#define STB_FONT_courier_bold_10_latin1_BITMAP_HEIGHT         42
#define STB_FONT_courier_bold_10_latin1_BITMAP_HEIGHT_POW2    64

#define STB_FONT_courier_bold_10_latin1_FIRST_CHAR            32
#define STB_FONT_courier_bold_10_latin1_NUM_CHARS            224

#define STB_FONT_courier_bold_10_latin1_LINE_SPACING           5

static unsigned int stb__courier_bold_10_latin1_pixels[]={
    0x00100008,0x00002040,0x90aa0350,0x14c29405,0x100425c0,0x22030970,
    0x70917072,0x03015079,0x4000a005,0x00402000,0x122e0201,0x800004cc,
    0x90545180,0x32079503,0x2e00c881,0x41e80643,0x4c0503da,0x063025c1,
    0x265ba8d1,0x2c42440e,0x3d9d116c,0x030591d8,0x2a1a20d4,0x37106c0b,
    0x80e640d8,0x641e540c,0x80c81c81,0x2198c40c,0x36a6dce8,0x20720583,
    0x20506c31,0x4c4c4098,0x40662621,0xece80986,0xec866312,0x1ffa26c8,
    0x7643dfd5,0x2ea346c8,0x406606c6,0x25706c1d,0x25986c58,0x3a21ece8,
    0x2612a1ec,0x20540d82,0x2204cc0d,0x33310999,0x98266621,0x42666099,
    0x3b218898,0x1c570ed9,0x67cc1333,0xdec80cc0,0x87b3a290,0x3b21ece8,
    0xb3d90ed9,0x3a23a81d,0x905741ec,0x5a21db3d,0x15a8d02c,0x6c2cb44d,
    0x6c7fff13,0x260bf620,0x341b06c5,0x44ae78d3,0x592c4ae5,0x86c2fd88,
    0x220c5ee8,0x6e75c2fd,0x2e9b9d74,0x9f914dce,0x5c73f223,0x499d4bb7,
    0x33f22036,0xd88b27a1,0x459a5c2f,0x895cb12b,0x7524cea5,0x2b83a126,
    0x51eb88b1,0x0d791267,0x1623aa34,0x643b0d79,0x2ee06c6b,0x706c1b06,
    0x34689667,0x341b341b,0xd8d77059,0x8387ae60,0x4cec46bb,0x22533b12,
    0x406c299d,0x5075e40d,0x063b9267,0x7702c41b,0xd8d13b8d,0xa9a0d9a0,
    0x499d4933,0x26836254,0x2753c9d9,0xd017c449,0x441deea8,0x3be6682f,
    0xd7d0362f,0x206c9503,0xa86c0ded,0x752ccea5,0xbe84a966,0x56d4361e,
    0xd7d0362d,0xf1177c43,0x4177c45d,0x7c40d80d,0x6c3aa4c2,0x3206c4ee,
    0x0f5f41ee,0x3a83ddb1,0x2599d4b3,0xaa4c7549,0x4cea0743,0x4993f225,
    0x22068875,0x0d102546,0x2a5ad8d3,0x1373aa0f,0x7ec4d874,0x41d9ec5d,
    0x6f640dec,0xb9d50740,0xfee986c9,0xdcea8366,0x45623624,0x11b1588d,
    0x80d80d8b,0x80ded80d,0x0d80d81c,0x0426e754,0xec81bd90,0x206f6c0d,
    0x41620ded,0xd8580dec,0x03bb20de,0x3ed85bd1,0x0440eec8,0x22298e72,
    0x7503f96e,0x813110aa,0x40000318,0x8fe5ba20,0x3a218081,0x3bf23f96,
    0x2dddf96e,0xfd16eefc,0x8bbfa25d,0x64000efd,0x10bbfa20,0x03f96e88,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x13104dc4,0x206a0298,
    0x059500c8,0x448b8391,0x910380b9,0x35091703,0x18098800,0x0a305305,
    0x82b80e32,0x320e441a,0xb89814a0,0x40d405c0,0x302982bc,0x30133033,
    0x0165cc13,0x2ca85910,0x40206664,0x83b662c9,0x0a0183a9,0x44441454,
    0x2614541a,0x216ba099,0x4428a818,0xb80c0999,0x41d4c4ee,0x23026031,
    0x25401981,0xf0a2a062,0xece818c3,0x26030305,0x440ab80a,0xb9911dec,
    0x9b6e744d,0x6f7744cd,0x390ecf41,0x2c157459,0xb9504ed4,0xcc86f645,
    0x3a3323e8,0xb0fa3323,0x7641db1d,0x23bf910d,0x2f745cd8,0x33ae2f74,
    0x9317ba4d,0xd0bdd122,0x41dd90bd,0x3f620eec,0x644eec82,0x83bb20ee,
    0x47d1990f,0x7646e8aa,0x8837b20d,0x19cb82fd,0x228ae1b8,0x26654e2b,
    0x48962366,0x3e1da875,0xb04f443d,0xa646cc55,0x5562b34b,0xb11d5623,
    0x919d30ea,0x22c59a5c,0x2e61d9d8,0x10f5cc1e,0x75cc533b,0x5cc08e61,
    0x70f5cc1e,0x2b6eb95b,0x2e2ddc5c,0x656dc973,0x74b95b75,0x8d8eab10,
    0xacd2e59e,0x5bb8b34b,0x2131e5c4,0x8ee2361b,0x989d700d,0x5526598e,
    0x7150f5c3,0xf937f6a5,0x4ea772cc,0x5562d13b,0xb11d5623,0x95b730ea,
    0x22c689dc,0x5b5499d8,0x0ed6d43b,0x56d45df1,0x526f6c1d,0x56d43b5b,
    0x4aef6e1d,0x5742bbdb,0x72546e0e,0x2f6e577b,0x7558862b,0x7724d75c,
    0x4689dda2,0x1ac80eae,0x8ab87257,0x6418ee6a,0x10ef74c4,0x21260aed,
    0x44742c39,0x221bbb14,0x3fba1eed,0x3a37f746,0x7c5cc6fe,0xb07bb624,
    0xd31edfc8,0x7f74cdfd,0x4d623626,0x41c86fee,0x3a66fee9,0x3b7626fe,
    0x4c9dbb14,0x3b624ccd,0x9dbb11ff,0x4493b762,0x3bae6fee,0x47bb620d,
    0x3661eed8,0x30cc84cc,0xeee88bdd,0x322776c4,0x9d702544,0xe98f774c,
    0x7541c0de,0x0201001e,0x7ec02008,0x744084b9,0x401002ef,0x46eefc80,
    0x00402e00,0xe8080401,0x20083f96,0x20200100,0xd0100803,0x00007f2d,
    0x8f36a000,0x008003ed,0x00bddd70,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x20000000,0x0081ccc8,
    0x42c88593,0x220100a8,0x00e6442c,0x03004400,0x05906231,0xd1990898,
    0x24088447,0x0a60cccc,0x50e1b2d9,0xa8091017,0x22a00003,0x00980c81,
    0x33101330,0x003a8990,0x402b8903,0x3222dab9,0x0ecf42ba,0x76745b3d,
    0x90aeb221,0x2288c832,0xdb11feec,0xe81541dd,0x367b21ec,0xce80ee0e,
    0xb8eab13e,0xee880bb7,0x5a2141ed,0x8e404c2c,0x315021c0,0x645edeb8,
    0x040c62ee,0x37b22e64,0x3b20aea0,0xd11a61ed,0x142f76c0,0x20e80166,
    0x5743abbc,0x2325da1d,0x8f2e723b,0x9950dab8,0x2e4a9dc1,0x7ffc4792,
    0x752c4aa2,0x3bdd3122,0x588c46c4,0x40ebc875,0x20bbcd85,0xe86bc87e,
    0x126554c7,0x7e859139,0x21eceb98,0x41fa0abe,0x9a5c0e86,0xa81bdd75,
    0xae858b34,0x1baaee3f,0x0eef88fd,0x59571620,0x707ef433,0x20dc89fd,
    0x6544663b,0x2593b30a,0xc95c973a,0xd06c1543,0xacc489d4,0x88f6d458,
    0x27d46fef,0x07f7a07c,0x2c0be216,0x989ab6e2,0x22c2bcdc,0x10bceae8,
    0xe8587b53,0x770f75c3,0x43ab45a2,0xf858d4ee,0x34765c1e,0x01d5a22c,
    0x3babc877,0x3221d562,0x55ce40c1,0x8876ae23,0x937b25bc,0x1543fed8,
    0x526599d4,0x4cd2cc39,0x40362932,0x261f83ea,0x42c19adc,0x6ce16068,
    0x58371445,0x31eefed8,0x44583dbf,0x84721b8d,0x2b11eed8,0x4599cc3a,
    0x7d43de85,0xac4581ee,0x9103603a,0x0eed8377,0x10320fb6,0x41583779,
    0x21260b18,0x777442c8,0xdb037b20,0x2eefe81b,0x0387bbaa,0xe8321bee,
    0xfd33fefd,0x303bb27d,0x1f707dfd,0x7f4c7720,0x3020043e,0x66d47dfd,
    0x08bddf50,0x3236cfe4,0xdfd30def,0x1537dae7,0x27dfd301,0x0006d9fc,
    0x00000080,0x33623c98,0x2e1ee883,0x0000204e,0x00008020,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x300aa000,
    0x02660077,0x00888880,0x76c40660,0x40093000,0x09998099,0x11882231,
    0x98311881,0x44498311,0x8b2a0999,0x81988198,0x33109998,0x11062110,
    0x3103310c,0x26200111,0x84ccc199,0x46641118,0x2200383e,0x44ea29aa,
    0x855b1023,0x5bd30eec,0x2049dd70,0x36217ba0,0x580ba82f,0x9adc0fd0,
    0x33a24dde,0xb976f72f,0xb8de8bb7,0x8fdd7a0f,0x6fee46c8,0x2e3b3b36,
    0x33ae1ede,0x5373ae1e,0x3b61edec,0x5d7a0ed8,0xb81bd51f,0x036e5eae,
    0x443b33e6,0xb3d51dfc,0x803aac4b,0x67c5ede8,0x464c221e,0x8bffa24b,
    0x3765cadb,0x1245265d,0x207ae608,0x29fa85bb,0x5436542c,0x22686c3e,
    0x435e459b,0x9e9c86cc,0x583aacc6,0x6426ace4,0xd892ab12,0x267624b8,
    0xe9966732,0x74f6448c,0x66c40e47,0x740cea84,0x222c0aa8,0x55623a8d,
    0xa97bbae3,0x21cb408d,0x8d7b7308,0x2bbdb849,0x04733436,0x3b5b5081,
    0xae81d5d0,0x2bdfd53f,0x0fe469e8,0x3a2276ec,0x7c40fc40,0x85cecb83,
    0xb0580e8e,0xeef89320,0x88ffbe20,0x268e62ef,0x5e44adb9,0x208e46ce,
    0x3b603ef8,0x22c13ba0,0x7743fef8,0x1055006f,0x706c5fdf,0x88498b91,
    0x37764edd,0x8126f6c3,0x98dfdd30,0x7f644ccd,0x3f7662c4,0x2761f541,
    0x2c489e80,0x7d41ead8,0x05da84fa,0x87b1160b,0x9622e8d8,0x4d623626,
    0x7c5cc933,0x23464e44,0x0dac4b1c,0x0da06754,0x83aac458,0xdff50e00,
    0x88c44441,0x3a61f702,0x7cc081ef,0x2226002e,0x96e80408,0x20b0083f,
    0x26b701fc,0x777cc2ef,0xfd83bf64,0x65e60fd8,0xfe883f04,0x5c3bf62e,
    0x15f92eef,0x93bbf23d,0xdf96eefc,0x25cfec1b,0xfb8fe5ba,0x26bf27ee,
    0xf501970e,0x2efe885d,0x000dd3f9,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x84000000,
    0x0d828000,0x3b65fff1,0x83710ee8,0x41304452,0xbd1f51b9,0x261d75d8,
    0x30662628,0x00130709,0x3aeddddd,0x98ae65ee,0x446a041b,0x262ddddd,
    0x30e09999,0x3bba228c,0x00000002,0x00000000,0x37bae000,0xdd0f5740,
    0x575449dd,0x44b55021,0xb14a8596,0xab8ec1b3,0xdeb8e225,0xb2d75d40,
    0x42c9c8d1,0xdb32f5c4,0x2d007499,0x1d209998,0x061c8975,0x64411111,
    0x8622cccc,0x0000630d,0x00000000,0x00000000,0x7cc3ab44,0x2346ce43,
    0x36e00dfc,0x311aee08,0x58367669,0x21da96ee,0x77c40ddc,0x2f22523f,
    0xac43623b,0xac00282b,0x2e65dddb,0x01712ea2,0x00000000,0x00000000,
    0x00000000,0x1d562000,0xd9c87aba,0x3a2de468,0x449ddf30,0x7104c42f,
    0x31060471,0x21ba7f23,0x4cc01e9e,0x0004c419,0x00000000,0x00000000,
    0x00000000,0x00000000,0x9fc80000,0x6740846d,0x00802ebd,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_bold_10_latin1_x[224]={ 0,1,1,0,0,0,0,2,2,1,0,0,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,1,1,-1,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
0,-1,-1,0,0,0,0,0,0,0,-1,-1,0,0,0,2,0,1,0,-1,1,0,-1,0,0,0,0,0,0,0,
0,0,0,-1,0,0,-1,0,0,0,0,0,0,-1,0,0,0,1,2,1,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,0,0,0,
2,0,1,-1,1,0,-1,0,-1,-1,1,0,1,1,1,0,0,1,1,1,1,0,0,-1,0,0,-1,-1,-1,-1,
-1,-1,-1,0,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
 };
static signed short stb__courier_bold_10_latin1_y[224]={ 7,1,1,0,0,1,2,1,1,1,1,1,5,4,
5,0,1,1,1,1,1,1,1,1,1,1,3,3,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,8,1,2,1,2,1,2,1,2,1,1,
1,1,1,2,2,2,2,2,2,2,1,3,3,3,3,3,3,1,1,1,3,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,3,0,1,2,1,
1,1,1,1,1,3,4,4,1,0,0,0,1,1,1,3,1,3,6,1,1,3,1,1,1,3,-1,-1,-1,0,
0,-1,1,1,-1,-1,-1,0,-1,-1,-1,0,1,0,-1,-1,-1,0,0,2,1,-1,-1,-1,0,-1,1,1,1,1,
1,1,1,0,2,2,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1,1,1,1,1,1,1,
 };
static unsigned short stb__courier_bold_10_latin1_w[224]={ 0,3,4,5,5,5,5,2,3,3,5,5,3,5,
3,5,5,5,5,5,5,5,5,5,5,5,3,3,6,6,6,5,5,7,6,5,5,5,6,6,6,5,6,6,
6,7,7,6,6,6,6,5,5,6,7,7,6,6,5,3,5,3,5,7,3,6,7,6,6,5,6,6,6,5,
5,6,5,7,6,5,7,6,6,5,6,6,6,7,6,6,5,3,2,3,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,3,5,5,5,6,
2,5,4,7,4,5,6,5,7,7,4,5,3,3,3,6,5,3,3,3,4,6,6,7,6,5,7,7,7,7,
7,7,7,5,5,5,5,5,5,5,5,5,6,7,6,6,6,6,6,5,6,6,6,6,6,6,6,5,6,6,
6,6,6,6,7,6,5,5,5,5,5,5,5,5,5,6,5,5,5,5,5,5,6,6,6,6,6,6,7,6,
 };
static unsigned short stb__courier_bold_10_latin1_h[224]={ 0,7,4,8,9,7,6,4,8,8,5,6,4,1,
3,9,7,6,6,7,6,7,7,7,7,7,5,5,6,3,6,7,7,6,6,7,6,6,6,7,6,6,7,6,
6,6,6,7,6,8,6,7,6,7,6,6,6,6,6,8,8,8,4,2,2,6,7,6,7,6,6,7,6,6,
8,6,6,5,5,6,7,7,5,6,7,5,4,4,4,6,4,8,8,8,3,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,6,8,6,5,6,
8,7,2,7,3,4,3,1,7,2,4,7,4,4,2,6,7,2,3,4,3,4,6,6,6,6,8,8,8,7,
7,8,6,8,8,8,8,7,8,8,8,7,6,7,9,9,9,8,8,5,7,9,9,9,8,8,6,7,7,7,
7,7,7,8,6,7,7,7,7,7,6,6,6,6,7,6,7,7,7,7,7,5,6,7,7,7,7,8,8,8,
 };
static unsigned short stb__courier_bold_10_latin1_s[224]={ 253,147,83,87,42,185,56,253,144,126,22,
62,55,176,111,29,225,124,136,231,68,237,249,1,15,21,28,251,74,122,198,
27,41,48,149,205,162,156,205,198,218,212,191,191,184,176,168,74,81,115,142,
96,130,81,116,108,101,94,88,111,105,93,99,155,163,41,88,28,128,15,8,
60,246,240,62,226,220,14,1,200,217,53,238,176,67,225,38,75,68,134,32,
122,156,83,105,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,
35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,35,253,116,233,
194,245,109,166,47,171,33,134,49,115,176,7,147,59,243,64,45,143,102,211,
167,139,95,129,88,1,154,147,188,97,239,169,177,120,148,120,221,189,177,183,
74,195,201,227,48,213,34,35,1,8,137,130,8,158,22,15,48,214,207,21,
54,60,80,67,94,101,159,168,87,108,135,141,114,128,141,162,182,1,206,165,
171,42,7,247,232,233,13,20,27,151,55,68,76, };
static unsigned short stb__courier_bold_10_latin1_t[224]={ 6,11,34,1,1,11,27,1,1,1,34,
27,34,34,34,1,11,27,27,11,27,11,11,19,19,19,34,27,27,34,27,
19,19,27,27,11,27,27,27,11,27,27,11,27,27,27,27,19,27,1,27,
19,27,19,27,27,27,27,27,1,1,1,34,34,34,27,19,27,11,27,27,
19,19,19,1,19,19,34,34,19,11,19,27,19,19,27,34,34,34,19,34,
1,1,1,34,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,
27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,27,6,19,1,
19,27,19,1,19,34,19,34,34,34,34,19,34,34,11,34,34,34,19,11,
34,34,34,34,34,27,19,19,19,1,1,1,11,11,1,19,1,1,1,1,
11,1,1,1,11,19,11,1,1,1,1,1,34,11,1,1,1,1,1,27,
11,11,11,11,11,11,1,19,11,11,11,11,11,19,19,19,19,11,19,11,
11,11,11,1,27,19,11,11,11,11,1,1,1, };
static unsigned short stb__courier_bold_10_latin1_a[224]={ 85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,85,
85,85,85,85,85,85,85,85, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_courier_bold_10_latin1_BITMAP_HEIGHT or STB_FONT_courier_bold_10_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_bold_10_latin1(stb_fontchar font[STB_FONT_courier_bold_10_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_courier_bold_10_latin1_BITMAP_HEIGHT][STB_FONT_courier_bold_10_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_bold_10_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_bold_10_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_bold_10_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_bold_10_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_bold_10_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_bold_10_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_bold_10_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__courier_bold_10_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__courier_bold_10_latin1_s[i] + stb__courier_bold_10_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__courier_bold_10_latin1_t[i] + stb__courier_bold_10_latin1_h[i]) * recip_height;
            font[i].x0 = stb__courier_bold_10_latin1_x[i];
            font[i].y0 = stb__courier_bold_10_latin1_y[i];
            font[i].x1 = stb__courier_bold_10_latin1_x[i] + stb__courier_bold_10_latin1_w[i];
            font[i].y1 = stb__courier_bold_10_latin1_y[i] + stb__courier_bold_10_latin1_h[i];
            font[i].advance_int = (stb__courier_bold_10_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__courier_bold_10_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_bold_10_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_bold_10_latin1_s[i] + stb__courier_bold_10_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_bold_10_latin1_t[i] + stb__courier_bold_10_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_bold_10_latin1_x[i] - 0.5f;
            font[i].y0f = stb__courier_bold_10_latin1_y[i] - 0.5f;
            font[i].x1f = stb__courier_bold_10_latin1_x[i] + stb__courier_bold_10_latin1_w[i] + 0.5f;
            font[i].y1f = stb__courier_bold_10_latin1_y[i] + stb__courier_bold_10_latin1_h[i] + 0.5f;
            font[i].advance = stb__courier_bold_10_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_bold_10_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_bold_10_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_bold_10_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_bold_10_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_bold_10_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_bold_10_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_bold_10_latin1_LINE_SPACING
#endif

