enum layers {
    _BASE,
    _NAV,
    _MED,
    _GAME,
    _QWERTY,
    _SYM,
    _NUM,
    _FUN,
    _MACROS,
    _MSWHL,
    _BLND,
};

/*Remember to also change the color in keyboard_post_init_kb in boston.c to make the startup color match the layer 0 color */
const rgblight_segment_t PROGMEM layer_0[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_TEAL}
);

const rgblight_segment_t PROGMEM layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_YELLOW}
);

const rgblight_segment_t PROGMEM layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
     {0, 2, HSV_WHITE} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
     {0, 2, HSV_RED} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_GOLDENROD} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_GREEN} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_6[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_MAGENTA} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_7[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_BLUE} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_8[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_PURPLE} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_9[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_AZURE} /*Yellow*/
);

const rgblight_segment_t PROGMEM layer_10[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 2, HSV_ORANGE} /*Yellow*/
);

const rgblight_segment_t* const PROGMEM my_rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer_0,
    layer_1,
    layer_2,
    layer_3,
    layer_4,
    layer_5,
    layer_6,
    layer_7,
    layer_8,
    layer_9,
    layer_10
);

void keyboard_post_init_user(void) {
    // Enable the LED layers
    rgblight_layers = my_rgb_layers;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Both layers will light up if both kb layers are active
    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    rgblight_set_layer_state(1, layer_state_cmp(state, _NAV));
    rgblight_set_layer_state(2, layer_state_cmp(state, _MED));
    rgblight_set_layer_state(3, layer_state_cmp(state, _GAME));
    rgblight_set_layer_state(4, layer_state_cmp(state, _QWERTY));
    rgblight_set_layer_state(5, layer_state_cmp(state, _SYM));
    rgblight_set_layer_state(6, layer_state_cmp(state, _NUM));
    rgblight_set_layer_state(7, layer_state_cmp(state, _FUN));
    rgblight_set_layer_state(8, layer_state_cmp(state, _MACROS));
    rgblight_set_layer_state(9, layer_state_cmp(state, _MSWHL));
    rgblight_set_layer_state(10, layer_state_cmp(state, _BLND));
    return state;
}

/*bool led_update_user(led_t led_state) {*/
/*    rgblight_set_layer_state(0, led_state.caps_lock);*/
/*    return true;*/
/*}*/

layer_state_t default_layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, 0));
    return state;
}
