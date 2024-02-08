// C++ code
//
int input1 = 7;
int input2 = 6;
int input3 = 12;
int input4 = 13;
int enable1 = 9;
int enable2 = 8;
char x;
void setup()
{pinMode(input1, OUTPUT);
 pinMode(input2, OUTPUT);
  pinMode(input3, OUTPUT);
    pinMode(input4, OUTPUT);
     pinMode(enable1, OUTPUT);
 pinMode(enable2, OUTPUT);Serial.begin(9600);
}

void loop()
{ 
    digitalWrite( enable1,HIGH);
        digitalWrite( enable2,HIGH);
  if(Serial.available()){ x= Serial.read();}
  if(x=='f'|| x == 'F'){
  digitalWrite( input1,LOW);
  digitalWrite( input2,HIGH);
 digitalWrite( input3,HIGH);
    digitalWrite( input4,LOW);     
}
   else if(x=='b'|| x=='B'){
  digitalWrite( input1,HIGH);
  digitalWrite( input2,LOW);
 digitalWrite( input3,LOW);
    digitalWrite( input4,HIGH);     
}
   else if(x=='r'|| x== 'R'){
  digitalWrite( input1,LOW);
  digitalWrite( input2,HIGH);
 digitalWrite( input3,LOW);
    digitalWrite( input4,LOW);     
} else if(x=='l'|| x== 'L'){
  digitalWrite( input1,LOW);
  digitalWrite( input2,LOW);
 digitalWrite( input3,HIGH);
    digitalWrite( input4,LOW);     
}else if(x=='s'|| x== 'S'){
  digitalWrite( input1,LOW);
  digitalWrite( input2,LOW);
 digitalWrite( input3,LOW);
     digitalWrite( input4,LOW);   }
  else{digitalWrite( input1,LOW);
  digitalWrite( input2,LOW);
 digitalWrite( input3,LOW);
       digitalWrite( input4,LOW);   }
}