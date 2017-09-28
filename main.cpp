#include <iostream>
using namespace std;
int main() {
int a,b;
char f,g;

    cin >> a>>f;
    if (f == '+'){cin>>b;
        cout<<a+b;}
    else if (f== '-'){cin>>b;cout<<a-b;}
    else if (f== '/'){cin>>b;cout<<(double)a/b;}
    else if (f== '*'){cin>>b;cout<<a*b;}
    else if (f== '%'){cin>>b;cout<<a%b;}
    else if (f== '|'){cin>>b;cout<<(a|b);}
    else if (f== '^'){cin>>b;cout<<(a^b);}
    else if (f== '&'){cin>>b;cout<<(a&b);}
    else if (f== '>'){cin>>g>>b;
    if (f==g){cout<<(a>>b);}
        else cout<<("Error!");}
    else if (f== '<'){{cin>>g>>b;
    if (f==g){cout<<(a<<b);}
        else{ cout<<("Error!");}}}
            return 0;

}
