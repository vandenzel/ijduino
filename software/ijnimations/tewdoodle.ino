
void tewdoodles() {
  byte tewdoodle1[8]=
  {
    B11111111,
    B10000001,
    B10000001,
    B10000001,
    B10000001,
    B10000001,
    B10000001,
    B11111111
  };

  byte tewdoodle2[8]={
    B10000001,
    B01111110,
    B01000010,
    B01000010,
    B01000010,
    B01000010,
    B01111110,
    B10000001  };

  byte tewdoodle3[8]={
    B10000001,
    B01000010,
    B00111100,
    B00100100,
    B00100100,
    B00111100,
    B01000010,
    B10000001  };

  byte tewdoodle4[8]={
    B10000001,
    B01000010,
    B00100100,
    B00011000,
    B00011000,
    B00100100,
    B01000010,
    B10000001  };

byte tewdoodle5[8]={
    B00000000,
    B01000010,
    B00100100,
    B00011000,
    B00011000,
    B00100100,
    B01000010,
    B00000000  };

byte tewdoodle6[8]={
    B00000000,
    B00000000,
    B00100100,
    B00011000,
    B00011000,
    B00100100,
    B00000000,
    B00000000  };

byte tewdoodle7[8]={
    B00000000,
    B00000000,
    B00000000,
    B00011000,
    B00011000,
    B00000000,
    B00000000,
    B00000000  };

byte tewdoodle8[8]={
    B00000000,
    B00000000,
    B00000000,
    B00010000,
    B00001000,
    B00000000,
    B00000000,
    B00000000  };

byte tewdoodle9[8]={
    B00000000,
    B00000000,
    B00000000,
    B00001000,
    B00010000,
    B00000000,
    B00000000,
    B00000000  };

  bool skip;
  skip = render(tewdoodle1, 100);
  if (skip) {
    return;
  }
  skip = render(tewdoodle2, 100);
  if (skip) {
    return;
  }
  skip = render(tewdoodle3, 100);
  if (skip) {
    return;
  }
  skip = render(tewdoodle4, 100);
  if (skip) {
    return;
  }
  skip = render(tewdoodle5, 100);
  if (skip) {
    return;
  }
	skip = render(tewdoodle6, 100);
  if (skip) {
    return;
  }
  skip = render(tewdoodle7, 100);
  if (skip) {
    return;
  }
  skip = render(tewdoodle8, 100);
  if (skip) {
    return;
  }

  render(tewdoodle9, 100);
}
