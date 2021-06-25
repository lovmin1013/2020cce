## 叫出 webcam
step01 程式素描本,找video,安裝它, 便能在程式 import processing.video.星;  
宣告視訊變數 Capture cam 再用size(640,480)開個傳統的視窗要放視訊,  
最後用 println( Capture.list() ); 印出所有的視訊鏡頭   
```C
import processing.video.*; //開Video外掛
//import processing.sound.* //之前教過聲音
//import ddf.minim.* //部分同學的聲音
Capture cam; //global全域變數
//AudioPlayer player; //以前
//Minim minim //以前
void setup(){//設定，只做一次
  size(640,480); //20年前的電腦
  println(Capture.list());
} //會印出你電腦的全部視訊鏡頭
//ex.筆電 HD WebCam
```
![week18-1](https://user-images.githubusercontent.com/79676872/123358081-60782380-d59d-11eb-9aa5-d4f7ca3c0863.png)

step02 接著step01,補上幾行。cam = New Capture(this, 視訊名字); cam.start();  
在void setup()裡 if( cam.available() )  cam.read() 讀視訊, 再用 set(0,0,cam)畫到畫面  
```C
import processing.video.*; 
Capture cam; 
void setup(){//設定，只做一次
  size(640,480); //20年前的電腦
  println(Capture.list());
  cam= new Capture(this, "HD WebCam"); //初始化
  cam.start(); //開啟webcam
}
void draw(){
  if(cam.available()) cam.read(); //讀視訊
  set(0,0,cam);
}
```
![week18-2](https://user-images.githubusercontent.com/79676872/123358143-7c7bc500-d59d-11eb-8832-cdb37a26aac3.png)

## 叫出一段影片
老師在Teams裡有video.mov的影片檔可下載,請下載後,拉到新的Processing視窗,寫新的程式,  
改用 Movie move 來取代step02的 Capture cam, 大部分和step02很像,只差在new Movie(this,檔名) 還有 movie.play() 或 movie.loop()  
```C
import processing.video.*; //使用Video外掛
Movie movie;  //大寫是形狀 小寫是物件變數
void setup(){
  size(640,480);
                //檔案拉進來
  println(Capture.list());
  movie = new Movie(this, "Video.mov");
  movie.play(); //開啟webcam
}
void draw(){
  if(movie.available()) {
    movie.read(); 
  }
  set(0,0,movie);
}
```
![week18-3](https://user-images.githubusercontent.com/79676872/123365526-00877a00-d5a9-11eb-99d4-bfc6592d375f.png)
