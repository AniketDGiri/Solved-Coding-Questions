#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isprime(int x){
for(int i=2;i<=sqrt(x);i++){
    if(x%i==0){
        return false;
    }

}
return true;
}

int next(int i){
i++;
while(!isprime(i)){
    i++;
}

return i;

}



void calculate(int n){

for(int i=2;i<=(n-i);i=next(i)){

    if(isprime(n-i)){
        cout<<"Numbers are:"<<i<<"+"<<(n-i)<<"="<<n<<endl;
    }
}

}


int main(){


int n;
cout<<"Enter  the Number:";
cin>>n;

calculate(n);
return 0;
}

