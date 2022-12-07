// name : Raana ayman
//problem 4  code for generating all possibilities of traffic light
#include <iostream>
using namespace std;
void printAlllightsrec(char set[], string p, int n, int stops)
{
    if (stops == 0)
    {
        cout << (p) << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string newP;
        newP = p + set[i];
        printAlllightsrec(set, newP, n, stops - 1);
    }
}
void printAlllights(char set[], int stops,int n)
{
    printAlllightsrec(set, "", n, stops);
}
int main()
{
// int n = numbers of light
    cout << "First Test" << endl;
    char set1[] = {'G', 'R', 'Y'};
    int stops = 3;
    printAlllights(set1, stops, 3);

    cout << "Second Test\n";
    char set2[] = {'G', 'R', 'Y'};
    stops = 1;
    printAlllights(set2, stops, 3);

    cout << "third Test\n";
    char set3[] = {'G', 'R', 'Y'};
    stops = 2;
    printAlllights(set2, stops, 3);
}

