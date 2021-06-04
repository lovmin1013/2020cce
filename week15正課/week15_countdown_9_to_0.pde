void setup(){
  size(400,200);
  textSize(40);
}
void draw(){
  background(47, 200, 210);
  int s= second();
  //text(59-s, 100, 100);
  text(9-s%10, 100, 100);
}
//原:  0,1,2,3,4,5,6,7,8,9
//倒數:9,8,7,6,5,4,3,2,1,0
