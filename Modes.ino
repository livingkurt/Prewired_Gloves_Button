
void mode_1()
{
  uint8_t strobe = 10; // controls the interval between strobe flashes
  uint8_t gap = 30;    // controls the interval between strobe flashes

  if ((millis() / strobe) % 2)
  {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
  }
  else if ((millis() / gap) % 2)
  {
    fill_solid(leds, NUM_LEDS, CHSV(0, 255, 255));
  }
}

void mode_2()
{
  uint8_t strobe = 10; // controls the interval between strobe flashes
  uint8_t gap = 30;    // controls the interval between strobe flashes

  if ((millis() / strobe) % 2)
  {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
  }
  else if ((millis() / gap) % 2)
  {
    fill_solid(leds, NUM_LEDS, CHSV(32, 255, 255));
  }
}

void mode_3()
{
  uint8_t strobe = 10; // controls the interval between strobe flashes
  uint8_t gap = 30;    // controls the interval between strobe flashes

  if ((millis() / strobe) % 2)
  {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
  }
  else if ((millis() / gap) % 2)
  {
    fill_solid(leds, NUM_LEDS, CHSV(64, 255, 255));
  }
}

void mode_4()
{
  uint8_t strobe = 10; // controls the interval between strobe flashes
  uint8_t gap = 30;    // controls the interval between strobe flashes

  if ((millis() / strobe) % 2)
  {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
  }
  else if ((millis() / gap) % 2)
  {
    fill_solid(leds, NUM_LEDS, CHSV(96, 255, 255));
  }
}

void mode_5()
{
  uint8_t strobe = 10; // controls the interval between strobe flashes
  uint8_t gap = 30;    // controls the interval between strobe flashes

  if ((millis() / strobe) % 2)
  {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
  }
  else if ((millis() / gap) % 2)
  {
    fill_solid(leds, NUM_LEDS, CHSV(128, 255, 255));
  }
}

void mode_6()
{
  uint8_t strobe = 10; // controls the interval between strobe flashes
  uint8_t gap = 30;    // controls the interval between strobe flashes

  if ((millis() / strobe) % 2)
  {
    fill_solid(leds, NUM_LEDS, CRGB::Black);
  }
  else if ((millis() / gap) % 2)
  {
    fill_solid(leds, NUM_LEDS, CHSV(160, 255, 255));
  }
}

// Version 3: Multi Color Strobe Pattern Method without Delay - Not Working
// int mode_1_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10;
//   uint8_t gap = 30;
//   int colors[6] = {0, 32, 64, 96, 128, 160}
//   for (int i = 0; i < 6; i++)
//   {
//     if (mode_1_num == 0)
//     {
//       fill_solid(leds, NUM_LEDS, CHSV(colors[i], 255, 255));
//       hold(strobe);
//       FastLED.show();
//       mode_1_num = 1;
//     }
//     else if (mode_1_num == 1)
//     {
//       fill_solid(leds, NUM_LEDS, CRGB::Black);
//       hold(gap);
//       FastLED.show();
//       mode_1_num = 0;
//     }
//   }
// }
// Version 4: Multi Color Strobe Pattern Method without Delay - Not Working
int mode_1_num = 0;
void mode_1()
{
  uint8_t strobe = 10;
  uint8_t gap = 30;
  int colors[6] = { 0,
                    32,
                    64,
                    96,
                    128,
                    160 } for (int i = 0; i < 6; i++)
  {
    if (mode_1_num == 0)
    {
      fill_solid(leds, NUM_LEDS, CHSV(colors[i], 255, 255));
      hold(strobe);
      FastLED.show();
      mode_1_num = 1;
    }
    else if (mode_1_num == 1)
    {
      fill_solid(leds, NUM_LEDS, CRGB::Black);
      hold(gap);
      FastLED.show();
      mode_1_num = 0;
    }
  }
}

// int mode_1_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10; // controls the interval between strobe flashes
//   uint8_t gap = 30;    // controls the interval between strobe flashes
//   // uint8_t u = beat8(10, 0); //BPM will allow you to adjust the speed the dot is moving.
//   // uint16_t pos = map(u, 0, 6, 0, 6 - 1);
//   // static int last_color = 0;
//   for (int i = 0; i < 6; i++)
//   {
//     if (mode_1_num == 0)
//     {
//       fill_solid(leds, NUM_LEDS, CHSV(mode_colors[0][i][0], mode_colors[0][i][1], mode_colors[0][i][2]));
//       hold(strobe);
//       FastLED.show();
//       mode_1_num = 1;
//     }
//     else if (mode_1_num == 1)
//     {
//       fill_solid(leds, NUM_LEDS, CRGB::Black);
//       hold(gap);
//       FastLED.show();
//       mode_1_num = 0;
//     }
//   }
// }
// int mode_1_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10; // controls the interval between strobe flashes
//   uint8_t gap = 30;    // controls the interval between strobe flashes
//   // uint8_t u = beat8(10, 0); //BPM will allow you to adjust the speed the dot is moving.
//   // uint16_t pos = map(u, 0, 6, 0, 6 - 1);
//   // static int last_color = 0;
//   for (int i = 0; i < 6; i++)
//   {
//     if (mode_1_num == 0)
//     {
//       fill_solid(leds, NUM_LEDS, CHSV(mode_colors[0][i][0], mode_colors[0][i][1], mode_colors[0][i][2]));
//       hold(strobe);
//       FastLED.show();
//       mode_1_num = 1;
//     }
//     else if (mode_1_num == 1)
//     {
//       fill_solid(leds, NUM_LEDS, CRGB::Black);
//       hold(gap);
//       FastLED.show();
//       mode_1_num = 0;
//     }
//   }
// }

// int mode_1_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10; // controls the interval between strobe flashes
//   uint8_t gap = 30;    // controls the interval between strobe flashes
//   CRGB color = CHSV(mode_colors[0][0][0], mode_colors[0][0][1], mode_colors[0][0][2]);

//   if ((millis() / gap) % 2)
//   {
//     fill_solid(leds, NUM_LEDS, CRGB::Black);
//   }
//   else if ((millis() / strobe) % 2)
//   {
//     if (mode_1_num == 0)
//     {
//       color = CHSV(mode_colors[0][0][0], mode_colors[0][0][1], mode_colors[0][0][2]);
//       mode_1_num = 1;
//       fill_solid(leds, NUM_LEDS, color);
//     }
//   }
// }

// // int mode_1_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10;      // controls the interval between strobe flashes
//   uint8_t gap = 30;         // controls the interval between strobe flashes
//   uint8_t u = beat8(10, 0); //BPM will allow you to adjust the speed the dot is moving.
//   uint16_t pos = map(u, 0, 6, 0, 6 - 1);
//   static int last_color = 0;
//   for (size_t i = 0; i < 6; i++)
//   {
//     if ((millis() / strobe) % 2)
//     {
//       fill_solid(leds, NUM_LEDS, CRGB::Black);
//     }
//     else if ((millis() / gap) % 2)
//     {

//       // while (last_color != pos)
//       // {
//       //   if (last_color < pos)
//       //   {
//       //     last_color++;
//       //   }
//       //   else
//       //   {
//       //     last_color = 0;
//       //   }
//       fill_solid(leds, NUM_LEDS, CHSV(mode_colors[0][i][0], mode_colors[0][i][1], mode_colors[0][i][2]));
//       // }
//     }
//   }
// }
// // int mode_1_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10;      // controls the interval between strobe flashes
//   uint8_t gap = 30;         // controls the interval between strobe flashes
//   uint8_t u = beat8(10, 0); //BPM will allow you to adjust the speed the dot is moving.
//   uint16_t pos = map(u, 0, 6, 0, 6 - 1);
//   static int i = 0;

//   if ((millis() / strobe) % 2)
//   {
//     fill_solid(leds, NUM_LEDS, CRGB::Black);
//   }
//   else if ((millis() / gap) % 2)
//   {

//     while (last_color != pos)
//     {
//       if (last_color < pos)
//       {
//         last_color++;
//       }
//       else
//       {
//         last_color = 0;
//       }
//       fill_solid(leds, NUM_LEDS, CHSV(mode_colors[0][last_color][0], mode_colors[0][last_color][1], mode_colors[0][last_color][2]));
//     }
//   }
// }
// int mode_1_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10; // controls the interval between strobe flashes
//   uint8_t gap = 30;    // controls the interval between strobe flashes
//   CRGB color = CHSV(mode_colors[0][0][0], mode_colors[0][0][1], mode_colors[0][0][2]);

//   if ((millis() / gap) % 2)
//   {
//     fill_solid(leds, NUM_LEDS, CRGB::Black);
//   }
//   else if ((millis() / strobe) % 2)
//   {
//     if (mode_1_num == 0)
//     {
//       color = CHSV(mode_colors[0][0][0], mode_colors[0][0][1], mode_colors[0][0][2]);
//       mode_1_num = 1;
//       fill_solid(leds, NUM_LEDS, color);
//     }
//     else if (mode_1_num == 1)
//     {
//       color = CHSV(mode_colors[0][1][0], mode_colors[0][1][1], mode_colors[0][1][2]);
//       mode_1_num = 2;
//       fill_solid(leds, NUM_LEDS, color);
//     }
//     else if (mode_1_num == 2)
//     {
//       color = CHSV(mode_colors[0][2][0], mode_colors[0][2][1], mode_colors[0][2][2]);
//       mode_1_num = 3;
//       fill_solid(leds, NUM_LEDS, color);
//     }
//     else if (mode_1_num == 3)
//     {
//       color = CHSV(mode_colors[0][3][0], mode_colors[0][3][1], mode_colors[0][3][2]);
//       mode_1_num = 4;
//       fill_solid(leds, NUM_LEDS, color);
//     }
//     else if (mode_1_num == 4)
//     {
//       color = CHSV(mode_colors[0][4][0], mode_colors[0][4][1], mode_colors[0][4][2]);
//       mode_1_num = 5;
//       fill_solid(leds, NUM_LEDS, color);
//     }
//     else if (mode_1_num == 5)
//     {
//       color = CHSV(mode_colors[0][5][0], mode_colors[0][5][1], mode_colors[0][5][2]);
//       mode_1_num = 6;
//       fill_solid(leds, NUM_LEDS, color);
//     }
//     else if (mode_1_num == 6)
//     {
//       color = CHSV(mode_colors[0][6][0], mode_colors[0][6][1], mode_colors[0][6][2]);
//       mode_1_num = 0;
//       fill_solid(leds, NUM_LEDS, color);
//     }
//   }
//   else
//   {
//   }
// }

// int mode_1_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10; // controls the interval between strobe flashes
//   uint8_t gap = 30;    // controls the interval between strobe flashes
//   CRGB color = CHSV(0, 255, 255);

//   if ((millis() / gap) % 2)
//   {
//     fill_solid(leds, NUM_LEDS, CRGB::Black);
//   }
//   else if ((millis() / strobe) % 2)
//   {
//     if (mode_1_num == 0)
//     {
//       color = CHSV(0, 255, 255);
//       mode_1_num = 1;
//     }
//     else if (mode_1_num == 1)
//     {
//       color = CHSV(32, 255, 255);
//       mode_1_num = 2;
//     }
//     else if (mode_1_num == 2)
//     {
//       color = CHSV(64, 255, 255);
//       mode_1_num = 3;
//     }
//     else if (mode_1_num == 3)
//     {
//       color = CHSV(96, 255, 255);
//       mode_1_num = 4;
//     }
//     else if (mode_1_num == 4)
//     {
//       color = CHSV(128, 255, 255);
//       mode_1_num = 5;
//     }
//     else if (mode_1_num == 5)
//     {
//       color = CHSV(160, 255, 255);
//       mode_1_num = 6;
//     }
//     else if (mode_1_num == 6)
//     {
//       color = CHSV(192, 255, 255);
//       mode_1_num = 0;
//     }
//     fill_solid(leds, NUM_LEDS, color);
//   }
//   else
//   {
//   }
// }

// int mode_1_num = 0;
// void mode_1()
// {
//   uint8_t strobe = 10; // controls the interval between strobe flashes
//   uint8_t gap = 30;    // controls the interval between strobe flashes
//   CRGB color = CHSV(mode_colors[0][0][0], mode_colors[0][0][1], mode_colors[0][0][2]);

//   if ((millis() / strobe) % 2)
//   {
//     fill_solid(leds, NUM_LEDS, CRGB::Black);
//   }
//   else if ((millis() / gap) % 2)
//   {
//     if (mode_1_num == 0)
//     {
//       color = CHSV(mode_colors[0][0][0], mode_colors[0][0][1], mode_colors[0][0][2]);
//       mode_1_num = 1;
//     }
//     else if (mode_1_num == 1)
//     {
//       color = CHSV(mode_colors[0][1][0], mode_colors[0][1][1], mode_colors[0][1][2]);
//       mode_1_num = 2;
//     }
//     else if (mode_1_num == 2)
//     {
//       color = CHSV(mode_colors[0][2][0], mode_colors[0][2][1], mode_colors[0][2][2]);
//       mode_1_num = 3;
//     }
//     else if (mode_1_num == 3)
//     {
//       color = CHSV(mode_colors[0][3][0], mode_colors[0][3][1], mode_colors[0][3][2]);
//       mode_1_num = 4;
//     }
//     else if (mode_1_num == 4)
//     {
//       color = CHSV(mode_colors[0][4][0], mode_colors[0][4][1], mode_colors[0][4][2]);
//       mode_1_num = 5;
//     }
//     else if (mode_1_num == 5)
//     {
//       color = CHSV(mode_colors[0][5][0], mode_colors[0][5][1], mode_colors[0][5][2]);
//       mode_1_num = 6;
//     }
//     else if (mode_1_num == 6)
//     {
//       color = CHSV(mode_colors[0][6][0], mode_colors[0][6][1], mode_colors[0][6][2]);
//       mode_1_num = 0;
//     }
//     fill_solid(leds, NUM_LEDS, color);
//   }
// }

// int mode_2_num = 0;
// void mode_2()
// {
//   uint8_t strobe = 10; // controls the interval between strobe flashes
//   uint8_t gap = 30;    // controls the interval between strobe flashes
//   CRGB color = CHSV(mode_colors[0][0][0], mode_colors[0][0][1], mode_colors[0][0][2]);

//   if ((millis() / strobe) % 2)
//   {
//     fill_solid(leds, NUM_LEDS, CRGB::Black);
//   }
//   else if ((millis() / gap) % 2)
//   {
//     if (mode_2_num == 0)
//     {
//       color = CHSV(mode_colors[0][0][0], mode_colors[0][0][1], mode_colors[0][0][2]);
//       mode_2_num = 1;
//     }
//     else if (mode_2_num == 1)
//     {
//       color = CHSV(mode_colors[0][1][0], mode_colors[0][1][1], mode_colors[0][1][2]);
//       mode_2_num = 2;
//     }
//     else if (mode_2_num == 2)
//     {
//       color = CHSV(mode_colors[0][2][0], mode_colors[0][2][1], mode_colors[0][2][2]);
//       mode_2_num = 3;
//     }
//     else if (mode_2_num == 3)
//     {
//       color = CHSV(mode_colors[0][3][0], mode_colors[0][3][1], mode_colors[0][3][2]);
//       mode_2_num = 4;
//     }
//     else if (mode_2_num == 4)
//     {
//       color = CHSV(mode_colors[0][4][0], mode_colors[0][4][1], mode_colors[0][4][2]);
//       mode_2_num = 5;
//     }
//     else if (mode_2_num == 5)
//     {
//       color = CHSV(mode_colors[0][5][0], mode_colors[0][5][1], mode_colors[0][5][2]);
//       mode_2_num = 6;
//     }
//     else if (mode_2_num == 6)
//     {
//       color = CHSV(mode_colors[0][6][0], mode_colors[0][6][1], mode_colors[0][6][2]);
//       mode_2_num = 0;
//     }
//     fill_solid(leds, NUM_LEDS, color);
//   }
// }

// void flash_rainbow()
// {
//   uint8_t strobe = 10; // controls the interval between strobe flashes
//   uint8_t gap = 30;    // controls the interval between strobe flashes
//   int rate = 10;
//   int start_hue;
//   int delta_hue = 5;
//   start_hue = -1 * millis() / rate;

//   if ((millis() / strobe) % 2)
//   {
//     fill_solid(leds, NUM_LEDS, CRGB::Black);
//   }
//   else if ((millis() / gap) % 2)
//   {
//     // fill_solid(leds, NUM_LEDS, CHSV(255, 255, 255));
//     for (int i = 0; i < NUM_LEDS; i++)
//     {
//       leds[i] = CHSV(start_hue, 255, 255);
//       start_hue += delta_hue;
//     };
//   }
// }

// int flash_all_rainbow_ramp_num = 0;

// void flash_all_rainbow_ramp()
// {
//   int rate = 10;
//   int strobe = 10;
//   int gap = 30;
//   // int start_hue;
//   // int delta_hue = 5;

//   // start_hue = -1 * millis() / rate;
//   fill_solid(leds, NUM_LEDS, CHSV(flash_all_rainbow_ramp_num, 255, 255));
//   FastLED.delay(strobe);
//   FastLED.show();
//   fill_solid(leds, NUM_LEDS, CHSV(0, 0, 0));
//   FastLED.delay(beatsin16(10, 5, 200));
//   FastLED.show();
//   // start_hue += delta_hue;
//   flash_all_rainbow_ramp_num += 20;
// }

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