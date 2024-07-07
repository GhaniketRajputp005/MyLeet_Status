class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int drink_bottles = 0, remBottles = 0;

        return numBottles + (numBottles - 1)/(numExchange - 1);
        // ========== O LOG(numBottles) ==============
        // while (numBottles) {

        //     drink_bottles += numBottles;

        //     remBottles = remBottles + numBottles % numExchange;

        //     numBottles /= numExchange;

        //     if (remBottles >= numExchange) {

        //         numBottles = numBottles + remBottles / numExchange;
        //         remBottles = remBottles % numExchange;

        //     }
            
        // }
        // return drink_bottles;
    }
};