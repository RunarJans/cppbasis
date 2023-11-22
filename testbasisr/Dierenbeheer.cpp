
#include "Vogel.h"
#include "Zoogdier.h"
#include <iostream>

int main() {
    Zoogdier leeuw;
    Zoogdier aap;
    Vogel papegaai;
    Vogel duif;

    leeuw.geluidMaken();
    aap.geluidMaken();
    papegaai.geluidMaken();
    duif.geluidMaken();

    return 0;
}
