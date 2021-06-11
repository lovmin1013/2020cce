void setup(){
  size(400,200);
  fill(0,0,255); //藍色
  textSize(20);
} 
float shift=0, v=10; //global變數，一開始速度10
void draw(){
  background(#AF43CE);
  float start= radians(90+shift);
  float stop= radians(180+shift);
  arc(100,100, 180,180, start,stop);
  if(v>0.0001){ //還有速度時，就轉動
    shift+=v; //轉動的速度
    v=v*0.99; //會慢慢減速
  }
  text(shift, 200, 100); //印出shift
  text(v, 200, 150); //印出轉動的速度
}
