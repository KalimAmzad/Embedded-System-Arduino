const int a=13, b=12, c=11,d=10;
const int e=9,f=8,g=7;
unsigned char i=0;
unsigned seven_seg[10]={64,121,36,48,25,18,2,120,0,16};
unsigned char number;
void setup() {
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
}
void loop() {
number=seven_seg[i];
digitalWrite(a,(number & 1));
digitalWrite(b,(number & 2));
digitalWrite(c,(number & 4));
digitalWrite(d,(number & 8));
digitalWrite(e,(number & 16));
digitalWrite(f,(number & 32));
digitalWrite(g,(number & 64));
delay(1000);
i=i+2;
if(i>9) i=0;
}
