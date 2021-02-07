#include<iostream>
using namespace std;

int main(){
    int T,a,b,count_a,count_b,counter,i=1;
    cin>>T;
        while(T--){
                counter = 0;
            cin>>a>>b;
            count_a = (a-1)/3*2;
            if((a-1)%3==2)
                count_a++;
            count_b = b/3*2;
            if(b%3==2)
                count_b++;
            counter = count_b - count_a;
            cout<<"Case "<<i<<": "<<counter<<endl;
            i++;
        }
        return 0;

    }

