// Font generated by stb_font_inl_generator.c (4/1 bpp)
//
// Following instructions show how to use the only included font, whatever it is, in
// a generic way so you can replace it with any other font by changing the include.
// To use multiple fonts, replace STB_SOMEFONT_* below with STB_FONT_consolas_bold_13_latin1_*,
// and separately install each font. Note that the CREATE function call has a
// totally different name; it's just 'stb_font_consolas_bold_13_latin1'.
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

#define STB_FONT_consolas_bold_13_latin1_BITMAP_WIDTH         256
#define STB_FONT_consolas_bold_13_latin1_BITMAP_HEIGHT         68
#define STB_FONT_consolas_bold_13_latin1_BITMAP_HEIGHT_POW2   128

#define STB_FONT_consolas_bold_13_latin1_FIRST_CHAR            32
#define STB_FONT_consolas_bold_13_latin1_NUM_CHARS            224

#define STB_FONT_consolas_bold_13_latin1_LINE_SPACING           9

static unsigned int stb__consolas_bold_13_latin1_pixels[]={
    0x0110a82a,0x41998820,0x00220199,0x00c08000,0x2a203ba2,0x5f10a800,
    0x26000000,0x44059303,0x42ba543c,0x1e4400cb,0x5ecc164c,0x42ba5429,
    0x039800cb,0x00000000,0x23f12a80,0x80bf91f8,0x8fff54f9,0x5fd81fff,
    0xbdc27fdc,0x2a7f304e,0x5c0ee01f,0x8f404fff,0x7fec02f8,0x2205eb87,
    0x6d6c40db,0x6b819901,0xc80b90bb,0x0ed6c40c,0xd70ff6ee,0x88172176,
    0x4ebdc4da,0x2e25f7dc,0x9d7b89d7,0xf83ffe98,0x87e23f17,0x0b6201f8,
    0xf302f8f5,0x3e89eb83,0xdd02b9cc,0x30a60ed8,0x1fb9fcc5,0x5f12fa88,
    0x8afb8375,0xf906ad81,0x260c4fff,0x31098310,0x80544098,0x015100a8,
    0x054402a2,0x7e413062,0x2b9cc5ff,0x260e544c,0x57398573,0x40fc9de8,
    0x3e23f119,0x55541f41,0x0be3d41a,0xa87e23d4,0xb8530a66,0xf72f440f,
    0xf8f927c3,0x8b7ffd44,0x2e0feeef,0x059300cf,0x5c35b7f3,0x07dd3e0f,
    0x4f83ee9f,0xf913fff2,0xfffc89ff,0x227ffe44,0x3ee4fffc,0x55fcd3e0,
    0x41e4c3ff,0xca80bcb9,0x0a88540b,0x2e1f67f1,0x07e23f14,0x9fddd09d,
    0xa817c7a8,0x67fd75c7,0x44f87ee7,0x7c4f705e,0x236c3f54,0x8756fc6e,
    0x227f15f8,0xfd82ffee,0x41edfa86,0x7dd3e0fb,0xf07dd3e0,0x8fdcfe69,
    0x263f73f9,0x3e63f73f,0x4fe63f73,0x7c1f71fb,0x97b32f94,0x6ec6ecfb,
    0x7f7ec6ec,0x3e65f10e,0x83f75f11,0x223f15ea,0xf017641e,0x417c7a89,
    0x5f66c6d9,0x553e27bf,0x540fe21f,0x236df60f,0x5f336c7c,0x9f17c4b5,
    0x07fa67ea,0xffb01fdf,0x9f07dc3b,0xf74f83ee,0x7c7ca7c1,0xf94f8f94,
    0x4f8f94f8,0x1f74f8f9,0xb3f6da7c,0x17c4fe2d,0x25f31fa8,0x265f13f9,
    0x8db5f11f,0x03f13cfc,0x9f00ff98,0x7c17c7a8,0x7cfdf41f,0x46dbec7a,
    0x45f101f9,0x7d43faf9,0xbbf893e0,0x33f8be23,0x549f11bf,0xff503f9f,
    0x4f83ee3f,0xfba7c1f7,0x3a36d3e0,0xdb6e8db6,0x6e8db6e8,0x1f76e8db,
    0xb79eca7c,0x3ffffe6d,0x47fff663,0x7c53e0fb,0x2be23f32,0x88bd0efa,
    0x202ec01f,0x0be3d44f,0x27efa364,0x7d7cc6af,0xf981fc43,0x2207ff42,
    0x6c1fcaef,0x37f13cef,0x67fdc3f9,0x82f5b22f,0x1f73f9da,0x3e0fba7c,
    0xca7c1f74,0x6c7cb6c7,0xf96d8f96,0x6d8f96d8,0xfba7c1f7,0x2fe69d5c,
    0x39f10999,0xf87ee3f7,0x47ea5f14,0x369f52f8,0x7447e21f,0x13e01f41,
    0xf502f8f5,0x4efdfbe8,0x5e80ffe8,0x4fb81f70,0x105ffd30,0x3fe29ff9,
    0x5fe982ff,0x2a0fca7c,0xf51fdecb,0x20fa9fc1,0x9fc1f53f,0x7d53e0fa,
    0xf07d53e0,0x54f83ea9,0x0faa7c1f,0x65ffccfe,0x86277e1f,0x31fd9bf9,
    0x7c3f93bf,0x5f11fead,0x3fa2bd31,0x3f11f8af,0x227c03e8,0x7a817c7a,
    0x064dddec,0x0fc827dc,0x00fc85d8,0x0f804fe2,0x2fc00be2,0x45fffff3,
    0x262dffea,0xf31fb9cf,0x3e63f739,0xdf11fb9c,0x3be23f95,0x5df11fca,
    0x2bbe23f9,0x95df11fc,0x2e73e63f,0x0bffee1f,0x6c1fffd3,0x3ee1fcff,
    0x5ffe43ff,0xdfb5f11f,0x1f89ba83,0x203f83f1,0x3e3d43f8,0x35c1f102,
    0xd100fc80,0x36a1fb8b,0x6ffd803f,0x817c4788,0x2e2fede9,0xd84faaaf,
    0x87fff702,0x7dc3fffb,0x7fecc3ff,0x217fecc2,0x6cc2ffd9,0x7fecc2ff,
    0x21fffdc2,0x804400db,0x00200800,0xf11f8800,0xb303faa3,0x37261fd9,
    0x74066fc7,0x797bd13e,0x4c03fda8,0xca87f33f,0x202a6001,0x500e4438,
    0x6c5e8355,0x00400b87,0x00801002,0x01002004,0x19804008,0x00000000,
    0x47e20000,0x101551f8,0x664c1997,0x98066644,0x502f2e22,0x28260039,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x44000000,
    0x0001910c,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x64400000,0x07d50003,0x3260554c,0x000f2202,
    0x1fc4164c,0x70537b30,0x15d2a019,0xb30a6f66,0xba549ffd,0xb82ba542,
    0x0032e00c,0x0f2207e6,0x7910164c,0xfd889f70,0x8813ee01,0x0ee880ee,
    0x2a603fb1,0x9000001a,0x97df7019,0xfd30f1d0,0x6d6c45ff,0x7cc19901,
    0xad88d51e,0x2e06c81d,0x0b903fdb,0x2ee2edae,0x3ffe23fd,0x2edae4ea,
    0x5c82edae,0x2ec02e40,0xad880cc8,0x8819901d,0x03b81c8c,0x2e039191,
    0x1dc0ee03,0x5c4fffe8,0x75ee4bef,0x98310224,0x4eb81ca8,0x4c111ee8,
    0x4ccc1999,0x22ef3619,0x3009881f,0x804c403f,0x4c419999,0x88262199,
    0x9d3fff70,0x440ccccc,0x40262009,0xf1019998,0x22013105,0x4cc41999,
    0x05e5cc19,0x3c981e4c,0x97307930,0x0bcb9817,0xa898fb04,0x715ce61c,
    0x65427c1f,0x05e5cc0b,0x7ffc07f3,0x3fffe0ff,0x7b7d990f,0x5d81bf60,
    0x7fc1bf60,0x3ffa0fff,0x74df50ff,0x9d3fff54,0x207ffffc,0x1bf606fd,
    0x407ffff4,0x20dfb06c,0x3a0ffffe,0x3760ffff,0x767dc6ec,0x23767dc6,
    0x6ec6ecfb,0x766ec6ec,0x71517606,0x05e5cc19,0xb03ee9f1,0x6ec1dfdf,
    0x007ea6ec,0x0be605f3,0x7c0d7991,0x01f500fe,0x7cc03fbe,0xff505e82,
    0x7ff453a5,0x817cc4e9,0xfdf00fef,0x7f00bd01,0x3a03fbe0,0x54017a05,
    0x3e27f11f,0x4be27f12,0x205f13f8,0x43f501fa,0x3e21ffe8,0x33767fee,
    0x27c7dc6e,0x81fccbe6,0x803f51fa,0x05f302f9,0x4fd407e2,0x2a13a03f,
    0x5f303f9f,0x37ea0bd0,0x4edc49d5,0x5417cc4e,0x9fa83f9f,0x5405e83f,
    0x3f9fa80f,0x817a05e8,0xf31fffd9,0x3e67ffff,0xff33ffff,0x7ecc7fff,
    0x3ff661ff,0x87f5541f,0x503f75f8,0x07f7c43f,0x264f83ee,0x9f31fffd,
    0xf302f980,0x072f3605,0x7b817ad9,0x260bd6c8,0x7fffe82f,0x13a7ebea,
    0x417cc4e8,0x2d90bd6c,0x7fffe85e,0x3ad904e8,0x47fffe85,0x3e27fffe,
    0x7f31fb9c,0x2fe61333,0x37f30999,0x273e2133,0x739f11fb,0x44be603f,
    0x3663f32f,0x27dc1fff,0x229f0fdc,0x3a1fb9cf,0x7cc1babf,0xd505f302,
    0x94f8b7f5,0xf0be201f,0x3e603f29,0x22aaee82,0x409dbd7a,0x7c17cc4e,
    0x94f81f94,0x2aaee81f,0x94f80fcc,0x2aaee81f,0xf3155774,0x6fc3fb37,
    0x44efc189,0x30c4efc1,0x263fb37f,0x261fd9bf,0x5f11fd99,0x273e27e6,
    0x417cc1fb,0x31fc9df9,0x443fb37f,0x7cc1fffd,0xe885f302,0x3e66ada9,
    0x3202ffff,0x3ffffe66,0x5e82f982,0x13beef50,0x5f30fe21,0x2fffff98,
    0x0bffffe6,0x9836c0bd,0x742fffff,0xfd817a05,0x3fa61fcf,0x3ffa60ff,
    0x3fffa60f,0x87f3ff60,0xf11fcffd,0x97c45dff,0xd9bf99f9,0xb817cc1f,
    0x7fec3fff,0x982f81fc,0x7d4c1bfa,0x7f45321b,0x3eaabee2,0x7dc7e604,
    0x54c4faaa,0x557741bf,0x27fcf50a,0x4c1dfdf5,0x2bee1bfa,0x2bee4faa,
    0x57744faa,0x205f10aa,0x44faaafb,0x3a0aaaee,0x0040aaae,0x40110044,
    0x00801008,0xf32f8804,0x07f3ff63,0x200805f3,0x7c074400,0x3fe0ffff,
    0x3a000fff,0x46a03ec5,0x3fe3ec5e,0x3ffa0fff,0x7dcf50ff,0x7fc154c4,
    0xd8bd0fff,0xe8fb17a7,0x0510ffff,0xfd1f62f4,0x7ff41fff,0x000000ff,
    0x00000000,0x00002000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x44276cc0,0x040001fd,0x32a03510,0x5442a1ab,0x106ee2a0,0x26203333,
    0xa882a981,0x3a07df30,0x155306cf,0x310aa988,0x01a88133,0x5dd402a2,
    0x6c47700a,0x0660001f,0x3221dd10,0xa9827dc0,0x7c4fe61a,0x9aa6eb82,
    0xfa9aa4fa,0xf59f1aa4,0x7d40ee05,0x84f985d8,0x76c5fefb,0x25f13efc,
    0xdddf10fa,0x3ffff41f,0xfb1fff62,0xa7dc1dfd,0x7e44fdb8,0x7ff4c2ff,
    0x3fffea2f,0x64bfffd3,0xffc85ece,0x7f6fe44f,0x5c17e541,0x227fe403,
    0x2a1dc05e,0x0723223f,0x7ccdfffb,0xdb105f12,0x14c987e2,0xf8a64c3f,
    0x81fcbe21,0xaa440bca,0x7c42d882,0xb97c5f53,0x87d4be27,0x747f15f8,
    0x0f6c199d,0x21f99fc4,0x447d81d9,0x8f743fda,0x221df108,0x26d35e81,
    0x5cfe63da,0x3e67f31f,0x83bfbf61,0xfa81510a,0x5df5309a,0x40bca815,
    0x260bca82,0x12f9824f,0x2623755f,0xb4c83d9f,0x20f69907,0xfd80eeee,
    0x2aaa0efe,0x5c1aaa81,0x9de93f27,0x7d4be26d,0xd27c5f10,0x117f101b,
    0x01f91bf0,0xdbfb1f60,0x5c0fe61f,0x5b5e801f,0x3e4d39f7,0xf987dd3e,
    0x7fb93f31,0x20fccbe2,0xeffeb87c,0x3bfbf60e,0x77ec3d10,0x03bf30ef,
    0x3bbe25f3,0x6abdc8fe,0x2a0d5550,0x2df906aa,0x7ccbe61a,0x3613fb63,
    0x747e44fe,0x37bba5ee,0x87dcbe20,0xfe8fe2f8,0x3ffea3ff,0x3ffe60df,
    0x17fe4282,0x54bea7f3,0x3a6f901f,0xf3d5e83e,0x746d9e25,0x47ea1f76,
    0x229d3f7b,0x3263f32f,0x2f41ccfe,0x13f997cc,0x7ccbe63f,0x8877ff23,
    0x3e2bf12f,0xf8807e23,0x2e07e201,0x2e3ebfbf,0x13e13e0f,0x6ffe44f8,
    0x337f15e8,0x2ffadf88,0x43f937f1,0xf51fd998,0x7e47f537,0x93ee0efb,
    0xf10fb86c,0xbe407ea7,0xd5e84fa8,0x7c9e27d3,0xe9cf9b6c,0x3ef5f51f,
    0x47e65f14,0x41ccfec9,0x3e0fb85e,0x83ee5f14,0x87fe4c4f,0x7c5f11f8,
    0x20727364,0xcd81dbcd,0x7dd761c9,0x4f87ee2f,0x713e04f8,0xffd27c7f,
    0x3bfe23ff,0xffff16fa,0xf897d405,0x997cd3e2,0x299be23f,0x27f31fb8,
    0x43f704f9,0x5795e84f,0x07d4b5df,0x7e7fe49f,0x3f7bff11,0x20fd4be2,
    0x2e17a07c,0x97cd3e1f,0x5413e1fb,0x17c42a2f,0x3ba3aa7f,0x45c9b542,
    0x322ee8ea,0x260ff99f,0xf81fc9df,0xbf113e04,0x87ea1f93,0x1085f14f,
    0x754cc05f,0x3ee7ba0f,0x5f519f32,0x261724e8,0x3a0fd9df,0xdf11babf,
    0x2a6e9f35,0x3a23f33f,0x3f2bbe21,0x2a1f9841,0x56fc3fff,0xd03e41fe,
    0x4efcc33d,0x265f31fc,0x731fc9df,0x3623fb33,0x3f937f11,0x49dd93d1,
    0x443d51e8,0x224eec9e,0x20eedffe,0x4cc3fffb,0x3e6609cf,0x3ffea09c,
    0x3f2b7ea2,0x3e205f12,0x077ffe02,0xfc87ffb3,0xb17ee4ff,0x0bffee0f,
    0x4c3fffb1,0xffd2fffe,0x82fefa8b,0x2602ffd9,0x6403aa1f,0x3e41fbff,
    0x5c3fff50,0x8be63fff,0x3e63fffb,0x4fe63fff,0x992fffe8,0x14c8faa6,
    0xa9a64dff,0x0100083e,0x25fffff1,0x82fffff8,0x43999300,0x039101c8,
    0x04008008,0x04008044,0x40004000,0xc8800800,0x80100660,0x0200807c,
    0x88020722,0x00000100,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0xf9800000,0x06227dc1,0x0530a613,
    0x00983ba2,0xe8816544,0x0088311e,0x26621333,0x201fc809,0x804084fb,
    0x27ff40aa,0x999881fc,0x33331099,0x998817c4,0x19999809,0x104c4022,
    0x84c42621,0x4c40c409,0x8c06a600,0x00131018,0x1f9802a2,0xfb872322,
    0xf0fdd3e0,0x7f10ee09,0x1fbfe601,0x4cbe61d4,0x6fffa83f,0x507ffff5,
    0x39191019,0xe89d07d4,0x3e621fef,0xbb703f84,0x3ffa9b99,0x205f10ff,
    0x7c3ffffb,0x0db0ffff,0xf54e9bea,0x23ecff2b,0xb06fd86d,0x8f889fff,
    0x04ff886a,0x5427dcf6,0x442a1fcb,0xa7c1f70a,0xa83f54f8,0x3fe21510,
    0x807744ff,0xb6d81aaa,0xa83f760d,0x2a2fc89f,0x1aaa81aa,0x07f7f744,
    0x27c063f5,0x571a89fc,0x17a937fb,0x7065d7c4,0x985f911f,0xfa836c2f,
    0x5fea9d2f,0x7c3f73fe,0x540fef84,0x2e21f72f,0x7642edbf,0x31fe884e,
    0xfedfc83b,0x47e65f11,0x7d93e0fb,0xf32f88db,0x3f26fe23,0x76c07f12,
    0x1fdf884f,0x2a0faf88,0x76c9f11f,0x84fed84f,0x3dc6eaec,0x45fc27c0,
    0x57c4ae5f,0x3fe20bd4,0x443ee7fe,0x3617cc4f,0x3abbf506,0x9bf7db74,
    0x20fccfe2,0x7dc3f9fa,0x3faa5f30,0x27e65ffe,0x00774c4e,0x88fccfe6,
    0x3ee3f32f,0xfaf993e0,0x1f997c43,0xf93e25f1,0xf904f804,0x3be7ae0b,
    0x17abfff4,0xe84f813e,0x3faa1f53,0xf09f02cc,0x4d5c1dd7,0xfffd49ec,
    0x1fbafc4f,0x262f41f7,0xfa836c2f,0x9b74e9fa,0xcb74999f,0x98bd6c87,
    0x2a3fdadf,0x9d4e8996,0x20407fc4,0x223f30fb,0x3ee3f32f,0x1ffd13e0,
    0x23f32f88,0x6c5f52f8,0x09f039bf,0xe819bfb9,0x7f91bf9b,0x813e17e3,
    0x4d74d84f,0xf01aafd9,0xb83fff09,0xdd498bba,0x997c4555,0x2fc1f71f,
    0x20db0be6,0x2e9dbd7a,0x2e5c9fad,0x94f85e8f,0xfdeea81f,0x3bd5db32,
    0x262743ee,0xb8fea0ef,0x3e23f50f,0x83ea3f52,0x4427dc3f,0x3e23f52f,
    0x7e445fee,0x984f80ff,0x77cc1bfa,0x547ea0fe,0x3e04f83f,0x45fefc84,
    0xf84f807b,0x8d55c6ec,0x3e20bd49,0x43ee3f32,0x217cc3fa,0x3eef506d,
    0x2e52b94e,0xf985f7f3,0x2e02ffff,0xdfdff90f,0x3fffff65,0xfa8f7446,
    0x3fa73e63,0x47fab7e1,0x41fb9cf9,0xd5bf00fc,0x06b3e23f,0xcf9982f8,
    0x3bbfba09,0x27f2b720,0x1ff97f50,0x304e7ccc,0x3e6139f3,0xfb32fbcc,
    0x7ccc1555,0x3e6fe09c,0xa4ceeae5,0xf10aaaee,0x5fdc7e65,0x3ea60ffc,
    0x2aabb61b,0xca7fcf50,0x3ffe2e44,0x7d557dc0,0x227dd544,0x554c3f4d,
    0x3d882dfa,0x3efff202,0x87efff21,0x36a3fffb,0x2fff203f,0x8805f11f,
    0xfffff885,0x886fea62,0x2adff32f,0x3e20deff,0xff12ffff,0x71265fff,
    0x3ffffee5,0x5fffff12,0xd73fb9fc,0x3fa9dddd,0x25f10fff,0xbdff71f9,
    0x0fffff81,0x2a5ffffb,0x226d3ee7,0x742fe46b,0x3bfe3ec5,0x00f8bd83,
    0x0200013a,0x95010010,0x00001003,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x40880000,0x10982618,
    0x4cc43333,0x98310999,0x13333310,0x4cc04ccc,0x00999809,0x5177106a,
    0x30595107,0x17973079,0xa81510a8,0xe88001cc,0xb8179501,0x02040ba8,
    0xaa877777,0x2e66e661,0xa95c1730,0x05c41c41,0x26000d4c,0x81109999,
    0x41306218,0x2f8b544d,0x3fffa3f9,0x3ffffee7,0xa9fc1f54,0xf13fffff,
    0x7fc49fff,0x3ffe25ff,0x227f545f,0x24eefdcb,0x7dc7eff9,0x766ec6ec,
    0x0fccbe26,0xe98999fb,0x81f882ee,0xf10efefd,0x53e8ffdd,0x7ff7741f,
    0x323f7910,0xd13eefee,0x22743eed,0x741f887a,0x036a4fff,0x4fffffe6,
    0xfa93e0fb,0x226c5f53,0x7f35f16b,0x0be602f4,0x989fc1f5,0x5f11fc99,
    0x4be21fb1,0x2e5f11fb,0x09f9f12f,0xee9ea7e2,0x5f13f880,0x97c47ea0,
    0x203be1f9,0x31dbdce8,0x2639bf99,0x3e27f32f,0x67d43f75,0xa87f503f,
    0x5f1d92fc,0x1fe7ccb7,0x11ae32b9,0xd85413f1,0x2603ba67,0x9f10fe99,
    0xd1fb03ee,0xb71b5c8d,0xbd17afe2,0x7d42f980,0x12fc0fe0,0x7c43ee5f,
    0x8be21f72,0x2227c24f,0xf17eefed,0x3fffe607,0x3fff663f,0x87e65f11,
    0x2ae1dffb,0x99349dbc,0x83ee39bf,0x3e65f14f,0xf882fe41,0xc974f5c5,
    0xfc8b73f5,0x667d75c6,0x3ffffee4,0x3620fc84,0xb85f701f,0xef984f8f,
    0x5fcee41f,0x81fff15b,0xf983ccee,0x7ffffd42,0x3e21fb83,0x3be23fdd,
    0x5cbe24fe,0x6ec4f82f,0x13e19af9,0x84ccdfcc,0x11fb9cf8,0x7107ea5f,
    0x372ae1ff,0x20fc449b,0x7c53e1fb,0x6fd43f32,0x540ee83f,0x3eb92eef,
    0x07ff45b9,0x47bddbf5,0x409af998,0x83fd05f8,0xfef885f8,0xb70bfb00,
    0x3e2b7dd9,0x667743fc,0x7d42f983,0x5e83faab,0x10776fc4,0x225fb59f,
    0x9f04ffff,0x413facd8,0x6fc39bfd,0x26fe6189,0x3ab7e1fd,0x3f622a1f,
    0x3b915d10,0x6fcc1e88,0x25f11fc9,0x7d4fe1f9,0x88aaff60,0x3eb90999,
    0x3a7f25b9,0x3fe7fe66,0xdd01f882,0xfb05fb01,0xf813ee01,0x5775c0ff,
    0xf95f14df,0x3e602f43,0x87f07d42,0x457c41fa,0x7c4be24f,0x40139f14,
    0x7df7d44f,0x3fff625f,0x83fffa60,0x321fcffd,0x3fe1fbff,0x76f543ff,
    0x20ccccc3,0x3e23fffb,0x02043f32,0x2e1fffff,0x3eb94eee,0x265f55b9,
    0x3f6df14f,0xed80c881,0x5c0ff440,0x40be602f,0x7d44fafb,0x2be29fd6,
    0x3017a6f8,0x3e0fa85f,0x97c43743,0x937f10fc,0xa80be21f,0x0201adfa,
    0x00804400,0x10022004,0x3fffff10,0x00000010,0x00000000,0xaabfd800,
    0xdf101d50,0x2f983555,0x43f95f88,0x227f74fa,0x17a9f52f,0x0fa85f30,
    0x882fa8fe,0x3e29f32f,0x0be22dff,0x03fffff8,0x00000000,0x00000000,
    0x00000000,0x00000000,0x1fffffc4,0x7ffffd40,0x7e417cc3,0x0000bf11,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0xa8750000,0x41e88002,0x4002c99a,0x080001a8,0x8003e030,
    0x180aaaaa,0x44441800,0xbdcbe608,0xd105b34e,0x107f621b,0x4bb62111,
    0x47776229,0x0ccccccc,0x0000007e,0x00000000,0x3f700000,0x744f427c,
    0x3ba17cc0,0x22761fef,0x4ff7e60e,0x3fa66ffa,0x43ffd10e,0x2beba3fb,
    0x447f910e,0x5c1eeeee,0x29d7b84f,0xffff34fb,0xbdcbe23f,0x770bf94e,
    0xfffa92e0,0x9b9f7d73,0x9990aaa8,0x1a619999,0x00000000,0x00000000,
    0x7cd3e200,0x444db5c1,0x43fa0888,0x9763ae3f,0x0fb8b74c,0xcae4bea6,
    0xfe997e66,0x00fee62e,0x983f3f10,0x98fee573,0x3f11f999,0x1c89edea,
    0x4ccc4000,0x03baa550,0x00000000,0x00000000,0x20000000,0xaf88d96c,
    0x3ffee0fa,0x404bd4ff,0x1b91f9bf,0x2077ecb9,0x1ae9b0ed,0x6f7f6c7f,
    0xddd11fc0,0x5b9e43dd,0x43f00200,0x00044221,0x00000000,0x00000000,
    0x00000000,0x7cc00000,0xe8ec83fa,0x26666624,0x47dc0bd0,0x03bfa25d,
    0x2bba27f1,0x2e5fdf50,0x1c7c544f,0xaaa82fe2,0x6c1b10aa,0x00000001,
    0x00000000,0x00000000,0x00000000,0x00000000,0x3e203ffa,0x0f4c0e99,
    0xf8ae817a,0x5c266620,0xfff70dff,0x80105449,0x27ffd40b,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00bf7000,0x17a0f4c0,
    0x27775c00,0x00000001,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    0x00000000,0x00000000,0x00000000,
};

static signed short stb__consolas_bold_13_latin1_x[224]={ 0,2,1,0,0,0,0,2,1,1,0,0,1,1,
2,0,0,0,0,0,0,0,0,0,0,0,2,1,0,0,1,1,0,0,0,0,0,1,1,0,0,0,1,0,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,2,1,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,
2,0,0,0,1,0,0,1,0,0,1,0,1,1,0,0,0,2,2,1,1,0,0,0,0,1,0,0,0,0,
0,0,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
 };
static signed short stb__consolas_bold_13_latin1_y[224]={ 9,0,0,0,-1,-1,0,0,-1,-1,0,2,6,4,
6,0,0,0,0,0,0,0,0,0,0,0,2,2,1,3,1,0,-1,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,-1,0,-1,0,10,0,2,0,2,0,2,-1,2,0,-1,
-1,0,0,2,2,2,2,2,2,2,0,2,2,2,2,2,2,-1,-2,-1,4,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9,2,-1,0,0,0,
-2,-1,-1,0,0,2,4,4,-1,0,-1,1,-1,-1,0,2,0,4,9,-1,0,2,-1,-1,-1,2,-2,-2,-2,-2,
-2,-3,0,0,-2,-2,-2,-2,-2,-2,-2,-2,0,-2,-2,-2,-2,-2,-2,2,-1,-2,-2,-2,-2,-2,0,-1,0,0,
0,-1,-1,-1,2,2,0,0,0,-1,0,0,0,-1,0,-1,0,0,0,-1,-1,2,1,0,0,0,-1,0,0,-1,
 };
static unsigned short stb__consolas_bold_13_latin1_w[224]={ 0,3,5,7,7,8,8,3,5,5,7,7,4,5,
3,7,7,7,7,7,7,7,7,7,7,7,3,4,6,7,6,6,8,8,7,7,7,6,6,7,7,7,5,7,
6,7,7,7,7,8,7,7,7,7,8,7,8,8,7,5,7,5,7,8,5,7,7,7,7,7,7,7,7,7,
6,7,7,7,7,7,7,7,6,7,7,7,8,8,7,8,7,6,3,6,7,7,7,7,7,7,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,0,3,6,7,7,7,
3,7,6,8,5,7,7,5,7,6,5,7,5,5,7,7,7,3,3,5,5,7,8,8,8,5,8,8,8,8,
8,8,8,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,7,7,7,7,
7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,7,8,7,8,
 };
static unsigned short stb__consolas_bold_13_latin1_h[224]={ 0,10,4,9,12,11,10,4,13,13,6,7,6,3,
4,11,10,9,9,10,9,10,10,9,10,9,8,10,9,5,9,10,13,9,9,10,9,9,9,10,9,9,10,9,
9,9,9,10,9,12,9,10,9,10,9,9,9,9,9,13,11,13,5,2,3,8,10,8,10,8,10,10,9,10,
13,9,9,7,7,8,10,10,7,8,10,8,7,7,7,10,7,13,14,13,3,9,9,9,9,9,9,9,9,9,
9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,0,10,12,9,9,9,
14,12,4,10,7,7,4,3,8,3,6,8,6,7,3,10,11,3,2,6,7,7,10,10,10,10,11,11,11,11,
11,12,9,11,11,11,11,11,11,11,11,11,9,11,12,12,12,12,12,7,12,12,12,12,12,11,9,11,10,10,
10,11,11,11,8,9,10,10,10,11,9,9,9,10,10,10,10,10,10,11,11,7,10,10,10,10,11,12,12,13,
 };
static unsigned short stb__consolas_bold_13_latin1_s[224]={ 250,244,164,227,122,58,28,160,60,66,111,
248,106,188,148,159,61,113,1,240,235,93,101,81,109,219,250,117,243,125,9,
122,42,210,97,137,162,147,58,145,73,170,153,50,178,193,185,168,105,81,89,
236,65,17,201,42,33,24,16,29,76,23,133,209,182,145,248,129,1,137,200,
69,154,53,16,131,123,223,193,185,85,176,67,161,208,153,42,239,231,25,209,
35,1,9,194,139,139,139,139,139,139,139,139,139,139,139,139,139,139,139,139,
139,139,139,139,139,139,139,139,139,139,139,139,139,139,139,139,139,250,224,90,
115,107,66,5,105,141,159,217,51,152,188,169,202,100,177,94,88,174,77,117,
170,218,119,82,74,19,10,1,250,142,167,67,84,133,113,74,34,151,184,176,
101,93,50,42,125,83,109,154,162,170,178,186,201,202,194,138,130,146,9,42,
242,232,224,192,218,1,26,121,50,200,216,208,210,91,58,99,45,129,248,37,
216,228,18,226,59,184,192,34,9,234,72,97,51, };
static unsigned short stb__consolas_bold_13_latin1_t[224]={ 12,28,59,39,1,15,28,59,1,1,59,
49,59,59,59,15,28,49,50,15,39,28,28,49,28,39,39,28,39,59,50,
28,1,39,49,28,39,39,49,28,49,39,28,49,39,39,39,28,49,1,49,
28,49,39,39,49,50,50,50,1,15,1,59,59,59,49,28,49,39,49,28,
28,39,28,1,39,39,49,49,49,28,28,59,49,28,49,59,49,49,39,49,
1,1,1,59,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,
39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,39,12,28,1,
39,39,39,1,1,59,28,49,59,59,59,49,59,59,49,59,59,59,28,15,
59,59,59,59,59,28,28,28,1,15,15,15,15,15,1,39,15,15,15,15,
15,15,15,15,15,39,15,1,1,1,1,1,49,1,1,1,1,1,15,39,
1,15,15,15,1,16,15,49,39,15,15,15,1,39,39,39,28,28,15,28,
28,28,15,1,59,28,28,39,39,1,1,1,1, };
static unsigned short stb__consolas_bold_13_latin1_a[224]={ 114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,114,
114,114,114,114,114,114,114,114, };

// Call this function with
//    font: NULL or array length
//    data: NULL or specified size
//    height: STB_FONT_consolas_bold_13_latin1_BITMAP_HEIGHT or STB_FONT_consolas_bold_13_latin1_BITMAP_HEIGHT_POW2
//    return value: spacing between lines
static void stb_font_consolas_bold_13_latin1(stb_fontchar font[STB_FONT_consolas_bold_13_latin1_NUM_CHARS],
                unsigned char data[STB_FONT_consolas_bold_13_latin1_BITMAP_HEIGHT][STB_FONT_consolas_bold_13_latin1_BITMAP_WIDTH],
                int height)
{
    int i,j;
    if (data != 0) {
        unsigned int *bits = stb__consolas_bold_13_latin1_pixels;
        unsigned int bitpack = *bits++, numbits = 32;
        for (i=0; i < STB_FONT_consolas_bold_13_latin1_BITMAP_WIDTH*height; ++i)
            data[0][i] = 0;  // zero entire bitmap
        for (j=1; j < STB_FONT_consolas_bold_13_latin1_BITMAP_HEIGHT-1; ++j) {
            for (i=1; i < STB_FONT_consolas_bold_13_latin1_BITMAP_WIDTH-1; ++i) {
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
        float recip_width = 1.0f / STB_FONT_consolas_bold_13_latin1_BITMAP_WIDTH;
        float recip_height = 1.0f / height;
        for (i=0; i < STB_FONT_consolas_bold_13_latin1_NUM_CHARS; ++i) {
            // pad characters so they bilerp from empty space around each character
            font[i].s0 = (stb__consolas_bold_13_latin1_s[i]) * recip_width;
            font[i].t0 = (stb__consolas_bold_13_latin1_t[i]) * recip_height;
            font[i].s1 = (stb__consolas_bold_13_latin1_s[i] + stb__consolas_bold_13_latin1_w[i]) * recip_width;
            font[i].t1 = (stb__consolas_bold_13_latin1_t[i] + stb__consolas_bold_13_latin1_h[i]) * recip_height;
            font[i].x0 = stb__consolas_bold_13_latin1_x[i];
            font[i].y0 = stb__consolas_bold_13_latin1_y[i];
            font[i].x1 = stb__consolas_bold_13_latin1_x[i] + stb__consolas_bold_13_latin1_w[i];
            font[i].y1 = stb__consolas_bold_13_latin1_y[i] + stb__consolas_bold_13_latin1_h[i];
            font[i].advance_int = (stb__consolas_bold_13_latin1_a[i]+8)>>4;
            font[i].s0f = (stb__consolas_bold_13_latin1_s[i] - 0.5f) * recip_width;
            font[i].t0f = (stb__consolas_bold_13_latin1_t[i] - 0.5f) * recip_height;
            font[i].s1f = (stb__consolas_bold_13_latin1_s[i] + stb__consolas_bold_13_latin1_w[i] + 0.5f) * recip_width;
            font[i].t1f = (stb__consolas_bold_13_latin1_t[i] + stb__consolas_bold_13_latin1_h[i] + 0.5f) * recip_height;
            font[i].x0f = stb__consolas_bold_13_latin1_x[i] - 0.5f;
            font[i].y0f = stb__consolas_bold_13_latin1_y[i] - 0.5f;
            font[i].x1f = stb__consolas_bold_13_latin1_x[i] + stb__consolas_bold_13_latin1_w[i] + 0.5f;
            font[i].y1f = stb__consolas_bold_13_latin1_y[i] + stb__consolas_bold_13_latin1_h[i] + 0.5f;
            font[i].advance = stb__consolas_bold_13_latin1_a[i]/16.0f;
        }
    }
}

#ifndef STB_SOMEFONT_CREATE
#define STB_SOMEFONT_CREATE              stb_font_consolas_bold_13_latin1
#define STB_SOMEFONT_BITMAP_WIDTH        STB_FONT_consolas_bold_13_latin1_BITMAP_WIDTH
#define STB_SOMEFONT_BITMAP_HEIGHT       STB_FONT_consolas_bold_13_latin1_BITMAP_HEIGHT
#define STB_SOMEFONT_BITMAP_HEIGHT_POW2  STB_FONT_consolas_bold_13_latin1_BITMAP_HEIGHT_POW2
#define STB_SOMEFONT_FIRST_CHAR          STB_FONT_consolas_bold_13_latin1_FIRST_CHAR
#define STB_SOMEFONT_NUM_CHARS           STB_FONT_consolas_bold_13_latin1_NUM_CHARS
#define STB_SOMEFONT_LINE_SPACING        STB_FONT_consolas_bold_13_latin1_LINE_SPACING
#endif

