//發出聲音,要用外掛 Processing的Sound
import processing.sound.*;
SoundFile player; //SoundFile是形狀,player變名
//mp3檔,也可以拉進來
void setup(){
  size(400,200);
  player= new SoundFile(this, "tada.mp3");
}
void draw(){
  background(47, 200, 210);
}
void mousePressed(){
  player.play();
}
