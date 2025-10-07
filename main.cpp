#include <iostream>
#include <vector>
#include <algorithm>

unsigned __int128 fib(std::vector<unsigned __int128> &F){
    for (int i = 0; i < 186; i++){
            F.push_back(F[0] + F[1]);
            F.erase(F.begin());
    }
    F.erase(F.begin());
    return F[0];
}
std::string uint128_to_string(unsigned __int128 n) {
    if (n == 0) {
        return "0";
    }
    std::string s = "";
    while (n > 0) {
        s += (n % 10) + '0';
        n /= 10;
    }
    std::reverse(s.begin(), s.end());
    return s;
}
int main(){
    std::vector<unsigned __int128> F = {0, 1};
    fib(F);
    std::cout << uint128_to_string(F[0]) << std::endl;
}
