#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main (){

    int score[] {100, 45,39};

    cout<< "value of the first element address of the array score"<< score << endl;
    cout << "value of the first element of the array score"<< *score<<endl;

    int *score_ptr{score}; //since the value of the array is already the address of the first element we donot use &

    cout<< "value of the score pointer"<< score_ptr<<endl;

    cout<<*score_ptr<<endl;

    //arrays and pointers can be used interchangeably
    //array subscript notation
    cout<<score[0]<<endl;
    cout<<score[1]<<endl;
    cout<<score[2]<<endl;

    //pointer subscript notation
    cout<<score_ptr[0]<<endl;
    cout<<score_ptr[1]<<endl;
    cout<<score_ptr[2]<<endl;

    //pointer offset notation
    cout<<"value of the score pointer in offset notation "<< *score_ptr<<endl;
    cout<<"value of the next element of the score pointer in offset notation "<< *(score_ptr +1)<<endl;
    cout<<"value of the next element of the score pointer in offset notation "<< *(score_ptr +2)<<endl;

    //array offset notation
    cout<<"value of the score pointer in offset notation "<< *score<<endl;
    cout<<"value of the next element of the score pointer in offset notation "<< *(score +1)<<endl;
    cout<<"value of the next element of the score pointer in offset notation "<< *(score +2)<<endl;


    cout<<endl;
    return 0;

}