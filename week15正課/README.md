# 倒數計時
老師範例:https://hackmd.io/CRq72E8QQS20PcnXRrV79w?view

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
```
![week15-2](https://user-images.githubusercontent.com/79676872/120735510-507c9f00-c51d-11eb-8b95-d99cc13ebfea.png)

step03 用程式素描本中的函示庫加入Sound，把mp3檔放進去PDE寫程式的地方  
![week15-3](https://user-images.githubusercontent.com/79676872/120735584-730eb800-c51d-11eb-855a-e3ab0205de82.png)

step04 以step02為主，插入step03宣告，但每秒播60次，很吵  
![week15-4](https://user-images.githubusercontent.com/79676872/120737450-aa329880-c520-11eb-8ebf-fde5023171fd.png)

step05 if( player.isPlaying() )時，要stop()， 否則 play()， 記得要放bell.mp3  
![week15-5](https://user-images.githubusercontent.com/79676872/120738508-896b4280-c522-11eb-8813-8852f0ee3ee9.png)

step05 只播一次  
![week15-5-1](https://user-images.githubusercontent.com/79676872/120739704-75c0db80-c524-11eb-90f2-23721a68f96e.png)
processing to p5js converter: http://faculty.purchase.edu/joseph.mckay/p5jsconverter.html  

step06 開新程式，切換成p5 js模式，利用上方網頁,將processing to p5 js converter轉換，貼上、並執行，就會開網頁  
![week15-6](https://user-images.githubusercontent.com/79676872/120742327-406abc80-c529-11eb-91ac-a8d815255787.png)
