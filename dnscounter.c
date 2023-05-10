#include <stdio.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdlib.h>
#include <arpa/inet.h>

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

                struct in_addr addr;
                int is_ip = inet_pton(AF_INET, argv[1], &addr);
                if (is_ip == 1) {
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

                } else {
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
                                char command4[100];
                                sprintf(command4, "for server in $(host -t ns %s |cut -d ' ' -f4);do host -l -a %s $server;done ",argv[1],argv[1]);
                                system(command4);
                                printf("\n");
                        } else {
                                printf("Não realizar uma listagem de hosts.\n");
                        }

                        int resposta5;
                        printf("Você deseja realizar um brute force dns? (Digite 1 para sim e 2 para não) \n");
                        printf("É provável que apareção resultados já mostrados antes na listagem de hosts \n");
                        scanf("%i",&resposta5);

                        if (resposta5 ==1) {
                                char command5[100];
                                sprintf(command5, "for palavra in $(cat lista.txt); do if host $palavra.%s | grep -q 'has address'; then echo $palavra.%s é um domínio válido; f>
                                system(command5);
                                printf("\n");
                        } else {
                                printf("Não realizar brute force dns");
                        }
                                        
                        int resposta6;
                        printf("Você deseja realizar uma consulta reversa? (Digite 1 para sim e 2 para não) \n");
                        scanf("%i",&resposta6);

                        if (resposta6 == 1) {
                                char command6[100];
                                char command8[100];
                                char command9[100];
                                char resultado[100];
                                char ip_address[16];
                                char output[1024];
                                int a, b, c, d, e, f, g, h;
                                char ip[16];
                                char ip3[16];

                                sprintf(command8, "host -t A %s | awk '{print $NF}'", argv[1]);
                                FILE *fp = popen(command8, "r");
                                fgets(ip_address, sizeof(ip_address), fp);
                                pclose(fp);

                                sprintf(command8, "whois -B %s", ip_address);
                                fp = popen(command8, "r");
                                while (fgets(output, sizeof(output), fp) != NULL) {
                                    printf("%s", output);
                                }
                                pclose(fp);

                                printf("Digite o primeiro endereço ip após o inetnum/netrange: ");
                                scanf("%s", ip);

                                sscanf(ip, "%d.%d.%d.%d", &a, &b, &c, &d);

                                printf("Digite o segundo endereço ip após o inetnum/netrange: ");
                                scanf("%s", ip3);

                                sscanf(ip3, "%d.%d.%d.%d", &e, &f, &g, &h);

                                sprintf(resultado, "%d.%d.%d", a, b, c);

                                printf("Realizando a consulta reversa... \n");

                                sprintf(command9, "for ip in $(seq %i %i); do host -t ptr %s.$ip; done", d, h, resultado);
                                system(command9);
                                printf("\n");

                        } else {
                                printf("Não realizar consulta reversa. \n");
                        }
                                        
                        int resposta7;
                        printf("Você deseja ver se o alvo é vulnerável a mail spoofing? (Digite 1 para sim e 2 para não) \n");
                        scanf("%i", &resposta7);
                                        
                        if (resposta7 == 1) {
                                char command10[100];
                                sprintf(command10, "host -t txt %s", argv[1]);
                                system(command10);
                        } else { 
                                printf("Não verificar vulnerabilidade. \n");
                        }

                }

        }

        return 0;
}
