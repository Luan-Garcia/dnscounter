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
                system("clear");

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

                struct hostent *alvo = gethostbyname(argv[1]);


                if (alvo == NULL) {
                        printf("Ocorreu um erro \n");
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
                        
                        int encontrou_porta_aberta = 0;

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
                                    encontrou_porta_aberta = 1;
                            } else {
                                close(sock);
                                close(conecta);

                            }

                        }

                        if (!encontrou_porta_aberta) {
                            printf("Não há portas abertas. \n");
                        }
                } else {
                        printf("Não realizar portscan.\n");
                }

                int resposta2;
                printf("Você deseja realizar uma consulta whois no endereço IP especificado? (Digite 1 para sim e 2 para não) \n");
                scanf("%i",&resposta2);

                if (resposta2 == 1) {
                        char command[100];
                        sprintf(command, "whois %s", argv[1]);
                        system(command);
                } else {
                        printf("Não realizar consulta whois");
                }
                
                int resposta3;
                printf("Você deseja realizar uma pesquisa dns? (Digite 1 para sim e 2 para não) \n");
                scanf("%i",&resposta3);

                if (resposta3 == 1) {
                        char commandSOA[512];
                        char commandA[512];
                        char commandAAAA[512];
                        char commandns[512];
                        char commandcname[512];
                        char commandmx[512];
                        char commandptr[512];
                        char commandinfo[512];
                        char commandtxt[512];

                        printf("Registro de ínicio: \n");
                        sprintf(commandSOA, "host -t SOA %s", argv[1]);
                        system(commandSOA);
                        printf("Registro IPV4: \n");
                        sprintf(commandA, "host -t A %s", argv[1]);
                        system(commandA);
                        printf("Registro IPV6: \n");
                        sprintf(commandAAAA, "host -t AAAA %s", argv[1]);
                        system(commandAAAA);
                        printf("Registro nameserver: \n");
                        sprintf(commandns, "host -t ns %s", argv[1]);
                        system(commandns);
                        printf("Registro cname: \n");
                        sprintf(commandcname, "host -t cname %s", argv[1]);
                        system(commandcname);
                        printf("Registro MX: \n");
                        sprintf(commandmx, "host -t mx %s", argv[1]);
                        system(commandmx);
                        printf("Registro ptr: \n");
                        sprintf(commandptr, "host -t ptr %s", argv[1]);
                        system(commandptr);
                        printf("Registro hinfo: \n");
                        sprintf(commandinfo, "host -t hinfo %s", argv[1]);
                        system(commandinfo);
                        printf("Registro TXT: \n");
                        sprintf(commandtxt, "host -t txt %s", argv[1]);
                        system(commandtxt);
                } else {
                        printf("Não realizar pesquisa dns. \n");
                }
                
                int resposta4;
                printf("Você deseja realizar uma listagem de todos os hosts? (Digite 1 para sim e 2 para não) \n");
                scanf("%i",&resposta4);
                
                if (resposta4 == 1) {
                    char command1[100];
                    char servidorns[100];
                    int result;

                    printf("Insira o nameserver do serviço que você deseja listar os hosts:\n");
                    scanf("%99s", servidorns);

                    do {
                        sprintf(command1, "host -l %s %s", argv[1], servidorns);
                        result = system(command1);

                        if (result == 0) {
                                          printf("A listagem de hosts falhou. O servidor DNS não permite transferências de zona.\n");
                                          printf("Tentando novamente...\n");
                        }
                    } while (result == 5);
                  } else {
                          printf("Não realizar uma listagem de hosts.\n");
                  }

                if (resposta4 == 1) {
                        char command1[100];
                        char servidorns[100];

                        printf("Insira o nameserver do serviço que você deseja listar os hosst: \n");
                        scanf("%99s", servidorns);
                        sprintf(command1, "host -l %s %s", argv[1], servidorns);
                        int result = system(command1);
                        printf("\n");
                        if (result == 5) {
                                char command2[100];
                                char servidorns2[100];
                                printf("A listagem de hosts falhou. O servidor DNS não permite transferências de zona.\n");
                                printf("Insira o segundo nameserver:\n");
                                scanf("%99s", servidorns2);
                                sprintf(command2, "host -l %s %s", argv[1], servidorns2);
                                system(command2);
                                printf("\n");
                        } else {
                                printf("Listagem de hosts bem sucedida! \n");
                        }

                 } else {
                         printf("Não realizar uma listagem de hosts.\n");
                 }

        }

        return 0;
}
