///week06_4_fishX_for_many_x_y_for_k_N
//程式模仿week04-5 week03-4
void setup(){
  size(600,400);}
float fishX=300, fishY=200;//魚的座標
float[]x=new float[100];//java陣列
float[]y=new float[100];//最多有100個飼料
int N=0;//目前是0個
void draw(){
   background(#C0ffee);//裡面是0，不是字母0
  for(int i=0;i<N;i++){//for迴圈
  ellipse(x[i],y[i],8,8);//飼料陣列
  y[i]++;
  if(y[i]>400){//飼料到底要回收
    for(int k=i;k<N-1;k++){
    x[k]=x[k+1];//格子的值往左移
    y[k]=y[k+1];
  }
  N--;//更新飼料的總數N
  }
 }
   println(N);
  ellipse(fishX,fishY, 30, 10);//魚
}
void mousePressed(){
  x[N]=mouseX;
  y[N]=mouseY;
  N++;
}
