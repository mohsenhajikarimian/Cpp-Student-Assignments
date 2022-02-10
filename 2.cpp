#include <iostream>

using namespace std;

int main()
{
    int i2, i5, i10, i20, i50, count = 1;
    long int sum;
    for (i2 = 0; i2 <= 50; i2++)
    {
        for (i5 = 0; i5 <= 20; i5++)
        {
            for (i10 = 0; i10 <= 10; i10++)
            {
                for (i20 = 0; i20 <= 5; i20++)
                {
                    for (i50 = 0; i50 <= 2; i50++)
                    {
                        sum = i2 * 2 + i5 * 5 + i10 * 10 + i20 * 20 + i50 * 50;
                        if (sum == 100)
                        {
                            cout << count << "       : " << i2 << " X 2 Rials     " << i5 << " X 5 Rials        " << i10 << " X 10 Rials      " << i20 << " X 20 Rials      " << i50 << " X 50 Rials" << endl;
                            count++;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
