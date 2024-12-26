#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();
int x0 = 0;
float alpha = .9;
char buf[32];
char buf2[32];

void setup() {
    Serial.begin(115200);
    tft.init();
    tft.setRotation(1);
    tft.fillScreen(TFT_BLACK);
    tft.setTextColor(TFT_WHITE);
    tft.drawString("Lux :", 30, 30, 4);
    tft.drawString("EMA :", 30, 60, 4);
}

void loop() {
    int x1 = analogRead(1);
    x0 = x1 * alpha + (1 - alpha) * x0;

    tft.fillRect(90, 30, 120, 20, TFT_BLACK);
    tft.fillRect(90, 60, 120, 20, TFT_BLACK);
    sprintf(buf, "%d", x0);
    sprintf(buf2, "%d", x1);
    tft.drawString(buf, 90, 30, 4);
    tft.drawString(buf2, 90, 60, 4);
    Serial.printf("%d\t%d\n", x1, x0);
    delay(1000);
}