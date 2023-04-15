#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

        if (argc <= 1){
            printf(" ▄▄▄▄▄▄▄▄▄▄    ▄▄        ▄   ▄▄▄▄▄▄▄▄▄▄▄   ▄▄▄▄▄▄▄▄▄▄▄   ▄▄▄▄▄▄▄▄▄▄▄   ▄         ▄   ▄▄        ▄   ▄▄▄▄▄▄▄▄▄▄▄   ▄▄▄▄▄▄▄▄▄▄▄   ▄▄▄▄▄▄▄▄▄▄▄ \n");
            printf("▐░░░░░░░░░░▌  ▐░░▌      ▐░▌ ▐░░░░░░░░░░░▌ ▐░░░░░░░░░░░▌ ▐░░░░░░░░░░░▌ ▐░▌       ▐░▌ ▐░░▌      ▐░▌ ▐░░░░░░░░░░░▌ ▐░░░░░░░░░░░▌ ▐░░░░░░░░░░░▌\n");
            printf("▐ █▀▀▀▀▀▀▀█░▌ ▐░▌░▌     ▐░▌ ▐░█▀▀▀▀▀▀▀▀▀  ▐░█▀▀▀▀▀▀▀▀▀  ▐░█▀▀▀▀▀▀▀█░▌ ▐░▌       ▐░▌ ▐░▌░▌     ▐░▌  ▀▀▀▀█░█▀▀▀▀  ▐░█▀▀▀▀▀▀▀▀▀  ▐░█▀▀▀▀▀▀▀█░▌\n");
            printf("▐░▌       ▐░▌ ▐░▌▐░▌    ▐░▌ ▐░▌           ▐░▌           ▐░▌       ▐░▌ ▐░▌       ▐░▌ ▐░▌▐░▌    ▐░▌      ▐░▌      ▐░▌           ▐░▌       ▐░▌\n");
            printf("▐░▌       ▐░▌ ▐░▌ ▐░▌   ▐░▌ ▐░█▄▄▄▄▄▄▄▄▄  ▐░▌           ▐░▌       ▐░▌ ▐░▌       ▐░▌ ▐░▌ ▐░▌   ▐░▌      ▐░▌      ▐░█▄▄▄▄▄▄▄▄▄  ▐░█▄▄▄▄▄▄▄█░▌\n");
            printf("▐░▌       ▐░▌ ▐░▌  ▐░▌  ▐░▌ ▐░░░░░░░░░░░▌ ▐░▌           ▐░▌       ▐░▌ ▐░▌       ▐░▌ ▐░▌  ▐░▌  ▐░▌      ▐░▌      ▐░░░░░░░░░░░▌ ▐░░░░░░░░░░░▌\n");
            printf("▐░▌       ▐░▌ ▐░▌   ▐░▌ ▐░▌  ▀▀▀▀▀▀▀▀▀█░▌ ▐░▌           ▐░▌       ▐░▌ ▐░▌       ▐░▌ ▐░▌   ▐░▌ ▐░       ▐░▌      ▐░█▀▀▀▀▀▀▀▀▀  ▐░█▀▀▀▀█░█▀▀ \n");
            printf("▐░▌       ▐░▌ ▐░▌    ▐░▌▐░▌           ▐░▌ ▐░▌           ▐░▌       ▐░▌ ▐░▌       ▐░▌ ▐░▌    ▐░▌▐░▌      ▐░▌      ▐░▌           ▐░▌     ▐░▌  \n");
            printf("▐░█▄▄▄▄▄▄▄█░▌ ▐░▌     ▐░▐░▌  ▄▄▄▄▄▄▄▄▄█░▌ ▐░█▄▄▄▄▄▄▄▄▄  ▐░█▄▄▄▄▄▄▄█░▌ ▐░█▄▄▄▄▄▄▄█░▌ ▐░▌     ▐░▐░▌      ▐░▌      ▐░█▄▄▄▄▄▄▄▄▄  ▐░▌      ▐░▌ \n");
            printf("▐░░░░░░░░░░▌  ▐░▌      ▐░░▌ ▐░░░░░░░░░░░▌ ▐░░░░░░░░░░░▌ ▐░░░░░░░░░░░▌ ▐░░░░░░░░░░░▌ ▐░▌      ▐░░▌      ▐░▌      ▐░░░░░░░░░░░▌ ▐░▌       ▐░▌\n");
            printf(" ▀▀▀▀▀▀▀▀▀▀    ▀        ▀▀   ▀▀▀▀▀▀▀▀▀▀▀   ▀▀▀▀▀▀▀▀▀▀▀   ▀▀▀▀▀▀▀▀▀▀▀   ▀▀▀▀▀▀▀▀▀▀▀   ▀        ▀▀        ▀        ▀▀▀▀▀▀▀▀▀▀▀   ▀         ▀ \n");


                 printf("Modo de uso: ./dnscounter sitealvo.com\n");
                return 0;
        } else{
                struct hostent *alvo = gethostbyname(argv[1]);


                if (alvo == NULL) {
                        printf("Ocorreu um erro");
                } else {
                    printf("o ip do site é: %s\n",inet_ntoa(*((struct in_addr *)alvo->h_addr)));
                }
                int resposta;
                printf("Você deseja realizar um portscan no endereço ip?(Digite 1 para sim e 2 para não )\n");
                scanf("%i",&resposta);

                if (resposta == 1) {
                        int sock;
                        int conecta;
                        int porta;
                        int inicio = 0;
                        int final = 65535;
                        char *destino;
                        destino = argv[1];

                        printf("Realizando o portscan... \n");

                        struct sockaddr_in alv0;

                        for(porta=inicio;porta<final;porta++){

                        sock = socket(AF_INET, SOCK_STREAM,0);
                        alv0.sin_family = AF_INET;
                        alv0.sin_port = htons(porta);
                        alv0.sin_addr.s_addr = inet_addr(destino);

                        conecta = connect(sock, (struct sockaddr *)&alv0, sizeof alv0);

                        if (conecta == 0) {
                                printf("Porta %d - status [ABERTO] \n",porta);
                                close(sock);
                                close(conecta);
                        } else {
                                close(sock);
                                close(conecta);

                        }
                        }

                } else {
                        printf("Não realizar portscan.");
                }
        }

        return 0;
}
