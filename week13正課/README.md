時間倒數  
調背景色，按下滑鼠時開始計次，並切換顏色
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
