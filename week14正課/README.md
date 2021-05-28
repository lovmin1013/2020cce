## 抽籤  
# 1.用亂數random()取<60的數，用text()印出來，以textSize()將字設大一點
```C
void setup(){
  size(300,200);
  float ans = random(60); //亂數取<60的數
  textSize (30);
  text (ans, 0, 30);
}
```
![week14-1](https://user-images.githubusercontent.com/79676872/119917537-56acd180-bf99-11eb-92ba-84061bb904dc.png)

# 2.將float轉成int，用mousePressed()互動，background()清背景
```C
void setup(){
  size(300,200);
  textSize(30);
}
int ans=0;
void draw(){ //畫圖，每秒60次
  background(#2EE5D4);//清背景
  //int ans= (int)random(60);//強制轉型
  text(ans, 30, 30);
}
void mousePressed(){//mouse按下去,才做亂數
  ans= (int)random(60);
}
```
![week14-2](https://user-images.githubusercontent.com/79676872/119918768-a8565b80-bf9b-11eb-8140-4c768eeb25e2.png)
## 亂數洗牌
