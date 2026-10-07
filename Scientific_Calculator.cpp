#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int c,n;
    double a,b;
    cout<<"1. Addition\n";
    cout<<"2. Subtraction\n";
    cout<<"3. Multiplication\n";
    cout<<"4. Division\n";
    cout<<"5. Power\n";
    cout<<"6. Square Root\n";
    cout<<"7. Sin\n";
    cout<<"8. Cos\n";
    cout<<"9. Tan\n";
    cout<<"10. Log\n";
    cout<<"11. Natural Log\n";
    cout<<"12. Factorial\n";
    cout<<"13. Pi\n";
    cout<<"14. e\n";
    cout<<"Enter choice: ";
    cin>>c;
    switch(c){
        case 1:
            cin>>a>>b;
            cout<<"Result = "<<a+b;
            break;
        case 2:
            cin>>a>>b;
            cout<<"Result = "<<a-b;
            break;
        case 3:
            cin>>a>>b;
            cout<<"Result = "<<a*b;
            break;
        case 4:
            cin>>a>>b;
            if(b!=0)
                cout<<"Result = "<<a/b;
            else
                cout<<"Cannot divide by zero";
            break;
        case 5:
            cin>>a>>b;
            cout<<"Result = "<<pow(a,b);
            break;
        case 6:
            cin>>a;
            if(a>=0)
                cout<<"Result = "<<sqrt(a);
            else
                cout<<"Invalid number";
            break;
        case 7:
            cin>>a;
            cout<<"Result = "<<sin(a);
            break;
        case 8:
            cin>>a;
            cout<<"Result = "<<cos(a);
            break;
        case 9:
            cin>>a;
            cout<<"Result = "<<tan(a);
            break;
        case 10:
            cin>>a;
            if(a>0)
                cout<<"Result = "<<log10(a);
            else
                cout<<"Invalid number";
            break;
        case 11:
            cin>>a;
            if(a>0)
                cout<<"Result = "<<log(a);
            else
                cout<<"Invalid number";
            break;
        case 12:
            cin>>n;
            {
                long long f=1;
                if(n>=0){
                    for(int i=1;i<=n;i++)
                        f=f*i;

                    cout<<"Result = "<<f;
                }
                else
                    cout<<"Invalid number";
            }
            break;
        case 13:
            cout<<"Result = "<<M_PI;
            break;
        case 14:
            cout<<"Result = "<<M_E;
            break;
        default:
            cout<<"Invalid choice";
    }
    return 0;
}