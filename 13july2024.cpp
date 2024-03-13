#pragma GCC optimize("O3", "unroll-loops")
class Solution {
public:
    int pivotInteger(int n) {
        int leftValv = 1;
        int rightValv = n;

        int left = leftValv;
        int right = rightValv;

        if(n == 1) return 1;

        while(leftValv < rightValv){
            if(left < right){
                leftValv++;
                left += leftValv;
            }

            else{
                rightValv--;
                right += rightValv;
            }

            if(left == right && leftValv +1 == rightValv - 1){
                return leftValv + 1;
            }
        }

        return -1;
    }
};