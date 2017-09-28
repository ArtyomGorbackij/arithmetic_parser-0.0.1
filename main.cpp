#include <iostream>
using namespace std;
int main() {
int a,b;
char f,g;

    cin >> a>>f>>b;
    if (f == '+'){cout<<a+b;}
    else if (f== '-'){cout<<a-b;}
    else if (f== '/'){cout<<(double)a/b;}
    else if (f== '*'){cout<<a*b;}
    else if (f== '%'){cout<<a%b;}
    else if (f== '|'){cout<<(a|b);}
    else if (f== '^'){cout<<(a^b);}
    else if (f== '&'){cout<<(a&b);}
    else if (f== '>'){cin>>g;
    if (f==g){cout<<(a>>b);}}
    else if (f== '<'){{cin>>g;
    if (f==g){cout<<(a<<b);}}}
            return 0;

}
