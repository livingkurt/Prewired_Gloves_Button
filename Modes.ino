// int flash_red_and_blue_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10; // controls the interval between strobe flashes
//   uint8_t gap = 30;    // controls the interval between strobe flashes
//   CRGB color = CHSV(modes[0][0][0], modes[0][0][1], modes[0][0][2]);

//   if ((millis() / strobe) % 2)
//   {
//     fill_solid(leds, NUM_LEDS, CRGB::Black);
//   }
//   else if ((millis() / gap) % 2)
//   {
//     if (flash_red_and_blue_num == 0)
//     {
//       color = CHSV(modes[0][0][0], modes[0][0][1], modes[0][0][2]);
//       flash_red_and_blue_num = 1;
//     }
//     else if (flash_red_and_blue_num == 1)
//     {
//       color = CHSV(modes[0][1][0], modes[0][1][1], modes[0][1][2]);
//       flash_red_and_blue_num = 0;
//     }
//     else if (flash_red_and_blue_num == 2)
//     {
//       color = CHSV(modes[0][1][0], modes[0][1][1], modes[0][1][2]);
//       flash_red_and_blue_num = 0;
//     }
//     else if (flash_red_and_blue_num == 3)
//     {
//       color = CHSV(modes[0][1][0], modes[0][1][1], modes[0][1][2]);
//       flash_red_and_blue_num = 0;
//     }
//     else if (flash_red_and_blue_num == 4)
//     {
//       color = CHSV(modes[0][1][0], modes[0][1][1], modes[0][1][2]);
//       flash_red_and_blue_num = 0;
//     }
//     else if (flash_red_and_blue_num == 5)
//     {
//       color = CHSV(modes[0][1][0], modes[0][1][1], modes[0][1][2]);
//       flash_red_and_blue_num = 0;
//     }
//     else if (flash_red_and_blue_num == 6)
//     {
//       color = CHSV(modes[0][1][0], modes[0][1][1], modes[0][1][2]);
//       flash_red_and_blue_num = 0;
//     }
//     fill_solid(leds, NUM_LEDS, color);
//   }
// }

void flash_rainbow()
{
  uint8_t strobe = 10; // controls the interval between strobe flashes
  uint8_t gap = 30;    // controls the interval between strobe flashes
  int rate = 10;
  int start_hue;
  int delta_hue = 5;
  start_hue = -1 * millis() / rate;

  if ((millis() / strobe) % 2)
  {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
  }
  else if ((millis() / gap) % 2)
  {
    // fill_solid(leds, NUM_LEDS, CHSV(255, 255, 255));
    for (int i = 0; i < NUM_LEDS; i++)
    {
      leds[i] = CHSV(start_hue, 255, 255);
      start_hue += delta_hue;
    };
  }
}

int flash_all_rainbow_ramp_num = 0;

void flash_all_rainbow_ramp()
{
  int rate = 10;
  int strobe = 10;
  int gap = 30;
  // int start_hue;
  // int delta_hue = 5;

  // start_hue = -1 * millis() / rate;
  fill_solid(leds, NUM_LEDS, CHSV(flash_all_rainbow_ramp_num, 255, 255));
  FastLED.delay(strobe);
  FastLED.show();
  fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0));
  FastLED.delay(beatsin16(10, 5, 200));
  FastLED.show();
  // start_hue += delta_hue;
  flash_all_rainbow_ramp_num += 20;
}

// int flash_red_and_blue_num = 0;
// void flash_red_and_blue()
// {
//   uint8_t strobe = 10;    // controls the interval between strobe flashes
//   uint8_t gap = 30;       // controls the interval between strobe flashes
//   CRGB color = CRGB::Red; // controls the interval between strobe flashes

//   if ((millis() / strobe) % 2)
//   {
//     fill_solid(leds, NUM_LEDS, CRGB::Black);
//   }
//   else if ((millis() / gap) % 2)
//   {
//     if (flash_red_and_blue_num == 0)
//     {
//       color = CRGB::Blue;
//       flash_red_and_blue_num = 1;
//     }
//     else if (flash_red_and_blue_num == 1)
//     {
//       color = CRGB::Red;
//       flash_red_and_blue_num = 0;
//     }
//     fill_solid(leds, NUM_LEDS, color);
//   }
// }

// void sparkle_white()
// {
//   int strobe = 4;
//   int gap = 5;
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   leds[random16(NUM_LEDS)] = CHSV(255, 0, 255);
//   FastLED.show();
//   FastLED.delay(strobe);
//   fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0)); // Set all to Off.
//   FastLED.show();
//   FastLED.delay(gap);
// }

// =================== Sparkle Rainbow Saturation ===================

// void sparkle_rainbow_saturation()
// {
//   int rate = 10;
//   int start_hue;
//   int delta_hue = 5;
//   start_hue = -1 * millis() / rate;
//   int strobe = 20;
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   leds[random16(NUM_LEDS)] = CHSV(start_hue, random(127, 255), 255);
//   FastLED.show();
//   FastLED.delay(strobe);
//   fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0)); // Set all to Off.
//   FastLED.show();
//   start_hue += delta_hue;
// }
// void cycle_rainbow()
// {
//   int start_index;
//   start_index = -1 * millis() / 10;
//   for (int i = 0; i < NUM_LEDS; i++)
//   {
//     leds[i] = CHSV(start_index, 255, 255);
//     start_index += 5;
//   };
// }