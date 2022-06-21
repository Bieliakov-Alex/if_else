#include <cstdlib>
#include <iostream>

bool true_function(){
    return true;
}

int main(){

    //побитовые сдвиги
    unsigned int op1 = 4;
    op1=op1>>1;
    //op1>>=1;
    //0100
    //0010
    std::cout<<"op1="<<op1<<std::endl;

    op1=op1<<1;
    //op1<<=1;
    //0010
    //0100
    std::cout<<"op1="<<op1<<std::endl;

    //<<= >>=


    //1.0 -> 0.999999999999999999999999999999999999999999999 1.0000000000000000000000000000000000000000000001
    double a = 1.0;
    double b = 1.0;

    //...

    // Проверить, равно a и b

    // bad way. Don't do this
    if(a==b){
        std::cout<<"a == b"<<std::endl;
    }
    else{
        std::cout<<"a!=b"<<std::endl;
    }

    double epsilon = 0.0001;

    if(std::abs(a-b) < epsilon){
        std::cout<<"a == b"<<std::endl;
    }
    else{
        std::cout<<"a!=b"<<std::endl;
    }

    if(std::abs(a-b) < epsilon*std::abs(a)){
        std::cout<<"a == b"<<std::endl;
    }
    else{
        std::cout<<"a!=b"<<std::endl;
    }

    // ? :

    if(op1>0){
        std::cout<<"op1 is positive"<<std::endl;
    }
    else{
        std::cout<<"op1 is negative"<<std::endl;
    }

    std::cout<<"op1 is "<<(op1>0?"positive":"negative")<<std::endl;

    //if(true_function()==true){
    if(true_function()){
        std::cout<<"True"<<std::endl;
    }
    else{
        std::cout<<"False"<<std::endl;
    }

    //bad example

    char little_char = 'a';
    char result_char = '-';

    if(little_char == 'a'){
        result_char = 'A';
    }
    else if(little_char == 'b'){
        result_char = 'B';
    }
    //...

    switch(little_char){
        case 'a': result_char = 'A'; break;
        case 'b': result_char = 'B'; break;
        default: result_char = '-';
    }

    std::cout<<"result_char: "<<result_char<<std::endl;

    // while, do while, for

    /*int i = 0;
    for(;;){
        if(i < 10){
        std::cout<<i<<std::endl;
        }
        else{
            break;
        }
        ++i;
    }*/

    int i = 0;
    while(i<10){
        std::cout<<i<<std::endl;
        ++i;
    }

    return 0;
}
