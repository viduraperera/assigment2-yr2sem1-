#include <iostream>
#include "Lottery.h"

using namespace std;

int main() {
    Lottery *a;
    a = new Lottery();


    a->personsLotteryPick();
    a->compareArray();
    delete a;
    return 0;
}