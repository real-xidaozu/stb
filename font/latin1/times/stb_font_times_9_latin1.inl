// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_times_9_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_times_9_latin1'.
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

#define STB_FONT_times_9_latin1_BITMAP_WIDTH         256
#define STB_FONT_times_9_latin1_BITMAP_HEIGHT         38
#define STB_FONT_times_9_latin1_BITMAP_HEIGHT_POW2    64

#define STB_FONT_times_9_latin1_FIRST_CHAR            32
#define STB_FONT_times_9_latin1_NUM_CHARS            224

#define STB_FONT_times_9_latin1_LINE_SPACING           6

static unsigned int stb__times_9_latin1_pixels[]={
    0x00402008,0x20200401,0x01505008,0x20103331,0x99880bb8,0x1cc3a880,
    0x05cc26a2,0x04182066,0x10220804,0x44022288,0x11020100,0x01000408,
    0x5c4182ae,0x30130c0a,0x20c41085,0x3300cc19,0x80cc0660,0x2a01503b,
    0x04409a83,0x849220d4,0x1305303b,0x240cc0c4,0x20d427fa,0x2a147124,
    0x06a14280,0x07038105,0x88322066,0x181731c3,0xa854c288,0x1a88d451,
    0x29a88316,0x875030c6,0x53066019,0x4454c6a1,0x1980cc1a,0x351a854c,
    0xba851a8a,0x4404570c,0x8c491480,0x48a41a9a,0x5427fe24,0x921b8aa1,
    0x331c0442,0x5305c1c8,0x54c2aea6,0x5cc040ab,0x261730ba,0x64c1530b,
    0x4c6a1530,0x43a228a4,0x2198aa42,0x55730b99,0x5476614c,0x49148198,
    0x0a498a49,0x92291229,0x18c88a49,0x35506322,0x85700729,0x8b94722a,
    0x1c8aa19a,0x2a139312,0x313a8721,0x46e0ae14,0x986e260b,0x232c4e20,
    0x88570658,0x962c5865,0x1cd10a99,0x5b811491,0x45135285,0xa8663999,
    0x291150b9,0x9154289a,0x92229223,0x551c8aa2,0x90a488e4,0x23505905,
    0x45a80754,0xb494ea1c,0x48ea1c86,0x54350988,0x8504c323,0x4191a85a,
    0x886218b9,0x40d60d63,0x4583585a,0x950752c5,0x04524413,0x2a10b266,
    0xaa466289,0x242191ba,0x390a26a9,0x88a489d4,0x4ea1c8a4,0x5244ea1c,
    0xa8388388,0x066aa1ab,0x32398725,0x826e7230,0x88483239,0xaab83509,
    0x1c945242,0x44a8351c,0x3ae8e20b,0x0e4a1d74,0x458b0eba,0x5902fa25,
    0x8c28a488,0x4ac99c5b,0x218c6aee,0x46ae63d9,0x91cc4ac9,0x92229221,
    0x730c8e62,0x30a48864,0x03501301,0x1266a02a,0x18285335,0x21214cd4,
    0xb3035098,0x99a8a381,0x8730a144,0x8258a20a,0x4499a825,0x962c5825,
    0x57037018,0x24731453,0x00000000,0x570a66a0,0x429ab853,0x4cd4299a,
    0x5714d5c2,0x40ae0570,0x03d12b81,0x000cccc0,0x26131051,0x30413009,
    0x808f44ae,0x54102608,0x4caa7a61,0x22572a9e,0x2553d31e,0x261d30e9,
    0x01e4010e,0x00000030,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x40440000,0x866e1408,0x20605418,0x2604c28a,0x20cc0a0a,0xa8819808,
    0x0c0ab883,0x844c40cc,0x04310418,0x04310431,0x280980cc,0x19813044,
    0x260d40c4,0xaa884c0a,0x30310661,0x04419813,0x26606662,0x1981aa80,
    0x883500a8,0x15304429,0x7310cc0c,0x3305554c,0x0110c4d4,0x1a829871,
    0x22044010,0x44e0cc39,0x2214a326,0x8e0c7063,0x830154c1,0x33530c08,
    0x226060cc,0x41704d45,0x51333999,0x4d44662a,0xa82e7089,0x26239221,
    0x1c320a98,0x206a2452,0x8a62198a,0x5312c298,0x453114c4,0x314c4248,
    0x54c2981b,0x815c14c3,0x5305702b,0x2a3514c1,0x0115172b,0x9c14e067,
    0x41a9c981,0x182a60a9,0x21531c2e,0x2228198a,0x2606e62d,0x43215910,
    0x8462ee34,0x15c2a60b,0x2e310a98,0x50e45502,0x144d4175,0x22c4cb13,
    0x58996265,0x98691626,0x9a86d458,0x5473150b,0xa82d40b9,0x7338b505,
    0x4ce42e6a,0x14d462a8,0x4c511113,0x22261a89,0x70e36a28,0x31399ce6,
    0x4e675864,0x06cc289a,0x21d4dc2e,0xac986dc3,0x860cf233,0x4c072733,
    0x4761c8c4,0x89a8aa1c,0x9a8a26a4,0x54b126a4,0x9a926a49,0x9351cec4,
    0x10c9cc44,0x10c8e232,0x22a06454,0x9064540c,0x93086521,0x1464a0e1,
    0x428a14c6,0x3626e531,0x21948641,0x9389a834,0x4144d521,0x90a94419,
    0x70e62a38,0x866ae261,0x05548640,0x54622a66,0x191cc323,0x2b2638d4,
    0x5dc36ee4,0x0dbb960d,0x36ee1b77,0x1b770920,0x1ecc6aaa,0x1ecc9793,
    0x3351266a,0x26499a89,0x447b31ab,0xb844299c,0x524c4619,0x526230dc,
    0x262dbaca,0x235731ab,0xb9855441,0x5495931a,0x370aaa19,0x335104c3,
    0x066660cc,0x50d5cc15,0x19998335,0x35064cd4,0x009b9853,0x003a6000,
    0x0aa7a600,0xa8000010,0x3d0d47a1,0x0001e86a,0x08002040,0x00000022,
    0x00000000,0x00000000,0x00800000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x8d454c00,
    0x1310aa09,0x453198a6,0x3306a619,0x3538184c,0x0c40a98a,0x4c150a37,
    0x0c2981aa,0x4c28c411,0x3065542a,0x86628130,0x5554c019,0x30198621,
    0x11054455,0x530d54c1,0x260882a1,0x40d4298a,0x20544a21,0x11aaa980,
    0x42a63555,0x9101531a,0x70aa146e,0x22152c46,0xd07198a4,0x4e6018a1,
    0x43303621,0x220418b8,0x70994b54,0x72884d47,0x26a1cc54,0x8860e648,
    0x401a8e20,0x81a80659,0x884e1a9a,0x2a910888,0x8aa14723,0x64cc1548,
    0xb8581621,0xd86358c2,0x0b11cd10,0x1a834aac,0x22286424,0x700d9863,
    0x3618186b,0x0a659d81,0x64903059,0x26198192,0x2291ca22,0x75548d43,
    0x445314c1,0x5406a663,0x2a629814,0xd98ae20b,0x39a41021,0x3214c16c,
    0x24c3500a,0x160b50b0,0x026ea15c,0x46cd5409,0x85b30d40,0x28e208c9,
    0x64cc174c,0x5e4ce0c1,0x8710da41,0x36a14c38,0x47b32a8a,0xad98e219,
    0xa875930d,0x4735519b,0x2388e238,0x5b5501b9,0x26a63887,0x4486f262,
    0x8595b040,0x6ec2984a,0x2648c500,0x01915162,0x0b20930b,0x4b9d8812,
    0x2d81c1a8,0x0b045244,0x358316e3,0x23ad8377,0x22e04c38,0x260d920a,
    0x26389261,0x8350e200,0x88e23899,0x03b98e23,0x98e20923,0x9144a389,
    0x33490408,0x64298391,0x32e140d9,0x4d45863e,0x10d85849,0x202481b8,
    0x20bc8714,0x41542cca,0x26aa29ab,0x41891cc3,0x81b30ee3,0x2a206e49,
    0x306ab661,0x01324c01,0x570aa1cc,0x49324c93,0x90b2ee49,0x4c755b11,
    0xb9926ae4,0x44c1b109,0x575b3088,0x750fc4e6,0xb8f546cc,0x4c1242cd,
    0x10f4350e,0x1d56641d,0x555d30f2,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x40000000,0x554c1aa9,0x1511530a,0xaa98aaa6,0x4c330660,0x554dc0aa,
    0x54c53128,0x22985310,0x2666198a,0x2298a551,0x0c62ab98,0x2a013098,
    0x44180c1a,0x1ba98c62,0x2eaa1555,0x26a041b9,0x2a104312,0x310440ba,
    0x42a020c4,0x15553188,0x8602aaa6,0x4188aa18,0x13100888,0x424896a9,
    0x11489648,0x41d12d22,0x106d221d,0x2ae11737,0x2c4ce670,0x144d4265,
    0x8c5c4a15,0x3b130b9a,0x530cdc49,0x22e0a981,0x20180c49,0x89110aa9,
    0x2522a62d,0x0e22a8aa,0x8e6aa315,0x38711bb9,0x49a8c60c,0x86013331,
    0x430cdc93,0x30cccc49,0x48b248c3,0x06916483,0x733b8369,0x9c81b483,
    0x90c9dc1c,0x540c926a,0x32186289,0x59a84321,0x80aa7190,0x291590b8,
    0x7530aba9,0xc8935015,0x4e332540,0x0cc26264,0x44cc730e,0x0446ee63,
    0x885554ce,0x4444611a,0x9a863000,0x0003b810,0x1cec7524,0x55b16676,
    0xaacc1ad8,0x540eec1a,0x4ca6e1a8,0x21b771ab,0x92b263d9,0x98a62aaa,
    0x8b6eae3d,0x26155051,0x20d5d41a,0x4a288301,0x22a33772,0xb193752c,
    0x098ee104,0x49ab9462,0x41853044,0x00000001,0x92000000,0x5920920d,
    0x95304824,0x058c8351,0x00000000,0x20000000,0x98100010,0x00000aaa,
    0x00000000,0x00000000,0x00000000,0x30d4ecc0,0x2366553d,0x981b30e8,
    0x79494c0d,0x0064c6cc,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x1411a980,0x4088cc21,
    0x00002aaa,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x51080000,0x26062a18,0x0000000b,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,
};

static signed short stb__times_9_latin1_x[224]={ 0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,-1,0,0,0,0,0,0,0,
-1,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,
0,0,0,0,-1,0,0,0,0,-1,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
 };
static signed short stb__times_9_latin1_y[224]={ 7,1,1,1,1,1,1,1,1,1,1,2,6,4,
6,1,1,1,1,1,1,1,1,1,1,1,3,3,2,3,2,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,1,3,1,3,1,3,1,3,1,1,
1,1,1,3,3,3,3,3,3,3,2,3,3,3,3,3,3,1,1,1,4,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,7,3,1,1,2,1,
1,1,1,1,1,3,3,4,1,0,1,2,1,1,1,3,1,3,6,1,1,3,1,1,1,3,-1,-1,-1,0,
0,0,1,1,-1,-1,-1,0,-1,-1,-1,0,1,0,-1,-1,-1,0,0,2,1,-1,-1,-1,0,-1,1,1,1,1,
1,1,1,1,3,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1,
 };
static unsigned short stb__times_9_latin1_w[224]={ 0,2,3,4,4,7,7,2,3,3,4,5,2,3,
2,3,4,4,4,4,4,4,4,4,4,4,2,2,5,5,5,4,8,6,5,6,6,5,5,6,6,3,4,6,
5,8,7,6,5,6,6,5,5,6,6,8,6,6,5,3,3,3,4,6,2,4,5,4,5,4,4,4,5,3,
3,5,3,7,5,4,5,5,3,3,3,5,4,6,4,5,4,3,1,3,5,5,5,5,5,5,5,5,5,5,
5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,5,0,2,4,4,4,5,
1,4,3,6,4,4,5,3,6,6,3,5,3,3,3,5,5,2,2,2,3,4,6,6,6,4,6,6,6,6,
6,6,9,6,5,5,5,5,3,3,3,3,6,7,6,6,6,6,6,4,6,6,6,6,6,6,5,4,4,4,
4,4,4,4,6,4,4,4,4,4,3,3,3,3,4,5,4,4,4,4,4,5,4,5,5,5,5,5,5,5,
 };
static unsigned short stb__times_9_latin1_h[224]={ 0,7,3,7,7,7,7,3,8,8,4,5,3,2,
2,7,7,6,6,7,6,7,7,7,7,7,5,6,5,3,5,7,8,6,6,7,6,6,6,7,6,6,7,6,
6,6,7,7,6,8,6,7,6,7,7,7,6,6,6,8,7,8,4,1,2,5,7,5,7,5,6,6,6,6,
8,6,6,4,4,5,6,6,4,5,6,5,5,5,4,6,4,8,8,8,2,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,6,8,7,5,6,
8,8,2,7,3,5,3,2,7,2,3,5,4,4,2,6,8,2,3,4,3,5,7,7,7,6,8,8,8,7,
7,7,6,8,8,8,8,7,8,8,8,7,6,8,9,9,9,8,8,4,7,9,9,9,8,8,6,7,7,7,
7,7,7,7,5,6,7,7,7,7,6,6,6,6,7,6,7,7,7,7,7,4,5,7,7,7,7,8,8,8,
 };
static unsigned short stb__times_9_latin1_s[224]={ 254,219,209,233,47,106,135,228,136,132,187,
125,235,18,15,153,157,193,205,173,210,178,183,188,193,198,137,215,108,213,114,
210,82,222,180,220,1,8,21,234,14,218,10,198,248,33,40,241,27,112,42,
34,229,27,20,1,186,241,235,108,48,98,163,22,253,65,248,70,57,91,169,
164,158,154,149,138,134,155,181,60,114,108,168,56,94,75,86,49,150,71,145,
119,123,145,1,174,174,174,174,174,174,174,174,174,174,174,174,174,174,174,174,
174,174,174,174,174,174,174,174,174,174,174,174,174,174,174,174,174,254,52,190,
15,81,55,209,140,11,227,238,140,219,18,203,243,205,131,192,172,7,102,102,
250,225,196,231,103,128,121,114,77,125,165,68,82,75,68,144,61,153,159,172,
36,178,182,186,17,82,211,29,1,22,75,91,176,99,15,8,36,202,195,61,
228,12,21,26,31,7,42,96,89,52,238,94,63,126,130,67,98,243,120,143,
148,162,89,215,199,120,222,167,248,1,49,55,43, };
static unsigned short stb__times_9_latin1_t[224]={ 1,1,27,1,11,11,11,27,1,1,27,
27,27,34,34,11,11,19,19,11,19,11,11,11,11,11,27,19,27,27,27,
11,1,19,19,11,27,27,27,11,27,19,19,19,19,27,19,11,27,1,27,
19,19,19,19,19,19,19,19,1,19,1,27,34,27,27,11,27,11,27,19,
19,19,19,1,19,19,27,27,27,19,19,27,27,19,27,27,27,27,19,27,
1,1,1,34,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,
19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,19,1,19,1,
19,27,19,1,1,34,11,27,27,27,34,11,27,27,27,27,27,34,19,1,
27,27,27,27,27,11,11,11,19,1,1,1,11,11,11,19,1,1,1,1,
11,1,1,1,11,19,1,1,1,1,1,1,27,11,1,1,1,1,1,19,
1,11,11,11,11,11,11,27,19,11,1,11,11,19,19,19,19,1,19,11,
11,11,11,11,27,27,1,11,1,11,1,1,1, };
static unsigned short stb__times_9_latin1_a[224]={ 33,43,53,65,65,108,101,23,
43,43,65,73,33,43,33,36,65,65,65,65,65,65,65,65,
65,65,36,36,73,73,73,58,120,94,87,87,94,79,72,94,
94,43,51,94,79,116,94,94,72,94,87,72,79,94,94,123,
94,94,79,43,36,43,61,65,43,58,65,58,65,58,43,65,
65,36,36,65,36,101,65,65,65,65,43,51,36,65,65,94,
65,65,58,62,26,62,70,101,101,101,101,101,101,101,101,101,
101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,101,
101,101,101,101,101,101,101,101,33,43,65,65,65,65,26,65,
43,99,36,65,73,43,99,65,52,71,39,39,43,75,59,33,
43,39,40,65,98,98,98,58,94,94,94,94,94,94,116,87,
79,79,79,79,43,43,43,43,94,94,94,94,94,94,94,73,
94,94,94,94,94,94,72,65,58,58,58,58,58,58,87,58,
58,58,58,58,36,36,36,36,65,65,65,65,65,65,65,71,
65,65,65,65,65,65,65,65, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_times_9_latin1_BITMAP_HEIGHT or STB_FONT_times_9_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_times_9_latin1(stb_fontchar font[STB_FONT_times_9_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_times_9_latin1_BITMAP_HEIGHT][STB_FONT_times_9_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__times_9_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_times_9_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_times_9_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_times_9_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_times_9_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_times_9_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__times_9_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__times_9_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__times_9_latin1_s[i] + stb__times_9_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__times_9_latin1_t[i] + stb__times_9_latin1_h[i]) * recip_height;
            font[i].x0 = stb__times_9_latin1_x[i];
            font[i].y0 = stb__times_9_latin1_y[i];
            font[i].x1 = stb__times_9_latin1_x[i] + stb__times_9_latin1_w[i];
            font[i].y1 = stb__times_9_latin1_y[i] + stb__times_9_latin1_h[i];
            font[i].advance_int = (stb__times_9_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__times_9_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__times_9_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__times_9_latin1_s[i] + stb__times_9_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__times_9_latin1_t[i] + stb__times_9_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__times_9_latin1_x[i] - 0.5f;
            font[i].y0f = stb__times_9_latin1_y[i] - 0.5f;
            font[i].x1f = stb__times_9_latin1_x[i] + stb__times_9_latin1_w[i] + 0.5f;
            font[i].y1f = stb__times_9_latin1_y[i] + stb__times_9_latin1_h[i] + 0.5f;
            font[i].advance = stb__times_9_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_times_9_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_times_9_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_times_9_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_times_9_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_times_9_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_times_9_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_times_9_latin1_LINE_SPACING
#endif

