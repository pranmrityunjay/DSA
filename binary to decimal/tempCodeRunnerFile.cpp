#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    
    int num = 5;
    int ans = 0;
     int i = 0;
    while (num != 0)
    {
        int bit = num & 1;
        
        ans = (bit * pow(10, i)) + ans;
        

        num = num >> 1;
        i++;
    }
    cout << ans << endl;
}
