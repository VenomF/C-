#include <iostream>

using namespace std;
int a, n;
int sredina(int a[]){

    int sum=0;
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }

    int mid=sum/n;

    return mid;
}
int art;

int manjibroj(a[100000000000], n, art){

    int lesser_num;
    int sum;
    for(int i=0; i<n; i++){
        if(a[i]<art){
            sum=sum+a[i];
            lesser_num++;//number of array members with value less than average
        }
        int srt=sum/lesser_num;

        return srt;
    }
}

int main(){
    cout<<"Unesite broj clanova niza."<<endl;
    cin>>n;
    cout<<"Unesirite clanove niza."<<endl;
    int niz[n];
    for (int i=0; i<n; i++){
         cin>>niz[i];
    }
    sredina(niz[], n);
    manjibroj(niz[], n, mid);

    cout<<"Aritmeticka sredina svih clanova niza je: "<<mid<<endl;
    cout<<"Aritmeticka sredina clanova niza koji su manji od aritmeticke sredine niza iznosi: "<<srt<<endl;

    return 0;

}
