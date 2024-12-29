class Solution {
public:
    bool isBalanced(string num) {
        int even=0,odd=0;
       for(int i=0;i<num.length();i++){
          int digit = num[i] - '0';
          if(i%2==0){
            even=even+digit;
          }
          else{
            odd=odd+digit;
          }
    }
    return even==odd;
    }
};