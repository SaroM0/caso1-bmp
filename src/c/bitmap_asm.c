#ifdef USE_ASM

typedef struct PALETARGB PALETARGB;


void convertir_a_grises(PALETARGB* paleta, int num_colores) {

    int i = 0;
    int gris = 0;

    asm volatile(
    #include "../asm/convertir_a_grises.inc"
        :
        :
        : "eax", "ecx", "edx", "esi", "cc", "memory"
    );

    (void)i; (void)gris;
}
#endif