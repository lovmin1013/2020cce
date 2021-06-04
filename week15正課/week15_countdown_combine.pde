//從第二步開始
import processing.sound.*; //step03
SoundFile player; //step03
void setup(){
  size(400,200);
  textSize(40);
  player= new SoundFile(this, "tada.mp3");
} //記得把mp3放進去
void draw(){
  background(47, 200, 210);
  int s= second();
  //text(59-s, 100, 100);
  text(9-s%10, 100, 100);
  if(9-s%10 ==0) player.play();
} //0秒的時候, if()會進去60次,吵!!
