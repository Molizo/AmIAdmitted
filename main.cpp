#include <iostream>
#include <windows.h>

using namespace std;

int main()
{int a;
    cout << "Introduceti pozitia lui Radu:";
    cin>>a;
    system("cls");
    cout<<"Cititi urmatorul text:"<<endl<<endl;
    cout<<"Dupa ce Radu da examenul,se intoarce urmatoarea zi si secretara ii zice:"<<endl;
    if(a<=125)
    {
    cout<<"-Radu,ai fost admis."<<endl;
    cout<<"Radu ajunge acasa."<<endl;
    if(a/25==0||a%25==0)
    {
        cout<<"-Radu,tu in ce clasa ai intrat?"<<endl;
        cout<<"-In clasa a 5-a A."<<endl;
        cout<<"-Bravo.Uite,o bomboana!"<<endl;
    }
    if(a/25==1||a%25==0)
    {
        cout<<"-Radu,tu in ce clasa ai intrat?"<<endl;
        cout<<"-In clasa a 5-a B."<<endl;
        cout<<"-Bravo.Uite,o bomboana!"<<endl;
    }
    if(a/25==2||a%25==0)
    {
        cout<<"-Radu,tu in ce clasa ai intrat?"<<endl;
        cout<<"-In clasa a 5-a C."<<endl;
        cout<<"-Bravo.Uite,o bomboana!"<<endl;
    }
    if(a/25==3||a%25==0)
    {
        cout<<"-Radu,tu in ce clasa ai intrat?"<<endl;
        cout<<"-In clasa a 5-a D."<<endl;
        cout<<"-Bravo.Uite,o bomboana!"<<endl;
    }
    if(a/25==4||a%25==0)
    {
        cout<<"-Radu,tu in ce clasa ai intrat?"<<endl;
        cout<<"-In clasa a 5-a E."<<endl;
        cout<<"-Bravo.Uite,o bomboana!"<<endl;
    }
    }
    else
    {
        cout<<"-Ne pare rau,dar nu ai intrat."<<endl;
        cout<<"Radu ajunge acasa."<<endl;
        cout<<"-Radu,tu in ce clasa ai intrat?"<<endl;
        cout<<"-Nu am fost admis."<<endl;
        cout<<"-CEEEE?!TE OMOR!!!!!!!!"<<endl;
    }

    return 0;
}
