#ifndef CharacterCreator_H
#define CharacterCreator_H

#include <iostream>

using namespace std;

    void PERSONALITY() {
        cout<<"Welcome to the P.E.R.S.O.N.A.L.I.T.Y Customizer!"<<endl;
        string personal = "Here, you will customize the";
        
        personal += '\n';
        personal += "Points of health,";
        personal += '\n';
        personal += "Exhaustion,";
        personal += '\n'; 
        personal += "Risk Factor,";
        personal += '\n'; 
        personal += "SPECIAL,";
        personal += '\n';
        personal += "Occupation,";
        personal += '\n';
        personal += "Name,";
        personal += '\n';
        personal += "Appearance,";
        personal += '\n';
        personal += "Loyalty, and";
        personal += '\n';
        personal += "InvenTorY aspects!"; 

        cout<<personal<<endl;
        int SPECIALpts = 21;
        string SPECIALadj;
        int SPECIALarr [7];
        SPECIALarr [0] = 1; /*Str*/
        SPECIALarr [1] = 1; /*Per*/
        SPECIALarr [2] = 1; /*End*/
        SPECIALarr [3] = 1; /*Cha*/
        SPECIALarr [4] = 1; /*Int*/
        SPECIALarr [5] = 1; /*Agi*/
        SPECIALarr [6] = 1; /*Luc*/
        cout<<"The first thing we will customize is SPECIAL. SPECIAL stands for Strength,Perception,Endurance,Charisma,Agility,and Luck!"<<endl;
        cout<<"You have 21 points to increase each SPECIAL score. The number you set will be your chance out of ten attempts to suceed. Let's Begin!"<<endl;
        cout<<"To adjust, type STR,PER,END,CHA,INT,AGI,LUC +/- accordingly. EX: STR+1"<<endl;
        cin>>SPECIALadj;

        if(SPECIALadj == "STR+1" && SPECIALarr [0] +1 < 10){
            SPECIALarr [0] +=1;
            SPECIALpts -=1;
            cout<<"Your STR attribute is now:"<<endl;
            cout<<SPECIALarr [0];}
        else if(SPECIALadj == "STR-1" && SPECIALarr [0] -1 > 0){
            SPECIALarr [0] -=1;
            SPECIALpts +=1;
            cout<<"Your STR attribute is now:"<<endl;
            cout<<SPECIALarr [0];
        }
        else if(SPECIALadj == "PER+1" && SPECIALarr [1] +1 < 10){
            SPECIALarr [1] +=1;
            SPECIALpts -=1;
            cout<<"Your Perception attribute is now:"<<endl;
            cout<<SPECIALarr [1];}
        else if(SPECIALadj == "PER-1" && SPECIALarr [1] -1 > 0){
            SPECIALarr [1] -=1;
            SPECIALpts +=1;
            cout<<"Your Perception attribute is now:"<<endl;
            cout<<SPECIALarr [1];
        }
        else if(SPECIALadj == "END+1" && SPECIALarr [2] +1 < 10){
            SPECIALarr [2] +=1;
            SPECIALpts -=1;}
        else if(SPECIALadj == "END-1" && SPECIALarr [2] -1 > 0){
            SPECIALpts +=1;
            SPECIALarr [2] -=1;
        }
        else if(SPECIALadj == "CHA+1" && SPECIALarr [3] +1 < 10){
            SPECIALarr [3] +=1;
            SPECIALpts -=1;}
        else if(SPECIALadj == "CHA-1" && SPECIALarr [3] -1 > 0){
            SPECIALarr [3] -=1;
            SPECIALpts +=1;
        }
        else if(SPECIALadj == "INT+1" && SPECIALarr [4] +1 < 10){
            SPECIALarr [4] +=1;}
        else if(SPECIALadj == "INT-1" && SPECIALarr [4] -1 > 0){
            SPECIALarr [4] -=1;
        }
        else if(SPECIALadj == "AGI+1" && SPECIALarr [5] +1 < 10){
            SPECIALarr [5] +=1;}
        else if(SPECIALadj == "AGI-1" && SPECIALarr [5] -1 > 0){
            SPECIALarr [5] -=1;
        }
        else if(SPECIALadj == "LUC+1" && SPECIALarr [6] +1 < 10){
            SPECIALarr [6] +=1;}
        else if(SPECIALadj == "LUC-1" && SPECIALarr [6] -1 > 0){
            SPECIALarr [6] -=1;
        }
        else if(SPECIALadj == "STR+2" && SPECIALarr [0] +2 < 10){
            SPECIALarr [0] +=2;
            cout<<"Your STR attribute is now:"<<endl;
            cout<<SPECIALarr [0];}
        else if(SPECIALadj == "STR-2" && SPECIALarr [0] -2 > 0){
            SPECIALarr [0] -=2;
            cout<<"Your STR attribute is now:"<<endl;
            cout<<SPECIALarr [0];
        }
        else if(SPECIALadj == "PER+2" && SPECIALarr [2] +2 < 10){
            SPECIALarr [1] +=2;
            cout<<"Your Perception attribute is now:"<<endl;
            cout<<SPECIALarr [1];}
        else if(SPECIALadj == "PER-2" && SPECIALarr [2] -2 > 0){
            SPECIALarr [1] -=2;
            cout<<"Your Perception attribute is now:"<<endl;
            cout<<SPECIALarr [1];
        }
        else if(SPECIALadj == "END+2" && SPECIALarr [2] +2 < 10){
            SPECIALarr [2] +=2;}
        else if(SPECIALadj == "END-2" && SPECIALarr [2] -2 > 0){
            SPECIALarr [2] -=2;
        }
        else if(SPECIALadj == "CHA+2" && SPECIALarr [3] +2 < 10){
            SPECIALarr [3] +=2;}
        else if(SPECIALadj == "CHA-2" && SPECIALarr [3] -2 > 0){
            SPECIALarr [3] -=2;
        }
        else if(SPECIALadj == "INT+2" && SPECIALarr [4] +2 < 10){
            SPECIALarr [4] +=2;}
        else if(SPECIALadj == "INT-2" && SPECIALarr [4] -2 > 0){
            SPECIALarr [4] -=2;
        }
        else if(SPECIALadj == "AGI+2" && SPECIALarr [5] +2 < 10){
            SPECIALarr [5] +=2;}
        else if(SPECIALadj == "AGI-2" && SPECIALarr [5] -2 > 0){
            SPECIALarr [5] -=2;
        }
        else if(SPECIALadj == "LUC+2" && SPECIALarr [6] +2 < 10){
            SPECIALarr [6] +=2;}
        else if(SPECIALadj == "LUC-2" && SPECIALarr [6] -2 > 0){
            SPECIALarr [6] -=2;
    }
 }
 
#endif
