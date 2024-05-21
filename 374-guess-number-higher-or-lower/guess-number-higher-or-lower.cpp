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
    int guessNumber(int n) {
        int left=0;int right=n;
        while(left<=right)
        {
            int m=left+((right-left)/2);
            int ans=guess(m);
            if(ans==0)
            {return m;}
            else if(ans == -1)
            {right=m-1;}
            else
            {left=m+1;}
        }
        return -1;
    }
};