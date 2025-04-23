//week10_1_happy_bubble_part1
PImage toy1,toy2;//變數宣告
//很像之前教過的int整數宣告
void setup(){
  size(400,495);
  toy1=loadImage("toy1.jpg");
  toy2=loadImage("toy2.jpg");
}
void draw(){
  background(toy1);//把這張圖當背景 長寬要相同
  if(mousePressed) image(toy2,0,0);//再秀第2張
}
