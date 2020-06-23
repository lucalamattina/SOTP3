#include "client.h"

int main(int argc, char const *argv[])
{
    int sock = 0, index;
    struct sockaddr_in serv_addr;
    char buffer[BUFF_SIZE] = {0};
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("\n Socket creation error \n");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr("127.0.0.1"); 
    serv_addr.sin_port = htons(PORT);



    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        printf("\nConnection Failed \n");
        return -1;
    }

    while(1){
        memset(buffer, 0, BUFF_SIZE);
        index = 0;
        while ((buffer[index++] = getchar()) != '\n' && index < BUFF_SIZE);
        write(sock, buffer, sizeof(buffer));
    }

    return 0;
}
