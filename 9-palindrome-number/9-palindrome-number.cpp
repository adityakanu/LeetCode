class Solution {
public:
    bool isPalindrome(int x) {

        //inspired by leetcode official solution

        //Here we are comparing first half of the number
        //with the reverse of the second half of the number


        //edge case of negative number and zero
        if (x<0 || (x % 10 == 0 && x != 0)){
            return false;
        }

        //make half
        int reverseInteger = 0;
        while (x>reverseInteger){
            reverseInteger = reverseInteger * 10 + (x % 10);
            x /= 10;
        }

        //for odd numbers the middle can be ignore by doing another reverseInteger%10

        return x == reverseInteger || x == reverseInteger / 10;


        // This solution uses an extra constant space
        // string l = to_string(x); 
        
        // int n=l.length();

        // for(int i=0; i<n; i++){
        //     if (l[i]==l[n-i-1]){
        //         continue;
        //     }
        //     else{
        //         return false;
        //         break;
        //     }
        // }
        // return true;
    }   
};