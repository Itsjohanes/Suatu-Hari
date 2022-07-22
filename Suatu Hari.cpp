#include <iostream>
#include <iterator>
#include <set>

using namespace std;
int main()
{
    set<int>s1;
    int n;
    int i;
    int inputan;
    int sum = 0;
    scanf("%d",&n);
    for(i = 0;i<n;i++)
    {
        scanf("%d",&inputan);
        s1.insert(inputan);
    }

    for (int i : s1)
    {
      sum += i;
    }
    printf("%d",sum);

}
