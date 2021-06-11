void setup(){
  size(400,200);
  fill(0,0,255); //藍色
  textSize(20);
} 
float shift=0; //global變數
void draw(){
  background(#AF43CE);
  //float start= radians(90+mouseX);
  //float stop= radians(180+mouseX);
  float start= radians(90+shift);
  float stop= radians(180+shift);
  arc(100,100, 180,180, start,stop);
  shift+=1; //轉動的速度，每秒60度
}
