//
// Created by R6Mini on 2/2/2020.
//

#ifndef RANDOM_LOTTERY_H
#define RANDOM_LOTTERY_H


class Lottery {
private:
    int lotteryNumbers[5];
    int personlotpick[5];
public:
    Lottery();
    void personsLotteryPick();
    void compareArray();
};


#endif //RANDOM_LOTTERY_H
