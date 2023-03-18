int SET1=1;
int SET2=2;
int SET3=3;
int SET4=4;

int A=5;
int B=6;
int C=7;
int D=8;
int E=9;
int F=10;
int G=11;
int H=12;

int i=0;
int j=0;
void setup(){
  pinMode(SET1,OUTPUT);
  pinMode(SET2,OUTPUT);
  pinMode(SET3,OUTPUT);
  pinMode(SET4,OUTPUT);
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(H,OUTPUT);
}
void yangji(int word){
  switch(word){
    case 1:
    digitalWrite(SET1,HIGH);
    digitalWrite(SET2,LOW);
    digitalWrite(SET3,LOW);
    digitalWrite(SET4,LOW);
    break;
    case 2:
    digitalWrite(SET1,LOW);
    digitalWrite(SET2,HIGH);
    digitalWrite(SET3,LOW);
    digitalWrite(SET4,LOW);
    break;
    case 3:
    digitalWrite(SET1,LOW);
    digitalWrite(SET2,LOW);
    digitalWrite(SET3,HIGH);
    digitalWrite(SET4,LOW);
    break;
    case 4:
    digitalWrite(SET1,LOW);
    digitalWrite(SET2,LOW);
    digitalWrite(SET3,LOW);
    digitalWrite(SET4,HIGH);
    break;
    default:
    digitalWrite(SET1,LOW);
    digitalWrite(SET2,LOW);
    digitalWrite(SET3,LOW);
    digitalWrite(SET4,LOW);
    break;
    }
  }
  void shuzi(int word){
    switch(word){
      case 0:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,HIGH);
      digitalWrite(H,HIGH);
      break;
      case 1:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
      digitalWrite(H,HIGH);
      break;
      case 2:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,HIGH);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,HIGH);
      digitalWrite(G,LOW);
      digitalWrite(H,HIGH);
      break;
      case 3:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,LOW);
      digitalWrite(H,HIGH);
      break;
      case 4:
      digitalWrite(A,HIGH);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,HIGH);
      digitalWrite(H,HIGH);
      break;
      case 5:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      digitalWrite(H,HIGH);
      break;
      case 6:
      digitalWrite(A,LOW);
      digitalWrite(B,HIGH);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      digitalWrite(H,HIGH);
      break;
      case 7:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
      digitalWrite(H,HIGH);
      break;
      case 8:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,LOW);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      digitalWrite(H,HIGH);
      break;
      case 9:
      digitalWrite(A,LOW);
      digitalWrite(B,LOW);
      digitalWrite(C,LOW);
      digitalWrite(D,LOW);
      digitalWrite(E,HIGH);
      digitalWrite(F,LOW);
      digitalWrite(G,LOW);
      digitalWrite(H,HIGH);
      break;
      default:
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
      digitalWrite(H,HIGH);
      break;
      }
    }
    void clear(){
      digitalWrite(A,HIGH);
      digitalWrite(B,HIGH);
      digitalWrite(C,HIGH);
      digitalWrite(D,HIGH);
      digitalWrite(E,HIGH);
      digitalWrite(F,HIGH);
      digitalWrite(G,HIGH);
      digitalWrite(H,HIGH);
      }
    void display(int x,int y){
      yangji(x);
      shuzi(y);
      clear();
      }
void loop(){
display(1,5);
display(2,2);
display(3,0);
}
