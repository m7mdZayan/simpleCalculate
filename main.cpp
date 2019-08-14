#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c,c1,u,u1;
    float p,p1,s1,s2,sal;
    cin >> c >> u >> p;
    cin >> c1 >> u1 >> p1;
    s1 = u * p;
    s2 = u1 * p1;
    sal = s1 + s2;
    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << sal << endl;


    return 0;
}
