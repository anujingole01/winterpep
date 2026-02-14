string isHalfPalindrome(const string& s){
// add your code here
int n = s.length();

int len = ( n % 2 == 0) ? n / 2 : (n / 2) + 1;
string half = s.substr(0, len);

int i = 0, j = half.length() - 1;
while (i < j) {
    if (half[i] != half[j])
    return "NO";
    i++;
    j--;
}
return "YES";
}