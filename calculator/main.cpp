#include <iostream>

using namespace std;

int main()
{
  float num[2];
  int ctrl;
  int rpt=0;
  float x=0;
  char operand;
  char tpc;

  while (rpt==0){
  cout<<"Unesi vrijednosti i racunske operacije!"<<endl<<endl;
  for (ctrl=0; ctrl<1; ctrl++){
    cin>>num[ctrl];
    cin>>operand;
  }
  for (ctrl=1; ctrl<2; ctrl++){
    cin>>num[ctrl];
  }
        if (operand=='+'){
            x=num[0]+num[1];
        }
        if (operand=='-'){
            x=num[0]-num[1];
        }
        if (operand=='*'){
            x=num[0]*num[1];
        }
        if (operand=='/'){
            x=num[0]/num[1];
        }

        cout<<x<<endl;
        string kraj = "Da li zelite ponoviti unos y/n";
        cout<<kraj<<endl;
        cin>>tpc;
        cout<<"_________________________________________________"<<endl<<endl<<endl<<endl;

        if (tpc=='y'){
            rpt=0;
        }
        else if (tpc=='n'){
            rpt=1;
            cout<<"KRAJ!"<<endl;
        }
        else
            cout<<"GRESKA"<<endl;
  }

  return 0;
}
