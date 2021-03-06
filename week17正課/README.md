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
  text("Q:"   +Q,    100,100);
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
  text("Q:" +Q,    100,100);
  text("A:" +line, 100,150);
}
void keyPressed(){
  line =line +key;
}
```
![week17-3](https://user-images.githubusercontent.com/79676872/122498036-ff8e9f80-d020-11eb-8850-68d06fd1d886.png)

step04 
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:" +Q,    100,100);
  text("A:" +line, 100,150);
}
void keyPressed(){
  int len= line.length();
  if(key>='a' && key<='z') line =line +key; //小寫鍵
  if(key>='A' && key<='Z') line =line +key; //大寫鍵
  if(key == BACKSPACE) line= line.substring(0,len-1);
}
```
![week17-4](https://user-images.githubusercontent.com/79676872/122498057-0a493480-d021-11eb-8d27-fc7077dc9dc6.png)

step05 老師解釋substring(開始,結束)的意思,很像for(int i=0;i小於26;i++)會做26次的右邊界不包含, 而且會有當機的問題,用len大於0來保護len不要變負的
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Q:" +Q,    100,100);
  text("A:" +line, 100,150);
}
void keyPressed(){
  int len= line.length();
  if(key>='a' && key<='z') line =line +key; //小寫鍵
  if(key>='A' && key<='Z') line =line +key; //大寫鍵
  if(key == BACKSPACE && len>0) line= line.substring(0,len-1);
}
```
![week17-5](https://user-images.githubusercontent.com/79676872/122499951-66618800-d024-11eb-916b-2deaed7ad258.png)

step06 為了要算分數,在keyPressed()裡,加入 if(key==ENTER) 去算分數。算分數要用字串比對 line.equals(Q)==true 成立時,score++, 否則 score-- 再印出分數
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String Q="hello";
void draw(){
  background(0);
  text("Score:" +score, 100,50);
  text("Q:" +Q,    100,100);
  text("A:" +line, 100,150);
}
int score=0;
void keyPressed(){
  int len= line.length();
  if(key>='a' && key<='z') line =line +key; //小寫鍵
  if(key>='A' && key<='Z') line =line +key; //大寫鍵
  if(key == BACKSPACE && len>0) line= line.substring(0,len-1);
  if(key == ENTER){//算分數
    if(line.equals(Q) == true){
      score++;
    } else score--;
  }
}
```
![week17-6](https://user-images.githubusercontent.com/79676872/122502784-e2aa9a00-d029-11eb-87fd-9ef8dced3f0d.png)

step07 利用陣列,來讓題目變更多。 String [] Q = {好多字串} 再配 int Qi=0 來挑選 Q[Qi] 的字來考試, 答對時 Qi++ 並加分, 小心,Qi太大會當掉哦
```C
void setup(){
  size(400,200);
  textSize(40);
}
String line="";
String []Q={"hello","world","other"};
int Qi=0;//第幾個Q Q[i]
void draw(){
  background(0);
  text("Score:" +score, 100,50);
  text("Q:" +Q[Qi],    100,100);
  text("A:" +line, 100,150);
}
int score=0;
void keyPressed(){
  int len= line.length();
  if(key>='a' && key<='z') line =line +key; //小寫鍵
  if(key>='A' && key<='Z') line =line +key; //大寫鍵
  if(key == BACKSPACE && len>0) line= line.substring(0,len-1);
  if(key == ENTER){//算分數
    if(line.equals(Q[Qi]) == true){
      score++;
      Qi++;
      line="";
    } else score--;
  }
}
```
![week17-7](https://user-images.githubusercontent.com/79676872/122503823-b5f78200-d02b-11eb-9810-395b5e4f632a.png)
