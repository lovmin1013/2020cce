void setup(){
  size(400,200);
  fill(0,0,255); //藍色
  textSize(20);
} 
int degree=0;
void draw(){
  background(#AF43CE);
  float stop=radians(degree);
  text(degree, 200, 100); //弧度，徑度
  text(stop, 200, 150); //航海，度
  arc(100,100, 180,180, 0,stop);
  if(mousePressed) degree++;
}
