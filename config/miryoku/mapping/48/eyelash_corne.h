#pragma once

#ifdef CONFIG_ZMK_STUDIO
  #define STUDIO_OR_F7 &studio_unlock
#else
  #define STUDIO_OR_F7 &kp F7
#endif

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE)

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       &kp UP     K05  K06  K07  K08  K09  &kp BSPC \
&td0     K10  K11  K12  K13  K14       &kp LEFT  &kp ENTER  &kp RIGHT  K15  K16  K17  K18  &kp SEMI  &sq_dqt \
&kp LCTRL  K20  K21  K22  K23  K24  &kp C_MUTE   &kp DOWN  K25  K26  K27  K28  K29  &kp ESC \
                    K32  K33  K34                       K35  K36  K37

#endif

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_BUTTON)

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_BUTTON( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       &kp UP     K05  K06  K07  K08  K09  &kp BSPC \
&td0     K10  K11  K12  K13  K14       &kp LEFT  &kp ENTER  &kp RIGHT  K15  K16  K17  K18  K19  &sq_dqt \
&kp LCTRL  K20  K21  K22  K23  K24  &kp C_MUTE   &kp DOWN  K25  K26  K27  K28  K29  &kp ESC \
                    K32  K33  K34                       K35  K36  K37

#endif

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_NAV)

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_NAV( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       &kp UP     K05  K06  K07  K08  K09  &kp BSPC \
&td0     K10  K11  K12  K13  K14       &kp LEFT  &kp ENTER  &kp RIGHT  K15  K16  K17  K18  K19  &sq_dqt \
&kp LCTRL  K20  K21  K22  K23  K24  &kp C_MUTE   &kp DOWN  K25  K26  K27  K28  K29  &kp ESC \
                    K32  K33  K34                       K35  K36  K37

#endif

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_NUM)

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_NUM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       &kp UP     K05  K06  K07  K08  K09  &kp BSPC \
&td0     K10  K11  K12  K13  K14       &kp LEFT  &kp ENTER  &kp RIGHT  K15  K16  K17  K18  K19  &sq_dqt \
&kp LCTRL  K20  K21  K22  K23  K24  &kp C_MUTE   &kp DOWN  K25  K26  K27  K28  K29  &kp ESC \
                    K32  K33  K34                       K35  K36  K37

#endif

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_MOUSE)

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_MOUSE( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       &mmv MOVE_UP     K05  K06  K07  K08  K09  &kp BSPC \
&td0     K10  K11  K12  K13  K14       &mmv MOVE_LEFT  &mkp MB1  &mmv MOVE_RIGHT  K15  K16  K17  K18  K19  &sq_dqt \
&kp LCTRL  K20  K21  K22  K23  K24  &kp C_MUTE   &msc SCRL_DOWN  K25  K26  K27  K28  K29  &kp ESC \
                    K32  K33  K34                       K35  K36  K37

#endif

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_MEDIA)

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_MEDIA( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       &kp UP     U_RGB_TOG  U_RGB_EFF  &rgb_ug RGB_SPI  U_RGB_BRI  &rgb_ug RGB_BRD  &kp BSPC \
&td0     K10  K11  K12  K13  K14       &kp LEFT  &kp ENTER  &kp RIGHT  K15  K16  K17  K18  K19  &sq_dqt \
&kp LCTRL  K20  K21  K22  K23  K24  &kp C_MUTE   &kp DOWN  K25  K26  K27  K28  K29  &kp ESC \
                    K32  K33  K34                       K35  K36  K37

#endif

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_SYM)

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_SYM( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       &kp UP     K05  K06  K07  K08  K09  &kp BSPC \
&td0     K10  K11  K12  K13  K14       &kp LEFT  &kp ENTER  &kp RIGHT  K15  K16  K17  K18  K19  &sq_dqt \
&kp LCTRL  K20  K21  K22  K23  K24  &kp C_MUTE   &kp DOWN  K25  K26  K27  K28  K29  &kp ESC \
                    K32  K33  K34                       K35  K36  K37

#endif

#if !defined (MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_FUN)

#define MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_FUN( \
     K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39 \
) \
&kp TAB  K00  K01  K02  K03  K04       &kp UP     K05  K06  K07  K08  K09  &kp BSPC \
&td0     K10  K11  K12  K13  K14       &kp LEFT  &kp ENTER  &kp RIGHT  K15  K16  K17  K18  K19  &sq_dqt \
&kp LCTRL  K20  K21  K22  K23  K24  &kp C_MUTE   &kp DOWN  K25  K26  K27  K28  K29  &kp ESC \
                    K32  K33  K34                       K35  K36  K37

#endif

#define MIRYOKU_MAPPING MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE

#define MIRYOKU_LAYERMAPPING_NUM MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_NUM
#define MIRYOKU_LAYERMAPPING_MOUSE MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_MOUSE
#define MIRYOKU_LAYERMAPPING_MEDIA MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_MEDIA
#define MIRYOKU_LAYERMAPPING_SYM MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_SYM
#define MIRYOKU_LAYERMAPPING_BUTTON MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_BUTTON
#define MIRYOKU_LAYERMAPPING_NAV MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_NAV
#define MIRYOKU_LAYERMAPPING_FUN MIRYOKU_LAYOUTMAPPING_EYELASH_CORNE_FUN
