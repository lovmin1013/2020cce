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

step03 延序前一步驟,但把mousePressed()改成keyPressed(), 同時 line = line + key; 讓按的字母可以變長
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="Hello";
void draw(){
  background(0);
  text("Q;" +Q,    100,100);
  text("A:" +line, 100,150);
}
void keyPressed(){
  line =line +key;
}
```
![week17-3](https://user-images.githubusercontent.com/79676872/122498036-ff8e9f80-d020-11eb-8850-68d06fd1d886.png)

step04 
```C

```
![week17-4](https://user-images.githubusercontent.com/79676872/122498057-0a493480-d021-11eb-8d27-fc7077dc9dc6.png)
