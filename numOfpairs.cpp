#include <iostream>
#include <unordered_map>

using namespace std;
int numOfPairs(int n, int sizesArr[])
{
    unordered_map<int, int> numOfShoes;
    int numberOfPairs = 0;
    for (int i = 0; i < n; i++)
    {
        if (numOfShoes[sizesArr[i]])
        {
            numOfShoes[sizesArr[i]]++;
        }
        else
        {
            numOfShoes[sizesArr[i]] = 1;
        }
        numberOfPairs += numOfShoes[sizesArr[i]] / 2;
        numOfShoes[sizesArr[i]] %= 2;
    }
    return numberOfPairs;
}
int main()
{
    int n = 10;
    cout << "Please, enter number of shoes" << endl;
    cin >> n;
    int shoes[n];
    cout << "Please, enter shoes size" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> shoes[i];
    }
    cout << "number of pairs = " << numOfPairs(n, shoes) << endl;
    return 0;
}