void setup(){ //設定，只做一次
  size(400,200);
} 
void draw(){ //畫，每秒60次
  background(#AF43CE);
  fill(255); //白色
  ellipse(100,100, 180,180);
  fill(0,0,255); //藍色
  float stop=mouseX/50.0;
  text(stop,200,100);
  arc(100,100, 180,180, 0,stop); //start:起始角度 stop:結束角度
}  //  圓心    寬  高               角度單位為弧度，非圓周率
