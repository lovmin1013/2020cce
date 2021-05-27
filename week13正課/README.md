時間倒數  
1.調背景色，按下滑鼠時開始計次，並切換顏色
```C
void setup(){ //只做一次設定
  size(1024, 400);
}
void draw(){ //每秒做60次
if(mousePressed) background(0, 198, 198);
else background(150, 130, 253);
textSize(50); //字的大小 設50號字
text(a, 100, 100); //將a在 100, 100畫出來
}
int a=0; //外部變數
void mousePressed() { //按下去時，會呼叫這個函式
  a++;
}
```
![week13-1](https://user-images.githubusercontent.com/79676872/119780245-29f6ac80-befc-11eb-87b8-3a196967f63d.png)
![week13-1-2](https://user-images.githubusercontent.com/79676872/119780253-2bc07000-befc-11eb-895e-1543506d45ce.png)

2.更改字體為標楷體，以目標時間減去現在時間，得出剩下的時間。
```C
void setup(){
  size(1024, 400);
  textFont(createFont("標楷體",50));
}
void draw(){
  background(150, 130, 253);
  textSize(50);
  int h = hour(); //小時
  int m = minute(); //分鐘
  int s = second(); //秒
  fill(0, 0, 0); //填充墨水的顏色
  text("Now: " +h  +":"  +m  +":"  +s,  100, 100); //現在時間
  int total = h*60*60 + m*60 + s; //總秒數
  int total2= 16*60*60 + 0*60 + 0; //現在時間的總秒數
  text("總秒數: " +total, 100, 200); //目標時間的總秒數
  int ans= total2-total;
  int hh = ans/60/60, mm= ans/60%60, ss= ans%60;
  text("還剩下: " +hh +":" +mm +":" +ss, 100, 300);
}
```
![week13-2](https://user-images.githubusercontent.com/79676872/119781763-f9177700-befd-11eb-9e6d-1cd8043cece6.png)
