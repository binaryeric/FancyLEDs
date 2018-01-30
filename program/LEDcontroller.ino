

enum Effect {
  SOLID_COLOR,
  POLICE,
  RAINBOW,
  MUSIC,
  RAINY_DAY,
  SUNNY_DAY,
  SNOWY_DAY,
  BACKGROUND_LIGHT,
}

Effect current_mode = SOLID_COLOR;

void setupLEDs() {
  FastLED.addLeds<led_chipset,signal_pin,color_order>(leds,num_leds).setCorrection( TypicalLEDStrip );
}

// effect loop handler:

void effectRefresh() {
  if(current_mode == Effect.SOLID_COLOR) {
    for (int i = 0; i < num_leds; i++) {
      leds[i].red   = solid_r;
      leds[i].green = solid_g;
      leds[i].blue  = solid_b;
    }
    FastLED.show();
  }
}

// Solid mode defines:
int solid_r = 255;
int solid_g = 255;
int solid_b = 255;
int bright = 255;

void setRGB(int r,int g,int b) {
  solid_r = r;
  solid_g = g;
  solid_b = b;
}

void setR(int r) {
  solid_r = r;
}

void setG(int g) {
  solid_g = g;
}

void setB(int b) {
  solid_b = b;
}

void white() {
  solid_r = 255;
  solid_g = 255;
  solid_b = 255;
}


