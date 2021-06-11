## 大輪盤
利用elipse()畫出圓形(設定圓心、寬、高)，size()視窗大小，及background()背景顏色
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

使用arc()畫出圓弧，參數和ellipse很像(圓心、寬、高)後面start,stop用mouseX除50.0換了色彩才看得清楚 (mouseX 為滑鼠移動之座標)
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
  arc(100,100, 180,180, 0,stop);
}  //  圓心    寬  高
```
![week16-2](https://user-images.githubusercontent.com/79676872/121619496-4b7a9b00-ca9b-11eb-9646-30bdb5cd1bd8.png)
