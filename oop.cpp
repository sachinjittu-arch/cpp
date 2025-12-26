#include<iostream>
using namespace std;
class player{
    public:
    int score;
    int health;
};
int main(){

    player sachin;
    sachin.score=37642876;
    sachin.health=944;
    cout<<sachin.score<<endl;
    cout<<sachin.health<<endl;

}