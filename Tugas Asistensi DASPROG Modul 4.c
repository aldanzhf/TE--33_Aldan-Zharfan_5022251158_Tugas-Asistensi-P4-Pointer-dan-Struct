#include <stdio.h>
struct Hitbox {
    float x;  // posisi X (kiri atas)
    float y;  // posisi Y (kiri atas)
    float w;  // lebar
    float h;  // tinggi
};

// Fungsi untuk mengecek apakah dua hitbox bertabrakan (menggunakan pointer)
int cekTabrakan(struct Hitbox *a, struct Hitbox *b) {
    if (a->x < b->x + b->w &&
        a->x + a->w > b->x &&
        a->y < b->y + b->h &&
        a->y + a->h > b->y) {
        return 1; // Tabrakan terjadi
    }
    return 0; // Tidak bertabrakan
}

int main() {
    // Deklarasi dua hitbox menggunakan struct
    struct Hitbox player;
    struct Hitbox musuh;

    // Pointer ke masing-masing struct
    struct Hitbox *ptrPlayer = &player;
    struct Hitbox *ptrMusuh = &musuh;

    printf("=== Sistem Hitbox Sederhana ===\n");

    // Input data hitbox player
    printf("\nMasukkan data hitbox Player:\n");
    printf("Posisi X: "); scanf("%f", &ptrPlayer->x);
    printf("Posisi Y: "); scanf("%f", &ptrPlayer->y);
    printf("Lebar: ");    scanf("%f", &ptrPlayer->w);
    printf("Tinggi: ");   scanf("%f", &ptrPlayer->h);

    // Input data hitbox musuh
    printf("\nMasukkan data hitbox Musuh:\n");
    printf("Posisi X: "); scanf("%f", &ptrMusuh->x);
    printf("Posisi Y: "); scanf("%f", &ptrMusuh->y);
    printf("Lebar: ");    scanf("%f", &ptrMusuh->w);
    printf("Tinggi: ");   scanf("%f", &ptrMusuh->h);

    // Mengecek tabrakan menggunakan pointer
    if (cekTabrakan(ptrPlayer, ptrMusuh)) {
        printf("\n>>> Player dan Musuh BERTABRAKAN! <<<\n");
    } else {
        printf("\n>>> Player dan Musuh TIDAK bertabrakan. <<<\n");
    }

    return 0;
}
