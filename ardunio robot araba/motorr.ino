void motorkontrol(int solmotorhiz, int sagmotorhiz){
  if(solmotorhiz<0){
    solmotorhiz=solmotorhiz*(-1);
    analogWrite(solmotor1,solmotorhiz);
    digitalWrite(solmotor2,LOW);
  }
  else{
    analogWrite(solmotor2,solmotorhiz);
    digitalWrite(solmotor1,LOW);
    
  }
 if(sagmotorhiz<0){
  sagmotorhiz=sagmotorhiz*(-1);
  analogWrite(sagmotor1,sagmotorhiz);
  digitalWrite(sagmotor2,LOW);
 }
 else{
  analogWrite(sagmotor2,sagmotorhiz);
  digitalWrite(sagmotor1,LOW);
 }
}
