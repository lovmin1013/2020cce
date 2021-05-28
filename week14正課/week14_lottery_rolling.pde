int []a = new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0; i<49; i++) a[i]= i+1;//電腦起始為0，人類為1 //丟入號碼球
  for(int i=0; i<10000; i++){ //作弊提前排好
    int i1=(int)random(49), i2=(int)random(49);
    int temp=a[i1]; a[i1]=a[i2]; a[i2]=temp;
  }
}  
int N=0, rolling=0;
void draw(){
  background(#5A71FF);
  textAlign(CENTER,CENTER); //文字對齊中間
  for(int i=0; i<N; i++){ //49個只秀出6個數
    int x=50+i*50;
    if(i== N-1 && rolling>0){
      x += rolling;
      rolling -= 3;
    }
    fill(255); ellipse(x,100, 40, 40); //畫出白球
    fill(0);text(a[i], x, 97); //填入黑字
  } //大樂透抽獎時，49顆球挑6顆
}
void mousePressed(){
  rolling=500;
  N++; //其實數字早就決定了，只是慢慢印出來
}
