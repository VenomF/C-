#include <iostream>

using namespace std;

int main()
{
    int num, a, b, c, sum;
    int ctrl=1;

    while (ctrl>0){
    cout<<"Unesite trocifren broj"<<endl;
    cin>>num;

    if (num/100==0 || num/100>10){
        cout<<"Niste unijeli TROCIFREN broj!";
        ctrl++;    }

        else {
            ctrl=0;

            a=num/100;
            b=(num-a*100)/10;
            c=num-a*100-b*10;

            if(a>b && a>c){
                if (b>c)
                    sum=num;
                if (c>b)
                    sum=a*100+c*10+b;
            }
            else if(b>a && b>c){
                if (a>c)
                    sum=b*100+a*1+c;
                if (a<c)
                    sum=b*100+c*10+a;
            }
            else if(c>a && c>b){
                if (a>b)
                    sum=c*100+a*10+b;
                if (b>a)
                    sum=c*100+b*10+a;
            }
            cout<<"Najveci moguci broj sa datim ciframa je: "<<sum<<endl;
        }
    }

}
