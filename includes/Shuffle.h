#ifndef shuffle_H
#define shuffle_H
#include <iostream>
#include <algorithm>

    using namespace std;
        int cards[24]= {19,110,111,112,113,114,29,210,211,212,213,214,39,310,311,312,313,314,49,410,411,412,413,414};
     /*1 represents hearts, 2 represents Diamonds, 3 represents spades, 4 represents Clubs*/    
    /*11 = Jacks, 12 = Queens, 13 = Kings, 14 = Aces                                     */
        int HandNumber;
    void shuffle(){
      random_shuffle(&cards[0], &cards[24]);
    }
    void Deal(){

        switch (HandNumber) {
         default:{

            int P1Cards [5] ={cards[0],cards[1],cards[2],cards[10],cards[11]};
            int P2Cards [5] ={cards[3],cards[4],cards[12],cards[13],cards[14]};
            int P3Cards [5] ={cards[5],cards[6],cards[7],cards[15],cards[16]};
            int P4Cards [5] ={cards[8], cards[9],cards[17],cards[18],cards[19]};
            int MiddleCards [4]= {cards[20],cards[21],cards[22],cards[23]};
       
        
            switch (P1Cards[1]){
                case 19:{
                cout<<"Nine of Hearts,";
                break;}
                case 110:{
                cout<<"Ten of Hearts,";
                break;}
                case 111:{
                cout<<"Jack of Hearts,";
                break;}
                case 112:{
                cout<<"Queen of Hearts,";
                break;}
                case 113:{
                cout<<"King of Hearts,";
                break;}
                case 114:{
                cout<<"Ace of Hearts,";
                break;}
                case 29:{
                cout<<"Nine of Diamonds,";
                break;}
                case 210:{
                cout<<"Ten of Diamonds,";
                break;}
                case 211:{
                cout<<"Jack of Diamonds,";
                break;}
                case 212:{
                cout<<"Queen of Diamonds,";
                break;}
                case 213:{
                cout<<"King of Diamonds,";
                break;}
                case 214:{
                cout<<"Ace of Diamonds,";
                break;}
                case 39:{
                cout<<"Nine of spades,";
                break;}
                case 310:{
                cout<<"Ten of spades,";
                break;}
                case 311:{
                cout<<"Jack of spades,";
                break;}
                case 312:{
                cout<<"Queen of spades,";
                break;}
                case 313:{
                cout<<"King of spades,";
                break;}
                case 314:{
                cout<<"Ace of spades,";
                break;}
                case 49:{
                cout<<"Nine of Clubs,";
                break;}
                case 410:{
                cout<<"Ten of Clubs,";
                break;}
                case 411:{
                cout<<"Jack of Clubs,";
                break;}
                case 412:{
                cout<<"Queen of Clubs,";
                break;}
                case 413:{
                cout<<"King of Clubs,";
                break;}
                case 414:{
                cout<<"Ace of Clubs,";
                break;}
                };
                switch (P1Cards[2]){
                case 19:{
                cout<<"Nine of Hearts,";
                break;}
                case 110:{
                cout<<"Ten of Hearts,";
                break;}
                case 111:{
                cout<<"Jack of Hearts,";
                break;}
                case 112:{
                cout<<"Queen of Hearts,";
                break;}
                case 113:{
                cout<<"King of Hearts,";
                break;}
                case 114:{
                cout<<"Ace of Hearts,";
                break;}
                case 29:{
                cout<<"Nine of Diamonds,";
                break;}
                case 210:{
                cout<<"Ten of Diamonds,";
                break;}
                case 211:{
                cout<<"Jack of Diamonds,";
                break;}
                case 212:{
                cout<<"Queen of Diamonds,";
                break;}
                case 213:{
                cout<<"King of Diamonds,";
                break;}
                case 214:{
                cout<<"Ace of Diamonds,";
                break;}
                case 39:{
                cout<<"Nine of spades,";
                break;}
                case 310:{
                cout<<"Ten of spades,";
                break;}
                case 311:{
                cout<<"Jack of spades,";
                break;}
                case 312:{
                cout<<"Queen of spades,";
                break;}
                case 313:{
                cout<<"King of spades,";
                break;}
                case 314:{
                cout<<"Ace of spades,";
                break;}
                case 49:{
                cout<<"Nine of Clubs,";
                break;}
                case 410:{
                cout<<"Ten of Clubs,";
                break;}
                case 411:{
                cout<<"Jack of Clubs,";
                break;}
                case 412:{
                cout<<"Queen of Clubs,";
                break;}
                case 413:{
                cout<<"King of Clubs,";
                break;}
                case 414:{
                cout<<"Ace of Clubs,";
                break;}
                };
                switch (P1Cards[3]){
                case 19:{
                cout<<"Nine of Hearts,";
                break;}
                case 110:{
                cout<<"Ten of Hearts,";
                break;}
                case 111:{
                cout<<"Jack of Hearts,";
                break;}
                case 112:{
                cout<<"Queen of Hearts,";
                break;}
                case 113:{
                cout<<"King of Hearts,";
                break;}
                case 114:{
                cout<<"Ace of Hearts,";
                break;}
                case 29:{
                cout<<"Nine of Diamonds,";
                break;}
                case 210:{
                cout<<"Ten of Diamonds,";
                break;}
                case 211:{
                cout<<"Jack of Diamonds,";
                break;}
                case 212:{
                cout<<"Queen of Diamonds,";
                break;}
                case 213:{
                cout<<"King of Diamonds,";
                break;}
                case 214:{
                cout<<"Ace of Diamonds,";
                break;}
                case 39:{
                cout<<"Nine of spades,";
                break;}
                case 310:{
                cout<<"Ten of spades,";
                break;}
                case 311:{
                cout<<"Jack of spades,";
                break;}
                case 312:{
                cout<<"Queen of spades,";
                break;}
                case 313:{
                cout<<"King of spades,";
                break;}
                case 314:{
                cout<<"Ace of spades,";
                break;}
                case 49:{
                cout<<"Nine of Clubs,";
                break;}
                case 410:{
                cout<<"Ten of Clubs,";
                break;}
                case 411:{
                cout<<"Jack of Clubs,";
                break;}
                case 412:{
                cout<<"Queen of Clubs,";
                break;}
                case 413:{
                cout<<"King of Clubs,";
                break;}
                case 414:{
                cout<<"Ace of Clubs,";
                break;}
                };
                switch (P1Cards[4]){
                case 19:{
                cout<<"Nine of Hearts,";
                break;}
                case 110:{
                cout<<"Ten of Hearts,";
                break;}
                case 111:{
                cout<<"Jack of Hearts,";
                break;}
                case 112:{
                cout<<"Queen of Hearts,";
                break;}
                case 113:{
                cout<<"King of Hearts,";
                break;}
                case 114:{
                cout<<"Ace of Hearts,";
                break;}
                case 29:{
                cout<<"Nine of Diamonds,";
                break;}
                case 210:{
                cout<<"Ten of Diamonds,";
                break;}
                case 211:{
                cout<<"Jack of Diamonds,";
                break;}
                case 212:{
                cout<<"Queen of Diamonds,";
                break;}
                case 213:{
                cout<<"King of Diamonds,";
                break;}
                case 214:{
                cout<<"Ace of Diamonds,";
                break;}
                case 39:{
                cout<<"Nine of spades,";
                break;}
                case 310:{
                cout<<"Ten of spades,";
                break;}
                case 311:{
                cout<<"Jack of spades,";
                break;}
                case 312:{
                cout<<"Queen of spades,";
                break;}
                case 313:{
                cout<<"King of spades,";
                break;}
                case 314:{
                cout<<"Ace of spades,";
                break;}
                case 49:{
                cout<<"Nine of Clubs,";
                break;}
                case 410:{
                cout<<"Ten of Clubs,";
                break;}
                case 411:{
                cout<<"Jack of Clubs,";
                break;}
                case 412:{
                cout<<"Queen of Clubs,";
                break;}
                case 413:{
                cout<<"King of Clubs,";
                break;}
                case 414:{
                cout<<"Ace of Clubs,";
                break;}
                };
                switch (P1Cards[5]){
                case 19:{
                cout<<"Nine of Hearts,";
                break;}
                case 110:{
                cout<<"Ten of Hearts,";
                break;}
                case 111:{
                cout<<"Jack of Hearts,";
                break;}
                case 112:{
                cout<<"Queen of Hearts,";
                break;}
                case 113:{
                cout<<"King of Hearts,";
                break;}
                case 114:{
                cout<<"Ace of Hearts,";
                break;}
                case 29:{
                cout<<"Nine of Diamonds,";
                break;}
                case 210:{
                cout<<"Ten of Diamonds,";
                break;}
                case 211:{
                cout<<"Jack of Diamonds,";
                break;}
                case 212:{
                cout<<"Queen of Diamonds,";
                break;}
                case 213:{
                cout<<"King of Diamonds,";
                break;}
                case 214:{
                cout<<"Ace of Diamonds,";
                break;}
                case 39:{
                cout<<"Nine of spades,";
                break;}
                case 310:{
                cout<<"Ten of spades,";
                break;}
                case 311:{
                cout<<"Jack of spades,";
                break;}
                case 312:{
                cout<<"Queen of spades,";
                break;}
                case 313:{
                cout<<"King of spades,";
                break;}
                case 314:{
                cout<<"Ace of spades,";
                break;}
                case 49:{
                cout<<"Nine of Clubs,";
                break;}
                case 410:{
                cout<<"Ten of Clubs,";
                break;}
                case 411:{
                cout<<"Jack of Clubs,";
                break;}
                case 412:{
                cout<<"Queen of Clubs,";
                break;}
                case 413:{
                cout<<"King of Clubs,";
                break;}
                case 414:{
                cout<<"Ace of Clubs,";
                break;}
                }
            }
        }
    }
#endif