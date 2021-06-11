# 倒數計時
## 老師範例:https://hackmd.io/CRq72E8QQS20PcnXRrV79w?view

step01 複習倒數計時
```C
void setup(){ //設定,只做一次
  size(400,200);
  textSize(40);
}
void draw(){ //畫圖, 每秒60次
  background(47, 200, 210);
  int s= second(); //秒鐘
  text(s, 100, 100);
}
```
![week15-1](https://user-images.githubusercontent.com/79676872/120735483-4490dd00-c51d-11eb-8267-a326cf2dd35b.png)

step02 利用餘數及減法，來做出9到0的倒數計時
```C
void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(47, 200, 210);
  int s= second();
  //text(59-s, 100, 100);
  text(9-s%10, 100, 100);
}
//原:  0,1,2,3,4,5,6,7,8,9
//倒數:9,8,7,6,5,4,3,2,1,0
```
![week15-2](https://user-images.githubusercontent.com/79676872/120735510-507c9f00-c51d-11eb-8b95-d99cc13ebfea.png)

step03 用程式素描本中的函示庫加入Sound，把mp3檔放進去PDE寫程式的地方
```C
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
```
![week15-3](https://user-images.githubusercontent.com/79676872/120735584-730eb800-c51d-11eb-855a-e3ab0205de82.png)

step04 以step02為主，插入step03宣告，但每秒播60次，很吵
```C
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
```
![week15-4](https://user-images.githubusercontent.com/79676872/120737450-aa329880-c520-11eb-8ebf-fde5023171fd.png)

step05 if( player.isPlaying() )時，要stop()， 否則 play()， 記得要放bell.mp3
```C
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
```
![week15-5](https://user-images.githubusercontent.com/79676872/120738508-896b4280-c522-11eb-8813-8852f0ee3ee9.png)

step05-1 只播一次
```C
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
```
![week15-5-1](https://user-images.githubusercontent.com/79676872/120739704-75c0db80-c524-11eb-90f2-23721a68f96e.png)

## processing to p5js converter: http://faculty.purchase.edu/joseph.mckay/p5jsconverter.html  

step06 開新程式，切換成p5 js模式，利用上方網頁,將processing to p5 js converter轉換，貼上、並執行，就會開網頁
```C
function setup(){ //設定,只做一次
  createCanvas(400,200);
  textSize(40);
}
function draw(){ //畫圖, 每秒60次
  background(47, 200, 210);
  let s= second(); //秒鐘
  text(s, 100, 100);
}
```
![week15-6](https://user-images.githubusercontent.com/79676872/120742327-406abc80-c529-11eb-91ac-a8d815255787.png)
