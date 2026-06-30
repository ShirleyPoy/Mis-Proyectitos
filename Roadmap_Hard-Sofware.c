#include <stdio.h>
#include <stdlib.h>

int detectar_sistema() { // Para intentar saber en que sistema está corriendo xd
        ifdef _WIN32
                return 1;
        #elif __linux__
                return 2;
        #else
                return 3;
        #endif
}

void limpiar_pantalla(void) { // Una función para limpiar la stdout
        if (detectar_sistema() == 1) system("cls");
        else system("clear");
}

void limpiar_buffer(void) { // Para que el getchar funcione bien
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
}


/* --- Función principal --- */

int main(void) { // con void nomas para que sea robusto

        char opc_dis; // Más cómodo trababar con caracteres

        do {
                limpiar_pantalla();
                printf("Bienvenido a tu lista de Hardware.\n");
                printf("\nElige el dispositivo.\n"
                        "\t1. Laptop\n"
                        "\t2. Celular\n"
                        "\t3. Salir\n"
                        "\t> ");
                opc_dis = getchar(); if (opc_dis != '\n') limpiar_buffer(); // Capturamos y limpiamos el buffer para que el getchar de abajo funcione

                if (opc_dis == '3') break; /* Para salir al instante */

                /* En lugar de usar repetidas veces if, con switch-case es más limpio */
                switch (opc_dis) {
                        case '1':
                                printf("\nLaptop: HP ZBook 17 G1\n"
                                "\nCPU: Intel Core i7-4800MQ (2.7GHz)\n"
                                "GPU: Nvidia Quadro K4100M (4GB)\n"
                                "RAM: 32 GB DDR3\n"
                                "Hard Drives:\n\n"
                                "\tSSD SATA 477 GB\n"
                                "\t\tOS: Arch Linux\n\n"
                                "\tHDD 500GB\n";
                                break;
                        case '2':
                                printf("\nCelular: Samsung Galaxy A25 5G\n" // Yo tengo un A26 xd
                                "CPU: Exynos 1280 octa-core (2.4GHz)\n"
                                "GPU: Mali G68\n"
                                "RAM: 8GB\n"
                                "HD: 256 GB\n"
                                "\tOS: Android 16\n");
                                break;
                }

                printf("\n\nIntro para continuar, '3' para salir.\n");
                opc_dis = getchar(); if (opc_dis != '\n') limpiar_buffer(); // Lo mismo del getchar() de arriba

        } while (opc_dis != '3'); // Nomas porque me gusta usar do-while */

        return 0; // Indica que el programa terminó correctamente
}
// PD: es buena práctica documentar tus programas.
    return 0;
}
