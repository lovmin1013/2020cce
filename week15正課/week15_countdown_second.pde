void setup(){ //設定,只做一次
  size(400,200);
  textSize(40);
}
void draw(){ //畫圖, 每秒60次
  background(47, 200, 210);
  int s= second(); //秒鐘
  text(s, 100, 100);
}
