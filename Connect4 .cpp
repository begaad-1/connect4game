#include <iostream>
using namespace std;
int board [6][7];
int input , player =1;
int rowindex =5;
bool gameend = false;
void handleinput (int input){
if (rowindex >=0){
if (board[rowindex][input] !=0 ){
    rowindex--;
    handleinput(input);
}
else {
    board[rowindex][input] = player;
    rowindex =5;
}
}
else {
    cout<<"wrong input \n";
player = player ==1 ? 2:1;
rowindex =5;
}
}
void chekwinner(){


for (int i=0;i<6;i++){
    for(int j=0;j<7;j++){
            if (board [i][j]== player &&board [i][j-1]== player&&board [i][j-2]== player&&board [i][j-3]== player)
{
    gameend = true;
    cout<<"\n player"<<player <<" Win!";
}
       if (board [i][j]== player &&board [i-1][j]== player&&board [i-2][j]== player&&board [i-3][j]== player)
{
    gameend = true;
    cout<<"\n player"<<player <<" Win!";
}
 if (board [i][j]== player &&board [i-1][j+1]== player&&board [i-2][j+2]== player&&board [i-3][j+3]== player)
{
    gameend = true;
    cout<<"\n player"<<player <<" Win!";
} if (board [i][j]== player &&board [i-1][j-1]== player&&board [i-2][j-2]== player&&board [i-3][j-3]== player)
{
    gameend = true;
    cout<<"\n player"<<player <<" Win!";
}



}}}








void draw (){
    for(int j=0;j<7;j++){

     cout<<"- "<<j+1<<"-";
    }

    cout<<endl;


for (int i=0;i<6;i++){
    for(int j=0;j<7;j++){
            if(board [i][j]==0){
        cout<<"|  |";}
        else if (board[i][j]==1){
            cout<<"| X|";
        }
 else if (board[i][j]==2){
            cout<<"| O|";
        }
    }

     cout<< "\n";
}


 for(int j=0;j<7;j++){

     cout<<"====";
    }

    cout<<endl;


}


int main (){


draw();
while(!gameend) {


cout<<"player"<<player <<": ";
cin>>input;
handleinput(input);
draw();
chekwinner();
player = player ==1 ? 2:1;
}






return 0;
}





