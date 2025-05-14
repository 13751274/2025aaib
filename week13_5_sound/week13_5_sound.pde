//week13_5_sound 要撥放音樂
//要先安裝sketch-library-manage libraries...
//找sound 下載 sound 的函式 點install
import processing.sound.*;//使用聲音的外掛
SoundFile mySound,monkey,sword;//宣告變數mySound 它是SoundFile
void setup(){
  size(400,400);//視窗大小400*400
  //記得要先把音樂檔拉到程式裡
  monkey=new SoundFile(this,"Monkey 1.mp3");
  sword=new SoundFile(this,"sword slash.mp3");
  mySound=new SoundFile(this, "Intro Song_Final.mp3");
  mySound.play();//再播放剛剛讀入的聲音檔
}
void mousePressed(){
  if(mouseButton==LEFT)monkey.play();
  if(mouseButton==RIGHT)sword.play();
}
void draw(){
  
}//裡面是空的畫圖 要寫他
