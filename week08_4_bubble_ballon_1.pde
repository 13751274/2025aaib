//week08-4-bubble-ballon-1
//用mouse 吹氣球
void setup(){
  size(400,400);//大小
}
int x,y,s;//氣球座標 氣球大小 
void draw(){
  background(255);//白色的背景
  ellipse(x,y-s/2,s*0.7,s);//瘦瘦的氣球 接觸下方
  if(mousePressed)s++;//一直壓著 才會打氣
  else{//沒有壓著就會往上飄
    if(y>s)y=2;
  }
  }
void mousePressed(){//按下mouse改變氣球的位置 大小
  x=mouseX;
  y=mouseY;
  s=1;//大小設成1
}
