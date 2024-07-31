typedef struct vector3 {
    float x;
    float y;
    float z;
}
vector3;


typedef struct camera {
    /*   0 */ unsigned int flg;
    /*   4 */ int camver;
    /*   8 */ unsigned char mode0;
    /*   9 */ unsigned char mode1;
    /*  10 */ unsigned char mode2;
    /*  11 */ unsigned char mode3;
    /*  12 */ float px;
    /*  16 */ float py;
    /*  20 */ float pz;
    /*  24 */ float vx;
    /*  28 */ float vy;
    /*  32 */ float vz;
    /*  36 */ float wpx;
    /*  40 */ float wpy;
    /*  44 */ float wpz;
    /*  48 */ float plx;
    /*  52 */ float ply;
    /*  56 */ float plz;
    /*  60 */ float pxp;
    /*  64 */ float pyp;
    /*  68 */ float pzp;
    /*  72 */ float ofx;
    /*  76 */ float ofy;
    /*  80 */ float ofz;
    /*  84 */ int ax;
    /*  88 */ int ay;
    /*  92 */ int az;
    /*  96 */ int axp;
    /* 100 */ int ayp;
    /* 104 */ int azp;
    /* 108 */ float ln;
    /* 112 */ float pln;
    /* 116 */ float xr;
    /* 120 */ float xn;
    /* 124 */ float yr;
    /* 128 */ float yn;
    /* 132 */ int pers;
    /* 136 */ int ppers;
    /* 140 */ int ncut;
    /* 144 */ int ocut;
    /* 148 */ unsigned int ocflg;
    /* 152 */ unsigned int attr;
    /* 156 */ float* mtx;
    /* 160 */ float* mtxb;
    /* 164 */ int evc_no;
    /* 168 */ int hct;
    /* 172 */ int ct0;
    /* 176 */ int ct1;
    /* 180 */ int keyf_no;
    /* 184 */ float frm;
    /* 188 */ float spd;
    /* 192 */ float pxn;
    /* 196 */ float pyn;
    /* 200 */ float pzn;
    /* 204 */ int axn;
    /* 208 */ int ayn;
    /* 212 */ int azn;
    /* 216 */ int pe_ax;
    /* 220 */ int pe_pers;
    /* 224 */ unsigned int fog_col;
    /* 228 */ float fog_nr;
    /* 232 */ float fog_fr;
    /* 236 */ float ips[20][3];
    /* 476 */ float ian[20][3];
    /* 716 */ float ipf[20][3];
    /* 956 */ float icr[20][3];
}
camera;
