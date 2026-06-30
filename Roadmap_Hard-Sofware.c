#include <stdio.h>

int main() {

    int opc_dis = 0;

    printf("Bienvenido a tu lista de Hardware.\n");

    while (opc_dis != 1 && opc_dis != 2)
    {
        printf("\nElige el dispositivo.\n"
               "\n1. Laptop\n"
               "\n2. Celular\n\n"
               "> ");
        scanf("%i", &opc_dis);

        if (opc_dis == 1)
        {
            printf("\nLaptop: HP ZBook 17 G1\n"
                   "\nCPU: Intel Core i7-4800MQ (2.7GHz)\n"
                   "GPU: Nvidia Quadro K4100M (4GB)\n"
                   "RAM: 32 GB DDR3\n"
                   "Hard Drives:\n\n"
                   "    SSD SATA 477 GB\n"
                   "        OS: Arch Linux"
                   "    HDD 500GB\n");
        }
        if (opc_dis == 2)
        {
            printf("\nCelular: Samsung Galaxy A25 5G\n"
                   "CPU: Exynos 1280 octa-core (2.4GHz)\n"
                   "GPU: Mali G68\n"
                   "RAM: 8GB\n"
                   "HD: 256 GB\n"
                   "    OS: Android 16\n");
        }
    }

    printf("\n\nPresiona ENTER para cerrar la aplicacion.");
    getchar();
    getchar();

    return 0;
}
