/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
// int pick;
// int guess(int n){
//     if(n>pick){
//         return 1;
//     }
//     else if(n<pick){
//         return -1;
//     }
//     return 0;
// }
          int guessNumber(int n) {
        int l=0;
        int h=n;
        while(l<=h){
                    int m=l+(h-l)/2;

                    int pick=guess(m);

            if(pick==0){
                return m;
            }
            else if(pick>0){
                l=m+1;
            }
            else{
                h=m-1;
            }
        }
        return -1;
          }
          };














    //     int low = 1, high = n;
    //     while (low <= high) {
    //         int mid = low + (high - low) / 2;
    //         int res = guess(mid);
    //         if (res == 0) return mid;
    //         else if (res < 0) high = mid - 1;
    //         else low = mid + 1;
    //     }
    //     return -1;
    // }
    // };