int []a = new int[49];
void setup(){
  size(400,200);
  textSize(30);
  for(int i=0; i<49; i++) a[i]= i+1;//電腦起始為0，人類為1 
}//保證取出來的數字絕對不一樣           
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
