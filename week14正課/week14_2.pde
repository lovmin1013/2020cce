void setup(){
  size(300,200);
  textSize(30);
}
int ans=0;
void draw(){ //畫圖，每秒60次
  background(#2EE5D4);//清背景
  //int ans= (int)random(60);//強制轉型
  text(ans, 30, 30);
}
void mousePressed(){//mouse按下去,才做亂數
  ans= (int)random(60);
}
