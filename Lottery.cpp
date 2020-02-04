//
// Created by R6Mini on 2/2/2020.
//

#include "Lottery.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


Lottery::Lottery() {
    lotteryNumbers[5] = {};
    personlotpick[5] = {};

    for (int i = 0; i < 5 ; ++i) {
        lotteryNumbers[i] = rand() % 10;
        cout << lotteryNumbers[i] << endl;
    }
}
void Lottery::personsLotteryPick() {
    cout << "enter your 5 lottery numbers" << endl;
    for (int i = 0; i < 5 ; ++i) {
       cin >> personlotpick[i];
    }
}
void Lottery::compareArray(){
    for (int i = 0; i <5 ; ++i) {
        if(lotteryNumbers[i] == personlotpick[i]){
            cout << "element " << i << "are the same number" << endl;
        }
    }

}