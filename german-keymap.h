// Source: https://github.com/schmjop/zmk-config/blob/master/config/german-keymap.h

#define DE_A        A                  // A
#define DE_B        B                  // B
#define DE_C        C                  // C
#define DE_D        D                  // D
#define DE_E        E                  // E
#define DE_F        F                  // F
#define DE_G        G                  // G
#define DE_H        H                  // H
#define DE_I        I                  // I
#define DE_J        J                  // J
#define DE_K        K                  // K
#define DE_L        L                  // L
#define DE_M        M                  // M
#define DE_N        N                  // N
#define DE_O        O                  // O
#define DE_P        P                  // P
#define DE_Q        Q                  // Q
#define DE_R        R                  // R
#define DE_S        S                  // S
#define DE_T        T                  // T
#define DE_U        U                  // U
#define DE_V        V                  // V
#define DE_W        W                  // W
#define DE_X        X                  // X
#define DE_Y        Z                  // Y
#define DE_Z        Y                  // Z

#define DE_DOT      PERIOD             // .
#define DE_COMMA    COMMA              // ,
#define DE_MINUS    SLASH              // -

#define DE_AE       SINGLE_QUOTE       // Ä
#define DE_OE       SEMICOLON          // Ö
#define DE_UE       LEFT_BRACKET       // Ü
#define DE_SS       MINUS              // ß

#define DE_CARET    GRAVE             // ^ (dead)
#define DE_EXCL     LS(NUMBER_1)      // !
#define DE_DQT      LS(NUMBER_2)      // "
#define DE_DLR      LS(NUMBER_4)      // $
#define DE_AMPS     LS(NUMBER_6)      // &
#define DE_PERC     LS(NUMBER_5)      // %

#define DE_PIPE     RA(DE_LT)       // |
#define DE_AT       RA(DE_Q)          // @
#define DE_TILDE    RA(DE_PLUS)       // ~
#define DE_EURO     RA(DE_E)          // €
#define DE_PLUS     RIGHT_BRACKET     // +
#define DE_STAR     LS(DE_PLUS)       // *
#define DE_DEG      LS(DE_CARET)      // °
#define DE_SECT     LS(NUMBER_3)      // §

#define DE_LPAR     LS(NUMBER_8)      // (
#define DE_RPAR     LS(NUMBER_9)      // )
#define DE_LBRC     RA(NUMBER_7)      // {
#define DE_RBRC     RA(NUMBER_0)      // }
#define DE_LBKT     RA(NUMBER_8)      // [
#define DE_RBKT     RA(NUMBER_9)      // ]
#define DE_LT       NON_US_BACKSLASH  // <
#define DE_GT       LS(DE_LT)         // >
#define DE_ACUT     EQUAL             // ´ (dead)
#define DE_HASH     NON_US_HASH       // #
#define DE_COLON    LS(DE_DOT)        // :
#define DE_SLASH    LS(NUMBER_7)      // /
#define DE_EQUAL    LS(NUMBER_0)      // =
#define DE_QMARK    LS(DE_SS)         // ?
#define DE_GRAVE    LS(DE_ACUT)       // ` (dead)
#define DE_SQT      LS(DE_HASH)       // '
#define DE_SEMI     LS(DE_COMMA)      // ;
#define DE_UNDER    LS(DE_MINUS)      // _
#define DE_BSLS     RA(DE_SS)         // (backslash)