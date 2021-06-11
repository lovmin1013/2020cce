void setup(){
  size(400,200);
  fill(0,0,255); //藍色
  textSize(20);
} 
float shift=0, v=0;//global變數，一開始速度10
void mousePressed(){
  //v= random(10); //0....10.0
  v= random(10)+5; //5....15.0
}
void draw(){
  background(#AF43CE);
    for(int i=0; i<24; i++){  
      if(i%3==0) fill(0);
      if(i%3==1) fill(255);
      if(i%3==2) fill(200,180,0);
      float start= radians(    0+shift+i*360/24);
      float stop= radians(360/24+shift+i*360/24);
      arc(100,100, 180,180, start,stop);
  }
  if(v>0.1){ //還有速度時，就轉動
    shift+=v; //轉動的速度
    v=v*0.99; //會慢慢減速
  }
  text(shift, 200, 100); //印出shift
  text(v, 200, 150); //印出轉動的速度
}
