# 抽籤  
1.用亂數random()取<60的數，用text()印出來，以textSize()將字設大一點
```C
void setup(){
  size(300,200);
  float ans = random(60); //亂數取<60的數
  textSize (30);
  text (ans, 0, 30);
}
```
![week14-1](https://user-images.githubusercontent.com/79676872/119917537-56acd180-bf99-11eb-92ba-84061bb904dc.png)

2.將float轉成int，用mousePressed()互動，background()清背景
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
# 亂數洗牌
先宣告Java的陣列，再用for迴圈,印出陣列的值, mousePressed()互動,利用random()挑2個數i1,i2,temp交換
```C
//int a[]={1,2,3,4,5,6,7,8,9,10}; //C,C++
int []a = {1,2,3,4,5,6,7,8,9,10}; //Java(陣列宣告)
void setup(){
  size(400,200);
  textSize(30);
}
void draw(){
  background(#5A71FF);
  for(int i=0; i<10; i++){
    text(a[i],i*40, 100);
  }
}
void mousePressed(){
  int i1=(int) random(10);
  int i2=(int) random(10);
  int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
} //temp交換
```
![week14-3-1](https://user-images.githubusercontent.com/79676872/119921374-785d8700-bfa0-11eb-917a-a3890ff50eca.png)
![week14-3](https://user-images.githubusercontent.com/79676872/119921380-7abfe100-bfa0-11eb-9dd5-4bfd7b5a0322.png)
# 大樂透
用作弊方法，事先亂數洗10000次，再拿前面6個數字為中獎號碼
```C
int []a = new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0; i<49; i++) a[i]= i+1;//人類:1 
}                          //電腦:0
void draw(){
  background(#5A71FF);
  for(int i=0; i<6; i++){ //49個只秀出6個數
    text(a[i], i*50, 100);
  } //大樂透抽獎時，49顆球挑6顆
}
void mousePressed(){
  for(int i=0; i<10000; i++){
    int i1= (int)random(49), i2=(int)random(49);
    int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
  }
}
```
![week14-4](https://user-images.githubusercontent.com/79676872/119924120-95488900-bfa5-11eb-8a2f-869cc3d4fa86.png)
