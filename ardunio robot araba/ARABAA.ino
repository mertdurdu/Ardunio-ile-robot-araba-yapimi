#define solmotor1 5
#define solmotor2 3
#define sagmotor1 9
#define sagmotor2 6                                                    
void setup() {
  pinMode(solmotor1,OUTPUT);
  pinMode(solmotor2,OUTPUT);
  pinMode(sagmotor1,OUTPUT);
  pinMode(sagmotor2,OUTPUT);

}

void loop() {
  motorkontrol(0,0); delay(1000);
 motorkontrol(100,100); delay(1000);
 motorkontrol(0,0); delay(1000);
 motorkontrol(100,0); delay(500);
 motorkontrol(0,0); delay(1000);
 motorkontrol(100,100); delay(800);
 motorkontrol(0,0); delay(1000);
 motorkontrol(0,100); delay(500);
 motorkontrol(0,0); delay(1000);
 motorkontrol(100,100); delay(800);
 motorkontrol(0,0); delay(1000);
 motorkontrol(100,0); delay(500);
 motorkontrol(0,0); delay(1000);
 motorkontrol(100,100); delay(800);
 motorkontrol(0,0); delay(10000);


 
 

}
