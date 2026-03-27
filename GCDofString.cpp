// 1071. Greatest Common Divisor of Strings
// For two strings s and t, we say "t divides s" if and only if s = t + t + t + ... + t + t 
// (i.e., t is concatenated with itself one or more times).
// Given two strings str1 and str2, return the largest string x such that x divides both str1 and str2.

// 技巧:
// GCD要想到 string a+b=b+a  然後再找兩個的長度的公因數就好
// 輾轉相除法最核心的操作：「上一輪的除數」變成「這一輪的被除數」，而上一輪的餘數變成這一輪的除數


// continue 只能用在 for 或 while 迴圈內!!
class Solution {
public:
    string gcdOfStrings(string str1, string str2) {

        int n=str1.length();
        int m=str2.length();
        string result;

        if(n==0||m==0) return {};
      
        // 如果兩個對掉不一樣那就不對
        if((str1+str2)!=(str2+str1)) return {};

        // 直接叫就好XD
        int gcdNum=gcd(n,m);

        // 也可以用substr(=,gcdNum)
        for(int i=0;i<gcdNum;i++){
            result+=str1[i];
        }
        return result;
    }
};
