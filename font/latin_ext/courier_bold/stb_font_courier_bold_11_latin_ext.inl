// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_courier_bold_11_latin_ext_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_courier_bold_11_latin_ext'.
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

#define STB_FONT_courier_bold_11_latin_ext_BITMAP_WIDTH         256
#define STB_FONT_courier_bold_11_latin_ext_BITMAP_HEIGHT         88
#define STB_FONT_courier_bold_11_latin_ext_BITMAP_HEIGHT_POW2   128

#define STB_FONT_courier_bold_11_latin_ext_FIRST_CHAR            32
#define STB_FONT_courier_bold_11_latin_ext_NUM_CHARS            560

#define STB_FONT_courier_bold_11_latin_ext_LINE_SPACING           5

static unsigned int stb__courier_bold_11_latin_ext_pixels[]={
    0x80010082,0x39806009,0x02180000,0x00400000,0x10080c01,0x326e0001,
    0xbaa84880,0x02a80901,0x19883755,0xc80000c0,0x44130003,0x84bb8099,
    0x5d54103b,0x0e64c221,0xc81642cc,0x01c05901,0x8b883553,0x44598d80,
    0x883b80bc,0x0ee540b9,0x0590372a,0x05e83b95,0x06e03232,0x81540854,
    0x80a15c0a,0x80aa982a,0x41d30de8,0x8a83a62b,0xc82b8819,0x202aa62e,
    0x4199982a,0x93a0d44b,0x2aa60a9a,0x2a054d40,0x880dc0a8,0x8511502b,
    0x553530e3,0x055071c1,0x2e2511c7,0x5446aaa0,0x26a20a88,0x82ab660b,
    0x46415128,0x266ecc0c,0xc8c819b3,0x0c8c8b20,0xc8faebb2,0xc83b80c8,
    0x542b8b22,0x203704dd,0x3033662c,0xcec8819b,0xceda87a0,0xfd9d19d0,
    0xe89f6645,0xd9d12fec,0x2e03b85f,0x3ebaec81,0x647d75d9,0x5d93ecce,
    0x2ebb27d7,0x7d75d93e,0xb8be63ee,0xf31f73ec,0x8bfb3a25,0xf70eddf9,
    0x4ca65f31,0x47f27a22,0x4a66a9e8,0x994cae29,0x47a236a2,0xffc85329,
    0x64591643,0x11e67a22,0x44b207db,0x27a26a9e,0x3627a66a,0x4cf4cd32,
    0x22777b2e,0x44ee7707,0x263c4ee7,0x83ed881b,0xb51e88da,0x71c83d11,
    0x47a236a7,0xb51e88da,0x54f43d11,0x54f47705,0x263c4ee5,0x5a9e8f26,
    0x1573ddee,0x2c8ae79d,0x2e09eef7,0x1d24cf77,0x1643ddee,0xf32c87dc,
    0xa809be83,0x8ae5906f,0xc964572c,0x8b25a822,0x3d52ab20,0x9ea953b8,
    0xdcd8f54a,0x4986fa83,0x81d24c3a,0xe926771c,0x49874930,0x01eda83a,
    0x50f6d477,0x15f31ea9,0x20f6d43b,0xbaeac9e7,0x4f1dc393,0x99e786a7,
    0x21e783a4,0x8b23c82c,0x436dc42c,0x92c82dbb,0x2e1c9dc3,0x27db1593,
    0xb040b259,0xd8ee0fff,0x3f7ec7ff,0x2ee17b6e,0x21d24c2d,0x7fc43a49,
    0x74933bcf,0x49874930,0x5c0bd03a,0x7fec2f43,0x416ef4c7,0x54f1785e,
    0x1b30e8cf,0x278bc1d1,0xd13c5e2c,0x21e2f1a2,0x8b22c82c,0x40e9262c,
    0x32c85dde,0x3661d11b,0x26970e88,0x36a1f12d,0x888ae330,0x68885906,
    0x5ced4d10,0x445dde85,0x68b44d16,0xd16896c0,0x5a268b44,0x3201e868,
    0x68880f42,0x207a02cc,0xdd72ffed,0x42eeb85d,0x4592ffed,0x3ee2ffed,
    0x97ff6c2e,0x21e886e9,0xfea96e2c,0x7556d44e,0xeeb8b660,0x361775c2,
    0xc8f21eef,0xefb80eef,0x3ee2ffc2,0x3177d42e,0x6d45ffdd,0x77dc0eaa,
    0xd8177dc2,0x2177dc5f,0x77dc2efb,0x3a0fff22,0x20fff25f,0x2ff42efb,
    0x8081ffe4,0x2020000b,0x08000409,0x130a2010,0xff880828,0x072a6fa9,
    0x18808000,0x00000008,0x3fe20200,0x00006fa9,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x33130190,0x40a60930,0x0097703c,0x80988770,0x83c8198a,0x09440998,
    0x4c4c0944,0x07901a81,0x75c1c402,0xa8312eee,0x040c81ba,0xc8018122,
    0x09304880,0x05305133,0x20cc5458,0x82201baa,0x642eb9eb,0x22260a03,
    0x20620280,0x02a8198a,0x86666093,0x505702fd,0x0aa98331,0x26a0e4d4,
    0x20444c1c,0x4c543ee9,0xaeb81d81,0x4b2f2f21,0x880d42ec,0x207a16c2,
    0x402600fb,0x1dc0500a,0x212a0188,0x4c03702b,0x20e8ad44,0x66cc198a,
    0x8faebb20,0x76d40cd9,0x7d75d90c,0x88faebb2,0x89ddb00b,0x75d7642c,
    0xec833663,0x33663eba,0x8faebb20,0x4cf40cd9,0x30676d44,0x4ced8815,
    0x646ab26a,0xd926ed42,0x51a67d75,0x506a3a0b,0x6ed419db,0x8faebb24,
    0x3220cec8,0x4c1e80ce,0x33bb20cd,0x24c15501,0x3aa36e1d,0x54d53d12,
    0x3d11e88d,0x74cf4cd5,0x23d11b52,0x361e88da,0x81b5102f,0x7446d42c,
    0x54d53d11,0x3d11e88d,0x7446d4d5,0xc8d53d11,0x267a60be,0x260bae2e,
    0x4590b204,0x36a799e8,0xd03e1e88,0x4c9f5d01,0x3d12e99e,0x7446d4f3,
    0x25b13d31,0x542d89e9,0x3354f445,0x99d0d53f,0x221d24cd,0x4570da9e,
    0xb874932c,0x41164b22,0xd24c3a49,0x16602c81,0x874930b2,0xd24cb22b,
    0x932c8ae1,0x8b22b874,0x08b26b98,0x025982c8,0x5f42c859,0x20e92609,
    0x7f425c1e,0xbe811642,0x90e92609,0x40459045,0x45915c1d,0xced86a9f,
    0x26345a22,0x3b8720ee,0x21c87493,0x9260593b,0x2074930e,0x8598cc2c,
    0x21d24c2c,0xd24cee1c,0x933b8721,0x4ee1c874,0x0b26a9e8,0x3fba0590,
    0x2c8fff63,0x49336dc4,0x03a03a0e,0x01641d7d,0xd24cdb71,0x4fb62b21,
    0x263ed8ac,0xf8ee1c86,0x545442fe,0x6c177dc7,0x87446cc3,0x46ccd168,
    0x261b50e8,0x689a2d11,0x3b8590d1,0x7fffcc95,0xd99a2d10,0x22d10e88,
    0x43a23666,0x46ccd168,0x1bd910e8,0xf11986d4,0x20510dff,0x49316409,
    0x89a2d10e,0x47dc7707,0x261b52fd,0x68874931,0x2d9a5cd1,0x2d8b6697,
    0x20e88d98,0x77cc1d56,0xc80bc84e,0x5c2eeb82,0x1775c2ef,0xfb83bbf2,
    0x4177dc2e,0x07774c2c,0x177dc0cc,0xdf70bbae,0x5c2eeb85,0x1775c2ef,
    0x777e415c,0x03881640,0xd51cc855,0x2efb89df,0x4c3440f2,0x50eefc80,
    0xefb89dfd,0xb0f77ec2,0x81a23ddf,0x57f62eeb,0x0620086b,0x0000fff6,
    0x00000800,0x001ffff3,0x000001e4,0x02000000,0x04062010,0x08395030,
    0x64001400,0x00040202,0x00004010,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x19898191,0x00426ed4,0x51002080,0x55730104,0xbb037550,0x40208fae,
    0x0dd540c8,0x20006eaa,0x10311008,0xdd506a01,0x01ceec87,0x40331055,
    0x7567643c,0x42000822,0x04409100,0x0cd440d4,0x0cc13bb6,0x8222602a,
    0x654799e8,0x5c66cc1d,0xeb877620,0x32a1eeb9,0x5c05500c,0x3d17f501,
    0x0a806ecc,0x206a0350,0xfea8aa38,0x3a166c42,0x443b83ee,0x54fcc0cc,
    0xddd02886,0x4c331507,0x3660dd8e,0x540e640d,0x360280cd,0x4c04c0de,
    0x05e442bd,0xeee89dec,0x8baa36e5,0x54c409be,0x0faa7a21,0xd15a82aa,
    0x6c2994c1,0x76c47d75,0x1d1db303,0xbaec0dcc,0x4bddb13e,0x2e2eeeeb,
    0x69b419ae,0x44214ca6,0x2e14ca66,0xa8d53f03,0xb00e83ee,0x77c9d53d,
    0x8c81a884,0x914c54c3,0x84b839dd,0x75c5eed8,0xa882c84d,0x89767a22,
    0x2e20da9e,0x7366746d,0x333a1e45,0x2e0e9266,0x8bfa8f77,0x9837d41e,
    0x3360edad,0x745fd43d,0xbc82f261,0x9db12cbc,0x7b9e5889,0x5c7d90f7,
    0x313b8f77,0x32217f7c,0x43efe80c,0x3e3c9abc,0x3b7a20ec,0xf7266cc5,
    0x6a9f99ee,0x32616ef4,0x37bb620b,0x37a21640,0x303a6a5e,0x1d24c1dd,
    0x4391676c,0x31676c3b,0x479e0749,0x5c0e8ed9,0xfb5982db,0x262f6dc1,
    0x1640e8ed,0x986ab26a,0x9e3cd104,0xf3c6b887,0xab4953b8,0x2081dc0e,
    0x166f5dc6,0x364b96ad,0x78199912,0xe8d53f1e,0x442c869c,0x42c82edc,
    0x4744b64b,0x7f543d81,0x9ea2a24e,0x220e88d9,0x45a27a8a,0xd98f1786,
    0x6ef40eda,0x0f8bfd85,0xd98b73b5,0x81640eda,0xf025982c,0x8f178b31,
    0x4f1783e0,0xfb4ffffb,0x22771aeb,0x76d46821,0x3abfb1ef,0x320f4b55,
    0x7c78bc48,0x0e96c2fe,0x3f7a6164,0xb52fff44,0x81d2e8f4,0xf987502c,
    0x1775c4ee,0xd713bbe6,0x5ffdb05d,0x2a0fdacc,0x3100eaad,0x22ffee98,
    0x2c81fb59,0x3fba0590,0x360f7d43,0xfdd32ffe,0x42ffed87,0x2e031018,
    0x3bba2953,0x07e5fcc3,0x0fff2066,0xffdb0f2e,0x260eab45,0xc82c84ef,
    0xc82d80ea,0xffff33ff,0x641ffec1,0x04000103,0x3f601000,0x3ff10f8b,
    0x40ee0df5,0x1f17fb00,0xfb1bffe2,0x4000207f,0x20080200,0xf707703b,
    0x10089fff,0x0790f51f,0x6c040002,0xf100d75f,0x059b8dff,0x00002031,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x98a80000,0x310cccc1,0x51011013,0x4c404102,0x07903c81,
    0xcec883a8,0x37550300,0x540d4060,0x040440a8,0x441baa81,0x1dddd900,
    0x1040d400,0x2001a8a8,0x20600998,0x37046008,0x0c020819,0x40203000,
    0x3f77cc2b,0xeec81553,0x2a0e4d42,0x366d40cc,0x8a833171,0x3a60a019,
    0x03a82d89,0x4c0ea035,0x536f7c40,0x0dd887dd,0x105e81a8,0x2c81d33f,
    0x19950130,0xb9b82b88,0xa80554c1,0x20772a0f,0x40dc59fb,0x01c81dd8,
    0x307dc077,0x776c459b,0xdb1598c5,0x44d178bd,0x0d445eed,0x41b2196c,
    0x6c1ebaea,0x08b25eee,0xd1144d44,0xb9a88bdd,0xe8bddd12,0x1e23a1d0,
    0xdddd90aa,0x7c0d6cc1,0x641a81db,0x0d40eeee,0x983bbbb2,0x7777641a,
    0x291f6540,0x8cf4d449,0xb980ceec,0xa980dcc1,0x4c0e9a81,0x805e4c1a,
    0xb02f262c,0x0bc989db,0xba97b7a2,0x215740cc,0xdb8788e8,0x362b269d,
    0x37bb2a3e,0x44bb3d13,0x3d10fede,0x6c3a68bb,0xb9d10fb9,0x074cfc4b,
    0xdf8dbdf3,0x12ee7445,0x3a21d33f,0x267e25dc,0x88f7360e,0x9d10e99f,
    0x36b221fd,0x41fd9d14,0x6ec6b9da,0x0f7361fc,0x3a23f9bb,0x33760fec,
    0x1f01641f,0x5cce82c8,0x5b25c2c8,0xf83a6f62,0x3d57c5dd,0x971675ec,
    0xeeda8b66,0xc83a6a6d,0x26a2deab,0x874fea0e,0x9d70fee9,0x0edfc3f9,
    0x45a2c9a6,0x3f99d72c,0x9d70edfc,0x0edfc3f9,0xb7f17b6e,0x221f1dc3,
    0x7c7748dc,0xb31d9660,0x4bdb7054,0xf1dc2a59,0x640a9661,0x8590b502,
    0x8590f168,0xbb507a5a,0xccf8f3c3,0xd85edf87,0xb3f11eef,0x0c74475b,
    0x443b3db7,0x70f3018e,0x05d57549,0x64d30bbf,0x25ffffb2,0x3e0baaea,
    0x5d57545d,0x3b5177e0,0x5c5df8b7,0x6cec1f13,0x983e2773,0x112ccb25,
    0x5996e76a,0x0f89dc22,0x0b2044b3,0x6416415c,0xc82c83ff,0x43a9c3ff,
    0x2a3cd1e6,0x051094bc,0x74bdffdb,0x3fbea1d2,0x640e9744,0xb037ba3f,
    0xc8b43ddd,0x813bffa2,0x87bbb62d,0x776c5916,0x99645a1e,0x45a2ffee,
    0xbffdb12c,0xfdb1086c,0x0e8accbf,0x74c7bbf2,0x3bf22ffe,0xbffdb11e,
    0xf88f77e4,0xff8806ff,0xfff1006f,0xb9b1010d,0x9fe5fe41,0xf13fcbfc,
    0x770ffffd,0x3fe60820,0x260150ff,0x0000ffff,0xffffd810,0x10110002,
    0x82ffffd8,0x17fffec0,0x3ffff602,0x1dd88042,0x2effd804,0x01002010,
    0x00001002,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x03980000,0x41980822,0x04103ed8,0x4000545c,
    0x82600998,0x4a615128,0x20040029,0x9b300881,0x35000103,0x80c00835,
    0x08076601,0x4c19db50,0x201901a9,0x40080039,0x0f201881,0x0702039c,
    0x7906e24c,0x3260df50,0x902b881c,0x02aa60bd,0x7dc37bb6,0x32f72f98,
    0x2e064647,0x901c80dc,0x86a9e883,0x10dcdc2b,0x6549fdbd,0x9301c81d,
    0x7440e2e0,0x3a67a63e,0x41b3bf62,0x2e6e0702,0x640ee541,0x31503901,
    0xb4c06303,0x4c2ea8db,0xbdf7021a,0xa982dbb8,0xf03ed881,0x07db1076,
    0x9e8795b5,0x94cf3c5a,0x314ce629,0x53298a65,0x8085915c,0x1d1dc1a8,
    0x2a204d44,0xd882a881,0x4777103e,0x5cd3022c,0x21dddd92,0x540eeeec,
    0xa809a881,0xeec85501,0x0fb620ee,0x836a7a20,0x2591fcdd,0xdde87168,
    0xa83dcd85,0x03fbd06f,0x99d10df5,0xbc1eda87,0x73ddee78,0xf77b9eef,
    0x8767bbdc,0xbd116c3b,0x7d4eccbd,0x44bdbd10,0x37a25ede,0x906fa85e,
    0x30164ddd,0x3e23d35f,0x33f10e99,0x9773a21d,0x3a25dce8,0x373a25dc,
    0x03a67e25,0x98620df5,0x0a9660ee,0x50c4747b,0xdb81d55b,0x82dbb85e,
    0x5b770d56,0xbd079910,0x3c5ffdf0,0x3cf1e78f,0x2236a79e,0x4b833a0e,
    0x0eddb8b6,0x24b96c97,0x216c972d,0x8ad42dbb,0x8661b50f,0x5fc2dde9,
    0x70edfc1d,0x3ae3f99d,0x99d71fcc,0x3f33ae3f,0x2e076fe1,0x6c1c82db,
    0x3a112cc3,0x7c4ffea4,0x36a6fa9f,0x5dde85b9,0x740e89e8,0x079505dd,
    0x5e01f03d,0xbc78bc78,0x6478bc78,0xa45a22ef,0x87407a5a,0xd2d47a5a,
    0x741e96a3,0x68ad45dd,0xb30777e4,0x6fc2efc0,0x85d57545,0xd50baaea,
    0x2baa1755,0x4177e0ba,0xc8485dde,0xb1eefc82,0x64c02b87,0x45ffdd30,
    0x360eaada,0x56d45edf,0x23ca80ea,0x20683ffc,0x3b62ffed,0x3ffb62ff,
    0xc8bffb62,0x3fae2cdf,0x740fff23,0x90fff26f,0x3ffc87ff,0x207556d4,
    0x83a82eec,0x322d05fe,0xdb1645a2,0x7776c3dd,0xd87bbb61,0x645a1eee,
    0x03aab6a2,0x0207ffb0,0x04040020,0x37d4ffc4,0xfa9ff880,0x006e6d46,
    0x80200800,0x4ccc0200,0x40002002,0x88080200,0x086fa9ff,0xfb000f20,
    0x3ff65fff,0x020082ff,0xffb02008,0x27fe25ff,0x000006fa,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x406a0000,0x22079039,0x06025100,0x02440910,0x80c80266,0x4c4c1989,
    0x200a9a81,0x510732a0,0x9306f2a0,0x0288c439,0x406f2a01,0x80019808,
    0x40a981a9,0x0c022008,0x6541cca8,0x0144cc1b,0x443ebbb8,0x1c0ee010,
    0x64c198a8,0x81c9a81d,0x1002a03a,0x2025d403,0x4c088982,0x3b3a2088,
    0x1337662f,0x835b7033,0x298cc2a9,0x64c3ddaa,0x4154660c,0x2ee74449,
    0x9bb017d5,0x4366743f,0x9904980c,0x2a206a07,0x1677ec43,0xd19f30ea,
    0x4c0ee441,0x2f76c41b,0xa98bddb1,0x3ebaec09,0x3b6206a6,0x207db103,
    0xed883ed8,0x3bbbb25e,0x5cbddb10,0x64f44f13,0x8bb9d11f,0x6e6c3ced,
    0x9a3e5ae3,0x2e1514c7,0x2aaa8f96,0x4c7f33ae,0x152cc2bf,0x2a60e76c,
    0xa980a980,0x12eef440,0x0e98bbbd,0x9662aaa8,0x20a6661c,0x5e4c3dcd,
    0x3605e4c0,0x45fd43dc,0x20f7361e,0x1bea06fa,0x79306fa8,0x074cfc41,
    0xaa541793,0x4f3a2ae7,0xb11fcceb,0x5edb819d,0x8f178f34,0x9a4e99ed,
    0xb537e7c7,0x6f7c1555,0x51089624,0x82ec8f51,0x42ec82ec,0xb1dc763b,
    0xfcf82cc3,0xb11c9266,0xedb859df,0x05902c85,0xed98bdb7,0x17b6e0e8,
    0x5dc0b6ee,0x05b7702d,0x076fe0b2,0x9fff60b2,0xb53baeac,0x56dc1555,
    0x8b73b508,0xfefc8f17,0x83b3b661,0x0ea98f17,0x4d077764,0x88f77e47,
    0x02b84eef,0x950ae057,0x47a4a8f4,0x54c3fff9,0x21d9260e,0xb9da80e9,
    0x85902c85,0x6cc5b9da,0x73b50eda,0x20bbbd0b,0xbbd05dde,0x37e0b20b,
    0x22205905,0x83a33ea6,0x7740eeec,0x5ffdd32f,0x4217f76c,0x23777c1d,
    0x3ae2feed,0x2682c828,0x07503987,0xb815c0ae,0x644ffc82,0xb80984ff,
    0x323f228e,0xee982cc6,0xc81642ff,0x17ff74c2,0x74c3f6b3,0x2b6a2ffe,
    0x556d40ea,0x7556d40e,0x91682c80,0xefb82c85,0x40bbbae2,0x10040200,
    0xbad81100,0xfff88084,0x57d41887,0xc815c2fa,0x87fffcc2,0xf30ffff9,
    0x00001fff,0xffff10b2,0x0fffe600,0x37ffc404,0x010dfff1,0x103e2ff6,
    0xdf53ff10,0x37d4ffc4,0x4df53ff1,0x3f66fff8,0xfff12fff,0x0002e00d,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x40844000,0x01998808,0x00403026,0x83993004,0x40208108,0x03372608,
    0x20110353,0x7b34c820,0x40350084,0x1bc98001,0x80440544,0x01bc9809,
    0x441deb81,0x376a0cec,0x8f6eb724,0x0e20ceda,0x6ec04444,0x1033664d,
    0x641dc880,0x2e6fd42e,0x20eaa1d4,0x812a00d8,0x5aed81a9,0x7e406ec4,
    0x8d51b72e,0x176c3dcd,0x4970664c,0x5c136a1d,0x16b07702,0x446e2b2a,
    0x0bf622de,0x9ba8bbb6,0xd0fcc1ba,0x44f4cd33,0xa9e67a2d,0x3d31e88d,
    0x0d6dc3d1,0x51011111,0x9aa7a21b,0x0a66207b,0x44f3415c,0x153c8199,
    0x4c90505c,0x2e0f7361,0x2155541a,0xdaaa9869,0x2e17b6e1,0x1d40a982,
    0x26054c39,0x2660cdec,0x64054c28,0x41a274b9,0x689c42b9,0xd0e2aa72,
    0x15cd703d,0x24c137d0,0x2208b21d,0x40024ced,0x22b8ae58,0x6fd4198e,
    0x343fc85c,0x72e6fd4f,0x36219b97,0x3ae0cd9c,0x3b6e0dc9,0xfcf82b85,
    0x66e43646,0xb73b53ec,0x76419570,0x21c85d42,0x66d442ec,0x59dfb10a,
    0x6c641764,0x036fea75,0x79264057,0x70732e38,0x6ec4e41b,0x499b6e23,
    0x9300e43a,0x588cc010,0x2ba3b872,0xf91e684f,0x2fabfc87,0x74ed479a,
    0x22dd6dc2,0x3b53d9da,0x530570b7,0x2b30d01d,0xffdd30e8,0x2b81ab85,
    0x20ed5dd4,0xd305702b,0x2b20ae01,0xbd3d3bab,0x91760570,0x3e273773,
    0xa5c043db,0x874932d9,0x86d4d168,0x01092619,0x3664a9dc,0x0bfa0e88,
    0x02b88f34,0x4a3cd031,0x895143cc,0x3ba67972,0x5c15c2ff,0xd906828e,
    0x70f2105d,0x7db0ae05,0x260570bf,0x0ae05980,0xfd71de64,0x6c42b81f,
    0x44779904,0x415c4ecc,0xdd31eefd,0x42efb89d,0x7740eefc,0x774c013f,
    0x21775c0e,0x5fe40ebe,0xffff32fa,0x5fe43c81,0x04d982fa,0x9b3019d5,
    0xffff9808,0xe8ffff10,0x420000ff,0xf30ffff9,0x98101fff,0xff70ffff,
    0x3ffe63ff,0x03fffe63,0xdfff1000,0x0037ffdc,0x010017ee,0x00400802,
    0x81888981,0xfdbdc000,0x00000002,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x40040110,0xdd880220,
    0x4b6676e0,0x98005319,0x2637620a,0x1377624d,0x2a137776,0x8edd6d41,
    0x322dacdb,0x377bb503,0xb7066edc,0x2026039b,0xbb32a9a8,0xd983305b,
    0x8835304d,0x0d4c289a,0x224dddb8,0x6ed41511,0xcb8a3502,0xdd80980b,
    0x3b60224d,0x3b203b02,0x5640d92e,0x36a7a21a,0xe89f2d70,0x366746dd,
    0x64c2e96e,0x69ddb80b,0xe89777a2,0x363a2788,0x82a67a0c,0x2a0a8cb8,
    0x27a26b9d,0xe885706a,0x26f20fed,0x8bb9d12d,0x66ec2cec,0x37bb2a1f,
    0x990f7363,0xbb54d3b7,0x819710cf,0x313edde8,0x3a026073,0x1e4f24c9,
    0x50153057,0x429e835f,0xee980cd8,0xbae8f340,0xb40e76c4,0x36057068,
    0xd8ee2cdb,0xbf1eabe1,0x6cfcb889,0x975c09d4,0x11aa7a1d,0x55dc3793,
    0x9e4722de,0x321fcceb,0x54b32dab,0x9b7bb6a0,0xdab45edb,0xa81f342c,
    0x25b1dc5e,0x2625cdfa,0x034d4199,0x05d90570,0xcdf899f9,0x260bb6a5,
    0x478bc1de,0x22a25a8e,0x02cac87a,0x17b7e057,0x99f0f495,0xa80ecf8f,
    0x189d41b4,0xdf1653b2,0xdeeda85f,0x43b3db51,0x2b6a5ffc,0x322b20aa,
    0xf8844b13,0x3b52add9,0x5eab44b7,0x4fa8f178,0x21e92a31,0xdddda9e6,
    0x40063a21,0x1a05702b,0x113b8f34,0x3b60e6cc,0xdffd12fe,0x442777c4,
    0x260ae06e,0xffc894bc,0x9568f344,0x3a836750,0x0e8acc75,0x42b8355a,
    0x0e44fffa,0x320eeec8,0x777e43de,0x57bffb61,0x3a2ffee9,0xeec894aa,
    0x1d4eea1f,0x1e687ff9,0x321d2e80,0xb815c353,0x279a0d02,0x2e1ffff9,
    0x410082ff,0x426c0081,0x77c6fff8,0xf9007fff,0x57f27f97,0x9fcff45e,
    0x323ffffb,0x57f22eff,0x05c1b86b,0x0205ff98,0x8040bff3,0x6c402020,
    0x70087fff,0x9007ffff,0x1a85f57f,0x407fffcc,0x0ffff99a,0x221ffff3,
    0x2bf25fff,0x000003fb,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0xb51b7000,0x8b6a76e5,
    0xb74da9dd,0x376a3bbb,0x0eeeedc3,0x0de54130,0xa81b53b3,0xdba6c188,
    0x2a4c9363,0xb80cc3dd,0xbb70dddd,0x02dd8819,0x6edc3995,0x3777661c,
    0x303376e3,0x00110543,0x153144cc,0x33100351,0x4288a883,0x389c2aaa,
    0x80066a66,0x54c198a8,0x86d4f440,0x320db9e8,0x9793c99b,0x032e2597,
    0x30597979,0x20d4c1bb,0x361fbbfa,0x3ea3deed,0x23f21e8b,0x032e23f9,
    0x9e881bd3,0xd73b50e9,0x2a60dd30,0x234cf440,0x36a4a9ad,0x4cf6c6b9,
    0x570b514e,0x92cefd88,0x3267f53f,0x337ea0c8,0x87b2fea5,0x76dc6fcf,
    0x077bbba2,0x4fd43291,0x20bb20df,0x774c0ee9,0x96675dc0,0x2a09ab89,
    0x2ae6a3bb,0x20bb221a,0x667cc2ec,0x37b2d10f,0x8363b666,0x542ddcdb,
    0xf833aa03,0x1d9661cb,0x76416ddc,0x6c6baf82,0x4bae08eb,0x3b3b661d,
    0x77443660,0x6c074c5e,0x6ced44a9,0x77cc79a0,0x220754c0,0x5d5d5c6f,
    0xf0767623,0x640ae09d,0xda86e883,0x3bae1dee,0x5c189d42,0x2e03fb82,
    0xb47ccf82,0x2b262add,0x3baae0dd,0x8189d42b,0x3177e2fc,0x373a164b,
    0xb9f05705,0x643eec1d,0xeef8594e,0xf9832e66,0xd982cc0e,0x06d5e40e,
    0x0fb723cd,0xbae851d7,0x8eeaeae5,0x4fc2c9d8,0x5702b81e,0xf98b75d0,
    0x0f220fcb,0x0ae1d4ea,0x15c176c4,0xedfb8f34,0x07ed265e,0xa8575557,
    0x06754753,0x1599645a,0x75decc1d,0x32682b80,0x56602763,0x25d6c0e8,
    0xf30e5540,0x989d07ff,0x55fe4389,0x7f95f92f,0x411fffe2,0x1afafbe0,
    0x9bfa85ce,0x1ffff33f,0x5fb1ffe4,0x4c7c49f7,0xf717fdc7,0x7fec7fff,
    0x7cc76603,0x75f70fff,0x3f60405f,0x27fe0f8b,0x3ffee6fa,0xf901b73f,
    0x3ff25fff,0x2a7fe22e,0x3fffe66f,0x21dfff90,0xffc85ffa,0x0000002e,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x26604c00,0x04400999,
    0x19998826,0x18804044,0x034b8302,0x164b2b23,0x2aa23333,0x88882aaa,
    0x00000000,0x00000000,0x00000000,0x00000000,0x40000000,0x6eeec5b9,
    0x5d4bb12e,0x75cb911c,0x03b12eee,0x1d47709b,0x1baf2675,0x5cae6e39,
    0x5c533322,0xf30bbbbb,0x2e1dffff,0x000001a9,0x00000000,0x00000000,
    0x00000000,0x00000000,0x372b8095,0x5caa6e37,0x555530db,0x37320d41,
    0x005906c3,0x50989801,0x00000001,0x00000000,0x00000000,0x00000000,
    0x00000000,0x3aa00000,0x4d895c04,0x235510d4,0xb12cccca,0x0189244b,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
};

static signed short stb__courier_bold_11_latin_ext_x[560]={ 0,2,1,0,0,0,1,2,2,1,0,0,1,0,
2,0,0,0,0,0,0,0,1,0,0,1,2,1,-1,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,
0,-1,-1,0,0,0,0,0,0,0,-1,-1,0,0,0,2,0,1,0,-1,1,0,-1,0,0,0,0,0,0,0,
0,0,0,-1,0,0,-1,0,0,0,0,0,0,-1,0,0,0,1,2,1,0,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,2,0,0,0,0,
2,0,1,-1,1,0,-1,0,-1,-1,1,0,1,1,1,0,0,2,1,1,1,0,0,-1,0,0,-1,-1,-1,-1,
-1,-1,-1,0,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,
-1,0,-1,0,-1,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,-1,0,-1,0,-1,0,-1,0,0,0,0,0,0,0,0,-1,-1,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,-1,0,0,
0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,1,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,-1,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,-1,0,-1,-1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static signed short stb__courier_bold_11_latin_ext_y[560]={ 8,1,2,1,1,1,2,2,1,1,1,2,6,4,
6,1,1,1,1,1,1,1,1,1,1,1,3,3,2,3,2,2,1,2,2,2,2,2,2,2,2,2,2,2,
2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1,1,1,9,1,3,1,3,1,3,1,3,1,1,
1,1,1,3,3,3,3,3,3,3,2,3,3,3,3,3,3,1,1,1,4,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,8,3,1,2,2,2,
1,1,1,2,1,3,4,4,2,0,0,1,1,1,1,3,1,4,7,1,1,3,1,1,1,3,0,0,0,0,
0,-1,2,2,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,3,1,0,0,0,0,0,2,1,1,1,
1,2,1,1,3,3,1,1,1,1,1,1,1,1,1,2,1,1,1,2,1,2,3,1,1,1,1,1,1,1,
0,2,0,1,2,3,0,1,0,1,0,1,0,1,0,1,2,1,0,2,0,1,0,1,2,3,0,1,0,1,
0,1,0,1,2,1,0,0,2,1,0,2,0,2,0,1,2,1,0,3,2,1,0,1,2,1,3,0,-1,2,
1,2,1,2,1,2,1,0,1,2,3,0,1,2,2,3,0,2,0,1,0,1,2,3,0,1,2,3,0,1,
0,1,0,1,2,3,0,1,2,2,0,1,2,2,0,2,0,2,0,1,-1,1,0,1,2,3,0,1,0,1,
0,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,1,0,1,0,
1,0,1,-1,0,-1,0,-1,0,-1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,-2,-1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,1,1,1,1,1, };
static unsigned short stb__courier_bold_11_latin_ext_w[560]={ 0,2,4,6,6,6,5,2,3,3,6,6,3,5,
2,6,6,6,5,6,5,6,5,5,6,5,2,4,7,6,6,6,5,8,6,6,6,6,6,6,6,6,6,6,
6,8,7,6,6,6,7,6,6,6,8,7,6,6,6,3,6,3,6,8,3,6,7,6,6,6,6,6,6,6,
5,6,6,8,6,6,7,6,6,6,6,6,6,7,6,6,6,4,2,4,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,0,2,5,6,6,6,
2,6,4,7,4,6,7,5,7,8,4,6,4,4,3,6,6,2,3,4,4,6,6,8,6,5,8,8,8,8,
8,8,8,6,6,6,6,6,6,6,6,6,7,7,6,6,6,6,6,5,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,
8,6,8,6,8,6,6,6,6,6,6,6,6,6,6,7,7,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,6,5,6,6,6,6,6,6,
6,6,6,6,6,6,6,7,6,7,6,7,6,7,6,6,6,6,6,6,6,6,8,7,7,6,7,6,7,6,
6,6,6,6,6,6,6,6,6,6,6,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,7,7,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,8,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,8,6,8,7,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,6,
6,6,6,6,6,6, };
static unsigned short stb__courier_bold_11_latin_ext_h[560]={ 0,8,3,8,9,8,7,3,9,9,5,6,4,2,
3,9,8,7,7,8,7,8,8,8,8,8,6,7,6,4,6,7,8,6,6,7,6,6,6,7,6,6,7,6,
6,6,6,7,6,8,6,7,6,7,6,6,6,6,6,9,9,9,4,2,3,6,8,6,8,6,7,8,7,7,
10,7,7,5,5,6,8,8,5,6,7,6,5,5,5,8,5,9,9,9,3,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,8,8,6,6,6,
9,8,2,7,4,5,4,2,7,2,4,7,4,5,3,8,8,2,3,4,4,5,7,7,7,8,8,8,8,8,
8,9,6,8,8,8,8,8,8,8,8,8,6,8,9,9,9,9,9,5,8,9,9,9,9,8,6,8,8,8,
8,7,8,8,6,7,8,8,8,8,7,7,7,7,8,6,8,8,8,7,8,6,6,8,8,8,8,10,10,10,
8,7,8,8,8,7,9,8,9,8,9,8,9,8,8,8,6,8,8,7,8,8,8,8,8,7,8,8,9,10,
9,10,9,10,8,10,8,8,6,7,8,6,8,6,8,7,8,9,8,5,7,10,9,10,8,9,5,8,9,8,
9,6,7,6,7,6,7,8,7,8,7,8,7,6,7,8,9,7,9,8,9,8,6,6,8,7,8,7,8,7,
9,8,9,8,8,7,9,8,9,9,8,8,6,7,9,7,9,7,9,8,10,8,9,8,8,7,8,7,8,10,
8,8,7,8,7,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,9,7,7,7,
7,7,7,7,7,7,7,7,7,7,8,6,7,7,7,7,7,7,7,7,7,7,7,7,7,8,6,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,8,8,7,9,
8,9,8,10,9,10,9,10,9,10,9,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,10,10,8,8,9,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7, };
static unsigned short stb__courier_bold_11_latin_ext_s[560]={ 253,253,71,235,106,200,151,76,242,159,170,
141,48,79,253,212,121,157,164,135,178,171,222,8,21,115,250,251,44,29,98,
184,199,119,135,212,112,105,142,191,96,73,233,103,91,82,74,240,155,114,133,
198,37,205,64,15,8,1,243,141,163,217,41,94,56,191,135,176,241,162,15,
92,22,8,8,247,1,225,198,89,185,134,177,57,219,43,184,157,205,72,212,
196,193,188,60,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,
226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,253,15,18,
29,50,36,157,42,103,170,24,234,6,79,143,85,14,122,1,165,67,79,65,
253,52,36,19,191,45,36,29,121,53,44,162,62,242,208,80,178,193,200,235,
78,71,8,15,85,125,29,1,15,71,85,99,219,99,152,191,29,8,1,169,
49,37,227,22,120,178,1,183,177,228,221,214,207,191,198,205,136,171,229,155,
148,141,219,127,236,148,107,100,93,86,100,114,122,56,52,40,33,24,87,177,
8,113,248,22,234,246,220,213,205,149,192,185,106,171,164,157,150,143,163,128,
121,235,107,198,1,205,14,72,21,56,49,59,170,28,52,14,128,1,101,242,
120,228,248,108,58,50,94,186,170,241,164,43,149,57,118,59,30,94,215,8,
91,22,76,15,59,1,110,240,108,221,212,219,35,228,249,198,66,214,129,156,
226,226,247,184,234,201,22,15,184,145,37,134,127,106,113,23,113,92,149,78,
127,64,52,73,142,36,128,241,134,178,141,248,87,8,1,156,101,233,87,66,
73,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,80,226,226,181,
226,226,226,226,226,226,226,226,226,226,226,226,226,29,222,226,226,226,226,226,
226,226,226,226,226,226,226,226,44,207,226,226,226,226,226,226,226,226,226,226,
226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,67,84,
99,115,143,193,167,207,44,174,80,150,66,129,51,160,226,226,226,226,226,226,
226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,
226,226,226,35,28,63,79,136,94,226,226,226,226,226,226,226,226,226,226,226,
226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,
226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,
226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,226,
226,226,226,226,226,226,226,226,226, };
static unsigned short stb__courier_bold_11_latin_ext_t[560]={ 10,1,81,22,12,22,58,81,1,12,74,
66,81,81,66,12,22,58,58,22,58,22,22,31,31,31,66,40,74,81,74,
58,31,74,74,58,74,74,74,58,66,66,58,66,74,74,74,58,66,40,66,
58,74,58,66,74,74,74,66,12,12,1,81,81,81,66,31,66,31,66,66,
49,66,66,1,58,66,74,74,66,40,40,74,66,58,66,74,74,74,40,74,
1,1,1,81,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,
58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,10,40,40,
66,66,66,1,31,81,58,81,74,81,81,58,81,81,58,81,74,81,40,40,
70,81,81,81,74,58,58,58,40,49,49,40,49,40,1,66,40,40,40,40,
49,49,49,49,49,66,49,12,12,12,12,12,74,49,12,12,12,12,40,66,
40,49,31,49,49,31,49,66,49,40,40,40,40,49,49,49,58,40,66,40,
40,40,49,40,66,66,40,40,40,40,1,1,1,40,58,40,40,40,58,12,
40,12,31,12,31,1,31,31,31,74,31,31,49,31,31,31,31,31,49,31,
31,1,1,12,1,12,1,31,1,31,31,74,49,31,74,31,74,31,58,22,
12,22,74,58,1,12,1,22,12,74,22,12,22,12,66,58,74,58,66,58,
22,58,22,58,22,58,66,49,31,1,49,12,31,1,22,66,74,22,58,22,
49,12,49,12,12,1,22,22,49,12,22,12,12,22,22,74,49,12,49,12,
49,12,22,1,22,12,22,12,49,22,49,12,1,22,22,49,31,49,31,58,
58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,1,
58,58,58,58,58,58,58,58,58,58,58,58,58,22,66,58,58,58,58,58,
58,58,58,58,58,58,58,58,22,66,58,58,58,58,58,58,58,58,58,58,
58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,22,22,
22,58,1,22,1,22,1,1,1,1,1,1,1,1,58,58,58,58,58,58,
58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,
58,58,58,1,1,31,31,1,31,58,58,58,58,58,58,58,58,58,58,58,
58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,
58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,
58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,58,
58,58,58,58,58,58,58,58,58, };
static unsigned short stb__courier_bold_11_latin_ext_a[560]={ 93,93,93,93,93,93,93,93,
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
//    height: STB_FONT_courier_bold_11_latin_ext_BITMAP_HEIGHT or STB_FONT_courier_bold_11_latin_ext_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_courier_bold_11_latin_ext(stb_fontchar font[STB_FONT_courier_bold_11_latin_ext_NUM_CHARS],
                unsigned char data[STB_FONT_courier_bold_11_latin_ext_BITMAP_HEIGHT][STB_FONT_courier_bold_11_latin_ext_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__courier_bold_11_latin_ext_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_courier_bold_11_latin_ext_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_courier_bold_11_latin_ext_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_courier_bold_11_latin_ext_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_courier_bold_11_latin_ext_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_courier_bold_11_latin_ext_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__courier_bold_11_latin_ext_s[i]) * recip_width;
            font[i].t0 = (stb__courier_bold_11_latin_ext_t[i]) * recip_height;
            font[i].s1 = (stb__courier_bold_11_latin_ext_s[i] + stb__courier_bold_11_latin_ext_w[i]) * recip_width;
            font[i].t1 = (stb__courier_bold_11_latin_ext_t[i] + stb__courier_bold_11_latin_ext_h[i]) * recip_height;
            font[i].x0 = stb__courier_bold_11_latin_ext_x[i];
            font[i].y0 = stb__courier_bold_11_latin_ext_y[i];
            font[i].x1 = stb__courier_bold_11_latin_ext_x[i] + stb__courier_bold_11_latin_ext_w[i];
            font[i].y1 = stb__courier_bold_11_latin_ext_y[i] + stb__courier_bold_11_latin_ext_h[i];
            font[i].advance_int = (stb__courier_bold_11_latin_ext_a[i]+8)>>4;
            font[i].s0f = (stb__courier_bold_11_latin_ext_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__courier_bold_11_latin_ext_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__courier_bold_11_latin_ext_s[i] + stb__courier_bold_11_latin_ext_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__courier_bold_11_latin_ext_t[i] + stb__courier_bold_11_latin_ext_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__courier_bold_11_latin_ext_x[i] - 0.5f;
            font[i].y0f = stb__courier_bold_11_latin_ext_y[i] - 0.5f;
            font[i].x1f = stb__courier_bold_11_latin_ext_x[i] + stb__courier_bold_11_latin_ext_w[i] + 0.5f;
            font[i].y1f = stb__courier_bold_11_latin_ext_y[i] + stb__courier_bold_11_latin_ext_h[i] + 0.5f;
            font[i].advance = stb__courier_bold_11_latin_ext_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_courier_bold_11_latin_ext
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_courier_bold_11_latin_ext_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_courier_bold_11_latin_ext_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_courier_bold_11_latin_ext_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_courier_bold_11_latin_ext_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_courier_bold_11_latin_ext_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_courier_bold_11_latin_ext_LINE_SPACING
#endif
