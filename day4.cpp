// Convert the string to atoi
class Solution {
public:
int myAtoi(string s) {
    if(s.size() == 0)
        return 0;
    int i=0; int sign=1;
    int n  = s.size();
    while(i<n && s[i] == ' ')   // check for trailing whitespaces
        i++;
    
    if(i==n)    
        return 0;
    
    if(s[i]=='-')   //note the sign if any
    {
        sign = 0;
        i++;
    }
    else if(s[i]=='+')
        i++;
    
    long int output=0;
    while(i<n && s[i]>='0' && s[i]<='9')   //Take care that the char is a digit otherwise break out of while
    {
        output = output*10;
        if(output>= INT_MAX)  //out of bounds then break
            {cout<<output<<endl;
            break;}
        output = output + (s[i] - '0');
        i++;
    }
    
    if(sign==0)
        output = -1*output;
		
    //after final computation of o/p check if its in range
    if(output <= INT_MIN)
        return INT_MIN;
    else if(output >= INT_MAX)
        return INT_MAX;
    
    return (int)output;
}
};