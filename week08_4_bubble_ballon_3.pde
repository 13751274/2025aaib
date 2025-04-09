//week08-4-bubble-ballon-3
//用mouse 吹氣球
void setup(){
  size(400,400);//大小
}
int []x=new int[100];
int []y=new int[100];
int []s=new int[100];
int N=0;
void draw(){
  background(255);//白色的背景
  for(int i=0;i<N;i++){
  ellipse(x[i],y[i]-s[i]/2,s[i]*0.7,s[i]);//瘦瘦的氣球 接觸下方
  if((mousePressed==false || i<N-1) && y[i]>s[i]+1) y[i] -= 2;//沒有撞到天花板 就上移
  }
  if(mousePressed) s[N-1]++;//一直壓著才會打氣
}
void mousePressed(){//按下mouse改變氣球的位置 大小
  x[N]=mouseX;
  y[N]=mouseY;
  s[N]=1;//大小設成1
  N++;
}
