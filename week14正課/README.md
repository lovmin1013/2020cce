抽籤
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
