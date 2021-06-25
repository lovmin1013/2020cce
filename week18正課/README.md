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
