## 大輪盤
step01 利用elipse()畫出圓形(設定圓心、寬、高)，size()視窗大小，及background()背景顏色
```C
void setup(){ //設定，只做一次
  size(400,200);
} 
void draw(){ //畫，每秒60次
  background(#AF43CE);
  ellipse(50,50, 80,80);
}//畫圓   圓心   寬 高
```
![week16-1](https://user-images.githubusercontent.com/79676872/121618153-e9209b00-ca98-11eb-99cf-4065db0d5a6c.png)

step02 使用arc()畫出圓弧，參數和ellipse很像(圓心、寬、高)後面start,stop用mouseX除50.0換了色彩才看得清楚 (mouseX 為滑鼠移動之座標)
```C
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
```
![week16-2](https://user-images.githubusercontent.com/79676872/121619496-4b7a9b00-ca9b-11eb-9646-30bdb5cd1bd8.png)

step03 用radians單位,利用 shift移動量的變數,讓它每秒轉動60度,利用radians()換算角度
```C
void setup(){
  size(400,200);
  fill(0,0,255); //藍色
  textSize(20);
} 
float shift=0; //global變數
void draw(){
  background(#AF43CE);
  //float start= radians(90+mouseX);
  //float stop= radians(180+mouseX);
  float start= radians(90+shift);
  float stop= radians(180+shift);
  arc(100,100, 180,180, start,stop);
  shift+=1; //轉動的速度，每秒60度
}
```
![week16-4](https://user-images.githubusercontent.com/79676872/121623113-b6c76b80-caa1-11eb-9ccb-62db6fbdea13.png)

step03-1 滑鼠按下去開始轉動，了解 度degrees 及 弧度radians 的差別
```C
void setup(){
  size(400,200);
  fill(0,0,255); //藍色
  textSize(20);
} 
int degree=0;
void draw(){
  background(#AF43CE);
  float stop=radians(degree);
  text(degree, 200, 100); //弧度，徑度
  text(stop, 200, 150); //航海，度
  arc(100,100, 180,180, 0,stop);
  if(mousePressed) degree++;
}
```
![week16-3-1](https://user-images.githubusercontent.com/79676872/121624800-c72d1580-caa4-11eb-8ee3-f2905a3d8f18.png)

step04 利用變數v讓轉動的速度可調整，慢慢 v乘0.99變慢，最後很慢時停下來
```C
void setup(){
  size(400,200);
  fill(0,0,255); //藍色
  textSize(20);
} 
float shift=0, v=10; //global變數，一開始速度10
void draw(){
  background(#AF43CE);
  float start= radians(90+shift);
  float stop= radians(180+shift);
  arc(100,100, 180,180, start,stop);
  if(v>0.0001){ //還有速度時，就轉動
    shift+=v; //轉動的速度
    v=v*0.99; //會慢慢減速
  }
  text(shift, 200, 100); //印出shift
  text(v, 200, 150); //印出轉動的速度
}
```
![week16-5](https://user-images.githubusercontent.com/79676872/121624346-ee371780-caa3-11eb-8c94-9025c01a8115.png)

step05 利用mousePressed()觸發 random()讓v可以是亂數,每按一次就會有新的轉動速度
```C
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
  float start= radians(90+shift);
  float stop= radians(180+shift);
  arc(100,100, 180,180, start,stop);
  if(v>0.1){ //還有速度時，就轉動
    shift+=v; //轉動的速度
    v=v*0.99; //會慢慢減速
  }
  text(shift, 200, 100); //印出shift
  text(v, 200, 150); //印出轉動的速度
}
```
![week16-6](https://user-images.githubusercontent.com/79676872/121626091-59ceb400-caa7-11eb-849e-b5df22ce2676.png)

step06 利用for迴圈，畫出24片小Pizza，組合成很大的pizza,分別利用(餘數)來填上不同的顏色，start及stop的計算看起來很複雜，其實就是把整個圓蓋起來(start stop差15)
```C
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
```
![week16-7](https://user-images.githubusercontent.com/79676872/121628273-779e1800-caab-11eb-96ba-c1efe1a59fb1.png)

step06-1 中獎橘色區塊
```C
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
  background(175,27,206);
    for(int i=0; i<24; i++){  
      if(i%3==0) fill(0);
      if(i%3==1) fill(255);
      if(i%3==2) fill(200,150,0);
      if(i==0)   fill(255,80,0);
      float start= radians(    0+shift+i*360/24);
      float stop= radians(360/24+shift+i*360/24);
      arc(100,100, 180,180, start,stop);
  }
  if(v>0.1){ //還有速度時，就轉動
    shift+=v; //轉動的速度
    v=v*0.99; //會慢慢減速
  }else{ //不轉時，判斷是否得獎
  }
  text(shift, 200, 100); //印出shift
  text(v, 200, 150); //印出轉動的速度
}
```
![week16-7-1](https://user-images.githubusercontent.com/79676872/121629594-19beff80-caae-11eb-94e9-3487e6e9c14c.png)

