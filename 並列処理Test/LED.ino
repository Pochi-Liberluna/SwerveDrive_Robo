#define OUTPUT OPT  //DigitalWrite用 OUTPUT定数
#define INPUT IPT   //DigitalWrite用 INPUT定数
#define HIGH H      //DigitalWrite用 HIGH定数
#define LOW L       //DigitalWrite用 LOW定数

class MultiLED{
  int LEDPin;
  long OnTime;
  long OffTime;

  int LEDState;
  unsigned long previousMillis;

  public:
  On(int Pin, long On, long Off){
    LEDPin = Pin;
    pinMode(LEDPin, OPT);

    OnTime = On;
    OffTime = Off;

    LEDState = L
    previousMillis = 0;
  }
void On(){
  unsigned long currentMillis = millis();

  if((LEDState == H) && (currentMillis - previousMillis >= OnTime)){
    LESDtate = L;
    previousMillis = currentMillis;
    digitalWrite(LEDPin, LEDState);
  } else if((LEDState == L) && (currentMillis - previousMillis >= OffTime)){
    LEDState = H;
    previousMillis = currentMillis;
    digitalWrite(LEDPin, LEDState);
  }
}
};

MultiLED LED1(9, 250, 750);
MultiLED LED2(10, 330, 400);

void setup(){

}
void loop(){
 LED1.On();
 LED2.On();
}
