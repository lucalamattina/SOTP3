#include "challenges.h"
#include <stdio.h>

challenge challenges[CHALLENGE_COUNT] = {
{"------------- DESAFIO -------------\n"
"Bienvenidos al TP3 y felicitaciones, ya resolvieron el primer acertijo.\n\nEn este TP deberán finalizar el juego que ya comenzaron resolviendo los desafíos de cada nivel.\n"
"Además tendrán que investigar otras preguntas para responder durante la defensa.\n"
"El desafío final consiste en crear un programa que se comporte igual que yo, es decir, que provea los mismos desafíos y que sea necesario hacer lo mismo para resolverlos. No basta con esperar la respuesta.\n"
"Además, deberán implementar otro programa para comunicarse conmigo.\n\n"
"Deberán estar atentos a los easter eggs.\n\n"
"Para verificar que sus respuestas tienen el formato correcto respondan a este desafío con la palabra 'entendido\\n'\n\n\n",
"----- PREGUNTA PARA INVESTIGAR -----\n¿Cómo descubrieron el protocolo, la dirección y el puerto para conectarse?\n\n",
"entendido\n",
NULL},
{"------------- DESAFIO -------------\n"
"HASHTAG left up up left down right down left ASTERISK\n\n\n",
"----- PREGUNTA PARA INVESTIGAR -----\n"
"¿Qué diferencias hay entre TCP y UDP y en qué casos conviene usar cada uno?\n\n",
"0854780\n",
NULL},
{"------------- DESAFIO -------------\n"
"https://voca.ro/hcmH7cqyqTg\n\n\n",
"----- PREGUNTA PARA INVESTIGAR -----\n"
"¿El puerto que usaron para conectarse al server es el mismo que usan para mandar las respuestas? ¿Por qué?\n",
"martin luther king\n",
NULL},
{"------------- DESAFIO -------------\n"
"EBADF...\n\n"
"write: Bad file descriptor\n\n\n",
"----- PREGUNTA PARA INVESTIGAR -----\n"
"¿Qué útil abstracción es utilizada para comunicarse con sockets? ¿se puede utilizar read(2) y write(2) para operar?\n\n",
"es_go_lo_dro_bo\n",
badFD},
{"------------- DESAFIO -------------\n"
"respuesta = strings:95\n\n\n",  //REVISAR SI SIGUE SIENDO ESA LINEA!!!!!!!!!!!!!!!
"----- PREGUNTA PARA INVESTIGAR -----\n"
"¿Cómo garantiza TCP que los paquetes llegan en orden y no se pierden?\n\n",
"too_easy\n",
NULL},
{"------------- DESAFIO -------------\n"
".data .bss .comment ? .symtab .strtab .shstrtab\n\n\n",
"----- PREGUNTA PARA INVESTIGAR -----\n"
"Un servidor suele crear un nuevo proceso o thread para atender las conexiones entrantes. ¿Qué conviene más?\n\n",
".RUN_ME\n",
NULL},
{"------------- DESAFIO -------------\n"
"mixed fds\n\n\n", //VER SI HACE FALTA ALGO PARA QUE IMPRIMA EL TEXTO BASURA
"----- PREGUNTA PARA INVESTIGAR -----\n"
"¿Cómo se puede implementar un servidor que atienda muchas conexiones sin usar procesos ni threads?\n\n",
"in_de_ter_mi_na_do\n",
mixedFDS},
{"------------- DESAFIO -------------\n"
"Logo\n\n"
"___________________________________________(###############/___________________________________________\n"
"____________________________________###.........................###____________________________________\n"
"________________________________##...................................##________________________________\n"
"____________________________##...........................................#&____________________________\n"
"__________________________#.................................................#__________________________\n"
"_______________________&#..........................................########...#/_______________________\n"
"______________________#................................#################....##..#______________________\n"
"____________________#..........................###############.........#########..#____________________\n"
"___________________#......................###..##################################&.#___________________\n"
"__________________#....................##....######################################.#__________________\n"
"_________________#...................##...####################..&##################&.#_________________\n"
"________________#.................##...############################&..##############.&#________________\n"
"________________#.............&#######################################..#############.#________________\n"
"_______________*#.........&#############################################.############.#________________\n"
"_______________##......#################################################..###########.#(_______________\n"
"_______________/#....####################...........#####################.###########.#._______________\n"
"________________#.&#################..................##################..###########.#________________\n"
"________________#....#############....................##################.&###########.#________________\n"
"_________________##...#########.......( ͡° ͜ʖ ͡°).........################..........####.#________________\n"
"_________________.#....#######........................##############&.............#.#__________________\n"
"___________________#......####&......................###########...................#___________________\n"
"____________________##......####....................########......................#____________________\n"
"_____________________###.......###.................#######.....................###_____________________\n"
"_______________________##........................#########.....#..............##_______________________\n"
"_________________________##............&##&&##################..............##_________________________\n"
"____________________________##..............################.............##____________________________\n"
"_______________________________##...........#..##########.............##_______________________________\n"
"___________________________________.##...........................##/___________________________________\n"
"__________________________________________######&&...&#######__________________________________________\n\n\n",
"----- PREGUNTA PARA INVESTIGAR -----\n"
"¿Qué aplicaciones se pueden utilizar para ver el tráfico por la red?\n\n",
"thunder thunder thunder thundercats\n",
NULL},
{"------------- DESAFIO -------------\n"
"Tango Hotel India Sierra India Sierra Alfa Whiskey Echo Sierra Oscar Mike Echo\n\n\n",
"----- PREGUNTA PARA INVESTIGAR -----\n"
"sockets es un mecanismo de IPC. ¿Qué es más eficiente entre sockets y pipes?\n\n",
"this is awesome\n",
NULL},
{"------------- DESAFIO -------------\n"
"quine\n\n\n",
"----- PREGUNTA PARA INVESTIGAR -----\n"
"¿Cuáles son las características del protocolo SCTP?\n\n",
"chin_chu_lan_cha\n",
quine},
{"------------- DESAFIO -------------\n"
"b gdbme y encontrá el valor mágico\n\n\n",
"----- PREGUNTA PARA INVESTIGAR -----\n"
"¿Qué es un RFC?\n\n",
"gdb_manda\n",
gdbme},
{"------------- DESAFIO -------------\n"
"Este tp esta aprobado?\n\n\n",
"La respuesta los sorprendera (es 'si')\n",
"si\n",
NULL}
};

void printChallenge(int index){
  printf("%s", challenges[index].question);
  if(challenges[index].aux!=NULL){
    challenges[index].aux();
  }
  printf("%s", challenges[index].investigate);
}

char * getAnswer(int index){
  return challenges[index].answer;
}

void badFD(){
  char * aux = "la respuesta es es_go_lo_dro_bo";
  write(13,aux,strlen(aux));
}

static inline unsigned myrandom() {
   long l;
   do { l = random(); } while (l>=(RAND_MAX/84)*84);
   return (unsigned)(l % 84);
}

void mixedFDS(){
  char aux[] = "la respuesta es in_de_ter_mi_na_do";
  time_t t;
  srand((unsigned) time(&t));
  int j = 0;
  for(int i=0; j<34; i++){
    if((rand() % 50) < 35){
    fprintf(stderr, "%c", "ABCDEFGHI<JKLMNOPQRST UVWXYZ12345>67890´¨[]{}!#$%&/()=?'¡'abcdefghijklmnopqrstuvwxyz"[myrandom () % 84]);
    }
    else{
      write(1, aux+j, 1);
      j++;
    }
  }
  printf("\n\n");
}

void quine(){
  if(!system("gcc quine.c -o quine")){
    printf("¡Genial!, ya lograron meter un programa en quine.c, veamos si hace lo que corresponde.\n");
    if(!system("./quine | diff - quine.c")){
      printf("La respuesta es chin_chu_lan_cha\n");
    }
    else{
      printf("diff encontró diferencias.\n");
    }
  }
}

void gdbme(){
  int truee = 1;
  if(truee == 1){
    printf("ENTER para reintentar.\n");
  }
  else{
    char * respuesta = "La respuesta es gdb_manda";
    printf("%s\n", respuesta);
  }
  return;
}
