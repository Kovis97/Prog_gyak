#include <iostream>
using namespace std;

struct csucs
{
    int ertek;
    int gyerekdb;
    lista *gyerekek;
};

struct lista
{
    csucs *level;
    lista *kov;
};

csucs∗ uj(int tipus, string tartalom)
{
    csucs∗ cs = new csucs;
    cs−> ertek = tipus;
    cs−> tartalom = tartalom;
    cs−> gyerekek = NULL;
    return cs;
}

int main()
{

    return 0;
}