#include <stdio.h>
struct Hitbox {
    float x;  
    float y;  
    float w;  
    float h;  
};
int cekTabrakan(struct Hitbox *a, struct Hitbox *b) {
    if (a->x < b->x + b->w &&
        a->x + a->w > b->x &&
        a->y < b->y + b->h &&
        a->y + a->h > b->y) {
        return 1; 
    }
    return 0; 
}

int main() {
    struct Hitbox player;
    struct Hitbox musuh;

    struct Hitbox *ptrPlayer = &player;
    struct Hitbox *ptrMusuh = &musuh;

    printf("=== Sistem Hitbox Sederhana ===\n");
    printf("\nMasukkan data hitbox Player:\n");
    printf("Posisi X: "); scanf("%f", &ptrPlayer->x);
    printf("Posisi Y: "); scanf("%f", &ptrPlayer->y);
    printf("Lebar: ");    scanf("%f", &ptrPlayer->w);
    printf("Tinggi: ");   scanf("%f", &ptrPlayer->h);

    printf("\nMasukkan data hitbox Musuh:\n");
    printf("Posisi X: "); scanf("%f", &ptrMusuh->x);
    printf("Posisi Y: "); scanf("%f", &ptrMusuh->y);
    printf("Lebar: ");    scanf("%f", &ptrMusuh->w);
    printf("Tinggi: ");   scanf("%f", &ptrMusuh->h);

    if (cekTabrakan(ptrPlayer, ptrMusuh)) {
        printf("\n>>> Player dan Musuh BERTABRAKAN! <<<\n");
    } else {
        printf("\n>>> Player dan Musuh TIDAK bertabrakan. <<<\n");
    }

    return 0;
}
