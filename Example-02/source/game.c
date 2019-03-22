//
// Created by bill on 23/03/19.
//
#include <game.h>
int rock_paper_scissor(int player1,int player2){
  int result;
  if(player1==ROCK && player2==PAPER){
    result=PLAYER2_WIN;
  }
  else if(player1==ROCK && player2==SCISSOR){
    result=PLAYER1_WIN;
  }
  else if(player1==PAPER && player2==ROCK){
    result=PLAYER1_WIN;
  }
  else if(player1==PAPER && player2==SCISSOR){
    result=PLAYER2_WIN;
  }
  else if(player1==SCISSOR && player2==ROCK){
    result=PLAYER2_WIN;
  }
  else if(player1==SCISSOR && player2==PAPER){
    result=PLAYER2_WIN;
  }
  else
  {
    result=DRAW;
  }
  return result;
}
