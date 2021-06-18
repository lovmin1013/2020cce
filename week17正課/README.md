## 打字遊戲
step01 利用String line宣告一個字串變數,變數可以變動,所以在程式很重要, 再用text()畫出字
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="World";
void draw(){
  background(0);
  text("Hello",100,100);
  text( line  ,100,150);
}
```
![week17-1](https://user-images.githubusercontent.com/79676872/122494246-9b1d1180-d01b-11eb-9217-d55130aa41f3.png)

step02 利用字串的+可以把2個字串接起來變比較長的字串,同時在mousePressed()裡,line=line+新的字母,也能變長
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="Hello";
void draw(){
  background(0);
  text("Q;"   +Q,    100,100);
  text("You:" +line, 100,150);
}
void mousePressed(){
  line =line+"a";
}
```
![week17-2](https://user-images.githubusercontent.com/79676872/122494397-dc152600-d01b-11eb-8abe-e90c24ba00b6.png)
