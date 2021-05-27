void setup(){
  size(1024, 400);
  textFont(createFont("標楷體",50));
}
void draw(){
  background(150, 130, 253);
  textSize(50);
  int h = hour(); //小時
  int m = minute(); //分鐘
  int s = second(); //秒
  fill(0, 0, 0); //填充墨水的顏色
  text("Now: " +h  +":"  +m  +":"  +s,  100, 100); //現在時間
  int total = h*60*60 + m*60 + s; //總秒數
  int total2= 12*60*60 + 0*60 + 0; //現在時間的總秒數
  text("總秒數: " +total, 100, 200); //目標時間的總秒數
  int ans= total2-total;
  int hh = ans/60/60, mm= ans/60%60, ss= ans%60;
  text("還剩下: " +hh +":" +mm +":" +ss, 100, 300);
}   
