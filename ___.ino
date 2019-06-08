int valueleft;
int valueright;
int diff;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}


void loop() {
  // put your main code here, to run repeatedly:

 int valueleft=analogRead(A0);
 int valueright=analogRead(A3);

 Serial.println(valueleft);
 Serial.println(valueright);
  
  delay(500);

  diff=valueleft-valueright
  
   if(diff<-40){
  
Serial.println(left);
 
  }else if(diff<0){

  Serial.println(center);
 
  } else{

  Serial.println(right);
    
  }
  
  
}
