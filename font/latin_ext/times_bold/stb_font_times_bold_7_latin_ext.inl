// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_bold_7_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_bold_7_latin_ext'.
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

#define STB_FONT_times_bold_7_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_times_bold_7_latin_ext_BITMAP_HEIGHT         50
#define STB_FONT_times_bold_7_latin_ext_BITMAP_HEIGHT_POW2    64

#define STB_FONT_times_bold_7_latin_ext_FIRST_CHAR            32
#define STB_FONT_times_bold_7_latin_ext_NUM_CHARS            560

#define STB_FONT_times_bold_7_latin_ext_LINE_SPACING           5

static unsigned int stb__times_bold_7_latin_ext_pixels[]={
    0x80a81331,0x01501310,0x22060305,0x18080c40,0x88288288,0x6404cc09,
    0x81104c40,0x80808882,0x40104002,0x41040980,0x44000448,0x14140a80,
    0x841cc042,0x10621118,0x20620013,0x6cc0cc18,0x46209428,0x281459da,
    0x044d4428,0x044d4439,0x044d4413,0x8113510a,0x822e620d,0x14c48198,
    0x1702e02e,0xa88c4170,0x3981c530,0x248a6322,0x22882622,0x20662102,
    0xa886a20a,0x9888e261,0x455a9412,0x8222a259,0x044cc448,0x044cc455,
    0x0da4c7b3,0x2256ccea,0x2a21440a,0x7510d6a3,0x8ea21ad4,0x6464435a,
    0x8d886b50,0x4886b50a,0x43232253,0x2151b129,0x92aa5348,0x156a5348,
    0x74255466,0x25240ee2,0x2530a8d8,0x5cee24ba,0x42a3622a,0xb92aa2ab,
    0x0da32e59,0x4b30d665,0x20e9835a,0x2a3a835a,0x321d9835,0x4ce63b9b,
    0x10aaa2dd,0x5265ab89,0x34996ae1,0x86932d5c,0x0d26772c,0xb8693059,
    0x26772c82,0x70570592,0xa4c15c95,0x84ab8cc1,0x312b9dc6,0x2a702c94,
    0x0d88ee3a,0xb83620b2,0x1d1a6e4a,0x86b3035b,0x2a0d2659,0x260d263c,
    0x3aa0d263,0x47717949,0x21d1b539,0x7074c4b9,0x2e1a4cd5,0x570d266a,
    0x4ee1a4cd,0x2c86933b,0xb9643498,0x94cee772,0x2572c82c,0x95cb20ba,
    0x75198349,0xc9b88b01,0x10592921,0x0d986ea5,0x51605916,0x32356417,
    0x33b1459c,0xb86932d4,0x06930f88,0x501a4c73,0x77064e4c,0x2a2de428,
    0xd89b2a3c,0xd89b2a19,0xd89b2a19,0x42a2e219,0x272219d8,0xc8867621,
    0x151711c9,0x10ce44a6,0x92ee3939,0x3b11c9c8,0x89772983,0x94907039,
    0x54a219c8,0x8833024b,0x7706619c,0x494c5989,0x44330e14,0x6c47019d,
    0x3b11d419,0x06006203,0x07c45c00,0x00000000,0x00000000,0x4c400010,
    0x31080000,0x10400181,0x80262080,0x26206001,0x81000440,0x26000c09,
    0x00001800,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x81000000,0x2088c408,0x110080a8,0x01310660,
    0x88ccc415,0x04c41981,0x006e0413,0x08813033,0x10aa04c4,0x04410e01,
    0x304c404c,0x03105001,0x44388133,0x88828110,0x0c0660c0,0x22440804,
    0x88220888,0x8a820621,0x26135712,0x26aa2155,0x54191910,0x28098130,
    0x32caa850,0x17ec390b,0x330dc717,0xd882a0c4,0x988260a8,0x710aa09a,
    0x42609881,0x04cd442b,0x260dc171,0x22111310,0x15310899,0x4c262a21,
    0x2222218e,0x44302620,0x2b829849,0x426510dc,0x4730c9e9,0xc988f229,
    0x0d6a1b30,0x435a89b3,0x5dc6772c,0x21919119,0x1910c8c8,0x8b325419,
    0xa87fa38b,0x1c5c6e1e,0x591c5c17,0x474c5570,0x91911dc1,0x5c323221,
    0x1ad45571,0x5dc32322,0x5435a9c5,0x50c74c35,0x21ea886b,0x232218e9,
    0x4ed4570c,0x5c236ae5,0x6996ae5a,0x572bacc3,0x5e45715c,0x1a4ce2e0,
    0x3498f766,0x7333b9dc,0x93b9642b,0x3b964ee5,0x2a15992a,0x9887661e,
    0x87aa370e,0x2c87aa0c,0x3aa20d88,0x2e591dc1,0x8dcee593,0x90d262db,
    0x06cdcee5,0x2930d26b,0x4987aa21,0x2a25b843,0xa9dcb21e,0xd992b665,
    0xab9aae3c,0x2b3056c6,0x52d4b52b,0x4b6215c7,0x7c6d4349,0x9c886932,
    0x11b7530c,0x73b9dcee,0x971dcee7,0xe98a4f54,0x239b8660,0x2e1d312c,
    0x6443a620,0x2dc22c19,0x3b9dc771,0xb964ee77,0xb86930eb,0x716ee773,
    0x86930d26,0x21a4cb70,0x25b8490a,0x432a773b,0x14642dd9,0x23654d95,
    0x85ded459,0x221950ca,0x27130ea1,0x442819d8,0x20bc819d,0x0a8b8861,
    0x2e215171,0x310620a8,0x50661cdc,0x239b84c1,0x0e0e6e18,0x6490a833,
    0x42a2e21c,0x2870a8b8,0x1710cec4,0x21306e15,0x276219d8,0x3b1242a1,
    0x490a8503,0xb500a8b8,0x400001d1,0x0200006a,0x00000260,0x00008808,
    0x11000000,0x20000008,0x000000c0,0x80000620,0x00000009,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x20200000,0x01104c19,0x4c098083,0x208c0841,0x28621020,
    0x0220cc08,0x41103013,0x02083118,0x42808883,0x10206610,0x04cc1981,
    0x06e08811,0x26142091,0x108ae209,0x260220cc,0x420a0099,0x220a0660,
    0x710c40c0,0x1982aa21,0x074c1771,0x2a255d07,0x36930c83,0x542e28e0,
    0x12ab8510,0x2604c375,0x3902e621,0x2ea4aacc,0xa88e618a,0x81531098,
    0x29a8730c,0x05d442ea,0x52cccc73,0x8a882227,0x1076910a,0x0643a887,
    0x3262a893,0x351028f8,0x17710c81,0x0a0a0a62,0x46a61531,0x275328d9,
    0x4d7528d9,0x11d751a9,0x2a99276a,0x2a677379,0x8dcea652,0xaa875c59,
    0x55cb572c,0xab8b6265,0x731d5665,0x5a659853,0xa98b6261,0x28cc8b33,
    0x316c4cb3,0x98eccccb,0x3b598571,0x1221dcb2,0x31554b57,0x27925dcb,
    0x8a3aa03f,0x251b31a9,0x52a659da,0x1b30bcaa,0x1ecc6725,0xd8f66d19,
    0x46467268,0x190ea4c6,0x0c9dc5e4,0x8dda3262,0x92a5b859,0x31aae6ab,
    0x3666ab8b,0x3b8983a8,0x4c0ad8b3,0x259b4645,0x8b30be9b,0x2572cc59,
    0x32ddc21d,0x5cee1d3b,0xd57074c3,0x5cb325cc,0x80fcb24b,0x8ce43f88,
    0x92b663d9,0x13d516ac,0x30ca8f66,0xd99cd43b,0x6543aea1,0xa4c1d750,
    0x3261950f,0x541950c9,0x5663739a,0x52547550,0x3a3654d9,0x9b536541,
    0x29918857,0x0f42cc59,0xb72cce6a,0x3d1665d7,0x8e6e2598,0xaccd5729,
    0x8173710d,0xc9b2a3ca,0x09a9665b,0x2127eb22,0x86541e99,0x8b7661d9,
    0x17d794ab,0x9ea80766,0x0093d504,0x0075b500,0xea964000,0x00970249,
    0x00093b70,0x6a8b5008,0xb5024edc,0x4edcb500,0x770016a4,0x07a36a1d,
    0x003e22e0,0x70000b50,0xea80e7e6,0x01d1b549,0x0049ea80,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x88a04000,0x00844111,0x10310206,0x20980881,
    0x88181118,0x302204c0,0x0440c020,0x83044281,0x26020818,0x28102040,
    0x0cc4310c,0x04088182,0x20604414,0x82809809,0x40214c19,0x00462220,
    0x8a4d4213,0x4506950a,0x40b8d01b,0x261dc428,0x5a8e2e0a,0x8854d443,
    0x2060d429,0x88646442,0x23310a9b,0x143511b8,0x85c4770a,0x151b149b,
    0x9a4dd26e,0x21415319,0x545172e2,0x1b886620,0x850506a2,0x94d225aa,
    0x55108898,0x64c2aa21,0x8cb8a353,0x2c994c36,0x2a6d1b37,0x2a9863a2,
    0x535d4977,0x6dc48855,0x87aa2440,0x18a4c349,0x72d5cb57,0x592d5cb5,
    0x8cddccee,0x267533a9,0x2a67533a,0x24a98ee3,0xd1905929,0x98d4cbaa,
    0x2a63531a,0x2aa31141,0x2aa8aaa2,0x22aa8aaa,0xb92ae2aa,0x6cc36982,
    0x6451b328,0xb1d05352,0x23b90835,0x81968dab,0xb370644b,0x4b99a361,
    0x3091074c,0x9874c41d,0x71864c34,0x57355cd5,0x277355cd,0x2317733b,
    0x32d1968c,0x232d1968,0x346c7716,0xa5c41641,0x323395bb,0x27233919,
    0x2e6282a1,0x4b992e64,0x24b992e6,0x4366e4b9,0x056c572c,0x21ecc7b3,
    0xc8a66259,0xb30c459c,0x654eaa72,0x21950e20,0x43aea4ab,0x71e545bc,
    0x2e3ca89b,0x88676239,0xa9b2a1a9,0xca9b2a6c,0x442a2e26,0x54e6a2aa,
    0x26a73539,0x87327353,0x9c8923aa,0x539b8a21,0x65432a19,0x8a1c1950,
    0xc96f25bc,0xbc96f25b,0x4bb96f25,0x59872722,0x43b30ecc,0x31dca19b,
    0x2ae75125,0x00000591,0x3e22e000,0x03e22e00,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x549ea8d5,0x8000093d,0x00000008,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x02211000,0x08080985,0x28866084,0x01001314,0x98131071,
    0x98500981,0x2099881a,0x88b772a9,0x888310c0,0x220c4210,0x15c26181,
    0x22004b37,0x04775199,0x43730262,0x108c4098,0x31310883,0x5ab8ae21,
    0x04410226,0x262aa84c,0x8863a60b,0x41531099,0x253146a3,0x11542aa2,
    0x51121445,0x20510330,0xc8301981,0x228ea819,0x031aae0c,0x52ae2cc3,
    0x59876648,0x96a5504c,0xa986e69b,0x8aa59554,0x9276a1b8,0x9276a2aa,
    0xa87948d9,0x2e5d3d51,0xac9aae5a,0x283c95c1,0x21a992e6,0x23661ea8,
    0x2ee51b32,0x2a985351,0x2ccb32cc,0x424408b3,0x48848848,0x54488488,
    0x21fc440c,0x5cd770ca,0x1d98dc5b,0x99dd42ae,0x5c1b33bc,0xb86546e1,
    0x323570ec,0x2e1b716a,0x8db96ee3,0x6dc9731e,0x642b31e8,0xe9d98dc3,
    0x35d4d570,0x771b8393,0x5bc964cb,0x4b708672,0xd8f663d9,0x88ae6269,
    0x2ccb3299,0x8512ccb3,0x2074c0e9,0x2074c0e9,0x2074c0e9,0x381e9983,
    0x371aae14,0x50dc2366,0x5a966cc5,0x8e1b86e1,0x9570ab83,0x6ab8a254,
    0x5bc87526,0x15987526,0x566370ea,0x470d950d,0xab8dc2ea,0x54311a26,
    0xb3242a0c,0x9550ecc3,0x9dca1b94,0x25996659,0xca8eae59,0x32a1e543,
    0x32a1e543,0x8261e543,0x00873f33,0x54b235dc,0x1dc5949e,0x949ea8b5,
    0xc8081645,0x7702dc02,0x201d6d4d,0x27aa3ada,0x46d4b204,0x3e61801e,
    0x26bb9641,0x800142bc,0x93d549ea,0x4b500100,0x45a96a5a,0x21f11709,
    0x1170f88b,0x43e22e1f,0x1170f88b,0x0000001f,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x82044000,0x57080c10,
    0x21100445,0x446e25bb,0x54c220c1,0x21896ee5,0x08821818,0x088204c4,
    0x44222554,0x884cc431,0x42231099,0x21104418,0x0214c098,0x4cc41310,
    0x98844620,0x98988219,0x2611b570,0x7953061a,0x7b570421,0x55c10aaa,
    0x2d5caa62,0xc8706e53,0x2ea61770,0x01cc1b12,0xa99aaa57,0x95428793,
    0x4366e68c,0x54af6659,0x50ae373d,0x2b84cb3b,0x2373255c,0x236628e9,
    0x56651b32,0x8e98b30a,0x093b51e8,0xd98911d4,0x4c5b134a,0x89655436,
    0xd98ed666,0x54c6723c,0x413d1b09,0xb99aae2b,0x06c4ae64,0x5c355c19,
    0x64cb265b,0x23464372,0x5c3bd885,0xb464d771,0x1b8eea2b,0x32ddcd75,
    0x53166ccb,0xb3155c6e,0x5bb8dc95,0x5c4b82ea,0x7b316cc5,0x116626cc,
    0x5263b377,0x8ea2750e,0x8b3660e9,0x540ad859,0x1d3b3344,0x21951464,
    0x8fa6a0a8,0xc9aea3a8,0x4486e25b,0x4cd950ca,0x89a26aba,0x23aa86e6,
    0xb893b019,0x539a9661,0xd06e1547,0x599660dc,0x16dc6e28,0xb8dc5bb3,
    0x3a92ee6a,0x45b30f4c,0x8f7661d9,0x27a22159,0x083e931d,0x31e54bb9,
    0x4c0f4b39,0xb3344a85,0x00200036,0x00000000,0x2bc9aee0,0x300b2579,
    0x8b22d740,0x90ee0008,0xb5026285,0x653ae2d4,0x36a1d772,0x2ee590e8,
    0x1d41310e,0x16a1d335,0x236a93d5,0x2a93d52f,0x2b6a5b38,0x445cea03,
    0x2e75b50f,0x5c35449d,0x46d43a24,0x0000001e,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x80000000,0x82222b81,0x5c3533a9,0x142f2aa2,0x2ee31018,0x98aea4ad,
    0x2a04112c,0x4004423b,0x04d4b770,0xb8e410a6,0x11046e3a,0x5186aaa1,
    0x0542e555,0x11060881,0x990aaa81,0x00000000,0x00000000,0x13730000,
    0x5a3200dc,0xd512d473,0xb985d413,0x55435509,0xd107458d,0x154571cc,
    0xa944ea73,0x99aae771,0xaa8a725a,0xb8b6a110,0x556aa371,0x030311aa,
    0x2a85d4c3,0x002aa822,0x00000000,0x00000000,0x22e20000,0x735006e0,
    0x90ca8e6e,0x2aa217d7,0x154c1710,0x5ccd3d77,0x995caf24,0x3298ee28,
    0x2331a823,0x8866a6bb,0x5dc0e629,0x8886590e,0x00000001,0x00000000,
    0x00000000,0x00000000,0x8889640c,0x00026200,0x202aea06,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,
};

static signed short stb__times_bold_7_latin_ext_x[560]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,-1,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,-1,0,-1,0,-1,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0, };
static signed short stb__times_bold_7_latin_ext_y[560]={ 5,0,0,0,0,0,0,0,0,0,0,1,4,3,
4,0,0,0,0,0,0,0,0,0,0,0,2,2,1,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,2,0,2,0,2,0,2,0,0,
0,0,0,2,2,2,2,2,2,2,1,2,2,2,2,2,2,0,0,0,2,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,0,0,1,0,
0,0,0,0,0,2,2,3,0,0,0,1,0,0,0,2,0,2,4,0,0,2,0,0,0,1,-1,-1,-1,-1,
-1,-1,0,0,-1,-1,-1,-1,-1,-1,-1,-1,0,-1,-1,-1,-1,-1,-1,1,0,-1,-1,-1,-1,-1,0,0,0,0,
0,0,0,0,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,
-1,1,-1,0,0,2,-1,0,-1,0,-1,0,-1,0,-1,0,0,0,-1,1,-1,0,-1,0,0,2,-1,0,-1,0,
-1,0,-1,0,0,0,-1,-1,0,0,-1,0,-1,1,-1,0,0,0,-1,2,0,0,-1,0,0,0,2,-1,-1,0,
0,0,0,0,0,0,0,-1,0,0,2,-1,0,0,0,2,-1,1,-1,0,-1,0,0,2,-1,0,0,2,-1,0,
-1,0,-1,0,0,2,-1,0,0,1,-1,0,0,1,-1,0,-1,1,-1,0,-1,0,-1,0,0,2,-1,0,-1,0,
-1,-1,0,-1,0,-1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,2,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,0,-1,0,-1,
0,-1,0,-1,0,-1,-1,-1,-1,-1,-1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,-2,-1,-1,0,-1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static unsigned short stb__times_bold_7_latin_ext_w[560]={ 0,2,3,4,3,6,5,2,3,2,3,4,2,2,
2,2,3,3,3,3,3,3,3,4,3,3,2,2,4,4,4,3,6,5,4,5,5,4,4,5,5,3,4,5,
4,6,5,5,4,5,5,4,4,5,5,7,5,5,5,2,2,2,4,5,2,4,4,3,4,3,3,4,4,2,
3,4,2,6,4,3,4,4,3,3,3,4,4,5,4,4,3,3,1,2,4,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,2,3,4,4,4,
1,3,3,5,2,4,4,2,5,5,3,4,2,2,2,4,4,2,2,2,2,4,5,5,5,3,5,5,5,5,
5,5,8,5,4,4,4,4,3,3,3,3,5,5,5,5,5,5,5,4,5,5,5,5,5,5,4,4,4,4,
4,4,4,4,5,3,3,3,3,3,3,2,3,3,3,4,3,3,3,3,3,4,3,4,4,4,4,4,4,4,
5,4,5,4,5,4,5,3,5,3,5,3,5,3,5,5,5,4,4,3,4,3,4,3,4,3,4,3,5,4,
5,4,5,4,5,4,5,4,5,4,3,3,3,3,3,3,3,2,3,2,6,4,4,4,5,4,4,4,2,4,
2,4,3,4,3,4,2,5,4,5,4,5,4,6,5,4,5,3,5,3,5,3,7,5,5,3,5,3,5,3,
4,3,4,3,4,3,4,3,4,3,4,4,4,3,5,4,5,4,5,4,5,4,5,4,5,4,7,5,5,4,
5,5,3,5,3,5,3,3,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,6,4,5,5,5,5,5,5,5,5,5,5,5,5,5,6,4,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,4,3,3,5,
3,5,4,5,4,5,4,5,4,5,4,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,4,8,5,5,3,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5, };
static unsigned short stb__times_bold_7_latin_ext_h[560]={ 0,6,3,6,6,6,6,3,7,7,4,4,3,1,
2,6,6,5,5,6,5,6,6,6,6,6,4,5,4,2,4,6,7,5,5,6,5,5,5,6,5,5,6,5,
5,5,6,6,5,7,5,6,5,6,6,6,5,5,5,7,6,7,3,2,2,4,6,4,6,4,5,5,5,5,
7,5,5,3,3,4,5,5,3,4,5,4,4,4,3,5,3,7,7,7,2,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,0,6,7,6,4,5,
7,7,2,6,3,3,2,1,6,1,3,4,3,3,2,5,7,2,3,3,3,3,6,6,6,6,6,6,6,6,
6,6,5,7,6,6,6,6,6,6,6,6,5,7,7,7,7,7,7,4,6,7,7,7,7,6,5,6,6,6,
6,6,6,6,4,5,6,6,6,6,5,5,5,5,6,5,6,6,6,6,6,4,5,6,6,6,6,7,7,7,
6,5,6,6,7,5,7,6,7,6,7,6,7,6,6,6,5,6,6,5,6,6,6,6,7,5,6,6,7,7,
7,7,7,7,7,7,6,6,5,5,6,5,6,4,6,5,7,7,6,3,6,7,7,7,7,7,3,6,6,7,
7,5,5,5,5,5,5,7,5,7,5,7,5,5,6,5,7,5,7,6,7,6,6,4,6,5,7,5,6,5,
7,6,7,6,7,5,7,6,7,6,6,6,5,5,7,6,7,5,7,6,7,6,7,6,7,5,7,6,6,7,
6,6,5,6,5,6,5,5,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,6,4,4,7,4,4,4,
4,4,4,4,4,4,4,4,4,4,6,5,4,4,4,4,4,4,4,4,4,4,4,4,4,7,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,6,6,6,5,7,
6,7,6,7,6,7,7,7,7,7,7,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,7,7,6,6,7,6,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,
4,4,4,4,4,4, };
static unsigned short stb__times_bold_7_latin_ext_s[560]={ 254,107,126,148,13,50,81,123,87,155,235,
1,112,173,143,168,1,189,79,228,157,249,17,163,143,139,253,154,45,130,35,
129,29,161,167,133,148,125,120,206,193,70,120,130,136,141,1,88,74,23,91,
51,184,56,9,238,114,178,172,135,253,102,69,161,158,230,19,244,24,205,110,
105,100,97,12,86,83,50,93,16,65,60,74,25,48,248,239,199,57,23,62,
155,159,167,149,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,254,246,175,
40,20,227,213,1,154,62,81,103,138,173,94,167,108,40,66,78,135,154,69,
146,84,87,90,98,232,21,27,49,71,83,59,65,77,53,93,96,12,7,223,
218,45,41,37,33,181,107,66,48,124,144,194,220,243,164,158,176,138,212,133,
201,196,191,186,181,176,171,29,102,159,155,151,147,116,143,146,56,125,176,116,
112,108,104,100,209,163,83,78,73,68,102,150,179,45,187,34,29,231,245,184,
15,161,5,105,249,78,239,233,227,192,218,213,250,204,200,195,223,1,89,174,
170,90,195,111,117,122,138,149,170,115,110,211,236,97,232,87,6,77,207,221,
130,57,120,43,200,113,243,11,133,115,8,5,59,79,198,125,120,159,138,253,
188,111,182,106,170,1,28,232,39,118,44,42,1,36,209,153,214,179,52,16,
172,204,129,91,200,82,242,74,150,64,238,54,246,17,250,167,203,17,216,5,
217,248,221,237,22,225,27,215,222,205,210,226,190,61,67,241,32,6,91,10,
14,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,101,10,10,143,
10,10,10,10,10,10,10,10,10,10,10,10,10,121,18,10,10,10,10,10,
10,10,10,10,10,10,10,10,128,225,10,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,128,139,
144,35,96,73,84,38,72,134,60,55,49,44,38,33,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
10,10,10,27,22,161,189,6,185,10,10,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,
10,10,10,10,10,10,10,10,10, };
static unsigned short stb__times_bold_7_latin_ext_t[560]={ 1,17,44,17,17,17,17,44,9,9,38,
44,44,44,44,24,24,38,38,24,38,24,31,24,24,24,38,38,44,44,44,
24,9,38,38,24,38,38,38,24,38,38,24,38,38,38,31,24,38,9,38,
24,38,24,24,24,38,38,38,1,16,1,44,44,44,38,24,38,24,38,38,
38,38,38,1,38,38,44,44,44,38,38,44,44,38,38,38,38,44,38,44,
1,1,1,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,1,24,1,
24,44,31,1,9,44,24,44,44,44,44,24,44,44,44,44,44,44,31,9,
44,44,44,44,44,24,31,31,31,31,31,31,31,31,31,31,9,31,31,24,
24,31,31,31,31,31,9,1,9,9,9,9,38,16,9,9,9,9,24,31,
24,24,24,24,24,24,24,44,31,24,24,24,24,31,31,31,38,24,31,24,
24,24,24,24,38,31,24,24,24,24,9,9,1,24,31,24,24,1,31,1,
24,1,24,1,16,1,16,16,16,31,16,16,31,16,16,17,16,1,31,17,
17,1,1,1,1,1,1,1,1,17,17,31,31,17,31,17,44,17,31,1,
9,17,44,17,1,9,1,9,9,44,17,17,9,9,31,31,31,31,31,24,
9,31,9,31,9,38,38,9,38,9,38,9,17,9,16,17,38,17,38,1,
31,9,31,9,9,9,9,9,31,9,9,9,9,17,9,31,31,9,9,9,
31,1,9,1,17,1,17,1,31,1,9,9,1,17,17,31,17,38,17,38,
38,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,17,44,44,1,
44,44,44,44,44,44,44,44,44,44,44,44,44,17,38,44,44,44,44,44,
44,44,44,44,44,44,44,44,1,38,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,17,17,
17,38,1,17,1,17,1,17,1,1,1,1,1,1,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,1,1,17,17,1,17,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,44,
44,44,44,44,44,44,44,44,44, };
static unsigned short stb__times_bold_7_latin_ext_a[560]={ 25,34,56,51,51,101,84,28,
34,34,51,58,25,34,25,28,51,51,51,51,51,51,51,51,
51,51,34,34,58,58,58,51,94,73,67,73,73,67,62,79,
79,39,51,79,67,95,73,79,62,79,73,56,67,73,73,101,
73,73,67,34,28,34,59,51,34,51,56,45,56,45,34,51,
56,28,34,56,28,84,56,51,56,56,45,39,34,56,51,73,
51,51,45,40,22,40,53,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,25,34,51,51,51,51,22,51,
34,76,30,51,58,34,76,51,40,56,30,30,34,58,55,25,
34,30,33,51,76,76,76,51,73,73,73,73,73,73,101,73,
67,67,67,67,39,39,39,39,73,73,79,79,79,79,79,58,
79,73,73,73,73,73,62,56,51,51,51,51,51,51,73,45,
45,45,45,45,28,28,28,28,51,56,51,51,51,51,51,56,
51,56,56,56,56,51,56,51,73,51,73,51,73,51,73,45,
73,45,73,45,73,45,73,74,73,56,67,45,67,45,67,45,
67,45,67,45,79,51,79,51,79,51,79,51,79,56,79,56,
39,28,39,28,39,28,39,28,39,28,83,56,51,34,79,56,
56,67,28,67,28,67,47,67,40,67,28,73,56,73,56,73,
56,74,78,56,79,51,79,51,79,51,101,73,73,45,73,45,
73,45,56,39,56,39,56,39,56,39,67,34,67,53,67,34,
73,56,73,56,73,56,73,56,73,56,73,56,101,73,73,51,
73,67,45,67,45,67,45,28,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,75,79,79,51,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,56,79,79,79,79,79,79,
79,79,79,79,79,79,79,80,61,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,73,51,39,28,79,51,73,56,73,56,73,
56,73,56,73,56,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,73,51,101,73,79,51,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,79,
79,79,79,79,79,79,79,79, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_bold_7_latin_ext_BITMAP_HEIGHT or STB_FONT_times_bold_7_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_bold_7_latin_ext(stb_fontchar font[STB_FONT_times_bold_7_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_times_bold_7_latin_ext_BITMAP_HEIGHT][STB_FONT_times_bold_7_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_bold_7_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_bold_7_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_bold_7_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_bold_7_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_bold_7_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_bold_7_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_bold_7_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__times_bold_7_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__times_bold_7_latin_ext_s[i] + stb__times_bold_7_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__times_bold_7_latin_ext_t[i] + stb__times_bold_7_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__times_bold_7_latin_ext_x[i];
            font[i].y0 = stb__times_bold_7_latin_ext_y[i];
            font[i].x1 = stb__times_bold_7_latin_ext_x[i] + stb__times_bold_7_latin_ext_w[i];
            font[i].y1 = stb__times_bold_7_latin_ext_y[i] + stb__times_bold_7_latin_ext_h[i];
            font[i].advance_int = (stb__times_bold_7_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__times_bold_7_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_bold_7_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_bold_7_latin_ext_s[i] + stb__times_bold_7_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_bold_7_latin_ext_t[i] + stb__times_bold_7_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_bold_7_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__times_bold_7_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__times_bold_7_latin_ext_x[i] + stb__times_bold_7_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__times_bold_7_latin_ext_y[i] + stb__times_bold_7_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__times_bold_7_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_bold_7_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_bold_7_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_bold_7_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_bold_7_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_bold_7_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_bold_7_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_bold_7_latin_ext_LINE_SPACING
#endif

