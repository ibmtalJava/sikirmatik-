class Sayac{
    int butonPin;
    int state=0;
    int lastState=0;
    int sayac=0;
  public:
    Sayac(int bPin){
      butonPin=bPin;
    }
    void setup(){
      pinMode(butonPin,INPUT);
    }
    void attach(){
      state=digitalRead(butonPin);
      if(state!=lastState) sayac++;
      lastState=state;
      Serial.println(sayac);
    }

  private:
  
  
};
