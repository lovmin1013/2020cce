//step03出發,做step05
import processing.sound.*;
SoundFile player; 
void setup(){
  size(400,200);
  player= new SoundFile(this, "bell.mp3");
}//bell.mp3放進來
void draw(){
  background(47, 200, 210);
}
void mousePressed(){//2種 stop() play()
  if(player.isPlaying()){
    player.stop();
  }else{
    player.play();
  }
}
