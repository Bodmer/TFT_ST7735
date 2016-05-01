/*
  Ellipse drawing example

  This sketch does not use any fonts.
*/

#include <TFT_ST7735.h> // Hardware-specific library
#include <SPI.h>

TFT_ST7735 tft = TFT_ST7735();       // Invoke custom library

void setup(void) {
  tft.init();

  tft.setRotation(1);

}

void loop() {

  tft.fillScreen(TFT_BLACK);

  // Draw some random circles
  for (int i = 0; i < 20; i++)
  {
    int rx = random(40);
    int ry = random(40);
    int x = rx + random(160 - rx - rx);
    int y = ry + random(128 - ry - ry);
    tft.fillEllipse(x, y, rx, ry, random(0xFFFF));
  }

  delay(2000);
  tft.fillScreen(TFT_BLACK);

  for (int i = 0; i < 20; i++)
  {
    int rx = random(40);
    int ry = random(40);
    int x = rx + random(160 - rx - rx);
    int y = ry + random(128 - ry - ry);
    tft.drawEllipse(x, y, rx, ry, random(0xFFFF));
  }

  delay(2000);
}



