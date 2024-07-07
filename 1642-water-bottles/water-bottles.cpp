class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {

        int drink_bottles = 0, remBottles = 0;

        while (numBottles) {

            drink_bottles += numBottles;

            remBottles = remBottles + numBottles % numExchange;

            numBottles /= numExchange;

            if (remBottles >= numExchange) {

                numBottles = numBottles + remBottles / numExchange;
                remBottles = remBottles % numExchange;

            }
            
        }
        return drink_bottles;
    }
};