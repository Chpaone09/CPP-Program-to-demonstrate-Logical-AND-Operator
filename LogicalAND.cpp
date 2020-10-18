/*
***********************************************************

Topic   : Program to demonstrate Logical AND ( && ) Operator in cpp.
Author  : Chpaone09®
Date    : Oct 19, 2020

************************************************************
*/

#include <iostream>
using namespace std;

int main() {
    
        bool a = true;
        bool b = true;
        bool c = false;
        bool d = false;

        if(a && b){
            cout<<"\n\n\t Both A and B are True. ";
        }

        if(a && c){
            cout<<"\n\n\t A is True and C is False. ";
        }

        if(b && c){
            cout<<"\n\n\t B is True and C is False. ";
        }

        if(c && d){
            cout<<"\n\n\t Both C and D are FALSE. ";
        }



    }

