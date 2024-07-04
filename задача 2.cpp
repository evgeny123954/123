 #include <iostream>
 #include <string>
using namespace std;
int main()
{string input;
cout<<"Vvedite stroku";
getline(cin,input);
cout<<"vi vveli"<<input<<endl;
int len=input.length();
cout<<"chiclo="<<len<<endl;
return 0;
}