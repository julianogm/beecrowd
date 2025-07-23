#include <bits/stdc++.h>

using namespace std;

bool substring(char mae[], char filho[], int a, int b)
{
    if (b == 0) return true;
    if (a == 0) return false;

    if (mae[a-1] == filho[b-1]){
        return substring(mae, filho, a-1, b-1);
    }

    return substring(mae, filho, a-1, b);
}

int main()
{
    char mae[100005];
    char filho[105];
    int n,q;
    cin >> n;

    while(n>0){
        cin >> mae;
        cin >> q;

        while(q>0){
        cin >> filho;
        substring(mae, filho, strlen(mae), strlen(filho))? cout << "Yes": cout << "No";
        cout << endl;
        q--;
        }
        n--;
    }
}
