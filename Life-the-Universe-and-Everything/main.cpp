#include <iostream>
using namespace std;

int main()
{
    int numbers[100];
    int i, j;
    for(i=0;i<100;i++){
        cin >> numbers[i];
        if(numbers[i] == 42)
            break;
    }
    cin >> numbers[i+1];
    cout << endl;
    for(j=0;j<i;j++){
        cout << numbers[j] << endl;
    }
    return 0;
}

/*
Input:
1
2
88
42
99

Output:
1
2
88
*/
